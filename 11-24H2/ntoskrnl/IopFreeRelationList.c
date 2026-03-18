/*
 * XREFs of IopFreeRelationList @ 0x140A0CB00
 * Callers:
 *     PnpProcessCompletedEject @ 0x140723BF0 (PnpProcessCompletedEject.c)
 *     PipRemoveDevicesInRelationList @ 0x1409C6D70 (PipRemoveDevicesInRelationList.c)
 *     IopAllocateRelationList @ 0x140A0D7B8 (IopAllocateRelationList.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140A0DB78 (PnpProcessQueryRemoveAndEject.c)
 *     PnpBuildRemovalRelationList @ 0x140A0E2D8 (PnpBuildRemovalRelationList.c)
 *     PnpInvalidateRelationsInList @ 0x140A0E800 (PnpInvalidateRelationsInList.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140A0E9B4 (PnpQueuePendingSurpriseRemoval.c)
 * Callees:
 *     PipFreeDeviceObjectList @ 0x140A0CAD8 (PipFreeDeviceObjectList.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall IopFreeRelationList(_QWORD *P)
{
  _DWORD *v2; // rcx

  if ( P )
  {
    v2 = (_DWORD *)*P;
    if ( v2 )
    {
      PipFreeDeviceObjectList(v2);
      *P = 0LL;
    }
    ExFreePoolWithTag(P, 0x54706E50u);
  }
}
