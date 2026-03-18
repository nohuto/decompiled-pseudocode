/*
 * XREFs of UsbhPCE_wRun @ 0x14000FB64
 * Callers:
 *     UsbhHubProcessChangeWorker @ 0x14000F8C0 (UsbhHubProcessChangeWorker.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x140010ED0 (UsbhWaitEventWithTimeoutEx.c)
 * Callees:
 *     UsbhDispatch_PortChangeQueueNullEvent @ 0x140008E28 (UsbhDispatch_PortChangeQueueNullEvent.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 */

LONG __fastcall UsbhPCE_wRun(__int64 a1, int a2, __int64 a3)
{
  int v5; // edi

  v5 = a1;
  FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      57,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(a3 + 4));
  UsbhDispatch_PortChangeQueueNullEvent(v5, a3, 5, a2);
  return KeSetEvent((PRKEVENT)(a3 + 2464), 0, 0);
}
