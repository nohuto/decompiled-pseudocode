/*
 * XREFs of MiLockPageAndSetDirty @ 0x14023A2A0
 * Callers:
 *     MiIssueHardFault @ 0x1402085EC (MiIssueHardFault.c)
 *     MiMakeCombineCandidateClean @ 0x140239E58 (MiMakeCombineCandidateClean.c)
 *     MiMakePteClean @ 0x140239F0C (MiMakePteClean.c)
 *     MiRevertValidPte @ 0x140380260 (MiRevertValidPte.c)
 *     NtLockVirtualMemory @ 0x140388E00 (NtLockVirtualMemory.c)
 *     MiCopyToUserVa @ 0x1403DDE48 (MiCopyToUserVa.c)
 *     MiValidFault @ 0x1404EECA0 (MiValidFault.c)
 *     MiSetPageProtection @ 0x14066375C (MiSetPageProtection.c)
 *     MiInitializeBootShadowStackPage @ 0x140C45E4C (MiInitializeBootShadowStackPage.c)
 * Callees:
 *     MiSafeLockPage @ 0x140231E30 (MiSafeLockPage.c)
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiClearPageFileReservation @ 0x1402CC084 (MiClearPageFileReservation.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140388D44 (MiCanPfnOriginalPteBeLost.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
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
      MiClearPageFileReservation(&v11);
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
    v9 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiReleasePageFileInfo(v9, v3, 1);
  }
  if ( v5 != 17 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
    __writecr8(v5);
  }
}
