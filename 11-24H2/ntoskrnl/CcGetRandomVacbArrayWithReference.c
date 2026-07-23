/*
 * XREFs of CcGetRandomVacbArrayWithReference @ 0x1403EE7EC
 * Callers:
 *     CcUnmapInactiveViewsInternal @ 0x1403EE88C (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402CB820 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140357D70 (KeAcquireQueuedSpinLock.c)
 *     CcReferenceVacbArray @ 0x1403EEEC0 (CcReferenceVacbArray.c)
 *     CcRecalculateVacbArrayHighwaterMark @ 0x1403EEF14 (CcRecalculateVacbArrayHighwaterMark.c)
 *     RtlRandom @ 0x140A46340 (RtlRandom.c)
 */

__int64 CcGetRandomVacbArrayWithReference()
{
  __int64 v0; // rbx
  KIRQL v1; // di
  __int64 v2; // rax
  __int64 v3; // rbx

  while ( 1 )
  {
    do
      v0 = RtlRandom(&CcRandomSeed) % (CcVacbArraysHighestUsedIndex + 1);
    while ( !*(_QWORD *)(CcVacbArrays + 8 * v0) );
    v1 = KeAcquireQueuedSpinLock(4uLL);
    v2 = CcReferenceVacbArray((unsigned int)v0);
    v3 = v2;
    if ( v2 )
      break;
    KeReleaseQueuedSpinLock(4uLL, v1);
  }
  CcRecalculateVacbArrayHighwaterMark(v2);
  KeReleaseQueuedSpinLock(4uLL, v1);
  return v3;
}
