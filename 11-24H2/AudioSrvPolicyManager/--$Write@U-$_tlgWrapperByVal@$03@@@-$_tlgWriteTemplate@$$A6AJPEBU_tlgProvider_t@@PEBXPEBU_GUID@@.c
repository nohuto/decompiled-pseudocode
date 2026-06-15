/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800019F0
 * Callers:
 *     ?RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z @ 0x180010F70 (-RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z.c)
 *     _lambda_b2025209d5eaef5f99f9deda65cc799e_::operator() @ 0x18003DB6C (_lambda_b2025209d5eaef5f99f9deda65cc799e_--operator().c)
 *     ?LoadUserSettings@@YAXPEAVTSSession@@PEAUHKEY__@@@Z @ 0x18003E500 (-LoadUserSettings@@YAXPEAVTSSession@@PEAUHKEY__@@@Z.c)
 *     ?ResetUserSettings@@YAXPEAVTSSession@@@Z @ 0x18003E828 (-ResetUserSettings@@YAXPEAVTSSession@@@Z.c)
 *     ?TS_ServiceStart@@YAXXZ @ 0x18003EA74 (-TS_ServiceStart@@YAXXZ.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x18003ED14 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x18003F688 (-TsSessionIdConnect@@YAXK@Z.c)
 *     ?TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z @ 0x1800404F0 (-TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180013DD0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800201B0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        __int64 a1,
        __int64 a2)
{
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL);
}
