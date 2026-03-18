/*
 * XREFs of UsbhNotifyPnpOfFailure_Action @ 0x140046EB8
 * Callers:
 *     Usbh_FDO_WaitPnpStop_CB @ 0x140051480 (Usbh_FDO_WaitPnpStop_CB.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x140010ED0 (UsbhWaitEventWithTimeoutEx.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x14003D980 (WPP_RECORDER_SF_.c)
 */

void __fastcall UsbhNotifyPnpOfFailure_Action(__int64 a1)
{
  _DWORD *v2; // rdi
  struct _DEVICE_OBJECT *v3; // rcx

  v2 = FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xBu,
      (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids);
  Log(a1, 16, 1852798022, a1, 0LL);
  UsbhWaitEventWithTimeoutEx(a1, v2 + 650, 500, 1900233040, 0, 0LL);
  v3 = (struct _DEVICE_OBJECT *)*((_QWORD *)v2 + 149);
  v2[643] |= 4u;
  IoInvalidateDeviceState(v3);
}
