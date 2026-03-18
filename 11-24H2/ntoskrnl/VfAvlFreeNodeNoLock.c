/*
 * XREFs of VfAvlFreeNodeNoLock @ 0x1406106C8
 * Callers:
 *     VfTargetDriversRemove @ 0x1403F0E5C (VfTargetDriversRemove.c)
 *     ViDevObjRemove @ 0x140B9249C (ViDevObjRemove.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140B92904 (ViRemLockDeleteFirstTreeNode.c)
 *     VfLookasideAdd @ 0x140B9FE44 (VfLookasideAdd.c)
 *     VfLookasideDelete @ 0x140B9FF68 (VfLookasideDelete.c)
 *     VfDeleteResource @ 0x140BA188C (VfDeleteResource.c)
 *     VfTrackResource @ 0x140BA19B0 (VfTrackResource.c)
 *     VfCheckForResource @ 0x140BA71D8 (VfCheckForResource.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14024A9C0 (ExFreeToNPagedLookasideList.c)
 *     VfUtilFreePoolCheckIRQL @ 0x1404BAF00 (VfUtilFreePoolCheckIRQL.c)
 */

void __fastcall VfAvlFreeNodeNoLock(__int64 a1, struct _SLIST_ENTRY *a2)
{
  if ( *(_DWORD *)(a1 + 28) == 1 )
    ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, a2);
  else
    VfUtilFreePoolCheckIRQL(a2);
}
