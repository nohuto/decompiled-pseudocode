/*
 * XREFs of TR_GetDequeuePointer @ 0x140010580
 * Callers:
 *     Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x14000D8E0 (Endpoint_OnCancelEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x14000E2D4 (Endpoint_OnResetEndpointConfigure.c)
 *     UsbDevice_SetAddress @ 0x14000EAF0 (UsbDevice_SetAddress.c)
 *     UsbDevice_InitializeEndpointContext @ 0x14000F9E0 (UsbDevice_InitializeEndpointContext.c)
 *     Endpoint_ControlEndpointResetCompletion @ 0x14000FF70 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_OnCancelSetDequeuePointer @ 0x140010288 (Endpoint_OnCancelSetDequeuePointer.c)
 *     Endpoint_GetDequeuePointer @ 0x14001053C (Endpoint_GetDequeuePointer.c)
 *     Endpoint_Enable @ 0x140011530 (Endpoint_Enable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x140047F20 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
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
