/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180003678
 * Callers:
 *     ?ReadFeatureReport_@RawInputProvidersTracing@@QEAAXJKE@Z @ 0x1800D2A04 (-ReadFeatureReport_@RawInputProvidersTracing@@QEAAXJKE@Z.c)
 *     ?LogSendOnComponentWindowActivated@BamoCUIHostInputObjectProxyImpl@BamoImpl@@AEAAX_N@Z @ 0x1801317C0 (-LogSendOnComponentWindowActivated@BamoCUIHostInputObjectProxyImpl@BamoImpl@@AEAAX_N@Z.c)
 *     ?LogSendOnInputDisabledStateChanged@BamoCUIComponentInputObjectProxyImpl@BamoImpl@@AEAAX_N@Z @ 0x180132540 (-LogSendOnInputDisabledStateChanged@BamoCUIComponentInputObjectProxyImpl@BamoImpl@@AEAAX_N@Z.c)
 *     ?LogSendReceivingInput@BamoVirtualTouchpadControllerProxyImpl@BamoImpl@@AEAAX_N@Z @ 0x1801359D8 (-LogSendReceivingInput@BamoVirtualTouchpadControllerProxyImpl@BamoImpl@@AEAAX_N@Z.c)
 *     ?LogSendDockEventsEnabledChanged@BamoPenEventsClientProxyImpl@BamoImpl@@AEAAX_N@Z @ 0x18019557C (-LogSendDockEventsEnabledChanged@BamoPenEventsClientProxyImpl@BamoImpl@@AEAAX_N@Z.c)
 *     ?LogSendDocked@BamoPenEventsClientProxyImpl@BamoImpl@@AEAAX_N@Z @ 0x1801955F4 (-LogSendDocked@BamoPenEventsClientProxyImpl@BamoImpl@@AEAAX_N@Z.c)
 *     ?LogSendTailButtonClicked@BamoPenEventsClientProxyImpl@BamoImpl@@AEAAX_N@Z @ 0x18019566C (-LogSendTailButtonClicked@BamoPenEventsClientProxyImpl@BamoImpl@@AEAAX_N@Z.c)
 *     ?LogSendTailButtonDoubleClicked@BamoPenEventsClientProxyImpl@BamoImpl@@AEAAX_N@Z @ 0x1801956E4 (-LogSendTailButtonDoubleClicked@BamoPenEventsClientProxyImpl@BamoImpl@@AEAAX_N@Z.c)
 *     ?LogSendTailButtonEventsEnabledChanged@BamoPenEventsClientProxyImpl@BamoImpl@@AEAAX_N@Z @ 0x18019575C (-LogSendTailButtonEventsEnabledChanged@BamoPenEventsClientProxyImpl@BamoImpl@@AEAAX_N@Z.c)
 *     ?LogSendTailButtonLongPressed@BamoPenEventsClientProxyImpl@BamoImpl@@AEAAX_N@Z @ 0x1801957D4 (-LogSendTailButtonLongPressed@BamoPenEventsClientProxyImpl@BamoImpl@@AEAAX_N@Z.c)
 *     ?LogSendUndocked@BamoPenEventsClientProxyImpl@BamoImpl@@AEAAX_N@Z @ 0x1801958C4 (-LogSendUndocked@BamoPenEventsClientProxyImpl@BamoImpl@@AEAAX_N@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180011720 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
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
  v8[9] = 1LL;
  v8[7] = 4LL;
  v8[5] = 4LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 5, v8);
}
