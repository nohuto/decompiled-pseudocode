/*
 * XREFs of IopFreeRelationList @ 0x14082F144
 * Callers:
 *     PnpProcessCompletedEject @ 0x140717AF0 (PnpProcessCompletedEject.c)
 *     PipRemoveDevicesInRelationList @ 0x14082F020 (PipRemoveDevicesInRelationList.c)
 *     IopAllocateRelationList @ 0x14082F3B0 (IopAllocateRelationList.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14082FB18 (PnpProcessQueryRemoveAndEject.c)
 *     PnpBuildRemovalRelationList @ 0x140830278 (PnpBuildRemovalRelationList.c)
 *     PnpInvalidateRelationsInList @ 0x1408307A0 (PnpInvalidateRelationsInList.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140830954 (PnpQueuePendingSurpriseRemoval.c)
 * Callees:
 *     PipFreeDeviceObjectList @ 0x14082F11C (PipFreeDeviceObjectList.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall IopFreeRelationList(void **P)
{
  void *v2; // rcx

  if ( P )
  {
    v2 = *P;
    if ( v2 )
    {
      PipFreeDeviceObjectList(v2);
      *P = 0LL;
    }
    ExFreePoolWithTag(P, 0x54706E50u);
  }
}
