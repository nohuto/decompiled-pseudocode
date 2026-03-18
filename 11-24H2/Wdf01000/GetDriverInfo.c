/*
 * XREFs of GetDriverInfo @ 0x14007CA08
 * Callers:
 *     LogDriverInfoStream @ 0x14007C650 (LogDriverInfoStream.c)
 * Callees:
 *     <none>
 */

void __fastcall GetDriverInfo(_FX_DRIVER_GLOBALS *Globals, FxDevice *Fdo, FxTelemetryDriverInfo *DriverInfo)
{
  unsigned __int8 v5; // dl
  unsigned int v6; // r9d
  unsigned int v7; // r9d
  FxPkgPnp *m_PkgPnp; // r11
  _DEVICE_OBJECT *m_DeviceObject; // rax
  unsigned __int16 m_DeviceTelemetryInfoFlags; // di
  int v11; // r8d
  int v12; // eax
  FxPowerPolicyOwnerSettings *m_Owner; // r9
  unsigned int v14; // r8d
  unsigned __int8 Enabled; // al
  int v16; // ecx
  unsigned __int8 WakeFromS0Capable; // al
  FxPowerPolicyOwnerSettings *v18; // r8
  int v19; // eax
  int v20; // ecx
  unsigned int v21; // eax
  int v22; // r8d
  unsigned int v23; // r8d
  FxPowerPolicyOwnerSettings *v24; // rax

  v5 = 0;
  v6 = ((unsigned __int16)Globals->FxEnhancedVerifierOptions != 0 ? 8 : 0) | (DriverInfo->Dword & 0xFFFFFFFB ^ (4 * (Globals->FxVerifierOn & 1))) & 0xFFFFFFF7;
  DriverInfo->Dword = v6;
  if ( Fdo )
  {
    m_PkgPnp = Fdo->m_PkgPnp;
    m_DeviceObject = Fdo->m_DeviceObject.m_DeviceObject;
    m_DeviceTelemetryInfoFlags = Fdo->m_DeviceTelemetryInfoFlags;
    v11 = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(16 * LOBYTE(m_PkgPnp[1].m_DeviceBase))) & 0x10;
    if ( m_DeviceObject )
      v12 = (__int64)m_DeviceObject[1].CurrentIrp & 1;
    else
      v12 = 0;
    m_Owner = m_PkgPnp->m_PowerPolicyMachine.m_Owner;
    v14 = (m_Owner != 0LL ? 0x80 : 0) | (32 * v12) & 0xFFFFFF3F | v11 & 0xFFFFFF1F;
    if ( m_Owner )
      Enabled = m_Owner->m_IdleSettings.Enabled;
    else
      Enabled = 0;
    v16 = v14 ^ (v14 ^ (Enabled << 8)) & 0x100;
    if ( m_Owner )
      WakeFromS0Capable = m_Owner->m_IdleSettings.WakeFromS0Capable;
    else
      WakeFromS0Capable = 0;
    v18 = m_PkgPnp->m_PowerPolicyMachine.m_Owner;
    if ( !m_Owner )
      v18 = 0LL;
    v19 = v16 ^ ((unsigned __int16)v16 ^ (unsigned __int16)(WakeFromS0Capable << 9)) & 0x200;
    if ( !m_Owner || !v18->m_IdleSettings.WakeFromS0Capable || (v20 = 1, !m_Owner->m_IdleSettings.UsbSSCapable) )
      v20 = 0;
    v21 = (v20 << 10) | v19 & 0xFFFFFBFF;
    if ( m_Owner )
      v22 = ((unsigned int)m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus >> 1) & 1;
    else
      v22 = 0;
    v23 = v21 & 0xFFFFF7FF | (v22 << 11);
    v24 = m_PkgPnp->m_PowerPolicyMachine.m_Owner;
    DriverInfo->Dword = v23;
    if ( v24 )
      v5 = v24->m_WakeSettings.Enabled;
    v7 = ((m_DeviceTelemetryInfoFlags & 0x180) << 14) & 0xFF7FFFFF | (m_PkgPnp->m_InterruptObjectCount > 1 ? 0x20000 : 0) | (v23 & 0xFFFFEFFF ^ ((v5 & 1) << 12)) & 0xFF001FFF | ((m_DeviceTelemetryInfoFlags & 8 | m_DeviceTelemetryInfoFlags & 4 | m_DeviceTelemetryInfoFlags & 1 | m_DeviceTelemetryInfoFlags & 2 | (2 * (m_DeviceTelemetryInfoFlags & 0x200 | m_DeviceTelemetryInfoFlags & 0x70))) << 13);
  }
  else
  {
    v7 = Globals->Public.DriverFlags & 2 | Globals->Public.DriverFlags & 1 ^ v6 & 0xFFFFFFFC;
  }
  DriverInfo->Dword = v7;
}
