/*
 * XREFs of MiLockPageAndSetDirty @ 0x140249DD0
 * Callers:
 *     MiMakePteClean @ 0x140200C78 (MiMakePteClean.c)
 *     MiRevertValidPte @ 0x140212130 (MiRevertValidPte.c)
 *     MiMakeCombineCandidateClean @ 0x140346988 (MiMakeCombineCandidateClean.c)
 *     MiIssueHardFault @ 0x140350280 (MiIssueHardFault.c)
 *     MiCopyToUserVa @ 0x1403C9340 (MiCopyToUserVa.c)
 *     NtLockVirtualMemory @ 0x1403DBC30 (NtLockVirtualMemory.c)
 *     MiValidFault @ 0x1404F0710 (MiValidFault.c)
 *     MiSetPageProtection @ 0x14067044C (MiSetPageProtection.c)
 *     MiInitializeBootShadowStackPage @ 0x140C592BC (MiInitializeBootShadowStackPage.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiCanPfnOriginalPteBeLost @ 0x1402EE318 (MiCanPfnOriginalPteBeLost.c)
 *     MiClearPageFileReservation @ 0x14030714C (MiClearPageFileReservation.c)
 *     MiSafeLockPage @ 0x140334630 (MiSafeLockPage.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __fastcall MiLockPageAndSetDirty(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  unsigned __int8 v6; // bp
  unsigned int v7; // esi
  unsigned __int8 v8; // cl
  char v9; // r11
  __int64 v10; // rcx
  int v11; // [rsp+48h] [rbp+10h]
  unsigned __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0LL;
  if ( (_DWORD)a2 )
  {
    v6 = 17;
    v7 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v7 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3, a4) )
        {
          HvlNotifyLongSpinWait(v7);
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
    v6 = MiSafeLockPage(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4));
    if ( v6 == 17 )
      return;
  }
  v8 = *(_BYTE *)(a1 + 34);
  if ( (v8 & 0x10) != 0 )
    goto LABEL_5;
  if ( (!_bittest64((const signed __int64 *)(a1 + 16), 0xAu) & (unsigned __int8)~(v8 >> 3)) != 0 )
  {
    v12 = *(_QWORD *)(a1 + 16);
    if ( (v12 & 4) != 0 )
    {
      *(_QWORD *)(a1 + 16) &= ~4uLL;
      MiClearPageFileReservation(&v12);
      v4 = v12;
    }
    else
    {
      v12 = 0LL;
    }
  }
  v11 = *(_DWORD *)(a1 + 32);
  v9 = BYTE2(v11);
  if ( (v11 & 0x80000) != 0
    && (unsigned int)MiCanPfnOriginalPteBeLost(a1)
    && (((*(_QWORD *)(a1 + 16) & 4) != 0) & (unsigned __int8)~(*(_BYTE *)(a1 + 34) >> 4)) != 0 )
  {
    *(_QWORD *)(a1 + 16) &= ~4uLL;
  }
  BYTE2(v11) = v9 | 0x10;
  *(_DWORD *)(a1 + 32) = v11;
  if ( !v4 )
  {
LABEL_5:
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    v10 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiReleasePageFileInfo(v10, v4, 1LL, a4);
  }
  if ( v6 != 17 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
    __writecr8(v6);
  }
}
