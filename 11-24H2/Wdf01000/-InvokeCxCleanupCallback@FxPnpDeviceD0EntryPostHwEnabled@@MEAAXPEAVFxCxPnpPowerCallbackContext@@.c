/*
 * XREFs of ?InvokeCxCleanupCallback@FxPnpDeviceD0EntryPostHwEnabled@@MEAAXPEAVFxCxPnpPowerCallbackContext@@@Z @ 0x1400A4720
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall FxPnpDeviceD0EntryPostHwEnabled::InvokeCxCleanupCallback(
        FxPnpDeviceD0EntryPostHwEnabled *this,
        FxCxPnpPowerCallbackContext *Context)
{
  ((void (__fastcall *)(WDFDEVICE__ *, _QWORD))Context->u.Generic.CleanupCallback)(
    this->m_Device,
    (unsigned int)this->m_PreviousState);
}
