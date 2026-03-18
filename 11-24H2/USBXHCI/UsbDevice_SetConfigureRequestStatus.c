/*
 * XREFs of UsbDevice_SetConfigureRequestStatus @ 0x140032F88
 * Callers:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x14002A1C8 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     UsbDevice_SetResourceAssignmentCompletion @ 0x140032EB0 (UsbDevice_SetResourceAssignmentCompletion.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x140039910 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_HandleAddAndDropEndpointsState @ 0x14003A4EC (UsbDevice_HandleAddAndDropEndpointsState.c)
 *     UsbDevice_SendConfigureEndpointCommand @ 0x14003ABD8 (UsbDevice_SendConfigureEndpointCommand.c)
 *     UsbDevice_DropEndpointsCompletion @ 0x14004D8A0 (UsbDevice_DropEndpointsCompletion.c)
 *     UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState @ 0x14004D9B8 (UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState.c)
 * Callees:
 *     <none>
 */

void __fastcall UsbDevice_SetConfigureRequestStatus(__int64 a1, int a2)
{
  if ( *(_DWORD *)(a1 + 456) == 259 )
    *(_DWORD *)(a1 + 456) = a2;
}
