/*
 * XREFs of ?OnCortanaLaunchResult@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@H@Z @ 0x180250240
 * Callers:
 *     <none>
 * Callees:
 *     ?CancelCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ @ 0x180146908 (-CancelCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ.c)
 *     ?SetExistingEvent@@YAXPEBG@Z @ 0x180164EB8 (-SetExistingEvent@@YAXPEBG@Z.c)
 *     ??$OnCortanaLaunchResult@AEBW4InternalState@XamlLauncherState@@AEAW412@AEBJ@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@AEBJ@Z @ 0x18022AB64 (--$OnCortanaLaunchResult@AEBW4InternalState@XamlLauncherState@@AEAW412@AEBJ@StartWindowTelemetry.c)
 *     ?data@?$tip_test@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@2@XZ @ 0x18028A424 (-data@-$tip_test@V-$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$tes.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x1802A9934 (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18045D060 (--1-$test_data_control@V-$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@@1@XZ @ 0x18045D100 (--C-$tip_test@V-$merged_data@U_tip_StartMenuAutomaticInvokeDuringLogonTest@@U1@@details@tip2@@@t.c)
 *     ??$StartRunningWithoutCortana@J@StartWindowTelemetry@@SAX$$QEAJ@Z @ 0x180464258 (--$StartRunningWithoutCortana@J@StartWindowTelemetry@@SAX$$QEAJ@Z.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18046486C (--1-$test_data_control@V-$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@QEAA@X.c)
 *     ?IsSearchDisabledByPolicy@XamlLauncherState@@AEBA_NXZ @ 0x18046583C (-IsSearchDisabledByPolicy@XamlLauncherState@@AEBA_NXZ.c)
 *     ?TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ @ 0x1804670DC (-TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnCortanaLaunchResult(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2,
        int a3)
{
  char *v5; // rdi
  __int64 v6; // rax
  __int128 v8; // [rsp+20h] [rbp-40h]
  __int64 v9; // [rsp+30h] [rbp-30h]
  __int128 v10; // [rsp+38h] [rbp-28h] BYREF
  __int64 v11; // [rsp+48h] [rbp-18h] BYREF
  char v12; // [rsp+50h] [rbp-10h]
  __int64 v13; // [rsp+80h] [rbp+20h] BYREF
  int v14; // [rsp+90h] [rbp+30h] BYREF
  char v15; // [rsp+98h] [rbp+38h] BYREF

  v14 = a3;
  LODWORD(v8) = *((_DWORD *)this + 16);
  *((_QWORD *)&v8 + 1) = this;
  LODWORD(v9) = a3;
  v10 = v8;
  v11 = v9;
  v12 = 1;
  *((_BYTE *)this + 1074) = a3 < 0;
  v5 = (char *)this + 984;
  if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((char *)this + 984) )
  {
    *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>::data(
                            v5,
                            &v13)
             + 283LL) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>::~test_data_control<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>(&v13);
  }
  if ( XamlLauncherState::IsSearchDisabledByPolicy(this) || *((_BYTE *)this + 1074) )
  {
    XamlLauncherState::CancelCortanaReadinessCutoff(this);
    SetExistingEvent(L"ShellSearchReadyEvent");
    StartWindowTelemetry::StartRunningWithoutCortana<long>(&v14);
    if ( *((_DWORD *)this + 16) == 2 || *((_DWORD *)this + 16) == 19 )
    {
      tip2::tip_test<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>::data(v5, &v13);
      v6 = v13;
      *(_BYTE *)(v13 + 279) = 1;
      *(_DWORD *)(v6 + 292) = a3;
      if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((char *)this + 992) )
      {
        *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_StartMenuAutomaticInvokeDuringLogonTest,_tip_StartMenuAutomaticInvokeDuringLogonTest>>::operator->(
                                (char *)this + 992,
                                &v15)
                 + 293LL) = 1;
        tip2::test_data_control<tip2::details::merged_data<_tip_StartMenuAutomaticInvokeDuringLogonTest,_tip_StartMenuAutomaticInvokeDuringLogonTest>>::~test_data_control<tip2::details::merged_data<_tip_StartMenuAutomaticInvokeDuringLogonTest,_tip_StartMenuAutomaticInvokeDuringLogonTest>>(&v15);
      }
      tip2::test_data_control<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>::~test_data_control<tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>>(&v13);
      XamlLauncherState::TryToCompleteStartShowWithoutCortana(this);
    }
    else if ( *((_DWORD *)this + 16) == 6 )
    {
      *((_DWORD *)this + 16) = 0;
    }
  }
  v12 = 0;
  StartWindowTelemetry::OnCortanaLaunchResult<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &,long const &>(
    &v10,
    (int *)this + 16,
    (int *)&v11);
  return 0LL;
}
