/*
 * XREFs of UsbhPCE_ResumeDone @ 0x1400435C8
 * Callers:
 *     Usbh_PCE_Suspend_Action @ 0x1400129AC (Usbh_PCE_Suspend_Action.c)
 * Callees:
 *     UsbhDispatch_PortChangeQueueNullEvent @ 0x140008E28 (UsbhDispatch_PortChangeQueueNullEvent.c)
 *     UsbhGetPortData @ 0x14000AE30 (UsbhGetPortData.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPCE_ResumeDone(__int64 a1, int a2, unsigned __int16 a3)
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
      0x3Cu,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v9);
  }
  Log(a1, 512, 1346712113, 0LL, v3);
  result = UsbhGetPortData(a1, (unsigned __int16)v3, v6, v7);
  if ( result )
    return UsbhDispatch_PortChangeQueueNullEvent(a1, result, 21, a2);
  return result;
}
