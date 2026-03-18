/*
 * XREFs of UsbhPCE_BusDisconnect @ 0x140042FFC
 * Callers:
 *     UsbhPdoDevicePowerState @ 0x140014968 (UsbhPdoDevicePowerState.c)
 *     UsbhOvercurrentResetWorker @ 0x14003F0B0 (UsbhOvercurrentResetWorker.c)
 *     UsbhBusDisconnect_Action @ 0x14004077C (UsbhBusDisconnect_Action.c)
 * Callees:
 *     UsbhDispatch_PortChangeQueueNullEvent @ 0x140008E28 (UsbhDispatch_PortChangeQueueNullEvent.c)
 *     UsbhGetPortData @ 0x14000AE30 (UsbhGetPortData.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPCE_BusDisconnect(__int64 a1, int a2, unsigned __int16 a3)
{
  __int64 v3; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 result; // rax
  int v9; // [rsp+28h] [rbp-10h]

  v3 = a3;
  FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v9 = v3;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x41u,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v9);
  }
  Log(a1, 512, 1346711857, 0LL, v3);
  result = UsbhGetPortData(a1, (unsigned __int16)v3, v6, v7);
  if ( result )
    return UsbhDispatch_PortChangeQueueNullEvent(a1, result, 11, a2);
  return result;
}
