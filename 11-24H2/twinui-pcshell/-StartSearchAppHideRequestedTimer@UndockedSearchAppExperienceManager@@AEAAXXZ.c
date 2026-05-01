/*
 * XREFs of ?StartSearchAppHideRequestedTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1803C02F0
 * Callers:
 *     ?Hide@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x180244160 (-Hide@UndockedSearchAppExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800B3FB8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?UndockedSearchAppExperienceManager_SearchAppHideRequestedTimerStarted@SearchAppExperienceManagerTelemetry@@SAXXZ @ 0x1802C0168 (-UndockedSearchAppExperienceManager_SearchAppHideRequestedTimerStarted@SearchAppExperienceManage.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18031DBA0 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall UndockedSearchAppExperienceManager::StartSearchAppHideRequestedTimer(struct _TP_TIMER **pv)
{
  struct _TP_TIMER *ThreadpoolTimer; // rax
  const char *v3; // r9
  struct _TP_TIMER *v4; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF

  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SearchAppHideRequestedTimerStarted((__int64)pv);
  pftDueTime = (struct _FILETIME)-7500000LL;
  ThreadpoolTimer = CreateThreadpoolTimer(
                      (PTP_TIMER_CALLBACK)lambda_4df7d2f5a675dae23772a8231912a19a_::_lambda_invoker_cdecl_,
                      pv,
                      0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    pv + 110,
    ThreadpoolTimer);
  v4 = pv[110];
  if ( !v4 )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x1250,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      v3);
  SetThreadpoolTimer(v4, &pftDueTime, 0, 0);
}
