/*
 * XREFs of Controller_DecrementNumberOfEndpointsOffloaded @ 0x14004020C
 * Callers:
 *     Endpoint_Disable @ 0x14000FDC4 (Endpoint_Disable.c)
 * Callees:
 *     DynamicLock_Acquire @ 0x1400087C0 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x140008E60 (DynamicLock_Release.c)
 *     WPP_RECORDER_SF_ @ 0x14000CCC8 (WPP_RECORDER_SF_.c)
 *     Debug_FreAssertMsg @ 0x14000D87C (Debug_FreAssertMsg.c)
 *     Interrupter_DeInitializeAfterOffload @ 0x140048400 (Interrupter_DeInitializeAfterOffload.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_DecrementNumberOfEndpointsOffloaded(__int64 a1)
{
  int v2; // eax
  int v3; // edx
  int v4; // eax
  __int64 v5; // rdx

  DynamicLock_Acquire(*(_QWORD *)(a1 + 1056));
  v2 = *(_DWORD *)(a1 + 1048);
  if ( v2 )
  {
    v4 = v2 - 1;
    *(_DWORD *)(a1 + 1048) = v4;
    if ( !v4 && *(_DWORD *)(a1 + 1044) == 1 )
    {
      Interrupter_DeInitializeAfterOffload(*(_QWORD *)(a1 + 128));
      if ( *(_DWORD *)(a1 + 1044) == 1 )
      {
        v5 = *(_QWORD *)(a1 + 1240);
        *(_BYTE *)(a1 + 1248) = 0;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 3040))(WdfDriverGlobals, v5);
      }
    }
  }
  else
  {
    Debug_FreAssertMsg(
      (__int64)"Underflow detected",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
      13940);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v3, 4, 330, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids);
    }
  }
  return DynamicLock_Release(*(_QWORD *)(a1 + 1056));
}
