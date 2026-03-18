/*
 * XREFs of ?InvokeCxCallback@FxPnpDeviceSelfManagedIoSuspend@@MEAAJPEAVFxCxPnpPowerCallbackContext@@W4FxCxInvokeCallbackSubType@@@Z @ 0x1400767A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_sqqd @ 0x1400A49B8 (WPP_IFR_SF_sqqd.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPnpDeviceSelfManagedIoSuspend::InvokeCxCallback(
        FxPnpDeviceSelfManagedIoSuspend *this,
        FxCxPnpPowerCallbackContext *Context,
        FxCxInvokeCallbackSubType PrePost)
{
  int v5; // eax
  unsigned int level; // ebx
  int v8; // eax
  unsigned __int16 v9; // r9
  const char *_a3; // rdx
  const _GUID *v11; // [rsp+20h] [rbp-38h]

  if ( Context->m_CallbackType == FxCxCallbackSmIoSuspend )
  {
    if ( PrePost )
      v8 = ((__int64 (__fastcall *)(WDFDEVICE__ *))Context->u.Generic.PostCallback)(this->m_Device);
    else
      v8 = ((__int64 (__fastcall *)(WDFDEVICE__ *))Context->u.Generic.PreCallback)(this->m_Device);
    level = v8;
    if ( v8 >= 0 )
      return level;
    v9 = 23;
  }
  else
  {
    if ( PrePost )
      v5 = ((__int64 (__fastcall *)(WDFDEVICE__ *, _QWORD))Context->u.Generic.PostCallback)(
             this->m_Device,
             (unsigned int)this->m_TargetState);
    else
      v5 = ((__int64 (__fastcall *)(WDFDEVICE__ *, _QWORD))Context->u.Generic.PreCallback)(
             this->m_Device,
             (unsigned int)this->m_TargetState);
    level = v5;
    if ( v5 >= 0 )
      return level;
    v9 = 24;
  }
  _a3 = "Pre";
  if ( PrePost )
    _a3 = "Post";
  WPP_IFR_SF_sqqd(
    this->m_PkgPnp->m_Globals,
    4u,
    (unsigned int)"Post",
    v9,
    v11,
    _a3,
    this->m_Device,
    this->m_PkgPnp->m_DeviceBase->m_DeviceObject.m_DeviceObject,
    level);
  return level;
}
