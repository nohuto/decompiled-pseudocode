/*
 * XREFs of CcUnmapInactiveViews @ 0x1403EE744
 * Callers:
 *     MiObtainSystemCacheView @ 0x140209EE0 (MiObtainSystemCacheView.c)
 *     MiSegmentDereferenceWorker @ 0x1403EDB20 (MiSegmentDereferenceWorker.c)
 *     MiRemoveUnusedSegments @ 0x1403EDF30 (MiRemoveUnusedSegments.c)
 * Callees:
 *     CcUnmapInactiveViewsInternal @ 0x1403EE88C (CcUnmapInactiveViewsInternal.c)
 */

__int64 __fastcall CcUnmapInactiveViews(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx

  if ( CcInitializationComplete && CcNumberOfMappedVacbs && (v3 = *(_QWORD *)(a1 + 8)) != 0 )
    return CcUnmapInactiveViewsInternal(v3, a2, a3);
  else
    return 0LL;
}
