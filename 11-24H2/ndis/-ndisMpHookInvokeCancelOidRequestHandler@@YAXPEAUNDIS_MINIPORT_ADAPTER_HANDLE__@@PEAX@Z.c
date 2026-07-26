/*
 * XREFs of ?ndisMpHookInvokeCancelOidRequestHandler@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAX@Z @ 0x1400C68F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMRawInvokeCancelOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x14009DDA0 (-ndisMRawInvokeCancelOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 */

void __fastcall ndisMpHookInvokeCancelOidRequestHandler(struct _NDIS_MINIPORT_BLOCK *a1, void *a2)
{
  ndisMRawInvokeCancelOidRequest(a1, a2);
}
