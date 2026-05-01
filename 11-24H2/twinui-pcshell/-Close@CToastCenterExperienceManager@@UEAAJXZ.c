/*
 * XREFs of ?Close@CToastCenterExperienceManager@@UEAAJXZ @ 0x180383B40
 * Callers:
 *     ?RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18017CF60 (-RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     wil::details::ScopeExitFn__lambda_39f801ab22cf2ee958e837ec87d3c136___::_ScopeExitFn__lambda_39f801ab22cf2ee958e837ec87d3c136___ @ 0x1802CB0B4 (wil--details--ScopeExitFn__lambda_39f801ab22cf2ee958e837ec87d3c136___--_ScopeExitFn__lambda_39f8.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800C75C8 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CCW@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802A74A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CCW@@@details@wil@@QEAAX_NW4ReportingKind.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CToastCenterExperienceManager::Close(
        CToastCenterExperienceManager *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *((_QWORD *)this + 45);
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 40LL))(v5, *((unsigned int *)this + 92));
    if ( v6 >= 0 )
      *((_DWORD *)this + 92) = 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x17E,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
  }
  v7 = *((_QWORD *)this + 71);
  if ( v7 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 32LL))(v7, *((unsigned int *)this + 128));
    if ( v8 >= 0 )
      *((_DWORD *)this + 128) = 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x186,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 71) + 32LL))(
           *((_QWORD *)this + 71),
           *((unsigned int *)this + 129));
    if ( v9 >= 0 )
      *((_DWORD *)this + 128) = 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x18B,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
  }
  v10 = *((_QWORD *)this + 72);
  if ( v10 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 32LL))(v10, *((unsigned int *)this + 130));
    if ( v11 >= 0 )
      *((_DWORD *)this + 130) = 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x193,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v11);
  }
  if ( *((_DWORD *)this + 126) )
  {
    v12 = SmartCookie::Unregister((CToastCenterExperienceManager *)((char *)this + 384));
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x19B,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
  }
  if ( *((_QWORD *)this + 39) )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion();
    *((_QWORD *)this + 39) = 0LL;
  }
  if ( *((_QWORD *)this + 37) )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion();
    *((_QWORD *)this + 37) = 0LL;
  }
  if ( *((_QWORD *)this + 38) )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion();
    *((_QWORD *)this + 38) = 0LL;
  }
  v13 = *((_QWORD *)this + 76);
  if ( v13 && *((_QWORD *)this + 78) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 72LL))(v13);
    *((_QWORD *)this + 78) = 0LL;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CCW>::ReportUsage(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_CCW>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  return 0LL;
}
