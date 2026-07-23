/*
 * XREFs of VfAvlFreeNodeNoLock @ 0x14060EC88
 * Callers:
 *     VfTargetDriversRemove @ 0x1403E4B7C (VfTargetDriversRemove.c)
 *     ViDevObjRemove @ 0x140B9449C (ViDevObjRemove.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140B94904 (ViRemLockDeleteFirstTreeNode.c)
 *     VfLookasideAdd @ 0x140BA1E44 (VfLookasideAdd.c)
 *     VfLookasideDelete @ 0x140BA1F68 (VfLookasideDelete.c)
 *     VfDeleteResource @ 0x140BA388C (VfDeleteResource.c)
 *     VfTrackResource @ 0x140BA39B0 (VfTrackResource.c)
 *     VfCheckForResource @ 0x140BA91D8 (VfCheckForResource.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1402E4C00 (ExFreeToNPagedLookasideList.c)
 *     VfUtilFreePoolCheckIRQL @ 0x1404B5DA0 (VfUtilFreePoolCheckIRQL.c)
 */

void __fastcall VfAvlFreeNodeNoLock(__int64 a1, _SLIST_ENTRY *a2)
{
  if ( *(_DWORD *)(a1 + 28) == 1 )
    ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, a2);
  else
    VfUtilFreePoolCheckIRQL(a2);
}
