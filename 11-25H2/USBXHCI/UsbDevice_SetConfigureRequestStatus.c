/*
 * XREFs of UsbDevice_SetConfigureRequestStatus @ 0x140034B18
 * Callers:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x14002AB24 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     UsbDevice_SetResourceAssignmentCompletion @ 0x140034A40 (UsbDevice_SetResourceAssignmentCompletion.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x14003A070 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_HandleAddAndDropEndpointsState @ 0x14003ABC0 (UsbDevice_HandleAddAndDropEndpointsState.c)
 *     UsbDevice_SendConfigureEndpointCommand @ 0x14003B1DC (UsbDevice_SendConfigureEndpointCommand.c)
 *     UsbDevice_DropEndpointsCompletion @ 0x14004E220 (UsbDevice_DropEndpointsCompletion.c)
 *     UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState @ 0x14004E320 (UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState.c)
 * Callees:
 *     <none>
 */

void __fastcall UsbDevice_SetConfigureRequestStatus(__int64 a1, int a2)
{
  if ( *(_DWORD *)(a1 + 448) == 259 )
    *(_DWORD *)(a1 + 448) = a2;
}
