/*
 * XREFs of CcGetRandomVacbArrayWithReference @ 0x1403F86DC
 * Callers:
 *     CcUnmapInactiveViewsInternal @ 0x1403F877C (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402D6AF0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140322C90 (KeReleaseQueuedSpinLock.c)
 *     CcReferenceVacbArray @ 0x1403F8DB0 (CcReferenceVacbArray.c)
 *     CcRecalculateVacbArrayHighwaterMark @ 0x1403F8E04 (CcRecalculateVacbArrayHighwaterMark.c)
 *     RtlRandom @ 0x140A4F590 (RtlRandom.c)
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
