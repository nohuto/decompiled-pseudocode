/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800012CC
 * Callers:
 *     ?DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z @ 0x1800995B4 (-DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z.c)
 *     ?ProcessDeviceRemoval@Win32kInterop@InputETW@@SAXK@Z @ 0x18009B60C (-ProcessDeviceRemoval@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?SetForegroundActivatableEntity@ForegroundManagerServer@InputTraceLogging@@SAX_K@Z @ 0x1800AFD20 (-SetForegroundActivatableEntity@ForegroundManagerServer@InputTraceLogging@@SAX_K@Z.c)
 *     ?SpatialInteractionDLL_Loaded_@RawInputProvidersTracing@@QEAAXXZ @ 0x1800D5810 (-SpatialInteractionDLL_Loaded_@RawInputProvidersTracing@@QEAAXXZ.c)
 *     ?ReceiveInterceptMessage@ISM@InputTraceLogging@@SAXPEBURawMouseInputInfo@@@Z @ 0x1800F026C (-ReceiveInterceptMessage@ISM@InputTraceLogging@@SAXPEBURawMouseInputInfo@@@Z.c)
 *     ?ReceivedCursorPosCallback@Win32kInterop@InputETW@@SAXK@Z @ 0x1800F0330 (-ReceivedCursorPosCallback@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?ReceivedInputMessage@Win32kInterop@InputETW@@SAXK@Z @ 0x1800F0388 (-ReceivedInputMessage@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?ReceivedInterceptMessage@Win32kInterop@InputETW@@SAXK@Z @ 0x1800F03E0 (-ReceivedInterceptMessage@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?ServerCreated@VirtualTouchpad@InputTraceLogging@@SAXPEBX@Z @ 0x180134680 (-ServerCreated@VirtualTouchpad@InputTraceLogging@@SAXPEBX@Z.c)
 *     ?ServerDestroyed@VirtualTouchpad@InputTraceLogging@@SAXPEBX@Z @ 0x1801346CC (-ServerDestroyed@VirtualTouchpad@InputTraceLogging@@SAXPEBX@Z.c)
 *     ?ServerDisconnected@VirtualTouchpad@InputTraceLogging@@SAXPEBX@Z @ 0x180134718 (-ServerDisconnected@VirtualTouchpad@InputTraceLogging@@SAXPEBX@Z.c)
 *     ?CancelResize@Resize@InputETW@@SAXK@Z @ 0x18014E470 (-CancelResize@Resize@InputETW@@SAXK@Z.c)
 *     ?StartResize@Resize@InputETW@@SAXK@Z @ 0x1801504C8 (-StartResize@Resize@InputETW@@SAXK@Z.c)
 *     ?UnregisterClient@DeviceDock@InputTraceLogging@@SAXPEBX@Z @ 0x180180338 (-UnregisterClient@DeviceDock@InputTraceLogging@@SAXPEBX@Z.c)
 *     ?ProcessShutDown@InputProcessManager@InputTraceLogging@@SAXK@Z @ 0x180193E58 (-ProcessShutDown@InputProcessManager@InputTraceLogging@@SAXK@Z.c)
 *     ?RegisterProcess@InputProcessManager@InputTraceLogging@@SAXPEBX@Z @ 0x18019423C (-RegisterProcess@InputProcessManager@InputTraceLogging@@SAXPEBX@Z.c)
 *     ?UnregisterProcess@InputProcessManager@InputTraceLogging@@SAXPEBX@Z @ 0x180194B30 (-UnregisterProcess@InputProcessManager@InputTraceLogging@@SAXPEBX@Z.c)
 *     ?MPCSixDofProcessor_HomeButtonIgnored_@ISMTracing@@QEAAXXZ @ 0x1801B4B30 (-MPCSixDofProcessor_HomeButtonIgnored_@ISMTracing@@QEAAXXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180010FC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  _BYTE v6[32]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v7; // [rsp+50h] [rbp-28h]
  int v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+5Ch] [rbp-1Ch]

  v9 = 0;
  v7 = a5;
  v8 = 8;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 3, v6);
}
