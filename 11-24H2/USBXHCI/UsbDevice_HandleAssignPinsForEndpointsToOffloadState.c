/*
 * XREFs of UsbDevice_HandleAssignPinsForEndpointsToOffloadState @ 0x140034EE4
 * Callers:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x14002A1C8 (UsbDevice_QueueConfigureEndpointEvent.c)
 * Callees:
 *     Debug_FreAssertMsg @ 0x140019AC8 (Debug_FreAssertMsg.c)
 *     WPP_RECORDER_SF_sds @ 0x140045A8C (WPP_RECORDER_SF_sds.c)
 *     UsbDevice_SetResourceAssignment @ 0x14004DFC4 (UsbDevice_SetResourceAssignment.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

char __fastcall UsbDevice_HandleAssignPinsForEndpointsToOffloadState(__int64 a1, __int64 a2, int a3, int a4)
{
  int v4; // r14d
  unsigned int v5; // ebp
  unsigned int v6; // eax
  unsigned int *v8; // rdi
  __int64 i; // rsi
  __int64 v11; // rax
  __int64 v12; // r15

  v4 = 0;
  *(_DWORD *)(a1 + 588) = *(_DWORD *)(a2 + 84);
  v5 = 0;
  v6 = *(_DWORD *)(a2 + 84);
  v8 = *(unsigned int **)(a2 + 88);
  if ( v6 )
  {
    do
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 24); i = (unsigned int)(i + 1) )
      {
        v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
                WdfDriverGlobals,
                *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8 * i),
                off_14006AFE8);
        v12 = v11;
        if ( *(unsigned __int8 *)(v11 + 98) == *((_WORD *)v8 + 2) )
        {
          ++v4;
          if ( *(_DWORD *)(v11 + 1368) )
            Debug_FreAssertMsg(
              (__int64)"Invalid endpoint offload state before marking it as pending",
              0,
              (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\endpoint.h",
              1336);
          else
            *(_DWORD *)(v11 + 1368) = 1;
          UsbDevice_SetResourceAssignment(a1, v12, *(unsigned int *)((char *)v8 + 6));
        }
      }
      ++v5;
      v8 = (unsigned int *)((char *)v8 + *v8);
      v6 = *(_DWORD *)(a2 + 84);
    }
    while ( v5 < v6 );
  }
  if ( v4 != v6 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
    LOBYTE(v6) = KdRefreshDebuggerNotPresent();
    if ( !(_BYTE)v6 )
      __debugbreak();
  }
  return v6;
}
