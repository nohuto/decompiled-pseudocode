/*
 * XREFs of UsbhInitRetryTimer @ 0x1400507B0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhQueueWorkItemWithRetry @ 0x14001CB60 (UsbhQueueWorkItemWithRetry.c)
 *     WPP_RECORDER_SF_ @ 0x14003D980 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhInitRetryTimer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  FdoExt(a2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xAu,
      (__int64)&WPP_88c51487de8b36c95d93828ad72ed338_Traceguids);
  return UsbhQueueWorkItemWithRetry(a2, 0LL, (__int64)UsbhInitCallbackWorker, 1u, a4, 0, 0x49577473u);
}
