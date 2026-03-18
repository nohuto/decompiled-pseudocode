/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x140006E04
 * Callers:
 *     ?RemoveUsb4HRPowerRefInternal@Usb4HostRouterPoFxRefv2@DxgMonitor@@AEAAJXZ @ 0x140278668 (-RemoveUsb4HRPowerRefInternal@Usb4HostRouterPoFxRefv2@DxgMonitor@@AEAAJXZ.c)
 *     ?StartVSync@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z @ 0x14028320C (-StartVSync@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z.c)
 *     ?LogStartStatus@BLTQUEUE_REMOTE_VSYNC_SOURCE@@AEAAXJW4StartExitReason@1@@Z @ 0x140283ABC (-LogStartStatus@BLTQUEUE_REMOTE_VSYNC_SOURCE@@AEAAXJW4StartExitReason@1@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400401E4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD v7[5]; // [rsp+30h] [rbp-58h] BYREF
  int v8; // [rsp+58h] [rbp-30h]
  int v9; // [rsp+5Ch] [rbp-2Ch]
  __int64 v10; // [rsp+60h] [rbp-28h]
  int v11; // [rsp+68h] [rbp-20h]
  int v12; // [rsp+6Ch] [rbp-1Ch]

  v10 = a6;
  v12 = 0;
  v11 = 4;
  v7[4] = a5;
  v9 = 0;
  v8 = 4;
  return tlgWriteTransfer_EtwWriteTransfer(&dword_14015E5A8, a2, 0LL, 0LL, 4, v7);
}
