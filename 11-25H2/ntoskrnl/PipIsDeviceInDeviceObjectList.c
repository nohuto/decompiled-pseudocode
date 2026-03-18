/*
 * XREFs of PipIsDeviceInDeviceObjectList @ 0x1408319F0
 * Callers:
 *     PnpProcessRelation @ 0x14082E994 (PnpProcessRelation.c)
 *     IopCheckIfMergeRequired @ 0x140830E20 (IopCheckIfMergeRequired.c)
 *     IopIsDescendantNode @ 0x140831640 (IopIsDescendantNode.c)
 *     PipVisitDeviceObjectListEntry @ 0x140831E4C (PipVisitDeviceObjectListEntry.c)
 *     IopSortRelationListForRemove @ 0x140832318 (IopSortRelationListForRemove.c)
 * Callees:
 *     PipDeviceObjectListIndexOf @ 0x140831A14 (PipDeviceObjectListIndexOf.c)
 */

bool __fastcall PipIsDeviceInDeviceObjectList(unsigned int *a1, __int64 a2, __int64 a3)
{
  return (unsigned int)PipDeviceObjectListIndexOf(a1, a2, *a1, a3) != -1;
}
