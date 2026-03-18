/*
 * XREFs of MiSafeLockPageAtDpc @ 0x140220D38
 * Callers:
 *     MiPfnsWorthTrying @ 0x14021F790 (MiPfnsWorthTrying.c)
 *     MiProcessLargeCoalesceBitmapCandidates @ 0x14034F7E0 (MiProcessLargeCoalesceBitmapCandidates.c)
 *     MiCoalesceFreeLargePages @ 0x14034FBA4 (MiCoalesceFreeLargePages.c)
 *     MiJoinHugeContext @ 0x14041C95C (MiJoinHugeContext.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x1404337D0 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1404A8AC8 (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiPurgeZeroListHead @ 0x1404C5F04 (MiPurgeZeroListHead.c)
 *     MiDereferenceHugeContext @ 0x1404CFC80 (MiDereferenceHugeContext.c)
 *     MiInitializeNewUltraHugeContext @ 0x1406841C4 (MiInitializeNewUltraHugeContext.c)
 * Callees:
 *     MiIsDecayPfn @ 0x140241130 (MiIsDecayPfn.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

char __fastcall MiSafeLockPageAtDpc(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned int v4; // edi

  if ( a1 > qword_140E2D9A0 && !(unsigned int)MiIsDecayPfn(a1, a2, a3) )
    return 17;
  v3 = 48 * a1 - 0x220000000000LL;
  if ( (*(_QWORD *)(v3 + 40) & 0x40000000000000LL) == 0 )
    return 17;
  v4 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v4 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
      {
        HvlNotifyLongSpinWait(v4);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v3 + 24) < 0 );
  }
  return 2;
}
