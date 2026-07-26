/*
 * XREFs of ?ndisConvertPnpCapabilitiesToPM@@YAXPEAU_NDIS_PNP_CAPABILITIES@@PEAU_NDIS_PM_CAPABILITIES@@@Z @ 0x1401749C0
 * Callers:
 *     ?ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x140058BA0 (-ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTR.c)
 *     ?ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@PEAJPEAE2@Z @ 0x14008B710 (-ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisConvertPnpCapabilitiesToPM(struct _NDIS_PNP_CAPABILITIES *a1, struct _NDIS_PM_CAPABILITIES *a2)
{
  int v2; // eax
  _NDIS_DEVICE_POWER_STATE MinMagicPacketWakeUp; // r8d
  _NDIS_DEVICE_POWER_STATE MinPatternWakeUp; // r9d

  v2 = 0;
  *(_QWORD *)&a2->SupportedWoLPacketPatterns = 0LL;
  *(_QWORD *)&a2->MaxWoLPatternSize = 0LL;
  *(_QWORD *)&a2->MaxWoLPacketSaveBuffer = 0LL;
  *(_QWORD *)&a2->NumArpOffloadIPv4Addresses = 0LL;
  *(_QWORD *)&a2->MinMagicPacketWakeUp = 0LL;
  *(_QWORD *)&a2->MinLinkChangeWakeUp = 0LL;
  a2->MediaSpecificWakeUpEvents = 0;
  *(_QWORD *)&a2->Header.Type = 3932800LL;
  MinMagicPacketWakeUp = a1->WakeUpCapabilities.MinMagicPacketWakeUp;
  a2->MinMagicPacketWakeUp = MinMagicPacketWakeUp;
  MinPatternWakeUp = a1->WakeUpCapabilities.MinPatternWakeUp;
  a2->MinPatternWakeUp = MinPatternWakeUp;
  a2->MinLinkChangeWakeUp = a1->WakeUpCapabilities.MinLinkChangeWakeUp;
  if ( MinPatternWakeUp == NdisDeviceStateD1
    || MinPatternWakeUp == NdisDeviceStateD2
    || MinPatternWakeUp == NdisDeviceStateD3 )
  {
    a2->SupportedWoLPacketPatterns = 1;
    v2 = 1;
  }
  if ( MinMagicPacketWakeUp == NdisDeviceStateD1 || (unsigned int)(MinMagicPacketWakeUp - 3) <= 1 )
    a2->SupportedWoLPacketPatterns = v2 | 2;
}
