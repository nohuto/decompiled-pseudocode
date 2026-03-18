/*
 * XREFs of XilEndpoint_FetchStreamContextArray @ 0x14002D2A4
 * Callers:
 *     Endpoint_OnResetEndpointResetCompletion @ 0x140008B60 (Endpoint_OnResetEndpointResetCompletion.c)
 *     Endpoint_SM_UpdateTransferRingDequeuePointers @ 0x1400097B4 (Endpoint_SM_UpdateTransferRingDequeuePointers.c)
 *     Endpoint_SM_NotifyTransferRingsFSEReceived @ 0x14002D204 (Endpoint_SM_NotifyTransferRingsFSEReceived.c)
 *     Endpoint_SM_NotifyTransferRingsEndpointHalted @ 0x14002EF44 (Endpoint_SM_NotifyTransferRingsEndpointHalted.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1400478F0 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 * Callees:
 *     XilEndpoint_SendRequestToGetSecureStreamContextArray @ 0x140046FA0 (XilEndpoint_SendRequestToGetSecureStreamContextArray.c)
 */

__int64 __fastcall XilEndpoint_FetchStreamContextArray(__int64 a1)
{
  unsigned int v1; // ebx
  int SecureStreamContextArray; // eax

  v1 = 0;
  if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 666LL) )
  {
    SecureStreamContextArray = XilEndpoint_SendRequestToGetSecureStreamContextArray(
                                 (unsigned int)*(_QWORD *)a1 + 1328,
                                 *(_QWORD *)(a1 + 40),
                                 a1,
                                 1 << (*(_DWORD *)(a1 + 12) + 1),
                                 *(void **)(*(_QWORD *)(a1 + 32) + 16LL));
    if ( SecureStreamContextArray >= 0 )
      return 0;
    return (unsigned int)SecureStreamContextArray;
  }
  return v1;
}
