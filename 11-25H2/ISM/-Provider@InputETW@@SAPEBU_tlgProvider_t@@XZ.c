/*
 * XREFs of ?Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ @ 0x180017070
 * Callers:
 *     ?OnFocusRequest@ContextualProcessing@InputETW@@SAXPEBG@Z @ 0x180017018 (-OnFocusRequest@ContextualProcessing@InputETW@@SAXPEBG@Z.c)
 *     ?OnInputReport@InputStateManager@InputETW@@SAXPEAUInputInfo@@@Z @ 0x18001C488 (-OnInputReport@InputStateManager@InputETW@@SAXPEAUInputInfo@@@Z.c)
 *     ?DeliverDeviceAttach@InputTarget@InputETW@@SAXPEAUDeviceInfo@@@Z @ 0x180030E90 (-DeliverDeviceAttach@InputTarget@InputETW@@SAXPEAUDeviceInfo@@@Z.c)
 *     ?OnFocusChanged@InputRouter@InputETW@@SAXPEAUIInputTarget@@@Z @ 0x180030F90 (-OnFocusChanged@InputRouter@InputETW@@SAXPEAUIInputTarget@@@Z.c)
 *     ?DeliverDeviceEnumerationCompleted@InputTarget@InputETW@@SAXXZ @ 0x180031240 (-DeliverDeviceEnumerationCompleted@InputTarget@InputETW@@SAXXZ.c)
 *     ?DeliverDeviceRemoval@InputTarget@InputETW@@SAXPEAUDeviceInfo@@@Z @ 0x180031310 (-DeliverDeviceRemoval@InputTarget@InputETW@@SAXPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@InputStateManager@InputETW@@SAXPEAUDeviceInfo@@@Z @ 0x1800314A8 (-OnDeviceRemoval@InputStateManager@InputETW@@SAXPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@InputStateManager@InputETW@@SAXPEAUDeviceInfo@@@Z @ 0x180031520 (-OnDeviceAttach@InputStateManager@InputETW@@SAXPEAUDeviceInfo@@@Z.c)
 *     ?ButtonEvent@ButtonProcessor@InputETW@@SAXK_N@Z @ 0x180039478 (-ButtonEvent@ButtonProcessor@InputETW@@SAXK_N@Z.c)
 *     ?ProcessDeviceArrival@Win32kInterop@InputETW@@SAXK@Z @ 0x180039724 (-ProcessDeviceArrival@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?NavigationDisabled@ControllerNavigationManager@InputETW@@SAXXZ @ 0x180039828 (-NavigationDisabled@ControllerNavigationManager@InputETW@@SAXXZ.c)
 *     ?FeedAnimationData@InputGesture@InputETW@@SAXPEBG_K11UtagPOINTF@@22_N@Z @ 0x180039DC4 (-FeedAnimationData@InputGesture@InputETW@@SAXPEBG_K11UtagPOINTF@@22_N@Z.c)
 *     ?GestureInProgress@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2@Z @ 0x180058DF8 (-GestureInProgress@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System.c)
 *     ?ProcessorRegistered@ContextualProcessing@InputETW@@SAXPEBG@Z @ 0x180059750 (-ProcessorRegistered@ContextualProcessing@InputETW@@SAXPEBG@Z.c)
 *     ?GestureCancelled@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2@Z @ 0x180097FD8 (-GestureCancelled@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@.c)
 *     ?DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z @ 0x1800995B4 (-DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z.c)
 *     ?NavigationEnabled@ControllerNavigationManager@InputETW@@SAXUtagRECT@@UtagPOINT@@@Z @ 0x180099D40 (-NavigationEnabled@ControllerNavigationManager@InputETW@@SAXUtagRECT@@UtagPOINT@@@Z.c)
 *     ?ProcessDeviceRemoval@Win32kInterop@InputETW@@SAXK@Z @ 0x18009B60C (-ProcessDeviceRemoval@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?ReceivedCursorPosCallback@Win32kInterop@InputETW@@SAXK@Z @ 0x1800F0330 (-ReceivedCursorPosCallback@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?ReceivedInputMessage@Win32kInterop@InputETW@@SAXK@Z @ 0x1800F0388 (-ReceivedInputMessage@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?ReceivedInterceptMessage@Win32kInterop@InputETW@@SAXK@Z @ 0x1800F03E0 (-ReceivedInterceptMessage@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?AnimationStarted@InputGesture@InputETW@@SAXPEBGK_K1@Z @ 0x18013FD1C (-AnimationStarted@InputGesture@InputETW@@SAXPEBGK_K1@Z.c)
 *     ?CancelOperationReceived@InputGesture@InputETW@@SAXPEBGK@Z @ 0x18014000C (-CancelOperationReceived@InputGesture@InputETW@@SAXPEBGK@Z.c)
 *     ?StartAnimationReceived@InputGesture@InputETW@@SAXPEBGK@Z @ 0x18014167C (-StartAnimationReceived@InputGesture@InputETW@@SAXPEBGK@Z.c)
 *     ?StartOperationReceived@InputGesture@InputETW@@SAXPEBGK@Z @ 0x180141990 (-StartOperationReceived@InputGesture@InputETW@@SAXPEBGK@Z.c)
 *     ?GestureEnded@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2@Z @ 0x180144720 (-GestureEnded@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Wind.c)
 *     ?GestureStarted@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2I22@Z @ 0x180144864 (-GestureStarted@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Wi.c)
 *     ?DragCancelled@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2@Z @ 0x180148D68 (-DragCancelled@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Win.c)
 *     ?DragEnded@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2@Z @ 0x180148EAC (-DragEnded@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows.c)
 *     ?DragInProgress@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2@Z @ 0x180148FF0 (-DragInProgress@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Wi.c)
 *     ?DragStarted@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2I22@Z @ 0x180149134 (-DragStarted@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windo.c)
 *     ?DropTargetChanged@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@_K2@Z @ 0x1801492AC (-DropTargetChanged@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System.c)
 *     ?FeedAnimationData@DragNDrop@InputETW@@SAX_K00UtagPOINT@@UVector2@Numerics@Foundation@Windows@@_N@Z @ 0x180149400 (-FeedAnimationData@DragNDrop@InputETW@@SAX_K00UtagPOINT@@UVector2@Numerics@Foundation@Windows@@_.c)
 *     ?GetDragManager@DragNDrop@InputETW@@SAXUtagPOINT@@I_N1@Z @ 0x180149734 (-GetDragManager@DragNDrop@InputETW@@SAXUtagPOINT@@I_N1@Z.c)
 *     ?GetDragSource@DragNDrop@InputETW@@SAXUtagPOINT@@I_N1@Z @ 0x18014994C (-GetDragSource@DragNDrop@InputETW@@SAXUtagPOINT@@I_N1@Z.c)
 *     ?HitTest@DragNDrop@InputETW@@SAXUtagPOINT@@I_N1@Z @ 0x180149CB0 (-HitTest@DragNDrop@InputETW@@SAXUtagPOINT@@I_N1@Z.c)
 *     ?ManualDragCancelled@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2@Z @ 0x18014A5C0 (-ManualDragCancelled@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@Syst.c)
 *     ?ManualDragStarted@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2I22@Z @ 0x18014A6FC (-ManualDragStarted@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System.c)
 *     ?StartAnimationCallBack@DragNDrop@InputETW@@SAX_K00@Z @ 0x18014BAE8 (-StartAnimationCallBack@DragNDrop@InputETW@@SAX_K00@Z.c)
 *     ?CancelResize@Resize@InputETW@@SAXK@Z @ 0x18014E470 (-CancelResize@Resize@InputETW@@SAXK@Z.c)
 *     ?FeedPositionData@Resize@InputETW@@SAX_K00UtagPOINT@@@Z @ 0x18014EA94 (-FeedPositionData@Resize@InputETW@@SAX_K00UtagPOINT@@@Z.c)
 *     ?ManualResizeCancelled@Resize@InputETW@@SAXKIIPEAUtagPOINT@@0@Z @ 0x18014F220 (-ManualResizeCancelled@Resize@InputETW@@SAXKIIPEAUtagPOINT@@0@Z.c)
 *     ?ManualResizeStarted@Resize@InputETW@@SAXKIIPEAUtagPOINT@@0@Z @ 0x18014F310 (-ManualResizeStarted@Resize@InputETW@@SAXKIIPEAUtagPOINT@@0@Z.c)
 *     ?ResizeCancelled@Resize@InputETW@@SAXKIIPEAUtagPOINT@@0@Z @ 0x18014FA20 (-ResizeCancelled@Resize@InputETW@@SAXKIIPEAUtagPOINT@@0@Z.c)
 *     ?ResizeEnded@Resize@InputETW@@SAXKPEAUtagPOINT@@0@Z @ 0x18014FB08 (-ResizeEnded@Resize@InputETW@@SAXKPEAUtagPOINT@@0@Z.c)
 *     ?ResizeInProgress@Resize@InputETW@@SAXKPEAUtagPOINT@@0@Z @ 0x18014FBD4 (-ResizeInProgress@Resize@InputETW@@SAXKPEAUtagPOINT@@0@Z.c)
 *     ?ResizeStarted@Resize@InputETW@@SAXKIIPEAUtagPOINT@@0@Z @ 0x18014FCA0 (-ResizeStarted@Resize@InputETW@@SAXKIIPEAUtagPOINT@@0@Z.c)
 *     ?StartAnimationCallBack@Resize@InputETW@@SAX_K00@Z @ 0x180150064 (-StartAnimationCallBack@Resize@InputETW@@SAX_K00@Z.c)
 *     ?StartManualResize@Resize@InputETW@@SAXKI@Z @ 0x180150200 (-StartManualResize@Resize@InputETW@@SAXKI@Z.c)
 *     ?StartResize@Resize@InputETW@@SAXK@Z @ 0x1801504C8 (-StartResize@Resize@InputETW@@SAXK@Z.c)
 *     ?DragEnded@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1@Z @ 0x180151980 (-DragEnded@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1@Z.c)
 *     ?DragInProgress@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1@Z @ 0x180151AB4 (-DragInProgress@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1@Z.c)
 *     ?DragStarted@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1I1@Z @ 0x180151BE8 (-DragStarted@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1I1@Z.c)
 *     ?DropTargetChanged@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@_K1@Z @ 0x180151D3C (-DropTargetChanged@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@_K.c)
 *     ?EdgyRecognized@Edgy@InputETW@@SAXUtagPOINT@@@Z @ 0x180151E80 (-EdgyRecognized@Edgy@InputETW@@SAXUtagPOINT@@@Z.c)
 *     ?FeedAnimationData@Edgy@InputETW@@SAX_K00UtagPOINT@@UVector2@Numerics@Foundation@Windows@@_N@Z @ 0x180151EF8 (-FeedAnimationData@Edgy@InputETW@@SAX_K00UtagPOINT@@UVector2@Numerics@Foundation@Windows@@_N@Z.c)
 *     ?HitTestForTarget@Edgy@InputETW@@SAXUtagPOINT@@I_N1@Z @ 0x18015264C (-HitTestForTarget@Edgy@InputETW@@SAXUtagPOINT@@I_N1@Z.c)
 *     ?StartAnimationCallBack@Edgy@InputETW@@SAX_K00@Z @ 0x18015389C (-StartAnimationCallBack@Edgy@InputETW@@SAX_K00@Z.c)
 *     ?ContinueProcessing@SystemButtonEventController@InputETW@@SAX_KK_N1@Z @ 0x18015B37C (-ContinueProcessing@SystemButtonEventController@InputETW@@SAX_KK_N1@Z.c)
 *     ?ClientStateChanged@ControllerNavigationManager@InputETW@@SAXKUtagRECT@@UtagPOINT@@@Z @ 0x180174A14 (-ClientStateChanged@ControllerNavigationManager@InputETW@@SAXKUtagRECT@@UtagPOINT@@@Z.c)
 *     ?NavigationPaused@ControllerNavigationManager@InputETW@@SAXXZ @ 0x180174D64 (-NavigationPaused@ControllerNavigationManager@InputETW@@SAXXZ.c)
 *     ?NavigationResumed@ControllerNavigationManager@InputETW@@SAXUtagRECT@@UtagPOINT@@@Z @ 0x180174DAC (-NavigationResumed@ControllerNavigationManager@InputETW@@SAXUtagRECT@@UtagPOINT@@@Z.c)
 *     ?PointerCrossedClientBounds@ControllerNavigationManager@InputETW@@SAXKUtagPOINT@@@Z @ 0x1801750B8 (-PointerCrossedClientBounds@ControllerNavigationManager@InputETW@@SAXKUtagPOINT@@@Z.c)
 *     ?PointerCrossedOverrideBounds@ControllerNavigationManager@InputETW@@SAXKUtagPOINT@@@Z @ 0x18017514C (-PointerCrossedOverrideBounds@ControllerNavigationManager@InputETW@@SAXKUtagPOINT@@@Z.c)
 *     ?RegisterClient@ControllerNavigationManager@InputETW@@SAXKUtagRECT@@UtagPOINT@@@Z @ 0x1801756D4 (-RegisterClient@ControllerNavigationManager@InputETW@@SAXKUtagRECT@@UtagPOINT@@@Z.c)
 *     ?RequestUIAHitTest@UIAHitTest@InputETW@@SAXII_NU_GUID@@@Z @ 0x180198414 (-RequestUIAHitTest@UIAHitTest@InputETW@@SAXII_NU_GUID@@@Z.c)
 *     ?ButtonEvent@RawButtonProcessor@InputETW@@SAXKKK@Z @ 0x1801AAE80 (-ButtonEvent@RawButtonProcessor@InputETW@@SAXKKK@Z.c)
 *     ?ButtonEvent@SystemButtonProcessor@InputETW@@SAXK_N@Z @ 0x1801AB680 (-ButtonEvent@SystemButtonProcessor@InputETW@@SAXK_N@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180039D18 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18009CD84 (atexit.c)
 */

const struct _tlgProvider_t *InputETW::Provider(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  Context = 0LL;
  fPending = 0;
  if ( __std_init_once_begin_initialize(&`InputETW::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    qword_1802476F8 = 0LL;
    Context = &qword_1802476F0;
    qword_1802476F0 = &RawInputProvidersContinuousTracing::`vftable';
    byte_180247700 = 0;
    dword_180247704 = 0;
    qword_180247708 = (struct _tlgProvider_t *)&`InputETW::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1802476F0, qword_180247708, 0LL);
    InitOnceComplete(&`InputETW::Instance'::`2'::wrapper, 0, &qword_1802476F0);
  }
  return (const struct _tlgProvider_t *)*((_QWORD *)Context + 1);
}
