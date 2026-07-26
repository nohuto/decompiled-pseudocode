/*
 * XREFs of ?ndisWmiQueryPMActiveCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WMI_PM_ACTIVE_CAPABILITIES@@@Z @ 0x1400B5E9C
 * Callers:
 *     ndisQueryGuidData @ 0x14002D4C0 (ndisQueryGuidData.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisWmiQueryPMActiveCapabilities(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_WMI_PM_ACTIVE_CAPABILITIES *a2)
{
  unsigned int *p_EnabledWoLPacketPatterns; // r8
  unsigned int *p_EnabledProtocolOffloads; // r8

  p_EnabledWoLPacketPatterns = &a1->PMCurrentParameters.EnabledWoLPacketPatterns;
  a2->WakeOnPattern = NdisPMAdminConfigInactive;
  if ( (unsigned int)(a1->PMHardwareCapabilities.MinPatternWakeUp - 2) <= 2 )
  {
    if ( (*p_EnabledWoLPacketPatterns & 1) != 0 )
      a2->WakeOnPattern = NdisPMAdminConfigActive;
  }
  else
  {
    a2->WakeOnPattern = NdisPMAdminConfigUnsupported;
  }
  a2->WakeOnMagicPacket = NdisPMAdminConfigInactive;
  if ( (unsigned int)(a1->PMHardwareCapabilities.MinMagicPacketWakeUp - 2) <= 2 )
  {
    if ( (*p_EnabledWoLPacketPatterns & 2) != 0 )
      a2->WakeOnMagicPacket = NdisPMAdminConfigActive;
  }
  else
  {
    a2->WakeOnMagicPacket = NdisPMAdminConfigUnsupported;
  }
  a2->DeviceSleepOnDisconnect = NdisPMAdminConfigInactive;
  if ( (unsigned int)(a1->PMHardwareCapabilities.MinLinkChangeWakeUp - 2) <= 2 )
  {
    if ( (a1->WSyncFlags & 8) != 0 )
      a2->DeviceSleepOnDisconnect = NdisPMAdminConfigActive;
  }
  else
  {
    a2->DeviceSleepOnDisconnect = NdisPMAdminConfigUnsupported;
  }
  a2->PMARPOffload = NdisPMAdminConfigInactive;
  p_EnabledProtocolOffloads = &a1->PMCurrentParameters.EnabledProtocolOffloads;
  if ( (a1->PMHardwareCapabilities.SupportedProtocolOffloads & 1) != 0 )
  {
    if ( (*p_EnabledProtocolOffloads & 1) != 0 )
      a2->PMARPOffload = NdisPMAdminConfigActive;
  }
  else
  {
    a2->PMARPOffload = NdisPMAdminConfigUnsupported;
  }
  a2->PMNSOffload = NdisPMAdminConfigInactive;
  if ( (a1->PMHardwareCapabilities.SupportedProtocolOffloads & 2) != 0 )
  {
    if ( (*p_EnabledProtocolOffloads & 2) != 0 )
      a2->PMNSOffload = NdisPMAdminConfigActive;
  }
  else
  {
    a2->PMNSOffload = NdisPMAdminConfigUnsupported;
  }
  a2->PMWiFiRekeyOffload = NdisPMAdminConfigInactive;
  if ( (a1->PMHardwareCapabilities.SupportedProtocolOffloads & 0x80u) != 0 )
  {
    if ( (*p_EnabledProtocolOffloads & 0x80u) != 0 )
      a2->PMWiFiRekeyOffload = NdisPMAdminConfigActive;
  }
  else
  {
    a2->PMWiFiRekeyOffload = NdisPMAdminConfigUnsupported;
  }
}
