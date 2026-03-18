/*
 * XREFs of CcUnmapInactiveViews @ 0x1403F8634
 * Callers:
 *     MiObtainSystemCacheView @ 0x140241D90 (MiObtainSystemCacheView.c)
 *     MiRemoveUnusedSegments @ 0x1403F734C (MiRemoveUnusedSegments.c)
 *     MiSegmentDereferenceWorker @ 0x1403F7BB0 (MiSegmentDereferenceWorker.c)
 * Callees:
 *     CcUnmapInactiveViewsInternal @ 0x1403F877C (CcUnmapInactiveViewsInternal.c)
 */

__int64 __fastcall CcUnmapInactiveViews(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx

  if ( CcInitializationComplete && CcNumberOfMappedVacbs && (v3 = *(_QWORD *)(a1 + 8)) != 0 )
    return CcUnmapInactiveViewsInternal(v3, a2, a3);
  else
    return 0LL;
}
