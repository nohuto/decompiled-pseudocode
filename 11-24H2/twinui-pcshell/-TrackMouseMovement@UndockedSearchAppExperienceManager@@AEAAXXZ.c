/*
 * XREFs of ?TrackMouseMovement@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1803C0C44
 * Callers:
 *     ?Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180246C70 (-Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experie.c)
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18003ED20 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800B3FB8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?SetRelativeThreadpoolTimerInMilliseconds@ThreadpoolHelpers@@YAXPEAU_TP_TIMER@@_KKK@Z @ 0x180206294 (-SetRelativeThreadpoolTimerInMilliseconds@ThreadpoolHelpers@@YAXPEAU_TP_TIMER@@_KKK@Z.c)
 *     ?UndockedSearchAppExperienceManager_TrackMouseMovement_Ignored@SearchAppExperienceManagerTelemetry@@SAXXZ @ 0x1803C11C0 (-UndockedSearchAppExperienceManager_TrackMouseMovement_Ignored@SearchAppExperienceManagerTelemet.c)
 *     ?UpdateMouseOnSearchState@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1803C1404 (-UpdateMouseOnSearchState@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 */

void __fastcall UndockedSearchAppExperienceManager::TrackMouseMovement(
        UndockedSearchAppExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  ExperienceManagerUtils *v3; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // rax

  v3 = (ExperienceManagerUtils *)*((_QWORD *)this + 7);
  if ( v3 )
  {
    if ( !*((_QWORD *)this + 26) )
      *((_QWORD *)this + 26) = ExperienceManagerUtils::WindowFromViewWrapper(v3, a2);
    UndockedSearchAppExperienceManager::UpdateMouseOnSearchState(this);
    ThreadpoolTimer = CreateThreadpoolTimer(
                        (PTP_TIMER_CALLBACK)lambda_a21e1a2925ef670440b4b94eb1909895_::_lambda_invoker_cdecl_,
                        this,
                        0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
      (struct _TP_TIMER **)this + 28,
      ThreadpoolTimer);
    ThreadpoolHelpers::SetRelativeThreadpoolTimerInMilliseconds(
      *((ThreadpoolHelpers **)this + 28),
      (struct _TP_TIMER *)0x14D,
      0x14Du);
  }
  else
  {
    SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_TrackMouseMovement_Ignored();
  }
}
