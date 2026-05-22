/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180004F34
 * Callers:
 *     ?LogReceiveCreateCursorForDevice@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@AEAAX_K@Z @ 0x1800F5918 (-LogReceiveCreateCursorForDevice@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@AEAAX_K@Z.c)
 *     ?LogSendCreateCursorForDevice@BamoSystemCursorControllerProxyImpl@BamoImpl@@AEAAX_K@Z @ 0x180118E3C (-LogSendCreateCursorForDevice@BamoSystemCursorControllerProxyImpl@BamoImpl@@AEAAX_K@Z.c)
 *     ?LogSendDeviceRemoved@BamoSystemCursorControllerClientProxyImpl@BamoImpl@@AEAAX_K@Z @ 0x1801190C8 (-LogSendDeviceRemoved@BamoSystemCursorControllerClientProxyImpl@BamoImpl@@AEAAX_K@Z.c)
 *     ?LogSendAnimationEnded@BamoDragManagerClientProxyImpl@BamoImpl@@AEAAX_K@Z @ 0x1801432F0 (-LogSendAnimationEnded@BamoDragManagerClientProxyImpl@BamoImpl@@AEAAX_K@Z.c)
 *     ?ButtonEvent@RawButtonProcessor@InputETW@@SAXKKK@Z @ 0x1801AAE80 (-ButtonEvent@RawButtonProcessor@InputETW@@SAXKKK@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180010FC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  _QWORD v8[10]; // [rsp+30h] [rbp-68h] BYREF

  v8[8] = a7;
  v8[6] = a6;
  v8[4] = a5;
  v8[9] = 8LL;
  v8[7] = 4LL;
  v8[5] = 4LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 5, v8);
}
