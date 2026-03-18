/*
 * XREFs of MiSafeLockPageAtDpc @ 0x1403072A0
 * Callers:
 *     MiPfnsWorthTrying @ 0x140305B00 (MiPfnsWorthTrying.c)
 *     MiCoalesceFreeLargePages @ 0x140308844 (MiCoalesceFreeLargePages.c)
 *     MiProcessLargeCoalesceBitmapCandidates @ 0x140309490 (MiProcessLargeCoalesceBitmapCandidates.c)
 *     MiInitializeNewUltraHugeContext @ 0x1403F98CC (MiInitializeNewUltraHugeContext.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x140463848 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiJoinHugeContext @ 0x140487A9C (MiJoinHugeContext.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1404A2E44 (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiPurgeZeroListHead @ 0x1404C6774 (MiPurgeZeroListHead.c)
 *     MiDereferenceHugeContext @ 0x1404CFD8C (MiDereferenceHugeContext.c)
 * Callees:
 *     MiIsDecayPfn @ 0x14022EFD0 (MiIsDecayPfn.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

char __fastcall MiSafeLockPageAtDpc(ULONG_PTR a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi

  if ( a1 > qword_140E2DBE0 && !MiIsDecayPfn(a1) )
    return 17;
  v1 = 48 * a1 - 0x220000000000LL;
  if ( (*(_QWORD *)(v1 + 40) & 0x40000000000000LL) == 0 )
    return 17;
  v2 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v2 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v2);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v1 + 24) < 0 );
  }
  return 2;
}
