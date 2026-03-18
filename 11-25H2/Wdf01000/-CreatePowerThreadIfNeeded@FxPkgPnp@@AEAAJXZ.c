/*
 * XREFs of ?CreatePowerThreadIfNeeded@FxPkgPnp@@AEAAJXZ @ 0x1400410E8
 * Callers:
 *     ?PnpEventHardwareAvailable@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x140040BB0 (-PnpEventHardwareAvailable@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?GetAttachedDeviceReference@FxDeviceBase@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1400412C0 (-GetAttachedDeviceReference@FxDeviceBase@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     ?SetInternalFailure@FxPkgPnp@@IEAAXXZ @ 0x140084394 (-SetInternalFailure@FxPkgPnp@@IEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgPnp::CreatePowerThreadIfNeeded(FxPkgPnp *this)
{
  int v2; // esi
  _DEVICE_OBJECT *AttachedDeviceReference; // rax
  _DEVICE_OBJECT *v4; // rbx

  v2 = 0;
  AttachedDeviceReference = FxDeviceBase::GetAttachedDeviceReference(this->m_DeviceBase);
  v4 = AttachedDeviceReference;
  if ( AttachedDeviceReference )
  {
    if ( (AttachedDeviceReference->Flags & 0x2000) == 0 && !this->m_HasPowerThread )
    {
      v2 = this->QueryForPowerThread(this);
      if ( v2 < 0 )
      {
        FxPkgPnp::SetInternalFailure(this);
        this->m_PendingPnPIrp->IoStatus.Status = v2;
      }
    }
    ObfDereferenceObject(v4);
  }
  return (unsigned int)v2;
}
