/*
 * XREFs of UsbDevice_NumberOfOffloadedEndpointsInDropEndpointsList @ 0x140029BF0
 * Callers:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x14002A1C8 (UsbDevice_QueueConfigureEndpointEvent.c)
 *     UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState @ 0x14004D9B8 (UsbDevice_HandleSendStopEndpointToOffloadedEndpointsState.c)
 *     UsbDevice_HandleUnassignPinsForOffloadedEndpointsState @ 0x14004DA74 (UsbDevice_HandleUnassignPinsForOffloadedEndpointsState.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbDevice_NumberOfOffloadedEndpointsInDropEndpointsList(__int64 a1)
{
  __int64 result; // rax
  unsigned int i; // esi
  unsigned int v4; // ebx
  int v5; // ecx

  result = 0LL;
  for ( i = 0; i < *(_DWORD *)(a1 + 40); ++i )
  {
    v4 = result;
    v5 = *(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
                       WdfDriverGlobals,
                       *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL * i),
                       off_14006AFE8)
                   + 1368);
    result = v4 + 1;
    if ( v5 != 2 )
      result = v4;
  }
  return result;
}
