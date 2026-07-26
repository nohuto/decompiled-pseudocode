/*
 * XREFs of ?ndisWdfDeviceObjectCleanup@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14013EAD4
 * Callers:
 *     NdisWdfPnpPowerEventHandler @ 0x14005F180 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     ?ndisRemoveMiniportFromGlobalList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14006C8D0 (-ndisRemoveMiniportFromGlobalList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMDeleteMiniportBlockOnRemove@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14007DCB0 (-ndisMDeleteMiniportBlockOnRemove@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPnPCompleteRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401696E0 (-ndisPnPCompleteRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisWdfDeviceObjectCleanup(_NDIS_MINIPORT_BLOCK *this)
{
  ndisPnPCompleteRemoveDevice(this);
  ndisRemoveMiniportFromGlobalList(this);
  ndisMDeleteMiniportBlockOnRemove(this);
  this->MiniportAdapterContext = 0LL;
  return 0LL;
}
