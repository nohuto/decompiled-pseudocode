/*
 * XREFs of ?PnpEventPdoRemovedOverload@FxPkgPdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x14004C6D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14002A1A4 (WPP_IFR_SF_qq.c)
 *     ?DeleteSymbolicLink@FxDevice@@QEAAXXZ @ 0x1400419D0 (-DeleteSymbolicLink@FxDevice@@QEAAXXZ.c)
 *     ?PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ @ 0x14004C23C (-PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ.c)
 *     ?ProcessDeviceRemoved@FxDeviceDescriptionEntry@@QEAAXXZ @ 0x14007BAD8 (-ProcessDeviceRemoved@FxDeviceDescriptionEntry@@QEAAXXZ.c)
 */

__int64 __fastcall FxPkgPdo::PnpEventPdoRemovedOverload(FxPkgPdo *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  unsigned __int16 v4; // r9
  FxDeviceDescriptionEntry *_a1; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx

  this->m_CanBeDeleted = 1;
  FxDevice::DeleteSymbolicLink(this->m_Device);
  FxPkgPnp::PnpEventRemovedCommonCode(this, v2, v3, v4);
  _a1 = this->m_Description;
  if ( _a1 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qq(m_Globals, 5u, 0xCu, 0x13u, WPP_FxPkgPdo_cpp_Traceguids, _a1, this);
    FxDeviceDescriptionEntry::ProcessDeviceRemoved(this->m_Description);
    this->m_Description = 0LL;
  }
  return 309LL;
}
