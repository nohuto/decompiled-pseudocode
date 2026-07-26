/*
 * XREFs of ?ndisDispatchIoWorkItem@@YAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x14004CD60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisDispatchIoWorkItem(PDEVICE_OBJECT DeviceObject, void (__fastcall **Context)(_QWORD))
{
  Context[4](Context[5]);
}
