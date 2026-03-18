/*
 * XREFs of ?InvokeClient@FxPnpDeviceSelfManagedIoSuspend@@MEAAJXZ @ 0x14006F220
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qqd @ 0x14001AC10 (WPP_IFR_SF_qqd.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

int (__fastcall *__fastcall FxPnpDeviceSelfManagedIoSuspend::InvokeClient(
        FxPnpDeviceSelfManagedIoSuspend *this))(WDFDEVICE__ *)
{
  int (__fastcall *result)(WDFDEVICE__ *); // rax
  signed int _a3; // edi

  result = this->m_Method;
  if ( result )
  {
    _a3 = result(this->m_Device);
    if ( _a3 < 0 )
      WPP_IFR_SF_qqd(
        this->m_PkgPnp->m_Globals,
        4u,
        0xCu,
        0x16u,
        WPP_PnpCallbacks_cpp_Traceguids,
        this->m_Device,
        this->m_PkgPnp->m_DeviceBase->m_DeviceObject.m_DeviceObject,
        _a3);
    return (int (__fastcall *)(WDFDEVICE__ *))(unsigned int)_a3;
  }
  return result;
}
