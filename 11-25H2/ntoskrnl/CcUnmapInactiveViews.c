/*
 * XREFs of CcUnmapInactiveViews @ 0x140459BE4
 * Callers:
 *     MiObtainSystemCacheView @ 0x1402C0010 (MiObtainSystemCacheView.c)
 *     MiSegmentDereferenceWorker @ 0x140459230 (MiSegmentDereferenceWorker.c)
 *     MiRemoveUnusedSegments @ 0x140459644 (MiRemoveUnusedSegments.c)
 * Callees:
 *     CcUnmapInactiveViewsInternal @ 0x1403B5BF0 (CcUnmapInactiveViewsInternal.c)
 */

__int64 __fastcall CcUnmapInactiveViews(__int64 a1, unsigned int a2, char a3, _QWORD *a4)
{
  __int64 v4; // rcx

  if ( CcInitializationComplete && CcNumberOfMappedVacbs && (v4 = *(_QWORD *)(a1 + 8)) != 0 )
    return CcUnmapInactiveViewsInternal(v4, a2, a3, a4);
  else
    return 0LL;
}
