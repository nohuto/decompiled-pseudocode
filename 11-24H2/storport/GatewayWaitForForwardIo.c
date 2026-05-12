/*
 * XREFs of GatewayWaitForForwardIo @ 0x1400A5ED0
 * Callers:
 *     <none>
 * Callees:
 *     GatewayWaitForForwardIoWithTimeout @ 0x1400A5F18 (GatewayWaitForForwardIoWithTimeout.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

void __fastcall GatewayWaitForForwardIo(PDEVICE_OBJECT DeviceObject, _QWORD *Context)
{
  GatewayWaitForForwardIoWithTimeout(Context, 0LL);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(Context[120] + 240LL))(
    *(_QWORD *)(Context[120] + 232LL),
    *(_QWORD *)(Context[120] + 216LL),
    *(_QWORD *)(Context[120] + 224LL));
}
