/*
 * XREFs of ?ProcessPnpNotification@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x1800767A0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_2b41a082a50d31d24644deaedcc451d5__void__MIT_PNP_DEVICE_NOTIFICATION_MESSAGE_const___::_Do_call @ 0x180076730 (std--_Func_impl_no_alloc__lambda_2b41a082a50d31d24644deaedcc451d5__void__MIT_PNP_DEVICE_NOTIFICA.c)
 * Callees:
 *     ?ProcessDeviceRemoval@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x18004CA4C (-ProcessDeviceRemoval@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z.c)
 *     ?ProcessDeviceArrival@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@W4InputType@@@Z @ 0x18004CC5C (-ProcessDeviceArrival@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@W4InputType@.c)
 *     ?ReceivePnpNotification@ISM@InputTraceLogging@@SAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x18007E844 (-ReceivePnpNotification@ISM@InputTraceLogging@@SAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z.c)
 *     ?ComputePnpActionAndInputType@Win32kInterop@@AEBA?AW4PnPHandlingAction@@PEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@PEAW4InputType@@@Z @ 0x18009A1B4 (-ComputePnpActionAndInputType@Win32kInterop@@AEBA-AW4PnPHandlingAction@@PEBU_MIT_PNP_DEVICE_NOTI.c)
 *     ?ProcessDeviceQueryRemove@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x1800F1220 (-ProcessDeviceQueryRemove@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z.c)
 */

void __fastcall Win32kInterop::ProcessPnpNotification(
        Win32kInterop *this,
        const struct _MIT_PNP_DEVICE_NOTIFICATION_MESSAGE *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  const struct _MIT_PNP_DEVICE_NOTIFICATION_MESSAGE *v6; // rdx
  const struct _MIT_PNP_DEVICE_NOTIFICATION_MESSAGE *v7; // rdx
  unsigned int v8; // [rsp+38h] [rbp+10h] BYREF

  InputTraceLogging::ISM::ReceivePnpNotification(a2);
  if ( *((_DWORD *)a2 + 2) == 2 )
  {
    v8 = 0;
    if ( (unsigned int)Win32kInterop::ComputePnpActionAndInputType(v4, a2, &v8) )
      Win32kInterop::ProcessDeviceArrival(this, v5, v8);
  }
  else if ( *((_DWORD *)a2 + 2) == 3 )
  {
    if ( (unsigned int)Win32kInterop::ComputePnpActionAndInputType(v4, a2, &v8) )
      Win32kInterop::ProcessDeviceRemoval(this, v6);
  }
  else if ( *((_DWORD *)a2 + 2) == 6 && (unsigned int)Win32kInterop::ComputePnpActionAndInputType(v4, a2, &v8) )
  {
    Win32kInterop::ProcessDeviceQueryRemove(this, v7);
  }
}
