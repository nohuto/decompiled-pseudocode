/*
 * XREFs of NdisMRemoveMiniport @ 0x1400941D0
 * Callers:
 *     <none>
 * Callees:
 *     ?NdisMRemoveMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x140076D00 (-NdisMRemoveMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 */

NDIS_STATUS __stdcall NdisMRemoveMiniport(NDIS_HANDLE MiniportHandle)
{
  NdisMRemoveMiniportInternal((struct _NDIS_MINIPORT_BLOCK *)MiniportHandle, NdisMEventErr_MiniportRequested);
  return 0;
}
