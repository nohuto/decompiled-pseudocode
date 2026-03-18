/*
 * XREFs of ?QueryForCapabilities@FxPkgPnp@@IEAAJXZ @ 0x140005948
 * Callers:
 *     ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x140003DBC (-PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z.c)
 *     ?PnpEventHardwareAvailable@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1400615D0 (-PnpEventHardwareAvailable@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z @ 0x140076040 (-PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z.c)
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x140005AE0 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?GetStackCapabilities@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVMxDeviceObject@@PEAU_D3COLD_SUPPORT_INTERFACE@@PEAU_STACK_DEVICE_CAPABILITIES@@@Z @ 0x14002D98C (-GetStackCapabilities@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVMxDeviceObject@@PEAU_D3COLD_SUPPORT_INTERF.c)
 *     ?CheckWakeFromShutdownOptIn@FxPkgPnp@@AEAAXXZ @ 0x1400A6194 (-CheckWakeFromShutdownOptIn@FxPkgPnp@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1400AC710 (__security_check_cookie.c)
 *     memset @ 0x1400AC800 (memset.c)
 */

__int64 __fastcall FxPkgPnp::QueryForCapabilities(FxPkgPnp *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned int v3; // edx
  int StackCapabilities; // edi
  char SystemWake; // cl
  _BYTE *v6; // r9
  unsigned int v7; // edx
  unsigned __int8 DeviceWake; // r8
  __int64 v9; // rax
  unsigned int v10; // r8d
  _DEVICE_POWER_STATE *DeviceState; // r9
  unsigned int i; // ecx
  int v13; // eax
  unsigned int v14; // edx
  int v15; // r8d
  unsigned int v16; // edx
  MxDeviceObject deviceObject; // [rsp+20h] [rbp-88h] BYREF
  _STACK_DEVICE_CAPABILITIES caps; // [rsp+30h] [rbp-78h] BYREF

  memset(&caps, 0, sizeof(caps));
  m_Globals = this->m_Globals;
  deviceObject.m_DeviceObject = this->m_DeviceBase->m_DeviceObject.m_DeviceObject;
  StackCapabilities = GetStackCapabilities(m_Globals, &deviceObject, &this->m_D3ColdInterface, &caps);
  if ( StackCapabilities >= 0 )
  {
    SystemWake = caps.DeviceCaps.SystemWake;
    this->m_SystemWake = caps.DeviceCaps.SystemWake;
    if ( SystemWake == 6 )
      FxPkgPnp::CheckWakeFromShutdownOptIn(this);
    if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, v3, 0xBu) )
    {
      *(_DWORD *)v6 = 0;
      v6[4] = 0;
      v7 = 1;
      if ( this->m_SystemWake )
      {
        DeviceWake = caps.DeviceCaps.DeviceWake;
        do
        {
          v9 = v7++ - 1;
          this->m_DeviceWake[v9] = DeviceWake;
        }
        while ( v7 <= this->m_SystemWake );
      }
    }
    else
    {
      memset(v6, LOBYTE(caps.DeviceCaps.DeviceWake), 5uLL);
    }
    v10 = 0;
    DeviceState = caps.DeviceCaps.DeviceState;
    for ( i = 0; i < 0x1C; i += 4 )
    {
      v13 = *DeviceState++;
      v14 = ~(15 << i);
      v10 = ((v13 & 0xF) << i) | v14 & v10;
    }
    this->m_PowerPolicyMachine.m_Owner->m_SystemToDeviceStateMap = v10;
    if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, v14, 0xBu) )
    {
      v16 = v15 - 10;
      if ( this->m_SystemWake >= (unsigned __int8)(v15 - 10) )
      {
        do
        {
          if ( caps.DeepestWakeableDstate[v16] != DeviceWakeDepthMaximum )
            this->m_DeviceWake[v16 - 1] = caps.DeepestWakeableDstate[v16];
          ++v16;
        }
        while ( v16 <= this->m_SystemWake );
      }
    }
  }
  return (unsigned int)StackCapabilities;
}
