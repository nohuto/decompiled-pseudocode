/*
 * XREFs of IovUtilGetLowerDeviceObjectWithTag @ 0x140B82AB4
 * Callers:
 *     IovpCallDriver1 @ 0x140B7CCD4 (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x140B7D2A0 (IovpCallDriver2.c)
 *     VfIoDeleteDevice @ 0x140B8224C (VfIoDeleteDevice.c)
 *     VfPnpVerifyIrpStackUpward @ 0x140B95910 (VfPnpVerifyIrpStackUpward.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14028B980 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x140301270 (KeAcquireQueuedSpinLock.c)
 */

void *__fastcall IovUtilGetLowerDeviceObjectWithTag(__int64 a1)
{
  KIRQL v2; // di
  void *v3; // rbx

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  v3 = *(void **)(*(_QWORD *)(a1 + 312) + 48LL);
  if ( v3 )
    ObfReferenceObjectWithTag(v3, 0x49667256u);
  KeReleaseQueuedSpinLock(0xAuLL, v2);
  return v3;
}
