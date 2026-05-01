/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x1800056BC
 * Callers:
 *     ??$SnapSignalDataCreated@AEAW4SnapEventType@DataEngine@TaskFlow@Shell@Internal@Windows@@AEA_JAEB_K@TaskFlowDataEngineTelemetry@@SAXAEAW4SnapEventType@DataEngine@TaskFlow@Shell@Internal@Windows@@AEA_JAEB_K@Z @ 0x180401684 (--$SnapSignalDataCreated@AEAW4SnapEventType@DataEngine@TaskFlow@Shell@Internal@Windows@@AEA_JAEB.c)
 *     ??$ShowTouchEdgeGripper@AEAHAEAPEAUIImmersiveMonitor@@AEAPEAUITouchEdgeGripperEventHandler@@@TouchEdgeGestureTelemetry@@SAXAEAHAEAPEAUIImmersiveMonitor@@AEAPEAUITouchEdgeGripperEventHandler@@@Z @ 0x18058C338 (--$ShowTouchEdgeGripper@AEAHAEAPEAUIImmersiveMonitor@@AEAPEAUITouchEdgeGripperEventHandler@@@Tou.c)
 *     ?ReportEdgeGesture_@TouchEdgeGestureTelemetry@@QEAAXW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@AEBUInputGestureOperation@Input@5UI@67@@Z @ 0x180593FF4 (-ReportEdgeGesture_@TouchEdgeGestureTelemetry@@QEAAXW4EdgeLocation@Animations@Shell@Internal@Win.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800CC51C (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        __int64 a1,
        __int64 a2)
{
  return tlgWriteTransfer_EventWriteTransfer(a1, a2);
}
