/*
 * XREFs of ?ndisMWanSendCompleteInternal@@YAXPEAX0H@Z @ 0x140089BE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

NDIS_STATUS __stdcall ndisMWanSendCompleteInternal(NDIS_HANDLE NdisBindingHandle, PNDIS_OID_REQUEST OidRequest)
{
  return (*((__int64 (__fastcall **)(NDIS_HANDLE, PNDIS_OID_REQUEST))NdisBindingHandle + 91))(
           NdisBindingHandle,
           OidRequest);
}
