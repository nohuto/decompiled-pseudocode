/*
 * XREFs of ?ndisMWanSendCompleteInternal@@YAXPEAX0H@Z @ 0x14006D7F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

NDIS_STATUS __stdcall ndisMWanSendCompleteInternal(NDIS_HANDLE NdisBindingHandle, PNDIS_OID_REQUEST OidRequest)
{
  return (*((__int64 (__fastcall **)(NDIS_HANDLE, PNDIS_OID_REQUEST))NdisBindingHandle + 91))(
           NdisBindingHandle,
           OidRequest);
}
