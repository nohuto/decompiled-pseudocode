/*
 * XREFs of IovUtilGetLowerDeviceObjectWithTag @ 0x140B92A94
 * Callers:
 *     IovpCallDriver1 @ 0x140B8CCB4 (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x140B8D280 (IovpCallDriver2.c)
 *     VfIoDeleteDevice @ 0x140B9222C (VfIoDeleteDevice.c)
 *     VfPnpVerifyIrpStackUpward @ 0x140BA58F0 (VfPnpVerifyIrpStackUpward.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402D6AF0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140322C90 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
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
