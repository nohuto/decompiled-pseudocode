/*
 * XREFs of UsbhHandleSuspend @ 0x1C001A5BC
 * Callers:
 *     UsbhHubDispatchPortEvent @ 0x1C0017430 (UsbhHubDispatchPortEvent.c)
 * Callees:
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhResumeSuspendedPort @ 0x1C001A698 (UsbhResumeSuspendedPort.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E4E8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C00484FC (WPP_RECORDER_SF_dDD.c)
 *     UsbhHandleOvercurrent @ 0x1C004CC94 (UsbhHandleOvercurrent.c)
 *     UsbhPortDisconnect @ 0x1C004D690 (UsbhPortDisconnect.c)
 */

__int64 __fastcall UsbhHandleSuspend(__int64 a1, unsigned int a2, unsigned __int8 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r14
  unsigned int v9; // edi
  int v10; // r8d
  __int64 v11; // r9
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  unsigned int v14; // ebx

  v6 = a3;
  v9 = 5;
  Log(a1, 1024, 1398100816, a4, a2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dDD(
      WPP_GLOBAL_Control->DeviceExtension,
      *(unsigned __int16 *)(v11 + 4),
      v10,
      44,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      *(_WORD *)(v11 + 4),
      v6,
      a2);
  v12 = a2 - 1;
  if ( !v12 )
    return (unsigned int)UsbhPortDisconnect(a1, a4, a5);
  v13 = v12 - 7;
  if ( !v13 )
    return (unsigned int)UsbhHandleOvercurrent(a1, a5);
  v14 = v13 - 262136;
  if ( v14 )
  {
    if ( v14 == 786432 )
      return (unsigned int)UsbhResumeSuspendedPort(a1, a5);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        45,
        (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids);
    Log(a1, 1024, 1937077062, *(unsigned __int16 *)(a4 + 420), v6);
    return 4;
  }
  return v9;
}
