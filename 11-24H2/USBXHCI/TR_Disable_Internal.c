/*
 * XREFs of TR_Disable_Internal @ 0x140004708
 * Callers:
 *     Endpoint_Disable_Internal @ 0x1400047C4 (Endpoint_Disable_Internal.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x140033450 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 *     Endpoint_EndpointStaticStreamsDisableCompletion @ 0x140047380 (Endpoint_EndpointStaticStreamsDisableCompletion.c)
 *     Endpoint_EndpointStaticStreamsEnableCompletion @ 0x1400475E0 (Endpoint_EndpointStaticStreamsEnableCompletion.c)
 * Callees:
 *     CommonBuffer_ReleaseBuffer @ 0x14001F6A4 (CommonBuffer_ReleaseBuffer.c)
 *     XilCoreCommonBuffer_ReleaseBuffers @ 0x14002F6F4 (XilCoreCommonBuffer_ReleaseBuffers.c)
 *     TR_FreeSecureTransferSegments @ 0x14004B2F8 (TR_FreeSecureTransferSegments.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

void __fastcall TR_Disable_Internal(__int64 a1, char a2)
{
  __int64 v4; // rsi
  struct _MDL *v5; // rcx

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 120LL);
  (*(void (**)(void))(*(_QWORD *)(a1 + 32) + 40LL))();
  _InterlockedExchange((volatile __int32 *)(a1 + 108), 0);
  if ( a2 )
  {
    if ( *(_BYTE *)(a1 + 288) )
      TR_FreeSecureTransferSegments(a1);
    if ( *(_QWORD *)(a1 + 208) != a1 + 208 )
      XilCoreCommonBuffer_ReleaseBuffers(v4 + 88);
    if ( *(_QWORD *)(a1 + 224) != a1 + 224 )
      XilCoreCommonBuffer_ReleaseBuffers(v4 + 88);
    v5 = *(struct _MDL **)(a1 + 120);
    if ( v5 )
    {
      IoFreeMdl(v5);
      *(_QWORD *)(a1 + 120) = 0LL;
    }
    if ( *(_QWORD *)(a1 + 240) )
    {
      CommonBuffer_ReleaseBuffer(v4);
      *(_QWORD *)(a1 + 240) = 0LL;
    }
  }
}
