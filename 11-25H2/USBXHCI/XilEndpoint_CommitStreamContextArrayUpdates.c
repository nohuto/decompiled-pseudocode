/*
 * XREFs of XilEndpoint_CommitStreamContextArrayUpdates @ 0x14003CB9C
 * Callers:
 *     Endpoint_Enable @ 0x140011530 (Endpoint_Enable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x140034F50 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1400475E0 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x140047F20 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 * Callees:
 *     XilEndpoint_SendRequestToSetSecureStreamContextArray @ 0x140046E98 (XilEndpoint_SendRequestToSetSecureStreamContextArray.c)
 */

__int64 __fastcall XilEndpoint_CommitStreamContextArrayUpdates(__int64 a1)
{
  unsigned int v1; // ebx
  int v2; // eax

  v1 = 0;
  if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 658LL) )
  {
    v2 = XilEndpoint_SendRequestToSetSecureStreamContextArray(
           (unsigned int)*(_QWORD *)a1 + 1320,
           *(_QWORD *)(a1 + 40),
           a1,
           1 << (*(_DWORD *)(a1 + 12) + 1),
           *(void **)(*(_QWORD *)(a1 + 32) + 16LL));
    if ( v2 >= 0 )
      return 0;
    return (unsigned int)v2;
  }
  return v1;
}
