/*
 * XREFs of UsbhResetHubUpstreamPort @ 0x14004B9E0
 * Callers:
 *     UsbhFdoSetD0Cold @ 0x1400227C4 (UsbhFdoSetD0Cold.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhSyncSendInternalIoctl @ 0x14000CDF0 (UsbhSyncSendInternalIoctl.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x14003D980 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhResetHubUpstreamPort(__int64 a1)
{
  _UNICODE_STRING *v2; // r9
  NTSTATUS v3; // eax
  unsigned int v4; // r10d

  FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xAu,
      (__int64)&WPP_ba2e62575cae3d6a8bb98b5a8ed3568a_Traceguids);
  Log(a1, 8, 1381192766, 0LL, 0LL);
  v3 = UsbhSyncSendInternalIoctl(a1, 0x220007u, 0LL, v2);
  Log(a1, 8, 1381192764, v3, 0LL);
  return v4;
}
