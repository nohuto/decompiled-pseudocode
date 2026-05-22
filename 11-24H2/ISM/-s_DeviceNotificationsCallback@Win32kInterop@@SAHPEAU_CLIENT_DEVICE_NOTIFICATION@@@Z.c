/*
 * XREFs of ?s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1800F2E80
 * Callers:
 *     <none>
 * Callees:
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x18001A540 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x18001AD10 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ?ProcessCursorPosMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_CursorPositionNotification@@@Z @ 0x1800F113C (-ProcessCursorPosMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_CursorPositionNotific.c)
 *     ?ProcessInterceptMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@PEAU_MouseProcessorInterceptionCallout@@@Z @ 0x1800F1804 (-ProcessInterceptMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@PEAU_MouseProcessorInterce.c)
 *     ?IsTimestampNewest@CursorNotificationProcessor@@QEAA_N_J@Z @ 0x1800F3964 (-IsTimestampNewest@CursorNotificationProcessor@@QEAA_N_J@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Win32kInterop::s_DeviceNotificationsCallback(struct _CLIENT_DEVICE_NOTIFICATION *a1)
{
  int v2; // ecx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx
  _BYTE v7[56]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *((_DWORD *)a1 + 1) - 1;
  if ( !v2 )
  {
    InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v7, "DNI_MOUSE_INTERCEPT_MESSAGE", 0LL);
    Win32kInterop::ProcessInterceptMessage(v5, *(_DWORD *)a1, (__int64)a1 + 8);
LABEL_7:
    InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v7);
    return 1LL;
  }
  if ( v2 == 2 )
  {
    InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v7, "DNI_CURSOR_POS", 0LL);
    if ( CursorNotificationProcessor::IsTimestampNewest(
           (Win32kInterop *)((char *)Win32kInterop::s_pInterop + 440),
           *((_QWORD *)a1 + 3)) )
    {
      Win32kInterop::ProcessCursorPosMessage(v4, v3, (__int64)a1 + 8);
    }
    goto LABEL_7;
  }
  return 1LL;
}
