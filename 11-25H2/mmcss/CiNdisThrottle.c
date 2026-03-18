/*
 * XREFs of CiNdisThrottle @ 0x1C000E6E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x1C0004960 (WPP_SF_d.c)
 *     __security_check_cookie @ 0x1C0004EE0 (__security_check_cookie.c)
 */

void __fastcall CiNdisThrottle(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  NTSTATUS v2; // edi
  bool i; // bl
  int DpcData; // ecx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  _QWORD InputBuffer[2]; // [rsp+60h] [rbp-28h] BYREF

  InputBuffer[0] = 1048577LL;
  InputBuffer[1] = -1LL;
  IoStatusBlock = 0LL;
  v2 = 0;
  ExAcquirePushLockExclusiveEx(&WPP_MAIN_CB.Queue, 0LL);
  for ( i = LODWORD(WPP_MAIN_CB.DeviceExtension) != 0;
        (LODWORD(WPP_MAIN_CB.DeviceExtension) != 0) != CiNdisThrottledDown;
        i = LODWORD(WPP_MAIN_CB.DeviceExtension) != 0 )
  {
    WPP_MAIN_CB.Queue.ListEntry.Blink = 0LL;
    ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.Queue, 0LL);
    DpcData = -1;
    if ( i )
      DpcData = (int)WPP_MAIN_CB.Dpc.DpcData;
    HIDWORD(InputBuffer[0]) = DpcData;
    v2 = ZwDeviceIoControlFile(CiNdisDeviceHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x170040u, InputBuffer, 0x10u, 0LL, 0);
    ExAcquirePushLockExclusiveEx(&WPP_MAIN_CB.Queue, 0LL);
    if ( v2 >= 0 )
      CiNdisThrottledDown = i;
    if ( i == (LODWORD(WPP_MAIN_CB.DeviceExtension) != 0) )
      break;
  }
  CiNdisThrottleInProgress = 0;
  WPP_MAIN_CB.Queue.ListEntry.Blink = 0LL;
  ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.Queue, 0LL);
  if ( v2 < 0 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    WPP_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xDu,
      (__int64)&WPP_2ebbd117cad538f8ca4ca83992730554_Traceguids,
      v2);
}
