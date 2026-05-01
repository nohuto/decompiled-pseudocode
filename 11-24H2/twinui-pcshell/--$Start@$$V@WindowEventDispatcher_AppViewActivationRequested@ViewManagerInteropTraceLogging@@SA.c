/*
 * XREFs of ??$Start@$$V@WindowEventDispatcher_AppViewActivationRequested@ViewManagerInteropTraceLogging@@SA?AV01@XZ @ 0x18021DACC
 * Callers:
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18041A090 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 *     ?AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18041B3B0 (-AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedE.c)
 * Callees:
 *     ?StartActivity@WindowEventDispatcher_AppViewActivationRequested@ViewManagerInteropTraceLogging@@QEAAXXZ @ 0x180021804 (-StartActivity@WindowEventDispatcher_AppViewActivationRequested@ViewManagerInteropTraceLogging@@.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18002193C (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 */

ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewActivationRequested *__fastcall ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewActivationRequested::Start<>(
        ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewActivationRequested *this)
{
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    this,
    (__int64)"WindowEventDispatcher_AppViewActivationRequested");
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewActivationRequested::`vftable';
  ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewActivationRequested::StartActivity(this);
  return this;
}
