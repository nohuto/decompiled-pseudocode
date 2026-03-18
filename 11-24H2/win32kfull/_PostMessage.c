/*
 * XREFs of _PostMessage @ 0x140066460
 * Callers:
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1400322FC (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagWND@@QEAU_FILE_IO_COMPLETION_INFORMATION@@_K@Z @ 0x140066188 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagWND@@QEAU_FILE_IO_COMPLETION_INFORMATION@@_K@Z.c)
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140066E58 (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     xxxCancelMouseMoveTracking @ 0x140067698 (xxxCancelMouseMoveTracking.c)
 *     xxxHandleMenuMessages @ 0x14006D0F0 (xxxHandleMenuMessages.c)
 *     _PostMessageCheckIL @ 0x140085AB8 (_PostMessageCheckIL.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x140104018 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     PostPointerEventMessage @ 0x14012D8F0 (PostPointerEventMessage.c)
 *     PostDeviceNotification @ 0x14012F608 (PostDeviceNotification.c)
 *     PowerOffGdi @ 0x140135140 (PowerOffGdi.c)
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140166C88 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x14018DF04 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     EditionPostInertiaMessage @ 0x1401A0430 (EditionPostInertiaMessage.c)
 *     ?FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z @ 0x1401D05B4 (-FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z.c)
 *     _SetMagnificationInputTransform @ 0x1401FCC98 (_SetMagnificationInputTransform.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x14020890C (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 *     NtUserEndMenu @ 0x1402125E0 (NtUserEndMenu.c)
 *     ?DismissTooltips@TooltipDismiss@@YAXXZ @ 0x1402246D4 (-DismissTooltips@TooltipDismiss@@YAXXZ.c)
 *     SetMouseTrails @ 0x140239574 (SetMouseTrails.c)
 *     xxxDDETrackSendHook @ 0x14024EC24 (xxxDDETrackSendHook.c)
 *     ?xxxReportWindowHotKey@@YAXPEBUtagHOTKEY@@PEAUtagWND@@W4ReportHotKeyHint@@@Z @ 0x1402895C8 (-xxxReportWindowHotKey@@YAXPEBUtagHOTKEY@@PEAUtagWND@@W4ReportHotKeyHint@@@Z.c)
 *     ?_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z @ 0x1402A4C80 (-_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z.c)
 *     xxxCancelTrackingForThread @ 0x1402AAEF0 (xxxCancelTrackingForThread.c)
 *     ?AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z @ 0x1402AF72C (-AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z.c)
 *     PsW32ScreenSaver_Show @ 0x1402B5170 (PsW32ScreenSaver_Show.c)
 *     _anonymous_namespace_::SeverWindowManagementConnectionToShell @ 0x1402C0A44 (_anonymous_namespace_--SeverWindowManagementConnectionToShell.c)
 * Callees:
 *     _PostMessageExtended @ 0x14006649C (_PostMessageExtended.c)
 */

__int64 __fastcall PostMessage(int a1, int a2, int a3, int a4)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // rcx

  v4 = 0;
  v5 = PostMessageExtended(a1, a2, a3, a4, 0LL);
  if ( v5 < (unsigned __int64)MmSystemRangeStart )
    return (unsigned int)v5;
  LOBYTE(v4) = v5 != 0;
  return v4;
}
