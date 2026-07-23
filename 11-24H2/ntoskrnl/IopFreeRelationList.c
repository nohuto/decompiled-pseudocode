/*
 * XREFs of IopFreeRelationList @ 0x1409BAF04
 * Callers:
 *     PnpProcessCompletedEject @ 0x140721780 (PnpProcessCompletedEject.c)
 *     PipRemoveDevicesInRelationList @ 0x1409BADE0 (PipRemoveDevicesInRelationList.c)
 *     IopAllocateRelationList @ 0x1409BBBBC (IopAllocateRelationList.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1409BBF7C (PnpProcessQueryRemoveAndEject.c)
 *     PnpBuildRemovalRelationList @ 0x1409BC6DC (PnpBuildRemovalRelationList.c)
 *     PnpInvalidateRelationsInList @ 0x1409BCC04 (PnpInvalidateRelationsInList.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1409BCDB8 (PnpQueuePendingSurpriseRemoval.c)
 * Callees:
 *     PipFreeDeviceObjectList @ 0x1409BAEDC (PipFreeDeviceObjectList.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
