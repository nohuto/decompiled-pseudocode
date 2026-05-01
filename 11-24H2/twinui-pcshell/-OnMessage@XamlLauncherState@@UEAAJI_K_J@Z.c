/*
 * XREFs of ?OnMessage@XamlLauncherState@@UEAAJI_K_J@Z @ 0x1801DB3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800B3FB8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?IsEnabled@StartWindowTelemetry@@SA_NE_K@Z @ 0x1801BE8EC (-IsEnabled@StartWindowTelemetry@@SA_NE_K@Z.c)
 *     ?OnSessionBecameActive@XamlLauncherState@@QEAAJXZ @ 0x1801DB544 (-OnSessionBecameActive@XamlLauncherState@@QEAAJXZ.c)
 *     ?OnSessionBecameIdle@XamlLauncherState@@QEAAJXZ @ 0x1801DB59C (-OnSessionBecameIdle@XamlLauncherState@@QEAAJXZ.c)
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180251010 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 *     ?OnCortanaCutoffTimerFired@XamlLauncherState@@QEAAJXZ @ 0x180465A90 (-OnCortanaCutoffTimerFired@XamlLauncherState@@QEAAJXZ.c)
 *     ?StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x180466E24 (-StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ.c)
 */

__int64 __fastcall XamlLauncherState::OnMessage(struct _TP_TIMER **this, int a2, XamlLauncherState *a3, int a4)
{
  XamlLauncherState *v4; // rbx
  int v6; // ebx
  __int64 v7; // rdx
  struct _TP_TIMER **v8; // rcx
  __int64 v9; // rcx
  bool v10; // zf
  __int64 v11; // r8
  __int64 v12; // rdx
  int started; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
    return 0LL;
  v4 = (XamlLauncherState *)(this - 5);
  if ( a3 != (XamlLauncherState *)(this - 5) )
    return 0LL;
  if ( !a4 )
  {
    v6 = XamlLauncherState::OnCortanaCutoffTimerFired((XamlLauncherState *)(this - 5));
    if ( v6 >= 0 )
      return (unsigned int)v6;
    v7 = 363LL;
    goto LABEL_9;
  }
  if ( a4 == 1 )
  {
    v6 = XamlLauncherState::OnSessionBecameIdle((XamlLauncherState *)(this - 5));
    if ( v6 >= 0 )
      return (unsigned int)v6;
    v7 = 367LL;
    goto LABEL_9;
  }
  if ( a4 != 6 )
  {
    if ( a4 == 7 )
    {
      v8 = this + 123;
    }
    else
    {
      if ( a4 == 2 )
      {
        wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
          this + 124,
          0LL);
        if ( StartWindowTelemetry::IsEnabled(v9) )
          XamlLauncherState::StopTrackingCpuUsageOfCriticalProcesses(v4);
        return 0LL;
      }
      if ( a4 == 8 )
      {
        v8 = this + 125;
      }
      else if ( a4 == 3 )
      {
        v8 = this + 126;
      }
      else
      {
        if ( a4 != 4 )
        {
          if ( a4 == 5 )
          {
            v10 = *((_BYTE *)this + 1080) == 0;
            *((_BYTE *)this + 1037) = 1;
            if ( !v10 )
            {
              v11 = *((unsigned int *)this + 269);
              v12 = *((unsigned int *)this + 268);
              *((_BYTE *)this + 1080) = 0;
              started = XamlLauncherState::ShowStartView(this - 2, v12, v11);
              if ( started < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x195,
                  (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                  (const char *)(unsigned int)started);
            }
          }
          return 0LL;
        }
        v8 = this + 128;
      }
    }
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
      v8,
      0LL);
    return 0LL;
  }
  v6 = XamlLauncherState::OnSessionBecameActive((XamlLauncherState *)(this - 5));
  if ( v6 < 0 )
  {
    v7 = 371LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v6);
  }
  return (unsigned int)v6;
}
