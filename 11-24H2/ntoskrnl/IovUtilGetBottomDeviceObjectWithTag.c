/*
 * XREFs of IovUtilGetBottomDeviceObjectWithTag @ 0x140B92A30
 * Callers:
 *     IovpCallDriver1 @ 0x140B8CCB4 (IovpCallDriver1.c)
 *     IovUtilIsWdmStack @ 0x140B92C78 (IovUtilIsWdmStack.c)
 *     VfPnpVerifyIrpStackUpward @ 0x140BA58F0 (VfPnpVerifyIrpStackUpward.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x140BA5BD0 (ViPnpVerifyMinorWasProcessedProperly.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402D6AF0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140322C90 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 */

PVOID __fastcall IovUtilGetBottomDeviceObjectWithTag(_QWORD *Object)
{
  KIRQL v2; // si
  PVOID v3; // rdi

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  do
  {
    v3 = Object;
    Object = *(_QWORD **)(Object[39] + 48LL);
  }
  while ( Object );
  ObfReferenceObjectWithTag(v3, 0x49667256u);
  KeReleaseQueuedSpinLock(0xAuLL, v2);
  return v3;
}
