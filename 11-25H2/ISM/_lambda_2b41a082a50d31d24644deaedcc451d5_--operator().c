/*
 * XREFs of _lambda_2b41a082a50d31d24644deaedcc451d5_::operator() @ 0x1800507DC
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_2b41a082a50d31d24644deaedcc451d5__void__MIT_PNP_DEVICE_NOTIFICATION_MESSAGE_const___::_Do_call @ 0x180080420 (std--_Func_impl_no_alloc__lambda_2b41a082a50d31d24644deaedcc451d5__void__MIT_PNP_DEVICE_NOTIFICA.c)
 * Callees:
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180019F70 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x18001A740 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?ProcessDeviceRemoval@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x1800505CC (-ProcessDeviceRemoval@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z.c)
 *     ?ReceivePnpNotification@ISM@InputTraceLogging@@SAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x180050890 (-ReceivePnpNotification@ISM@InputTraceLogging@@SAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z.c)
 *     ?ProcessDeviceArrival@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@W4InputType@@@Z @ 0x18005094C (-ProcessDeviceArrival@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@W4InputType@.c)
 *     ?ComputePnpActionAndInputType@Win32kInterop@@AEBA?AW4PnPHandlingAction@@PEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@PEAW4InputType@@@Z @ 0x180099FE4 (-ComputePnpActionAndInputType@Win32kInterop@@AEBA-AW4PnPHandlingAction@@PEBU_MIT_PNP_DEVICE_NOTI.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_2b41a082a50d31d24644deaedcc451d5_::operator()(Win32kInterop **a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  const struct _MIT_PNP_DEVICE_NOTIFICATION_MESSAGE *v6; // rdx
  unsigned int v7; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v8[56]; // [rsp+28h] [rbp-50h] BYREF

  InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v8, "MITEP_PNP_DEVICE_NOTIFICATION", 0LL);
  InputTraceLogging::ISM::ReceivePnpNotification((const struct _MIT_PNP_DEVICE_NOTIFICATION_MESSAGE *)a2);
  if ( *(_DWORD *)(a2 + 8) == 2 )
  {
    v7 = 0;
    if ( (unsigned int)Win32kInterop::ComputePnpActionAndInputType(v4, a2, &v7) )
      Win32kInterop::ProcessDeviceArrival(*a1, v5, v7);
  }
  else if ( *(_DWORD *)(a2 + 8) == 3 && (unsigned int)Win32kInterop::ComputePnpActionAndInputType(v4, a2, &v7) )
  {
    Win32kInterop::ProcessDeviceRemoval(*a1, v6);
  }
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v8);
}
