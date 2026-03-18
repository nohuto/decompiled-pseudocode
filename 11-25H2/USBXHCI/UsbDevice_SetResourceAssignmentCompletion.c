/*
 * XREFs of UsbDevice_SetResourceAssignmentCompletion @ 0x140034A40
 * Callers:
 *     <none>
 * Callees:
 *     Debug_FreAssertMsg @ 0x14000D87C (Debug_FreAssertMsg.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x14002AB24 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     UsbDevice_SetConfigureRequestStatus @ 0x140034B18 (UsbDevice_SetConfigureRequestStatus.c)
 *     Controller_IncrementNumberOfEndpointsOffloaded @ 0x140040954 (Controller_IncrementNumberOfEndpointsOffloaded.c)
 */

void __fastcall UsbDevice_SetResourceAssignmentCompletion(__int64 a1)
{
  __int64 *v1; // rdi
  __int64 v2; // rbx
  int v3; // ecx
  __int64 v4; // rcx
  int v5; // edx

  v1 = *(__int64 **)(a1 + 48);
  v2 = v1[2];
  --*(_DWORD *)(v2 + 580);
  if ( *(_BYTE *)(a1 + 60) == 1 )
  {
    if ( *(_DWORD *)(v2 + 600) == 8 )
    {
      v3 = *((_DWORD *)v1 + 340);
      if ( v3 == 2 )
      {
        Debug_FreAssertMsg(
          (__int64)"Endpoint is already offloaded",
          0,
          (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\endpoint.h",
          1288);
      }
      else
      {
        if ( *(_DWORD *)(*v1 + 1044) == 2 )
          Debug_FreAssertMsg(
            (__int64)"Invalid current offload state",
            v3 == 1,
            (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\endpoint.h",
            1295);
        v4 = *v1;
        *((_DWORD *)v1 + 340) = 2;
        Controller_IncrementNumberOfEndpointsOffloaded(v4);
      }
    }
  }
  else
  {
    UsbDevice_SetConfigureRequestStatus(v2, 3221225473LL);
    *(_BYTE *)(v2 + 584) = 1;
  }
  if ( !*(_DWORD *)(v2 + 580) )
  {
    v5 = 1;
    if ( *(_BYTE *)(v2 + 584) )
      v5 = 2;
    UsbDevice_QueueConfigureEndpointEvent(v2, v5);
  }
}
