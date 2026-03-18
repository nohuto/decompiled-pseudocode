/*
 * XREFs of UsbhInitCallbackWorker @ 0x140050560
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhDisableTimerObject @ 0x140013F2C (UsbhDisableTimerObject.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x14003D980 (WPP_RECORDER_SF_.c)
 *     Usbh_FDO_Pnp_State @ 0x140050DB4 (Usbh_FDO_Pnp_State.c)
 */

__int64 __fastcall UsbhInitCallbackWorker(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rsi
  _DWORD *v6; // rbp

  v4 = a2;
  v6 = FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xDu,
      (__int64)&WPP_88c51487de8b36c95d93828ad72ed338_Traceguids);
  Log(a1, 2, 1766015607, a1, v4);
  UsbhDisableTimerObject(a1, *((_QWORD *)v6 + 346));
  return Usbh_FDO_Pnp_State(a3, 8LL);
}
