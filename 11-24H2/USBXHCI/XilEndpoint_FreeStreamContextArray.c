/*
 * XREFs of XilEndpoint_FreeStreamContextArray @ 0x140046CE4
 * Callers:
 *     Endpoint_Disable_Internal @ 0x1400047C4 (Endpoint_Disable_Internal.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x140033450 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 *     Endpoint_EndpointStaticStreamsDisableCompletion @ 0x140047380 (Endpoint_EndpointStaticStreamsDisableCompletion.c)
 *     Endpoint_EndpointStaticStreamsEnableCompletion @ 0x1400475E0 (Endpoint_EndpointStaticStreamsEnableCompletion.c)
 *     Endpoint_EvtStaticStreamsCleanupCallback @ 0x140047850 (Endpoint_EvtStaticStreamsCleanupCallback.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x140048230 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 * Callees:
 *     CommonBuffer_ReleaseBuffer @ 0x14001F6A4 (CommonBuffer_ReleaseBuffer.c)
 *     XilEndpoint_SendRequestToFreeSecureStreamContextArray @ 0x140046ED8 (XilEndpoint_SendRequestToFreeSecureStreamContextArray.c)
 */

void __fastcall XilEndpoint_FreeStreamContextArray(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx

  v2 = *(_QWORD *)(*(_QWORD *)*a1 + 120LL);
  if ( *(_BYTE *)(*a1 + 1352LL) && a1[5] )
  {
    XilEndpoint_SendRequestToFreeSecureStreamContextArray();
    a1[5] = 0LL;
  }
  v3 = a1[4];
  if ( v3 )
  {
    CommonBuffer_ReleaseBuffer(v2, v3);
    a1[4] = 0LL;
  }
}
