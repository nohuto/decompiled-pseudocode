/*
 * XREFs of PipIsDeviceInDeviceObjectList @ 0x140A0FAD0
 * Callers:
 *     PnpProcessRelation @ 0x140A0C664 (PnpProcessRelation.c)
 *     IopCheckIfMergeRequired @ 0x140A0EBBC (IopCheckIfMergeRequired.c)
 *     IopIsDescendantNode @ 0x140A0F064 (IopIsDescendantNode.c)
 *     IopSortRelationListForRemove @ 0x140A0F630 (IopSortRelationListForRemove.c)
 *     PipVisitDeviceObjectListEntry @ 0x140A0F988 (PipVisitDeviceObjectListEntry.c)
 * Callees:
 *     PipDeviceObjectListIndexOf @ 0x140A0FAF4 (PipDeviceObjectListIndexOf.c)
 */

bool __fastcall PipIsDeviceInDeviceObjectList(unsigned int *a1, __int64 a2, __int64 a3)
{
  return (unsigned int)PipDeviceObjectListIndexOf(a1, a2, *a1, a3) != -1;
}
