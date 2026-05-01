/*
 * XREFs of ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180251010
 * Callers:
 *     ?OnMessage@XamlLauncherState@@UEAAJI_K_J@Z @ 0x1801DB3E0 (-OnMessage@XamlLauncherState@@UEAAJI_K_J@Z.c)
 *     ?OnStartLaunchResult@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@H@Z @ 0x1802507E0 (-OnStartLaunchResult@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Intern.c)
 *     wil::details::CallAndHandleErrorsWithReturnType_void__lambda_e369aae3ebba8282559023f1a5b0b63f__&_long_&_0_ @ 0x180463414 (wil--details--CallAndHandleErrorsWithReturnType_void__lambda_e369aae3ebba8282559023f1a5b0b63f__-.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18004C97C (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ?wait@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBA_NKH@Z @ 0x180064928 (-wait@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@.c)
 *     ??$ShowStartView@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x1800E83E0 (--$ShowStartView@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4In.c)
 *     ?create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x1800F24B4 (-create@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801068A4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x18011C760 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ??4LauncherInvokeActivity@CommonStartTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801457D0 (--4LauncherInvokeActivity@CommonStartTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x18014588C (--1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ.c)
 *     ?reset@?$unique_ptr@VFocusHoldingTank@@U?$default_delete@VFocusHoldingTank@@@wistd@@@wistd@@QEAAXPEAVFocusHoldingTank@@@Z @ 0x1801468D0 (-reset@-$unique_ptr@VFocusHoldingTank@@U-$default_delete@VFocusHoldingTank@@@wistd@@@wistd@@QEAA.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x18017F364 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     ?BeginStartTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x1801BE4DC (-BeginStartTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801D67E8 (-Stop@-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag.c)
 *     ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801EF814 (--0-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgRe_ea_1801EF814.c)
 *     ?Split@LauncherInvokeActivity@CommonStartTelemetry@@QEAA?AV12@XZ @ 0x1801F6848 (-Split@LauncherInvokeActivity@CommonStartTelemetry@@QEAA-AV12@XZ.c)
 *     ?ShowSearchWithStart@XamlLauncherState@@AEAAJW4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180250F78 (-ShowSearchWithStart@XamlLauncherState@@AEAAJW4IMMERSIVELAUNCHERSHOWFLAGS@@@Z.c)
 *     ?watch_errors@?$tip_test@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@2@XZ @ 0x180289614 (-watch_errors@-$tip_test@V-$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA.c)
 *     ?open_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@IEAAXPEAU_GUID@@@Z @ 0x18028A320 (-open_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@IEAAXPEAU_GUID@@@Z.c)
 *     ?data@?$tip_test@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@2@XZ @ 0x18028A424 (-data@-$tip_test@V-$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$tes.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18028AAF0 (-ensure_data@-$tip_test@V-$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@AEBAA.c)
 *     ?start@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x18028BA2C (-start@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUpdateViewValueSet@@@WRL@Microsoft@@IEAAKXZ @ 0x18029E290 (-InternalRelease@-$ComPtr@UIUpdateViewValueSet@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x1802A9934 (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     ?TransferToCurrentThread@CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA?AV12@XZ @ 0x1802B0130 (-TransferToCurrentThread@CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA-AV12@XZ.c)
 *     ?CompleteCortanaTelemetry@XamlLauncherState@@AEAAXPEAVCortanaLauncherInvokeActivity@StartWindowTelemetry@@J@Z @ 0x1802C4174 (-CompleteCortanaTelemetry@XamlLauncherState@@AEAAXPEAVCortanaLauncherInvokeActivity@StartWindowT.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802C68BC (--1-$test_watcher@V-$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??1CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ @ 0x1802CCABC (--1CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ.c)
 *     ?has_ever_started@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802CDF64 (-has_ever_started@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802CE810 (--1-$com_ptr_t@V-$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@U.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_57721926@@@details@wil@@QEAA_NXZ @ 0x180335728 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_57721926@@@details@wil@@QEAA_NXZ.c)
 *     ?SHRegSetString@@YAJPEAUHKEY__@@PEBG11@Z @ 0x1803BF980 (-SHRegSetString@@YAJPEAUHKEY__@@PEBG11@Z.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18045D098 (--4-$com_ptr_t@V-$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@U.c)
 *     ??0FocusHoldingTank@@QEAA@PEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@@Z @ 0x1804625E8 (--0FocusHoldingTank@@QEAA@PEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@@Z.c)
 *     wil::details::RunWhenCompleteAction_IUnknown_Windows::Foundation::IAsyncAction____lambda_e369aae3ebba8282559023f1a5b0b63f___ @ 0x180463D2C (wil--details--RunWhenCompleteAction_IUnknown_Windows--Foundation--IAsyncAction____lambda_e369aae.c)
 *     ??$StartInvoke_DesktopSwitchTimedOut@AEBW4IMMERSIVELAUNCHERSHOWMETHOD@@@StartWindowTelemetry@@SAXAEBW4IMMERSIVELAUNCHERSHOWMETHOD@@@Z @ 0x1804641FC (--$StartInvoke_DesktopSwitchTimedOut@AEBW4IMMERSIVELAUNCHERSHOWMETHOD@@@StartWindowTelemetry@@SA.c)
 *     ??$StartShowDelayedDueToFullScreenExperience@AEBW4IMMERSIVELAUNCHERSHOWMETHOD@@AEBW4IMMERSIVELAUNCHERSHOWFLAGS@@@StartWindowTelemetry@@SAXAEBW4IMMERSIVELAUNCHERSHOWMETHOD@@AEBW4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x1804642B4 (--$StartShowDelayedDueToFullScreenExperience@AEBW4IMMERSIVELAUNCHERSHOWMETHOD@@AEBW4IMMERSIVELAU.c)
 *     ??$StartShowDelayedDueToReadiness@AEBW4IMMERSIVELAUNCHERSHOWMETHOD@@AEBW4IMMERSIVELAUNCHERSHOWFLAGS@@@StartWindowTelemetry@@SAXAEBW4IMMERSIVELAUNCHERSHOWMETHOD@@AEBW4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180464340 (--$StartShowDelayedDueToReadiness@AEBW4IMMERSIVELAUNCHERSHOWMETHOD@@AEBW4IMMERSIVELAUNCHERSHOWFL.c)
 *     ??$tip_make_shared_nothrow@V?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@AEAPEAU_GUID@@@details@tip2@@YA?AV?$com_ptr_t@V?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@AEAPEAU_GUID@@@Z @ 0x180464430 (--$tip_make_shared_nothrow@V-$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@det.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18046486C (--1-$test_data_control@V-$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA@X.c)
 *     ?IsSearchDisabledByPolicy@XamlLauncherState@@AEBA_NXZ @ 0x18046583C (-IsSearchDisabledByPolicy@XamlLauncherState@@AEBA_NXZ.c)
 *     ?IsSessionIdle@XamlLauncherState@@AEBA_NXZ @ 0x180465874 (-IsSessionIdle@XamlLauncherState@@AEBA_NXZ.c)
 *     ?ShowAttemptSkippedDueToIdle@StartWindowTelemetry@@SAXXZ @ 0x180466B90 (-ShowAttemptSkippedDueToIdle@StartWindowTelemetry@@SAXXZ.c)
 *     ?StartActivity@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXW4Mode@LauncherTelemetry@@IPEBG@Z @ 0x180466C70 (-StartActivity@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXW4Mode@LauncherTelemetry@@IPEBG.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_50176083@@@details@wil@@QEAA_NXZ @ 0x18046720C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_50176083@@@details@wil@@QEAA_NXZ.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180467248 (-reset@-$com_ptr_t@V-$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@Uerr_returncode_p.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall XamlLauncherState::ShowStartView(__int64 a1, int a2, unsigned int a3)
{
  unsigned int v3; // r13d
  __int64 v5; // r15
  char v6; // bl
  bool v7; // di
  enum _TABLETMODESTATE *v8; // rdx
  TabletModeHelpers *v9; // rcx
  char v10; // r13
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, SID *, GUID *, __int64 *); // rbx
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, __int64 *); // rdi
  int v18; // eax
  int v19; // ebx
  __int64 v20; // rbx
  void *v21; // rax
  FocusHoldingTank *v22; // rax
  __int64 v23; // rdx
  int v24; // ecx
  int v25; // ecx
  int v26; // eax
  int v27; // ebx
  HRESULT v28; // eax
  void **v29; // rax
  HRESULT v30; // eax
  unsigned __int16 *v31; // rbx
  int v32; // eax
  _QWORD *v33; // rax
  _QWORD *v34; // rdi
  int event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z; // eax
  __int64 v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // r8
  _QWORD *v39; // rax
  void *v40; // rdx
  _QWORD *v41; // rbx
  __int64 v42; // rcx
  __int64 v43; // rax
  unsigned int v44; // ebx
  bool IsSearchDisabledByPolicy; // di
  __int64 v46; // r8
  __int64 v47; // rdx
  char v48; // [rsp+30h] [rbp-D0h]
  __int64 v49; // [rsp+38h] [rbp-C8h] BYREF
  int v50; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v51; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int16 *v52; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v53; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v54; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v55[3]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v56; // [rsp+80h] [rbp-80h] BYREF
  int v57[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v58; // [rsp+98h] [rbp-68h]
  char v59; // [rsp+A0h] [rbp-60h]
  __int64 v60; // [rsp+A8h] [rbp-58h]
  char v61; // [rsp+B0h] [rbp-50h]
  _BYTE v62[64]; // [rsp+C0h] [rbp-40h] BYREF
  GUID pguid; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v64[42]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v65[42]; // [rsp+260h] [rbp+160h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+3F8h] [rbp+2F8h]

  v3 = a3;
  LODWORD(v49) = a2;
  v50 = a2;
  v51 = a3;
  v5 = a1 - 24;
  if ( !XamlLauncherState::IsSessionIdle((XamlLauncherState *)(a1 - 24)) || *(_BYTE *)(a1 + 1054) )
  {
    v6 = *(_BYTE *)(a1 + 1053) == 0;
    v7 = 0;
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_57721926>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_57721926>::GetImpl'::`2'::impl) )
    {
      v7 = (unsigned int)IsGamingFullScreenExperienceActive() != 0;
      v6 |= v7;
    }
    if ( v6 )
    {
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_57721926>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_57721926>::GetImpl'::`2'::impl)
        && v7 )
      {
        StartWindowTelemetry::StartShowDelayedDueToFullScreenExperience<enum IMMERSIVELAUNCHERSHOWMETHOD const &,enum IMMERSIVELAUNCHERSHOWFLAGS const &>(
          &v50,
          &v51);
        if ( !_InterlockedCompareExchange8((volatile signed __int8 *)(a1 + 1100), 1, 0) )
        {
          v60 = v5;
          v10 = 1;
          v61 = 1;
          v53 = 0LL;
          v11 = *(_QWORD *)(a1 + 96);
          v12 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v11 + 24LL);
          Microsoft::WRL::ComPtr<IUpdateViewValueSet>::InternalRelease(&v53);
          v13 = v12(v11, &SID_GamingPostureController, &GUID_b525603c_e3b6_51fa_bdfc_1ac36cf03dc8, &v53);
          v14 = v13;
          if ( v13 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x22A,
              (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
              (const char *)(unsigned int)v13);
LABEL_12:
            Microsoft::WRL::ComPtr<IUpdateViewValueSet>::InternalRelease(&v53);
            *(_BYTE *)(v5 + 1124) = 0;
            return v14;
          }
          v49 = 0LL;
          v16 = v53;
          v17 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v53 + 56LL);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v49);
          v18 = v17(v16, &v49);
          v14 = v18;
          if ( v18 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x22D,
              (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
              (const char *)(unsigned int)v18);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v49);
            goto LABEL_12;
          }
          v54 = a1 & -(__int64)(v5 != 0);
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v54);
          v55[0] = a1 & -(__int64)(v5 != 0);
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v55);
          v55[1] = v5;
          v19 = wil::details::RunWhenCompleteAction_IUnknown_Windows::Foundation::IAsyncAction____lambda_e369aae3ebba8282559023f1a5b0b63f___(
                  v49,
                  v55);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v55);
          if ( v19 >= 0 )
          {
            v10 = 0;
            v61 = 0;
          }
          else
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x240,
              (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
              (const char *)(unsigned int)v19);
          }
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v54);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v49);
          Microsoft::WRL::ComPtr<IUpdateViewValueSet>::InternalRelease(&v53);
          if ( v10 )
            *(_BYTE *)(v5 + 1124) = 0;
        }
        LODWORD(v49) = v50;
        v3 = v51;
      }
      else
      {
        StartWindowTelemetry::StartShowDelayedDueToReadiness<enum IMMERSIVELAUNCHERSHOWMETHOD const &,enum IMMERSIVELAUNCHERSHOWFLAGS const &>(
          &v50,
          &v51);
      }
      *(_DWORD *)(a1 + 1088) = v49;
      *(_DWORD *)(a1 + 1092) = v3;
      *(_BYTE *)(a1 + 1096) = 1;
      if ( TabletModeHelpers::IsTabletMode(v9, v8) )
      {
        v20 = a1 + 1080;
        if ( !*(_QWORD *)(a1 + 1080) )
        {
          v21 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
          *(_QWORD *)&pguid.Data1 = v21;
          if ( v21 )
            v22 = FocusHoldingTank::FocusHoldingTank((LONG_PTR)v21, 0LL);
          else
            v22 = 0LL;
          *(_QWORD *)&pguid.Data1 = 0LL;
          wistd::unique_ptr<FocusHoldingTank,wistd::default_delete<FocusHoldingTank>>::reset(
            (FocusHoldingTank **)(a1 + 1080),
            v22);
          wistd::unique_ptr<FocusHoldingTank,wistd::default_delete<FocusHoldingTank>>::reset(
            (FocusHoldingTank **)&pguid,
            0LL);
          if ( *(_QWORD *)v20 )
          {
            v23 = *(_QWORD *)(a1 + 64);
            if ( v23 )
              Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(*(_QWORD *)v20 + 16LL), v23);
          }
        }
      }
      return 0LL;
    }
    *(_WORD *)(a1 + 1050) = 0;
    v24 = *(_DWORD *)(a1 + 40);
    v57[0] = v24;
    v57[1] = DWORD1(v56);
    v58 = v5;
    v59 = 1;
    if ( v24 )
    {
      v25 = v24 - 6;
      if ( v25 )
      {
        if ( v25 == 1 )
        {
          *(_DWORD *)(a1 + 40) = 4;
          if ( (v3 & 8) == 0 )
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 120LL))(*(_QWORD *)(a1 + 64));
        }
        goto LABEL_41;
      }
      StartWindowTelemetry::CortanaLauncherInvokeActivity::TransferToCurrentThread(a1 + 624, v64);
      v26 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 96LL))(*(_QWORD *)(a1 + 64));
      v27 = v26;
      if ( v26 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x279,
          (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v26);
      if ( *(_DWORD *)v64[34] == 1 )
        XamlLauncherState::CompleteCortanaTelemetry(
          (XamlLauncherState *)v5,
          (struct StartWindowTelemetry::CortanaLauncherInvokeActivity *)v64,
          v27);
      StartWindowTelemetry::CortanaLauncherInvokeActivity::~CortanaLauncherInvokeActivity((StartWindowTelemetry::CortanaLauncherInvokeActivity *)v64);
    }
    *(_BYTE *)(a1 + 1052) = 0;
    *(_DWORD *)(a1 + 40) = XamlLauncherState::IsSearchDisabledByPolicy((XamlLauncherState *)v5) ? 15 : 1;
LABEL_41:
    wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v65);
    v65[0] = &CommonStartTelemetry::LauncherInvokeActivity::`vftable';
    v48 = 0;
    if ( **(_DWORD **)(a1 + 560) != 1 )
    {
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_50176083>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_50176083>::GetImpl'::`2'::impl) )
      {
        pguid = 0LL;
        v28 = CoCreateGuid(&pguid);
        if ( v28 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x2BC,
            (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            (const char *)(unsigned int)v28);
        v52 = 0LL;
        v29 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put((void **)&v52);
        v30 = StringFromCLSID(&pguid, (LPOLESTR *)v29);
        if ( v30 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x2BE,
            (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            (const char *)(unsigned int)v30);
        v31 = L"{0}";
        if ( v52 )
          v31 = v52;
        v32 = SHRegSetString(
                HKEY_CURRENT_USER,
                L"Software\\Microsoft\\Windows\\CurrentVersion\\Start",
                L"LaunchSessionId",
                v31);
        if ( v32 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x2C2,
            (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            (const char *)(unsigned int)v32);
        wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v64);
        v64[0] = &CommonStartTelemetry::LauncherInvokeActivity::`vftable';
        CommonStartTelemetry::LauncherInvokeActivity::StartActivity(v64, 23LL, (unsigned int)v49, v31);
        CommonStartTelemetry::LauncherInvokeActivity::operator=((__int64)v65, (__int64)v64);
        CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v64);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v52);
      }
      else
      {
        wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v64);
        v64[0] = &CommonStartTelemetry::LauncherInvokeActivity::`vftable';
        CommonStartTelemetry::LauncherInvokeActivity::StartActivity(v64, 23LL, (unsigned int)v49, L"{0}");
        CommonStartTelemetry::LauncherInvokeActivity::operator=((__int64)v65, (__int64)v64);
        CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v64);
      }
      v33 = CommonStartTelemetry::LauncherInvokeActivity::Split((__int64)v65, v64);
      CommonStartTelemetry::LauncherInvokeActivity::operator=(a1 + 288, (__int64)v33);
      CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v64);
      v48 = 1;
    }
    v34 = (_QWORD *)(a1 + 960);
    if ( !(unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool(a1 + 960)
      && !g_suppressStartMenuTipInUnitTest )
    {
      wil::com_ptr_t<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>,wil::err_returncode_policy>::reset(a1 + 960);
      tip2::tip_test<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>::data(
        a1 + 960,
        &pguid);
      v52 = 0LL;
      event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z = _create___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z((wil::details **)&v52, 1, L"ShellDesktopSwitchEvent");
      v36 = *(_QWORD *)&pguid.Data1;
      if ( event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z >= 0 )
      {
        if ( !_wait___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEBA_NKH_Z(
                (HANDLE *)&v52,
                0) )
        {
          *(_BYTE *)(v36 + 284) = 1;
          StartWindowTelemetry::StartInvoke_DesktopSwitchTimedOut<enum IMMERSIVELAUNCHERSHOWMETHOD const &>(&v50);
        }
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2D4,
          (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z);
      }
      *(_BYTE *)(v36 + 312) = (_DWORD)v49 == 15;
      if ( *v34 && (unsigned __int8)tip2::details::shared_data<1,0,0>::has_ever_started(*v34 + 8LL) )
        wil::com_ptr_t<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>,wil::err_returncode_policy>::reset(a1 + 960);
      v39 = (_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>::ensure_data(
                        a1 + 960,
                        v37,
                        v38);
      tip2::details::shared_data<1,0,0>::start(*v39 + 8LL, &v56);
      __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
        (wil::details **)&v52,
        v40);
      tip2::test_data_control<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>::~test_data_control<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>(&pguid);
    }
    tip2::tip_test<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>::watch_errors(
      a1 + 960,
      v62);
    v41 = (_QWORD *)(a1 + 968);
    if ( !(unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool(a1 + 968)
      && (*(_QWORD *)(a1 + 976) != *(_QWORD *)&GUID_NULL.Data1 || *(_QWORD *)(a1 + 984) != *(_QWORD *)GUID_NULL.Data4) )
    {
      v56 = *(_OWORD *)(a1 + 976);
      *(_QWORD *)&pguid.Data1 = &v56;
      if ( !*v41 || (unsigned __int8)tip2::details::shared_data<1,0,0>::has_ever_started(*v41 + 8LL) )
      {
        v43 = tip2::details::tip_make_shared_nothrow<tip2::details::merged_data<_tip_StartMenuAutomaticInvokeDuringLogonTest,_tip_StartMenuAutomaticInvokeDuringLogonTest>,_GUID * &>(
                &v52,
                &pguid);
        wil::com_ptr_t<tip2::details::merged_data<_tip_StartMenuAutomaticInvokeDuringLogonTest,_tip_StartMenuAutomaticInvokeDuringLogonTest>,wil::err_returncode_policy>::operator=(
          a1 + 968,
          v43);
        wil::com_ptr_t<tip2::details::merged_data<_tip_StartMenuAutomaticInvokeDuringLogonTest,_tip_StartMenuAutomaticInvokeDuringLogonTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_StartMenuAutomaticInvokeDuringLogonTest,_tip_StartMenuAutomaticInvokeDuringLogonTest>,wil::err_returncode_policy>(&v52);
      }
      else
      {
        tip2::details::shared_data<1,0,0>::open_without_lock(v42, &v56);
      }
      if ( !(unsigned __int8)tip2::details::shared_data<1,0,0>::has_ever_started(*v41 + 8LL) )
        *(GUID *)(a1 + 976) = GUID_NULL;
    }
    XamlLauncherState::BeginStartTelemetryTimeout((struct _TP_TIMER **)v5);
    v44 = v49;
    *(_DWORD *)(a1 + 272) = v49;
    *(_DWORD *)(a1 + 276) = v3;
    IsSearchDisabledByPolicy = XamlLauncherState::IsSearchDisabledByPolicy((XamlLauncherState *)v5);
    if ( !IsSearchDisabledByPolicy || (LOBYTE(v46) = 1, (v3 & 8) != 0) )
      LOBYTE(v46) = 0;
    v47 = v3 >> 2;
    LOBYTE(v47) = (v3 & 4) != 0;
    (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 56) + 56LL))(
      *(_QWORD *)(a1 + 56),
      v47,
      v46,
      v44);
    if ( !IsSearchDisabledByPolicy && (int)XamlLauncherState::ShowSearchWithStart(v5, v3) < 0 )
      *(_BYTE *)(a1 + 1048) = 1;
    if ( v48 )
      wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::Stop(
        v65,
        0);
    tip2::test_watcher<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>::~test_watcher<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>(v62);
    CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity((CommonStartTelemetry::LauncherInvokeActivity *)v65);
    v59 = 0;
    StartWindowTelemetry::ShowStartView<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
      v57,
      (int *)(v5 + 64));
    return 0LL;
  }
  StartWindowTelemetry::ShowAttemptSkippedDueToIdle();
  return 0LL;
}
