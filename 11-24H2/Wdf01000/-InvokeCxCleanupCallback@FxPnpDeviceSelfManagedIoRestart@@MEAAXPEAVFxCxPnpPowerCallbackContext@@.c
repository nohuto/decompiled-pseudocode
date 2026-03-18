/*
 * XREFs of ?InvokeCxCleanupCallback@FxPnpDeviceSelfManagedIoRestart@@MEAAXPEAVFxCxPnpPowerCallbackContext@@@Z @ 0x1400A4790
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall FxPnpDeviceSelfManagedIoRestart::InvokeCxCleanupCallback(
        FxPnpDeviceSelfManagedIoRestart *this,
        FxCxPnpPowerCallbackContext *Context)
{
  if ( Context->m_CallbackType == FxCxCallbackSmIoRestart )
    ((void (__fastcall *)(WDFDEVICE__ *, FxCxPnpPowerCallbackContext *, FxCxPnpPowerCallbackContext *))Context->u.Generic.CleanupCallback)(
      this->m_Device,
      Context,
      Context);
  else
    ((void (__fastcall *)(WDFDEVICE__ *, _QWORD))Context->u.Generic.CleanupCallback)(
      this->m_Device,
      this->m_PkgPnp->m_DevicePowerState);
}
