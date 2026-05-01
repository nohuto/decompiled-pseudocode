/*
 * XREFs of ?OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@3456@@Z @ 0x180466060
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800A24F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x18014588C (--1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ.c)
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelemetry@@@Z @ 0x180145E20 (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelem.c)
 *     ?TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA?AV12@XZ @ 0x1801461AC (-TransferToCurrentThread@LauncherInvokeActivity@CommonStartTelemetry@@QEAA-AV12@XZ.c)
 *     ?CancelCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ @ 0x180146908 (-CancelCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ.c)
 *     ?PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z @ 0x1801EBEA0 (-PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z.c)
 *     ??$OnCortanaShown@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x1801F6CEC (--$OnCortanaShown@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4I.c)
 *     ?PostTaskbarMessage@@YAXI_K_J@Z @ 0x18021A940 (-PostTaskbarMessage@@YAXI_K_J@Z.c)
 *     ?ProcessCortanaShownEventArgs@XamlLauncherState@@AEAAJPEAUICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x180250A10 (-ProcessCortanaShownEventArgs@XamlLauncherState@@AEAAJPEAUICortanaShownEventArgs@Experience@Shel.c)
 *     ?ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@@@Z @ 0x180250D38 (-ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@.c)
 *     ?watch_errors@?$tip_test@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@2@XZ @ 0x180289614 (-watch_errors@-$tip_test@V-$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA.c)
 *     ?TransferToCurrentThread@CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA?AV12@XZ @ 0x1802B0130 (-TransferToCurrentThread@CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA-AV12@XZ.c)
 *     ?CompleteCortanaTelemetry@XamlLauncherState@@AEAAXPEAVCortanaLauncherInvokeActivity@StartWindowTelemetry@@J@Z @ 0x1802C4174 (-CompleteCortanaTelemetry@XamlLauncherState@@AEAAXPEAVCortanaLauncherInvokeActivity@StartWindowT.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802C68BC (--1-$test_watcher@V-$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??1CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ @ 0x1802CCABC (--1CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall XamlLauncherState::OnCortanaShown(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2,
        struct Windows::Internal::Shell::Experience::ICortanaShownEventArgs *a3)
{
  int *v5; // rdi
  __int64 v6; // r8
  int v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned int v10; // esi
  int v12; // eax
  int v13; // r14d
  int v14; // eax
  int v15; // esi
  wil::details::in1diag3 *v16; // rcx
  int v17; // eax
  wil::details::in1diag3 *v18; // rcx
  int v19; // eax
  int v20; // eax
  int v21; // r14d
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  unsigned int v26; // edi
  int v27; // eax
  int v28; // eax
  int v29; // [rsp+20h] [rbp-E0h] BYREF
  int v30; // [rsp+28h] [rbp-D8h] BYREF
  XamlLauncherState *v31; // [rsp+30h] [rbp-D0h]
  char v32; // [rsp+38h] [rbp-C8h]
  _BYTE v33[64]; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp-80h] BYREF
  HSTRING v35; // [rsp+98h] [rbp-68h]
  volatile signed __int32 *v36[42]; // [rsp+A0h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+218h] [rbp+118h]

  v5 = (int *)((char *)this + 64);
  v30 = *((_DWORD *)this + 16);
  v31 = this;
  v32 = 1;
  XamlLauncherState::CancelCortanaReadinessCutoff(this);
  switch ( *v5 )
  {
    case 1:
      goto LABEL_44;
    case 2:
      goto LABEL_34;
    case 4:
      LOBYTE(v29) = 0;
      v19 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::ICortanaShownEventArgs *, int *))(*(_QWORD *)a3 + 56LL))(
              a3,
              &v29);
      if ( v19 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x94F,
          (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v19);
      if ( (_BYTE)v29 )
      {
        v20 = XamlLauncherState::ProcessCortanaShownEventArgs(this, a3);
        if ( v20 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x952,
            (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            (const char *)(unsigned int)v20);
        XamlLauncherState::PostCortanaOrSearchVisibility(this, 1u, *((_QWORD *)this + 135));
      }
      goto LABEL_48;
    case 5:
      goto LABEL_22;
    case 6:
      StartWindowTelemetry::CortanaLauncherInvokeActivity::TransferToCurrentThread(
        (__int64)this + 648,
        (struct wil::details::IFailureCallback *)v36);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 48LL))(*((_QWORD *)this + 16));
      v12 = XamlLauncherState::ProcessCortanaShownEventArgs(this, a3);
      v13 = v12;
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x90E,
          (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v12);
      v14 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 160LL))(*((_QWORD *)this + 11));
      v15 = v14;
      v16 = retaddr;
      if ( v14 >= 0 )
        v15 = v13;
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x90F,
          (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v14);
      *v5 = 7;
      PostTaskbarMessage((__int64)v16, 1uLL, *((_QWORD *)this + 135));
      XamlLauncherState::CompleteCortanaTelemetry(
        this,
        (struct StartWindowTelemetry::CortanaLauncherInvokeActivity *)v36,
        v15);
      StartWindowTelemetry::CortanaLauncherInvokeActivity::~CortanaLauncherInvokeActivity(v36);
      goto LABEL_48;
    case 7:
LABEL_22:
      v17 = XamlLauncherState::ProcessCortanaShownEventArgs(this, a3);
      v18 = retaddr;
      if ( v17 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x926,
          (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v17);
      if ( *v5 == 5 )
        XamlLauncherState::PostCortanaOrSearchVisibility(this, 1u, *((_QWORD *)this + 135));
      if ( *v5 == 7 )
        PostTaskbarMessage((__int64)v18, 1uLL, *((_QWORD *)this + 135));
      goto LABEL_48;
    case 18:
LABEL_44:
      v27 = 3;
      if ( *v5 != 1 )
        v27 = 20;
      *v5 = v27;
      v28 = XamlLauncherState::ProcessCortanaShownEventArgs(this, a3);
      if ( v28 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x8ED,
          (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v28);
      goto LABEL_48;
  }
  if ( *v5 != 19 )
  {
    if ( *v5 == 22 )
    {
      *v5 = 14;
      v7 = XamlLauncherState::ProcessCortanaShownEventArgs(this, a3);
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x940,
          (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v7);
      XamlLauncherState::PostCortanaOrSearchVisibility(this, 1u, *((_QWORD *)this + 135));
      v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 160LL))(*((_QWORD *)this + 11));
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x942,
          (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v8);
      v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 10) + 64LL))(*((_QWORD *)this + 10), 8LL);
      v10 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x943,
          (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v9);
        v32 = 0;
        StartWindowTelemetry::OnCortanaShown<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
          &v30,
          v5);
        return v10;
      }
    }
    goto LABEL_48;
  }
LABEL_34:
  tip2::tip_test<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>::watch_errors(
    (__int64)this + 984,
    (__int64)v33,
    v6);
  CommonStartTelemetry::LauncherInvokeActivity::TransferToCurrentThread(
    (__int64)this + 312,
    (struct wil::details::IFailureCallback *)v36);
  v21 = *v5;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 40LL))(*((_QWORD *)this + 16));
  v22 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 184LL))(*((_QWORD *)this + 10));
  if ( v22 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x8F7,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v22);
  v23 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 160LL))(*((_QWORD *)this + 11));
  if ( v23 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x8F8,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v23);
  *v5 = 5;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 24LL))(*((_QWORD *)this + 16));
  v24 = XamlLauncherState::ProcessCortanaShownEventArgs(this, a3);
  if ( v24 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x8FB,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v24);
  XamlLauncherState::PostCortanaOrSearchVisibility(this, 1u, *((_QWORD *)this + 135));
  XamlLauncherState::CompleteStartShowTelemetry(this, 0, (struct CommonStartTelemetry::LauncherInvokeActivity *)v36);
  if ( v21 != 19
    || (v35 = 0LL,
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(
          &hstringHeader,
          L"StartMode=AppTransition",
          0x18u,
          0x17u),
        v25 = XamlLauncherState::ShowSearchFromOpenStart((__int64)this, v35, 1),
        v26 = v25,
        v25 >= 0) )
  {
    CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v36);
    tip2::test_watcher<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>::~test_watcher<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>((__int64)v33);
LABEL_48:
    v26 = 0;
    goto LABEL_49;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x900,
    (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
    (const char *)(unsigned int)v25);
  CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v36);
  tip2::test_watcher<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>::~test_watcher<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>((__int64)v33);
LABEL_49:
  v32 = 0;
  StartWindowTelemetry::OnCortanaShown<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v30,
    (int *)this + 16);
  return v26;
}
