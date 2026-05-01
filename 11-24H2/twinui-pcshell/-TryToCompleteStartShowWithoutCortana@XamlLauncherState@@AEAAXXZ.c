/*
 * XREFs of ?TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ @ 0x1804670DC
 * Callers:
 *     ?OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1801458C0 (-OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Wind.c)
 *     ?OnCortanaDestroyed@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180250020 (-OnCortanaDestroyed@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Inter.c)
 *     ?OnCortanaLaunchResult@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@H@Z @ 0x180250240 (-OnCortanaLaunchResult@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@In.c)
 *     ?OnCortanaCutoffTimerFired@XamlLauncherState@@QEAAJXZ @ 0x180465A90 (-OnCortanaCutoffTimerFired@XamlLauncherState@@QEAAJXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x18014588C (--1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ.c)
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelemetry@@@Z @ 0x180145E20 (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelem.c)
 *     ?TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA?AV12@XZ @ 0x1801461AC (-TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA-AV12@XZ.c)
 *     ?watch_errors@?$tip_test@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@2@XZ @ 0x180289614 (-watch_errors@-$tip_test@V-$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802C68BC (--1-$test_watcher@V-$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?OnStartFailedToGetForegroundImpl@XamlLauncherState@@AEAAJXZ @ 0x18046665C (-OnStartFailedToGetForegroundImpl@XamlLauncherState@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall XamlLauncherState::TryToCompleteStartShowWithoutCortana(XamlLauncherState *this)
{
  __int64 v2; // r8
  int v3; // eax
  _BYTE v4[64]; // [rsp+20h] [rbp-1A8h] BYREF
  _BYTE v5[336]; // [rsp+60h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+0h]

  if ( (*(int (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 144LL))(*((_QWORD *)this + 10)) >= 0
    || (*((_BYTE *)this + 300) & 4) != 0 )
  {
    CommonStartTelemetry::LauncherInvokeActivity::TransferToCurrentThread(
      (__int64)this + 312,
      (struct wil::details::IFailureCallback *)v5);
    tip2::tip_test<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>::watch_errors(
      (__int64)this + 984,
      (__int64)v4,
      v2);
    *((_DWORD *)this + 16) = 16;
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 184LL))(*((_QWORD *)this + 10));
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x6F6,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v3);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 24LL))(*((_QWORD *)this + 16));
    XamlLauncherState::CompleteStartShowTelemetry(this, 0, (struct CommonStartTelemetry::LauncherInvokeActivity *)v5);
    tip2::test_watcher<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>::~test_watcher<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>((__int64)v4);
    CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v5);
  }
  else
  {
    *((_DWORD *)this + 16) = 15;
    XamlLauncherState::OnStartFailedToGetForegroundImpl(this);
  }
}
