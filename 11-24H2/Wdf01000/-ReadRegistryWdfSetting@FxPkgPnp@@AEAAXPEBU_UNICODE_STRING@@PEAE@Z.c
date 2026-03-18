/*
 * XREFs of ?ReadRegistryWdfSetting@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z @ 0x140044E34
 * Callers:
 *     ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x140003DBC (-PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z.c)
 * Callees:
 *     ?_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x140045410 (-_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     ?OpenSettingsKey@FxDevice@@QEAAJPEAPEAXK@Z @ 0x1400464B0 (-OpenSettingsKey@FxDevice@@QEAAJPEAPEAXK@Z.c)
 */

void __fastcall FxPkgPnp::ReadRegistryWdfSetting(FxPkgPnp *this, const _UNICODE_STRING *ValueName, bool *Enabled)
{
  FxDevice *m_Device; // rcx
  unsigned int value; // [rsp+30h] [rbp+8h] BYREF
  FxAutoRegKey hKey; // [rsp+48h] [rbp+20h] BYREF

  m_Device = this->m_Device;
  hKey.m_Key = 0LL;
  if ( FxDevice::OpenSettingsKey(m_Device, &hKey.m_Key, 0x20000u) >= 0 )
  {
    value = 0;
    if ( FxRegKey::_QueryULong(hKey.m_Key, ValueName, &value) >= 0 )
      *Enabled = value != 0;
  }
  if ( hKey.m_Key )
    ZwClose(hKey.m_Key);
}
