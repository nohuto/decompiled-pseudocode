/*
 * XREFs of ??$Start@I@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@SA?AV01@$$QEAI@Z @ 0x1800AAA3C
 * Callers:
 *     ?ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ @ 0x1804417C0 (-ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ.c)
 * Callees:
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18002193C (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?StartActivity@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z @ 0x1800A9A00 (-StartActivity@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z.c)
 */

// Hidden C++ exception states: #wind=1
ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion *__fastcall ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::Start<unsigned int>(
        ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion *this,
        int *a2)
{
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    this,
    (__int64)"RemoveSessionIdleTaskCompletion");
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::`vftable';
  ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::StartActivity(this, *a2);
  return this;
}
