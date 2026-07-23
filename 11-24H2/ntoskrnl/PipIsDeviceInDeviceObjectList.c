/*
 * XREFs of PipIsDeviceInDeviceObjectList @ 0x1409BDEE0
 * Callers:
 *     IopCheckIfMergeRequired @ 0x1409BCFC0 (IopCheckIfMergeRequired.c)
 *     IopIsDescendantNode @ 0x1409BD468 (IopIsDescendantNode.c)
 *     IopSortRelationListForRemove @ 0x1409BDA40 (IopSortRelationListForRemove.c)
 *     PipVisitDeviceObjectListEntry @ 0x1409BDD98 (PipVisitDeviceObjectListEntry.c)
 *     PnpProcessRelation @ 0x140A54854 (PnpProcessRelation.c)
 * Callees:
 *     PipDeviceObjectListIndexOf @ 0x1409BDF04 (PipDeviceObjectListIndexOf.c)
 */

bool __fastcall PipIsDeviceInDeviceObjectList(unsigned int *a1, __int64 a2, __int64 a3)
{
  return (unsigned int)PipDeviceObjectListIndexOf(a1, a2, *a1, a3) != -1;
}
