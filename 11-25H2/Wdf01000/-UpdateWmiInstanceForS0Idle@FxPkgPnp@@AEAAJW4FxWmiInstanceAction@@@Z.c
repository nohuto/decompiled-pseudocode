/*
 * XREFs of ?UpdateWmiInstanceForS0Idle@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z @ 0x14003C148
 * Callers:
 *     ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x14003A9BC (-PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z.c)
 * Callees:
 *     ?AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z @ 0x14003C1F8 (-AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z.c)
 *     ?RegisterPowerPolicyWmiInstance@FxPkgPnp@@QEAAJPEBU_GUID@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x14003FA14 (-RegisterPowerPolicyWmiInstance@FxPkgPnp@@QEAAJPEBU_GUID@@PEAUFxWmiInstanceInternalCallbacks@@PE.c)
 *     ?RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z @ 0x14007A2CC (-RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z.c)
 */

int __fastcall FxPkgPnp::UpdateWmiInstanceForS0Idle(FxPkgPnp *this, FxWmiInstanceAction Action)
{
  int v2; // edx
  FxWmiInstance **p_WmiInstance; // r9
  int result; // eax
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  FxWmiInstanceInternal *WmiInstance; // rcx
  FxWmiInstanceInternalCallbacks cb; // [rsp+20h] [rbp-28h] BYREF

  v2 = Action - 1;
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      m_Owner = this->m_PowerPolicyMachine.m_Owner;
      WmiInstance = m_Owner->m_IdleSettings.WmiInstance;
      if ( WmiInstance )
        FxWmiProvider::RemoveInstance(WmiInstance->m_Provider, m_Owner->m_IdleSettings.WmiInstance);
    }
    return 0;
  }
  p_WmiInstance = &this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.WmiInstance;
  if ( *p_WmiInstance )
  {
    FxWmiProvider::AddInstance((*p_WmiInstance)->m_Provider, *p_WmiInstance, 1u);
    return 0;
  }
  cb.ExecuteMethod = 0LL;
  cb.SetInstance = FxPkgPnp::_S0IdleSetInstance;
  cb.QueryInstance = FxPkgPnp::_S0IdleQueryInstance;
  cb.SetItem = FxPkgPnp::_S0IdleSetItem;
  result = FxPkgPnp::RegisterPowerPolicyWmiInstance(
             this,
             &GUID_POWER_DEVICE_ENABLE,
             &cb,
             (FxWmiInstanceInternal **)p_WmiInstance);
  if ( result >= 0 )
    return 0;
  return result;
}
