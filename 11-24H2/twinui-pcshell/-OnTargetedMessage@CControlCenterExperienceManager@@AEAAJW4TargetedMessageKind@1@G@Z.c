/*
 * XREFs of ?OnTargetedMessage@CControlCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1803759FC
 * Callers:
 *     ?OnMessage@CControlCenterExperienceManager@@UEAAJI_K_J@Z @ 0x1801FCA90 (-OnMessage@CControlCenterExperienceManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnShellReady@CControlCenterExperienceManager@@AEAAJXZ @ 0x180071BD8 (-OnShellReady@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800B3FB8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?Hide@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@E@Z @ 0x18020EA60 (-Hide@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@E@Z.c)
 *     ??$ControlCenterDidntLaunchInSpecifiedTime@AEBK@ControlCenterTelemetry@ControlCenterUITelemetry@@SAXAEBK@Z @ 0x1803724FC (--$ControlCenterDidntLaunchInSpecifiedTime@AEBK@ControlCenterTelemetry@ControlCenterUITelemetry@.c)
 */

__int64 __fastcall CControlCenterExperienceManager::OnTargetedMessage(struct _TP_TIMER **a1, int a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    if ( a2 != 1 )
    {
      v3 = -2147418113;
      v4 = 737LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
      return (unsigned int)v3;
    }
    ControlCenterUITelemetry::ControlCenterTelemetry::ControlCenterDidntLaunchInSpecifiedTime<unsigned long const &>((__int64)a1);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
      a1 + 80,
      0LL);
    v5 = CControlCenterExperienceManager::Hide((CControlCenterExperienceManager *)(a1 + 4), 0LL, 0);
    v3 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x317,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
      v4 = 732LL;
      goto LABEL_8;
    }
  }
  else
  {
    v3 = CControlCenterExperienceManager::OnShellReady((CControlCenterExperienceManager *)a1);
    if ( v3 < 0 )
    {
      v4 = 728LL;
      goto LABEL_8;
    }
  }
  return 0LL;
}
