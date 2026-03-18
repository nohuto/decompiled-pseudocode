/*
 * XREFs of ?SaveState@FxPkgPnp@@IEAAXE@Z @ 0x1400318C4
 * Callers:
 *     ?_PowerStateCallback@FxPowerPolicyOwnerSettings@@KAXPEAX00@Z @ 0x140030130 (-_PowerStateCallback@FxPowerPolicyOwnerSettings@@KAXPEAX00@Z.c)
 *     ?PowerPolStartingDecideS0Wake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x140031790 (-PowerPolStartingDecideS0Wake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z @ 0x14006DC20 (-PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z.c)
 *     ?PowerPolicySetSxWakeState@FxPkgPnp@@QEAAXE@Z @ 0x1400A6470 (-PowerPolicySetSxWakeState@FxPkgPnp@@QEAAXE@Z.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 *     ?OpenSettingsKey@FxDevice@@QEAAJPEAPEAXK@Z @ 0x1400464B0 (-OpenSettingsKey@FxDevice@@QEAAJPEAPEAXK@Z.c)
 *     ??1FxAutoRegKey@@QEAA@XZ @ 0x14006847C (--1FxAutoRegKey@@QEAA@XZ.c)
 */

void __fastcall FxPkgPnp::SaveState(FxPkgPnp *this, unsigned __int8 UseCanSaveState)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int16 m_ObjectSize; // ax
  const void *v7; // rdx
  char v8; // si
  char v9; // di
  _IRP *m_PendingDevicePowerIrp; // rax
  _UNICODE_STRING name; // [rsp+30h] [rbp-10h] BYREF
  int Data; // [rsp+60h] [rbp+20h] BYREF
  FxAutoRegKey hKey; // [rsp+70h] [rbp+30h] BYREF

  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  hKey.m_Key = 0LL;
  name = 0LL;
  if ( m_Owner )
  {
    if ( !UseCanSaveState || m_Owner->m_CanSaveState )
    {
      if ( !m_Owner->m_IdleSettings.Overridable || (v8 = 1, !m_Owner->m_IdleSettings.Dirty) )
        v8 = 0;
      if ( !m_Owner->m_WakeSettings.Overridable || (v9 = 1, !m_Owner->m_WakeSettings.Dirty) )
        v9 = 0;
      if ( (v8 || v9)
        && (!this->m_SpecialSupport[0]
         || (m_PendingDevicePowerIrp = this->m_PendingDevicePowerIrp) == 0LL
         || m_PendingDevicePowerIrp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 1)
        && FxDevice::OpenSettingsKey(this->m_Device, &hKey.m_Key, 0x20000u) >= 0 )
      {
        if ( v8 )
        {
          RtlInitUnicodeString(&name, L"IdleInWorkingState");
          Data = this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.Enabled;
          ZwSetValueKey(hKey.m_Key, &name, 0, 4u, &Data, 4u);
          this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.Dirty = 0;
        }
        if ( v9 )
        {
          RtlInitUnicodeString(&name, L"WakeFromSleepState");
          Data = this->m_PowerPolicyMachine.m_Owner->m_WakeSettings.Enabled;
          ZwSetValueKey(hKey.m_Key, &name, 0, 4u, &Data, 4u);
          this->m_PowerPolicyMachine.m_Owner->m_WakeSettings.Dirty = 0;
        }
      }
    }
    else
    {
      m_Globals = this->m_Globals;
      if ( m_Globals->FxVerboseOn )
      {
        m_DeviceBase = this->m_DeviceBase;
        m_ObjectSize = m_DeviceBase->m_ObjectSize;
        v7 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !m_ObjectSize )
          v7 = 0LL;
        WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0x51u, WPP_FxPkgPnp_cpp_Traceguids, v7);
      }
    }
  }
  FxAutoRegKey::~FxAutoRegKey(&hKey);
}
