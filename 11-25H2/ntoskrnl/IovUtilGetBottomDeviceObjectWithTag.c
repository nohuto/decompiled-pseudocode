/*
 * XREFs of IovUtilGetBottomDeviceObjectWithTag @ 0x140B82A50
 * Callers:
 *     IovpCallDriver1 @ 0x140B7CCD4 (IovpCallDriver1.c)
 *     IovUtilIsWdmStack @ 0x140B82C98 (IovUtilIsWdmStack.c)
 *     VfPnpVerifyIrpStackUpward @ 0x140B95910 (VfPnpVerifyIrpStackUpward.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x140B95BF0 (ViPnpVerifyMinorWasProcessedProperly.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14028B980 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x140301270 (KeAcquireQueuedSpinLock.c)
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
