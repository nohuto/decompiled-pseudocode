/*
 * XREFs of MiLockPageAndSetDirty @ 0x14021D080
 * Callers:
 *     MiRevertValidPte @ 0x140237FA0 (MiRevertValidPte.c)
 *     MiMakeCombineCandidateClean @ 0x1402FA1D0 (MiMakeCombineCandidateClean.c)
 *     MiIssueHardFault @ 0x140397B2C (MiIssueHardFault.c)
 *     MiCopyToUserVa @ 0x1403E2DBC (MiCopyToUserVa.c)
 *     NtLockVirtualMemory @ 0x1403FD910 (NtLockVirtualMemory.c)
 *     MiMakePteClean @ 0x1404326A0 (MiMakePteClean.c)
 *     MiValidFault @ 0x1404F2C70 (MiValidFault.c)
 *     MiSetPageProtection @ 0x14066F27C (MiSetPageProtection.c)
 *     MiInitializeBootShadowStackPage @ 0x140C5712C (MiInitializeBootShadowStackPage.c)
 * Callees:
 *     MiClearPageFileReservation @ 0x140213DEC (MiClearPageFileReservation.c)
 *     MiSafeLockPage @ 0x140216290 (MiSafeLockPage.c)
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiCanPfnOriginalPteBeLost @ 0x14039E1D0 (MiCanPfnOriginalPteBeLost.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __fastcall MiLockPageAndSetDirty(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int8 v5; // bp
  unsigned int v6; // esi
  unsigned __int8 v7; // cl
  char v8; // r11
  __int64 v9; // rcx
  int v10; // [rsp+48h] [rbp+10h]
  unsigned __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0LL;
  if ( (_DWORD)a2 )
  {
    v5 = 17;
    v6 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v6 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
        {
          HvlNotifyLongSpinWait(v6);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(a1 + 24) < 0 );
    }
  }
  else
  {
    v5 = MiSafeLockPage(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4), a2, a3);
    if ( v5 == 17 )
      return;
  }
  v7 = *(_BYTE *)(a1 + 34);
  if ( (v7 & 0x10) != 0 )
    goto LABEL_5;
  if ( (!_bittest64((const signed __int64 *)(a1 + 16), 0xAu) & (unsigned __int8)~(v7 >> 3)) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 16);
    if ( (v11 & 4) != 0 )
    {
      *(_QWORD *)(a1 + 16) &= ~4uLL;
      MiClearPageFileReservation((__int64 *)&v11);
      v3 = v11;
    }
    else
    {
      v11 = 0LL;
    }
  }
  v10 = *(_DWORD *)(a1 + 32);
  v8 = BYTE2(v10);
  if ( (v10 & 0x80000) != 0
    && (unsigned int)MiCanPfnOriginalPteBeLost(a1)
    && (((*(_QWORD *)(a1 + 16) & 4) != 0) & (unsigned __int8)~(*(_BYTE *)(a1 + 34) >> 4)) != 0 )
  {
    *(_QWORD *)(a1 + 16) &= ~4uLL;
  }
  BYTE2(v10) = v8 | 0x10;
  *(_DWORD *)(a1 + 32) = v10;
  if ( !v3 )
  {
LABEL_5:
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    v9 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiReleasePageFileInfo(v9, v3, 1LL);
  }
  if ( v5 != 17 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
    __writecr8(v5);
  }
}
