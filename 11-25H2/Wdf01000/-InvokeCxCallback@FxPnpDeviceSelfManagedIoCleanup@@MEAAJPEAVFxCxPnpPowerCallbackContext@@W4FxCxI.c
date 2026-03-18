/*
 * XREFs of ?InvokeCxCallback@FxPnpDeviceSelfManagedIoCleanup@@MEAAJPEAVFxCxPnpPowerCallbackContext@@W4FxCxInvokeCallbackSubType@@@Z @ 0x14007E220
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPnpDeviceSelfManagedIoCleanup::InvokeCxCallback(
        FxPowerDeviceWakeFromSxTriggered *this,
        FxCxPnpPowerCallbackContext *Context,
        FxCxInvokeCallbackSubType PrePost)
{
  if ( PrePost )
    ((void (__fastcall *)(WDFDEVICE__ *))Context->u.Generic.PostCallback)(this->m_Device);
  else
    ((void (__fastcall *)(WDFDEVICE__ *))Context->u.Generic.PreCallback)(this->m_Device);
  return 0LL;
}
