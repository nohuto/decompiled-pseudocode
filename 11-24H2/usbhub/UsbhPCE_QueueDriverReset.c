/*
 * XREFs of UsbhPCE_QueueDriverReset @ 0x1400434E0
 * Callers:
 *     UsbhSyncResetDeviceInternal @ 0x140047A14 (UsbhSyncResetDeviceInternal.c)
 * Callees:
 *     UsbhDispatch_PortChangeQueueEvent @ 0x140008E50 (UsbhDispatch_PortChangeQueueEvent.c)
 *     UsbhGetPortData @ 0x14000AE30 (UsbhGetPortData.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPCE_QueueDriverReset(__int64 a1, unsigned __int16 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v6; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 result; // rax
  int v12; // [rsp+28h] [rbp-20h]

  v6 = a2;
  FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v12 = v6;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x51u,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v12);
  }
  Log(a1, 512, 1953452114, 0LL, v6);
  result = UsbhGetPortData(a1, (unsigned __int16)v6, v9, v10);
  if ( result )
    return UsbhDispatch_PortChangeQueueEvent(a1, result, 15, a4, a3, 1, a5);
  return result;
}
