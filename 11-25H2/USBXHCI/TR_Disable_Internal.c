/*
 * XREFs of TR_Disable_Internal @ 0x140010848
 * Callers:
 *     Endpoint_Disable_Internal @ 0x140010904 (Endpoint_Disable_Internal.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x140034F50 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 *     Endpoint_EndpointStaticStreamsDisableCompletion @ 0x140047070 (Endpoint_EndpointStaticStreamsDisableCompletion.c)
 *     Endpoint_EndpointStaticStreamsEnableCompletion @ 0x1400472D0 (Endpoint_EndpointStaticStreamsEnableCompletion.c)
 * Callees:
 *     CommonBuffer_ReleaseBuffer @ 0x1400034F4 (CommonBuffer_ReleaseBuffer.c)
 *     XilCoreCommonBuffer_ReleaseBuffers @ 0x1400306BC (XilCoreCommonBuffer_ReleaseBuffers.c)
 *     TR_FreeSecureTransferSegments @ 0x14004BC08 (TR_FreeSecureTransferSegments.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

void __fastcall TR_Disable_Internal(__int64 a1, char a2)
{
  __int64 v4; // rsi
  struct _MDL *v5; // rcx
  __int64 v6; // rdx

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
    v6 = *(_QWORD *)(a1 + 240);
    if ( v6 )
    {
      CommonBuffer_ReleaseBuffer(v4, v6);
      *(_QWORD *)(a1 + 240) = 0LL;
    }
  }
}
