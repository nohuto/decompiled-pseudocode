/*
 * XREFs of ?InvokeCompanionCallback@FxPnpDevicePrepareHardware@@MEAAJPEAVFxCompanionTarget@@@Z @ 0x1400AA340
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qqd @ 0x14002A590 (WPP_IFR_SF_qqd.c)
 *     ?NotifyPrePrepareHardware@FxCompanionTarget@@QEAAJPEAUWDFCMRESLIST__@@0@Z @ 0x14008F4DC (-NotifyPrePrepareHardware@FxCompanionTarget@@QEAAJPEAUWDFCMRESLIST__@@0@Z.c)
 */

__int64 __fastcall FxPnpDevicePrepareHardware::InvokeCompanionCallback(
        FxPnpDevicePrepareHardware *this,
        FxCompanionTarget *CompanionTarget)
{
  signed int _a3; // eax
  unsigned int v4; // ebx

  _a3 = FxCompanionTarget::NotifyPrePrepareHardware(CompanionTarget, this->m_ResourcesRaw, this->m_ResourcesTranslated);
  v4 = _a3;
  if ( _a3 < 0 )
    WPP_IFR_SF_qqd(
      this->m_PkgPnp->m_Globals,
      2u,
      0xCu,
      0xCu,
      WPP_PnPCallbacksKm_cpp_Traceguids,
      this->m_Device,
      this->m_PkgPnp->m_DeviceBase->m_DeviceObject.m_DeviceObject,
      _a3);
  return v4;
}
