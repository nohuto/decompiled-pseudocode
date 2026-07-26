/*
 * XREFs of ?ndisReadPMRegistry@@YAXPEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14004DEF0
 * Callers:
 *     ?ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x14016F660 (-ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 * Callees:
 *     ?ndisReadPMAdminConfigState@@YA?AW4_NDIS_PM_ADMIN_CONFIG_STATE@@PEAU_NDIS_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@@Z @ 0x14004F6B0 (-ndisReadPMAdminConfigState@@YA-AW4_NDIS_PM_ADMIN_CONFIG_STATE@@PEAU_NDIS_CONFIGURATION_HANDLE@@.c)
 */

void __fastcall ndisReadPMRegistry(NDIS_HANDLE ConfigurationHandle, struct _NDIS_MINIPORT_BLOCK *a2)
{
  unsigned int v4; // edx
  unsigned int Flags; // ecx
  unsigned int v6; // eax

  a2->PMAdminConfig.Value ^= ((unsigned __int8)ndisReadPMAdminConfigState(ConfigurationHandle, &WakeOnPatternStr) ^ (unsigned __int8)a2->PMAdminConfig.Value) & 3;
  a2->PMAdminConfig.Value ^= ((unsigned __int8)a2->PMAdminConfig.Value ^ (unsigned __int8)(4
                                                                                         * ndisReadPMAdminConfigState(
                                                                                             ConfigurationHandle,
                                                                                             &WakeOnMagicPacketStr))) & 0xC;
  a2->PMAdminConfig.Value ^= ((unsigned __int8)a2->PMAdminConfig.Value ^ (unsigned __int8)(16
                                                                                         * ndisReadPMAdminConfigState(
                                                                                             ConfigurationHandle,
                                                                                             &DeviceSleepOnDisconnectStr))) & 0x30;
  a2->PMAdminConfig.Value ^= ((unsigned __int8)a2->PMAdminConfig.Value ^ (unsigned __int8)((unsigned __int8)ndisReadPMAdminConfigState(ConfigurationHandle, &PMARPOffloadStr) << 6)) & 0xC0;
  a2->PMAdminConfig.Value ^= ((unsigned __int16)a2->PMAdminConfig.Value ^ (unsigned __int16)((unsigned __int16)ndisReadPMAdminConfigState(ConfigurationHandle, &PMNSOffloadStr) << 8)) & 0x300;
  a2->PMAdminConfig.Value ^= ((unsigned __int16)a2->PMAdminConfig.Value ^ (unsigned __int16)((unsigned __int16)ndisReadPMAdminConfigState(ConfigurationHandle, &PMWiFiRekeyOffloadStr) << 10)) & 0xC00;
  a2->PMAdminConfig.Value ^= ((unsigned __int16)a2->PMAdminConfig.Value ^ (unsigned __int16)((unsigned __int16)ndisReadPMAdminConfigState(ConfigurationHandle, &SelectiveSuspendStr) << 12)) & 0x3000;
  v4 = a2->PMAdminConfig.Value ^ ((unsigned __int16)a2->PMAdminConfig.Value ^ (unsigned __int16)((unsigned __int16)ndisReadPMAdminConfigState(ConfigurationHandle, &NicAutoPowerSaverStr) << 14)) & 0xC000;
  Flags = a2->Flags;
  a2->PMAdminConfig.Value = v4;
  v6 = v4;
  if ( (Flags & 0x80u) != 0 && (Flags & 0x100) == 0 )
  {
    v6 = v4 & 0xFFFFCFFF | 0x2000;
    a2->PMAdminConfig.Value = v6;
  }
  if ( (v6 & 0xC000) != 0 )
    a2->PMAdminConfig.Value = v6 ^ ((unsigned __int16)v6 ^ (unsigned __int16)(v6 >> 2)) & 0x3000;
}
