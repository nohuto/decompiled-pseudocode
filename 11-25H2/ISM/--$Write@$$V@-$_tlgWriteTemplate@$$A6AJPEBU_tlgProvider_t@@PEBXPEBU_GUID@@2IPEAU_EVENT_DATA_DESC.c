/*
 * XREFs of ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18006BF2C
 * Callers:
 *     ?DeliverDeviceEnumerationCompleted@InputTarget@InputETW@@SAXXZ @ 0x180031240 (-DeliverDeviceEnumerationCompleted@InputTarget@InputETW@@SAXXZ.c)
 *     ?NavigationDisabled@ControllerNavigationManager@InputETW@@SAXXZ @ 0x180039828 (-NavigationDisabled@ControllerNavigationManager@InputETW@@SAXXZ.c)
 *     ?CursorProcessorTriggerUpdateInputStarted@Cursor@InputTraceLogging@@SAXXZ @ 0x180051150 (-CursorProcessorTriggerUpdateInputStarted@Cursor@InputTraceLogging@@SAXXZ.c)
 *     ?OnPenEventsClientProxyDisconnected@PenEvents@InputTraceLogging@@SAXXZ @ 0x180080338 (-OnPenEventsClientProxyDisconnected@PenEvents@InputTraceLogging@@SAXXZ.c)
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x180086910 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 *     ?CreatePenEventsClientProxy@PenEvents@InputTraceLogging@@SAXXZ @ 0x180091EE8 (-CreatePenEventsClientProxy@PenEvents@InputTraceLogging@@SAXXZ.c)
 *     ?Initialize@ForegroundManagerServer@InputTraceLogging@@SAXXZ @ 0x18009BC38 (-Initialize@ForegroundManagerServer@InputTraceLogging@@SAXXZ.c)
 *     ?MPCManager_OnMouseSnappedToGaze_@ISMTracing@@QEAAXXZ @ 0x1800B8FD0 (-MPCManager_OnMouseSnappedToGaze_@ISMTracing@@QEAAXXZ.c)
 *     ?Disconnected@InputProcess@InputTraceLogging@@SAXXZ @ 0x1800C9EB0 (-Disconnected@InputProcess@InputTraceLogging@@SAXXZ.c)
 *     ?Start@InputProcess@InputTraceLogging@@SAXXZ @ 0x1800CA634 (-Start@InputProcess@InputTraceLogging@@SAXXZ.c)
 *     ?Stop@InputProcess@InputTraceLogging@@SAXXZ @ 0x1800CA674 (-Stop@InputProcess@InputTraceLogging@@SAXXZ.c)
 *     ??$_tlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$03@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1800D1A68 (--$_tlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$03@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?HeadEventHandlerDisabled_@RawInputProvidersTracing@@QEAAXXZ @ 0x1800D3718 (-HeadEventHandlerDisabled_@RawInputProvidersTracing@@QEAAXXZ.c)
 *     ?SpatialInputControllerCollection_Released_@RawInputProvidersTracing@@QEAAXXZ @ 0x1800D57D0 (-SpatialInputControllerCollection_Released_@RawInputProvidersTracing@@QEAAXXZ.c)
 *     ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1800E49BC (--$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     _lambda_2dd88a6eb66ca801122510a4467177bc_::operator() @ 0x1800E4C0C (_lambda_2dd88a6eb66ca801122510a4467177bc_--operator().c)
 *     ?CursorProcessorCreateCursorForPen@Cursor@InputTraceLogging@@SAXXZ @ 0x180145860 (-CursorProcessorCreateCursorForPen@Cursor@InputTraceLogging@@SAXXZ.c)
 *     ?NavigationPaused@ControllerNavigationManager@InputETW@@SAXXZ @ 0x180174D64 (-NavigationPaused@ControllerNavigationManager@InputETW@@SAXXZ.c)
 *     ?WriteOutput@Haptics@InputTraceLogging@@SAXXZ @ 0x18018B18C (-WriteOutput@Haptics@InputTraceLogging@@SAXXZ.c)
 *     ?Disconnected@InputProcessProxy@InputTraceLogging@@SAXXZ @ 0x18019303C (-Disconnected@InputProcessProxy@InputTraceLogging@@SAXXZ.c)
 *     ?StartProcess@InputProcessManager@InputTraceLogging@@SAXXZ @ 0x180194918 (-StartProcess@InputProcessManager@InputTraceLogging@@SAXXZ.c)
 *     ?StopProcess@InputProcessManager@InputTraceLogging@@SAXXZ @ 0x180194A30 (-StopProcess@InputProcessManager@InputTraceLogging@@SAXXZ.c)
 *     ?RecognizeTwoFingerTap@Magnifier@InputTraceLogging@@SAXXZ @ 0x1801A663C (-RecognizeTwoFingerTap@Magnifier@InputTraceLogging@@SAXXZ.c)
 *     ?OnHotKeyAcknowledged@HotKeyProcessor@@UEAAJXZ @ 0x1801C4760 (-OnHotKeyAcknowledged@HotKeyProcessor@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        const GUID *a4)
{
  ULONGLONG v4; // rax
  unsigned __int16 *v5; // rdx
  EVENT_DESCRIPTOR v7; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+48h] [rbp-30h] BYREF
  unsigned __int16 *v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+64h] [rbp-14h]

  *(_DWORD *)&v7.Id = *a2 << 24;
  *(_DWORD *)&v7.Level = *(unsigned __int16 *)(a2 + 1);
  v4 = *(_QWORD *)(a2 + 3);
  v5 = (unsigned __int16 *)(a2 + 11);
  v7.Keyword = v4;
  v8.Ptr = *(_QWORD *)(a1 + 8);
  v8.Size = *(unsigned __int16 *)v8.Ptr;
  LODWORD(v4) = *v5;
  v8.Reserved = 2;
  v9 = v5;
  v10 = v4;
  v11 = 1;
  return EventWriteTransfer(*(_QWORD *)(a1 + 32), &v7, a3, a4, 2u, &v8);
}
