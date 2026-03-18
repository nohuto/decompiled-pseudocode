/*
 * XREFs of ?InvokeCompanionCallback@FxPnpDeviceD0Entry@@MEAAJPEAVFxCompanionTarget@@@Z @ 0x1400AA2C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qqd @ 0x14002A590 (WPP_IFR_SF_qqd.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPnpDeviceD0Entry::InvokeCompanionCallback(
        FxPnpDeviceD0Entry *this,
        FxCompanionTarget *CompanionTarget)
{
  signed int _a3; // eax
  unsigned int v4; // ebx

  _a3 = CompanionTarget->m_RdDeviceCompanion->SendD0Entry(CompanionTarget->m_RdDeviceCompanion, this->m_PreviousState);
  v4 = _a3;
  if ( _a3 < 0 )
    WPP_IFR_SF_qqd(
      this->m_PkgPnp->m_Globals,
      2u,
      0xCu,
      0xAu,
      WPP_PnPCallbacksKm_cpp_Traceguids,
      this->m_Device,
      this->m_PkgPnp->m_DeviceBase->m_DeviceObject.m_DeviceObject,
      _a3);
  return v4;
}
