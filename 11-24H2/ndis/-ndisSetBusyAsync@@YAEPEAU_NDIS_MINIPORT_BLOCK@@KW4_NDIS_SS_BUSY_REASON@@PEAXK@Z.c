/*
 * XREFs of ?ndisSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x140021AA0
 * Callers:
 *     ?ndisWdfReturnNbl@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x140020EA0 (-ndisWdfReturnNbl@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisReturnNblWithPowerQueue@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x140020F60 (-ndisReturnNblWithPowerQueue@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisMCancelSendNetBufferListsOnMiniport@@YAXPEAX0@Z @ 0x1400C47E0 (-ndisMCancelSendNetBufferListsOnMiniport@@YAXPEAX0@Z.c)
 *     ndisDoCancelDirectOidRequest @ 0x1400C706C (ndisDoCancelDirectOidRequest.c)
 *     ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14017F400 (-ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x14017F6D0 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x140037AD0 (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x14004A900 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 */

__int64 __fastcall ndisSetBusyAsync(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 120) & 0x80u) == 0 )
    return ndisWdmSetBusyAsync(a1);
  else
    return ndisWdfSetBusyAsync(a1);
}
