/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x180004FC8
 * Callers:
 *     ?LogReceiveUnregisterGestureDragClient@BamoGestureServicesPrincipalImpl@BamoImpl@@AEAAX_KPEAVBamoDragManagerClientProxy@@@Z @ 0x18008E2D8 (-LogReceiveUnregisterGestureDragClient@BamoGestureServicesPrincipalImpl@BamoImpl@@AEAAX_KPEAVBam.c)
 *     ?LogReceiveSetCursorShellMagnification@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@AEAAX_KM@Z @ 0x1800F5BB4 (-LogReceiveSetCursorShellMagnification@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@AEAAX_K.c)
 *     ?LogSendSetCursorShellMagnification@BamoSystemCursorControllerProxyImpl@BamoImpl@@AEAAX_KM@Z @ 0x18011A0A8 (-LogSendSetCursorShellMagnification@BamoSystemCursorControllerProxyImpl@BamoImpl@@AEAAX_KM@Z.c)
 *     ?LogSendUnregisterGestureDragClient@BamoGestureServicesProxyImpl@BamoImpl@@AEAAX_KI@Z @ 0x18011A4BC (-LogSendUnregisterGestureDragClient@BamoGestureServicesProxyImpl@BamoImpl@@AEAAX_KI@Z.c)
 *     ?LogSendTouchpadActionPerformed@BamoShellGesturesClientProxyImpl@BamoImpl@@AEAAX_JW4TouchpadGlobalAction@Input@Internal@UI@Windows@@@Z @ 0x180157E38 (-LogSendTouchpadActionPerformed@BamoShellGesturesClientProxyImpl@BamoImpl@@AEAAX_JW4TouchpadGlob.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180010FC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  _BYTE v9[32]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v10; // [rsp+50h] [rbp-19h]
  __int64 v11; // [rsp+58h] [rbp-11h]
  __int64 v12; // [rsp+60h] [rbp-9h]
  __int64 v13; // [rsp+68h] [rbp-1h]
  __int64 v14; // [rsp+70h] [rbp+7h]
  __int64 v15; // [rsp+78h] [rbp+Fh]
  __int64 v16; // [rsp+80h] [rbp+17h]
  __int64 v17; // [rsp+88h] [rbp+1Fh]

  v16 = a8;
  v14 = a7;
  v12 = a6;
  v10 = a5;
  v17 = 4LL;
  v15 = 8LL;
  v13 = 4LL;
  v11 = 4LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 6, v9);
}
