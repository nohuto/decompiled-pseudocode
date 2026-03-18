/*
 * XREFs of TR_GetDequeuePointer @ 0x14000A060
 * Callers:
 *     Endpoint_Enable @ 0x140004F50 (Endpoint_Enable.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x1400091E0 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_GetDequeuePointer @ 0x14000A01C (Endpoint_GetDequeuePointer.c)
 *     Endpoint_OnCancelSetDequeuePointer @ 0x14000AB48 (Endpoint_OnCancelSetDequeuePointer.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x14001C090 (Endpoint_OnCancelEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x14001D204 (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x140048230 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall TR_GetDequeuePointer(__int64 a1)
{
  unsigned __int64 result; // rax

  result = *(unsigned int *)(a1 + 200) ^ (*(unsigned int *)(a1 + 200) ^ (*(_QWORD *)(*(_QWORD *)(a1 + 176) + 24LL)
                                                                       + 16LL * *(unsigned int *)(a1 + 192))) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( *(_DWORD *)(a1 + 64) )
    return result & 0xFFFFFFFFFFFFFFF1uLL | 2;
  return result;
}
