/*
 * XREFs of ?_OnDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ @ 0x1803AC728
 * Callers:
 *     ?_OnMessageHandler@SearchAppExperienceManager@@AEAAJI_K_J@Z @ 0x1803AC7F0 (-_OnMessageHandler@SearchAppExperienceManager@@AEAAJI_K_J@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800B3FB8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?CortanaExperienceManager_SuspensionEnabled@CortanaProactiveTelemetry@@SAXXZ @ 0x18037A820 (-CortanaExperienceManager_SuspensionEnabled@CortanaProactiveTelemetry@@SAXXZ.c)
 *     ?_IsViewVisible@SearchAppExperienceManager@@AEAA_NXZ @ 0x1803AC4B4 (-_IsViewVisible@SearchAppExperienceManager@@AEAA_NXZ.c)
 *     ?_ResetActivationTimeoutPolicy@SearchAppExperienceManager@@AEAAJXZ @ 0x1803AD2C4 (-_ResetActivationTimeoutPolicy@SearchAppExperienceManager@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SearchAppExperienceManager::_OnDeferredSuspensionTimer(SearchAppExperienceManager *this)
{
  struct _TP_TIMER **v1; // rdi
  struct _TP_TIMER *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct _TP_TIMER **)((char *)this + 480);
  v3 = (struct _TP_TIMER *)*((_QWORD *)this + 60);
  if ( v3 )
  {
    if ( !IsThreadpoolTimerSet(v3) )
    {
      wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
        v1,
        0LL);
      SearchAppExperienceManager::_ResetActivationTimeoutPolicy(this);
      if ( !SearchAppExperienceManager::_IsViewVisible(this) )
      {
        v4 = *((_QWORD *)this + 63);
        v9 = 0;
        if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v4 + 56LL))(v4, &v9) < 0 || v9 != 1 )
        {
          CortanaProactiveTelemetry::CortanaExperienceManager_SuspensionEnabled(v5);
          v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 63) + 96LL))(*((_QWORD *)this + 63));
          if ( v6 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x55B,
              (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
              (const char *)(unsigned int)v6);
        }
      }
    }
  }
  return 0LL;
}
