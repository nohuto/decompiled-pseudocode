/*
 * XREFs of ?ndisWdfDeviceObjectCleanup@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401499B4
 * Callers:
 *     NdisWdfPnpPowerEventHandler @ 0x14004E5A0 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     ?ndisMDeleteMiniportBlockOnRemove@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14006C8E0 (-ndisMDeleteMiniportBlockOnRemove@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRemoveMiniportFromGlobalList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140088A00 (-ndisRemoveMiniportFromGlobalList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPnPCompleteRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401765A0 (-ndisPnPCompleteRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisWdfDeviceObjectCleanup(_NDIS_MINIPORT_BLOCK *this)
{
  ndisPnPCompleteRemoveDevice(this);
  ndisRemoveMiniportFromGlobalList(this);
  ndisMDeleteMiniportBlockOnRemove(this);
  this->MiniportAdapterContext = 0LL;
  return 0LL;
}
