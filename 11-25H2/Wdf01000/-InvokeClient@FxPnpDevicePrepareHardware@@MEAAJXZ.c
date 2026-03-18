/*
 * XREFs of ?InvokeClient@FxPnpDevicePrepareHardware@@MEAAJXZ @ 0x14007ABA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qqd @ 0x14002A590 (WPP_IFR_SF_qqd.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

int (__fastcall *__fastcall FxPnpDevicePrepareHardware::InvokeClient(
        FxPnpDevicePrepareHardware *this))(WDFDEVICE__ *, WDFCMRESLIST__ *, WDFCMRESLIST__ *)
{
  int (__fastcall *result)(WDFDEVICE__ *, WDFCMRESLIST__ *, WDFCMRESLIST__ *); // rax
  signed int _a3; // eax
  unsigned int v4; // edi

  result = this->m_Method;
  if ( result )
  {
    _a3 = result(this->m_Device, this->m_ResourcesRaw, this->m_ResourcesTranslated);
    v4 = _a3;
    if ( _a3 < 0 )
      WPP_IFR_SF_qqd(
        this->m_PkgPnp->m_Globals,
        2u,
        0xCu,
        0x10u,
        WPP_PnpCallbacks_cpp_Traceguids,
        this->m_Device,
        this->m_PkgPnp->m_DeviceBase->m_DeviceObject.m_DeviceObject,
        _a3);
    return (int (__fastcall *)(WDFDEVICE__ *, WDFCMRESLIST__ *, WDFCMRESLIST__ *))v4;
  }
  return result;
}
