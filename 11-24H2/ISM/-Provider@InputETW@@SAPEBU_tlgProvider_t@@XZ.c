/*
 * XREFs of ?Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ @ 0x180017640
 * Callers:
 *     ?OnFocusRequest@ContextualProcessing@InputETW@@SAXPEBG@Z @ 0x1800175E8 (-OnFocusRequest@ContextualProcessing@InputETW@@SAXPEBG@Z.c)
 *     ?OnInputReport@InputStateManager@InputETW@@SAXPEAUInputInfo@@@Z @ 0x18001CA58 (-OnInputReport@InputStateManager@InputETW@@SAXPEAUInputInfo@@@Z.c)
 *     ?DeliverDeviceAttach@InputTarget@InputETW@@SAXPEAUDeviceInfo@@@Z @ 0x180031450 (-DeliverDeviceAttach@InputTarget@InputETW@@SAXPEAUDeviceInfo@@@Z.c)
 *     ?OnFocusChanged@InputRouter@InputETW@@SAXPEAUIInputTarget@@@Z @ 0x180031550 (-OnFocusChanged@InputRouter@InputETW@@SAXPEAUIInputTarget@@@Z.c)
 *     ?DeliverDeviceEnumerationCompleted@InputTarget@InputETW@@SAXXZ @ 0x180031800 (-DeliverDeviceEnumerationCompleted@InputTarget@InputETW@@SAXXZ.c)
 *     ?DeliverDeviceRemoval@InputTarget@InputETW@@SAXPEAUDeviceInfo@@@Z @ 0x1800318D0 (-DeliverDeviceRemoval@InputTarget@InputETW@@SAXPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@InputStateManager@InputETW@@SAXPEAUDeviceInfo@@@Z @ 0x180031A68 (-OnDeviceRemoval@InputStateManager@InputETW@@SAXPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@InputStateManager@InputETW@@SAXPEAUDeviceInfo@@@Z @ 0x180031AE0 (-OnDeviceAttach@InputStateManager@InputETW@@SAXPEAUDeviceInfo@@@Z.c)
 *     ?ButtonEvent@ButtonProcessor@InputETW@@SAXK_N@Z @ 0x180035F08 (-ButtonEvent@ButtonProcessor@InputETW@@SAXK_N@Z.c)
 *     ?ProcessDeviceArrival@Win32kInterop@InputETW@@SAXK@Z @ 0x1800361B4 (-ProcessDeviceArrival@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?NavigationDisabled@ControllerNavigationManager@InputETW@@SAXXZ @ 0x1800362B8 (-NavigationDisabled@ControllerNavigationManager@InputETW@@SAXXZ.c)
 *     ?FeedAnimationData@InputGesture@InputETW@@SAXPEBG_K11UtagPOINTF@@22_N@Z @ 0x180036854 (-FeedAnimationData@InputGesture@InputETW@@SAXPEBG_K11UtagPOINTF@@22_N@Z.c)
 *     ?GestureInProgress@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2@Z @ 0x180058C08 (-GestureInProgress@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System.c)
 *     ?ProcessorRegistered@ContextualProcessing@InputETW@@SAXPEBG@Z @ 0x180059560 (-ProcessorRegistered@ContextualProcessing@InputETW@@SAXPEBG@Z.c)
 *     ?GestureCancelled@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2@Z @ 0x180098138 (-GestureCancelled@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@.c)
 *     ?DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z @ 0x180099714 (-DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z.c)
 *     ?NavigationEnabled@ControllerNavigationManager@InputETW@@SAXUtagRECT@@UtagPOINT@@@Z @ 0x180099F10 (-NavigationEnabled@ControllerNavigationManager@InputETW@@SAXUtagRECT@@UtagPOINT@@@Z.c)
 *     ?ProcessDeviceRemoval@Win32kInterop@InputETW@@SAXK@Z @ 0x18009B7BC (-ProcessDeviceRemoval@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?ProcessDeviceQueryRemove@Win32kInterop@InputETW@@SAXK@Z @ 0x1800F12D4 (-ProcessDeviceQueryRemove@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?ReceivedCursorPosCallback@Win32kInterop@InputETW@@SAXK@Z @ 0x1800F1D20 (-ReceivedCursorPosCallback@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?ReceivedInputMessage@Win32kInterop@InputETW@@SAXK@Z @ 0x1800F1D78 (-ReceivedInputMessage@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?ReceivedInterceptMessage@Win32kInterop@InputETW@@SAXK@Z @ 0x1800F1DD0 (-ReceivedInterceptMessage@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?AnimationStarted@InputGesture@InputETW@@SAXPEBGK_K1@Z @ 0x180141EEC (-AnimationStarted@InputGesture@InputETW@@SAXPEBGK_K1@Z.c)
 *     ?CancelOperationReceived@InputGesture@InputETW@@SAXPEBGK@Z @ 0x1801421DC (-CancelOperationReceived@InputGesture@InputETW@@SAXPEBGK@Z.c)
 *     ?StartAnimationReceived@InputGesture@InputETW@@SAXPEBGK@Z @ 0x18014384C (-StartAnimationReceived@InputGesture@InputETW@@SAXPEBGK@Z.c)
 *     ?StartOperationReceived@InputGesture@InputETW@@SAXPEBGK@Z @ 0x180143B60 (-StartOperationReceived@InputGesture@InputETW@@SAXPEBGK@Z.c)
 *     ?GestureEnded@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2@Z @ 0x1801468F0 (-GestureEnded@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Wind.c)
 *     ?GestureStarted@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2I22@Z @ 0x180146A34 (-GestureStarted@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Wi.c)
 *     ?DragCancelled@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2@Z @ 0x18014AF38 (-DragCancelled@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Win.c)
 *     ?DragEnded@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2@Z @ 0x18014B07C (-DragEnded@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows.c)
 *     ?DragInProgress@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2@Z @ 0x18014B1C0 (-DragInProgress@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Wi.c)
 *     ?DragStarted@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2I22@Z @ 0x18014B304 (-DragStarted@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windo.c)
 *     ?DropTargetChanged@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@_K2@Z @ 0x18014B47C (-DropTargetChanged@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System.c)
 *     ?FeedAnimationData@DragNDrop@InputETW@@SAX_K00UtagPOINT@@UVector2@Numerics@Foundation@Windows@@_N@Z @ 0x18014B5D0 (-FeedAnimationData@DragNDrop@InputETW@@SAX_K00UtagPOINT@@UVector2@Numerics@Foundation@Windows@@_.c)
 *     ?GetDragManager@DragNDrop@InputETW@@SAXUtagPOINT@@I_N1@Z @ 0x18014B904 (-GetDragManager@DragNDrop@InputETW@@SAXUtagPOINT@@I_N1@Z.c)
 *     ?GetDragSource@DragNDrop@InputETW@@SAXUtagPOINT@@I_N1@Z @ 0x18014BB1C (-GetDragSource@DragNDrop@InputETW@@SAXUtagPOINT@@I_N1@Z.c)
 *     ?HitTest@DragNDrop@InputETW@@SAXUtagPOINT@@I_N1@Z @ 0x18014BE80 (-HitTest@DragNDrop@InputETW@@SAXUtagPOINT@@I_N1@Z.c)
 *     ?ManualDragCancelled@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2@Z @ 0x18014C790 (-ManualDragCancelled@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@Syst.c)
 *     ?ManualDragStarted@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2I22@Z @ 0x18014C8CC (-ManualDragStarted@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System.c)
 *     ?StartAnimationCallBack@DragNDrop@InputETW@@SAX_K00@Z @ 0x18014DCB8 (-StartAnimationCallBack@DragNDrop@InputETW@@SAX_K00@Z.c)
 *     ?CancelResize@Resize@InputETW@@SAXK@Z @ 0x180150640 (-CancelResize@Resize@InputETW@@SAXK@Z.c)
 *     ?FeedPositionData@Resize@InputETW@@SAX_K00UtagPOINT@@@Z @ 0x180150C64 (-FeedPositionData@Resize@InputETW@@SAX_K00UtagPOINT@@@Z.c)
 *     ?ManualResizeCancelled@Resize@InputETW@@SAXKIIPEAUtagPOINT@@0@Z @ 0x1801513F0 (-ManualResizeCancelled@Resize@InputETW@@SAXKIIPEAUtagPOINT@@0@Z.c)
 *     ?ManualResizeStarted@Resize@InputETW@@SAXKIIPEAUtagPOINT@@0@Z @ 0x1801514E0 (-ManualResizeStarted@Resize@InputETW@@SAXKIIPEAUtagPOINT@@0@Z.c)
 *     ?ResizeCancelled@Resize@InputETW@@SAXKIIPEAUtagPOINT@@0@Z @ 0x180151BF0 (-ResizeCancelled@Resize@InputETW@@SAXKIIPEAUtagPOINT@@0@Z.c)
 *     ?ResizeEnded@Resize@InputETW@@SAXKPEAUtagPOINT@@0@Z @ 0x180151CD8 (-ResizeEnded@Resize@InputETW@@SAXKPEAUtagPOINT@@0@Z.c)
 *     ?ResizeInProgress@Resize@InputETW@@SAXKPEAUtagPOINT@@0@Z @ 0x180151DA4 (-ResizeInProgress@Resize@InputETW@@SAXKPEAUtagPOINT@@0@Z.c)
 *     ?ResizeStarted@Resize@InputETW@@SAXKIIPEAUtagPOINT@@0@Z @ 0x180151E70 (-ResizeStarted@Resize@InputETW@@SAXKIIPEAUtagPOINT@@0@Z.c)
 *     ?StartAnimationCallBack@Resize@InputETW@@SAX_K00@Z @ 0x180152234 (-StartAnimationCallBack@Resize@InputETW@@SAX_K00@Z.c)
 *     ?StartManualResize@Resize@InputETW@@SAXKI@Z @ 0x1801523D0 (-StartManualResize@Resize@InputETW@@SAXKI@Z.c)
 *     ?StartResize@Resize@InputETW@@SAXK@Z @ 0x180152698 (-StartResize@Resize@InputETW@@SAXK@Z.c)
 *     ?DragEnded@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1@Z @ 0x180153B50 (-DragEnded@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1@Z.c)
 *     ?DragInProgress@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1@Z @ 0x180153C84 (-DragInProgress@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1@Z.c)
 *     ?DragStarted@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1I1@Z @ 0x180153DB8 (-DragStarted@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1I1@Z.c)
 *     ?DropTargetChanged@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@_K1@Z @ 0x180153F0C (-DropTargetChanged@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@_K.c)
 *     ?EdgyRecognized@Edgy@InputETW@@SAXUtagPOINT@@@Z @ 0x180154050 (-EdgyRecognized@Edgy@InputETW@@SAXUtagPOINT@@@Z.c)
 *     ?FeedAnimationData@Edgy@InputETW@@SAX_K00UtagPOINT@@UVector2@Numerics@Foundation@Windows@@_N@Z @ 0x1801540C8 (-FeedAnimationData@Edgy@InputETW@@SAX_K00UtagPOINT@@UVector2@Numerics@Foundation@Windows@@_N@Z.c)
 *     ?HitTestForTarget@Edgy@InputETW@@SAXUtagPOINT@@I_N1@Z @ 0x18015481C (-HitTestForTarget@Edgy@InputETW@@SAXUtagPOINT@@I_N1@Z.c)
 *     ?StartAnimationCallBack@Edgy@InputETW@@SAX_K00@Z @ 0x180155A6C (-StartAnimationCallBack@Edgy@InputETW@@SAX_K00@Z.c)
 *     ?ContinueProcessing@SystemButtonEventController@InputETW@@SAX_KK_N1@Z @ 0x18015C1AC (-ContinueProcessing@SystemButtonEventController@InputETW@@SAX_KK_N1@Z.c)
 *     ?ClientStateChanged@ControllerNavigationManager@InputETW@@SAXKUtagRECT@@UtagPOINT@@@Z @ 0x1801758C0 (-ClientStateChanged@ControllerNavigationManager@InputETW@@SAXKUtagRECT@@UtagPOINT@@@Z.c)
 *     ?NavigationPaused@ControllerNavigationManager@InputETW@@SAXXZ @ 0x180175C14 (-NavigationPaused@ControllerNavigationManager@InputETW@@SAXXZ.c)
 *     ?NavigationResumed@ControllerNavigationManager@InputETW@@SAXUtagRECT@@UtagPOINT@@@Z @ 0x180175C5C (-NavigationResumed@ControllerNavigationManager@InputETW@@SAXUtagRECT@@UtagPOINT@@@Z.c)
 *     ?PointerCrossedClientBounds@ControllerNavigationManager@InputETW@@SAXKUtagPOINT@@@Z @ 0x180175F68 (-PointerCrossedClientBounds@ControllerNavigationManager@InputETW@@SAXKUtagPOINT@@@Z.c)
 *     ?PointerCrossedOverrideBounds@ControllerNavigationManager@InputETW@@SAXKUtagPOINT@@@Z @ 0x180175FFC (-PointerCrossedOverrideBounds@ControllerNavigationManager@InputETW@@SAXKUtagPOINT@@@Z.c)
 *     ?RegisterClient@ControllerNavigationManager@InputETW@@SAXKUtagRECT@@UtagPOINT@@@Z @ 0x180176584 (-RegisterClient@ControllerNavigationManager@InputETW@@SAXKUtagRECT@@UtagPOINT@@@Z.c)
 *     ?RequestUIAHitTest@UIAHitTest@InputETW@@SAXII_NU_GUID@@@Z @ 0x18019FA54 (-RequestUIAHitTest@UIAHitTest@InputETW@@SAXII_NU_GUID@@@Z.c)
 *     ?ButtonEvent@RawButtonProcessor@InputETW@@SAXKKK@Z @ 0x1801B2410 (-ButtonEvent@RawButtonProcessor@InputETW@@SAXKKK@Z.c)
 *     ?ButtonEvent@SystemButtonProcessor@InputETW@@SAXK_N@Z @ 0x1801B2C10 (-ButtonEvent@SystemButtonProcessor@InputETW@@SAXK_N@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800367A8 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18009CF54 (atexit.c)
 */

const struct _tlgProvider_t *InputETW::Provider(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  Context = 0LL;
  fPending = 0;
  if ( __std_init_once_begin_initialize(&`InputETW::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    qword_180251768 = 0LL;
    Context = &qword_180251760;
    qword_180251760 = &RawInputProvidersContinuousTracing::`vftable';
    byte_180251770 = 0;
    dword_180251774 = 0;
    qword_180251778 = (struct _tlgProvider_t *)&`InputETW::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180251760, qword_180251778, 0LL);
    InitOnceComplete(&`InputETW::Instance'::`2'::wrapper, 0, &qword_180251760);
  }
  return (const struct _tlgProvider_t *)*((_QWORD *)Context + 1);
}
