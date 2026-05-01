/*
 * XREFs of ?Prelaunch@UndockedSearchAppExperienceManager@@UEAAJE@Z @ 0x180245D80
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18005480C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?SetExistingEvent@@YAXPEBG@Z @ 0x180164EB8 (-SetExistingEvent@@YAXPEBG@Z.c)
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x1802430DC (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 *     ?StartFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@_N@Z @ 0x180247188 (-StartFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@1@XZ @ 0x18028BF04 (--C-$tip_test@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$t.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180291D80 (--1-$test_data_control@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@Q.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x1802A9934 (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     ?UndockedSearchAppExperienceManager_PrelaunchRequested@SearchAppExperienceManagerTelemetry@@SAXXZ @ 0x1802CE460 (-UndockedSearchAppExperienceManager_PrelaunchRequested@SearchAppExperienceManagerTelemetry@@SAXX.c)
 *     ??$UndockedSearchAppExperienceManager_PrelaunchSkipped@AEB_N@SearchAppExperienceManagerTelemetry@@SAXAEB_N@Z @ 0x1803AFA70 (--$UndockedSearchAppExperienceManager_PrelaunchSkipped@AEB_N@SearchAppExperienceManagerTelemetry.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UndockedSearchAppExperienceManager::Prelaunch(UndockedSearchAppExperienceManager *this)
{
  int v2; // eax
  char v3; // di
  const char *v4; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  volatile signed __int32 *v7; // [rsp+50h] [rbp+18h] BYREF

  try
  {
    UndockedSearchAppExperienceManager::StartFullActivationTest();
    v2 = *((_DWORD *)this + 186);
    if ( !v2 || v2 == 12 )
    {
      SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_PrelaunchRequested();
      winrt::hstring::hstring((winrt::hstring *)&v7, L"Hidden");
      UndockedSearchAppExperienceManager::ActivateAppAsync(
        (__int64)this,
        1,
        2,
        (winrt::hstring *)&v7,
        0,
        (unsigned __int16 *)&pvData);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v7);
    }
    else
    {
      SetExistingEvent(L"ShellSearchReadyEvent");
      v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 11) + 48LL))(
             *((_QWORD *)this + 11),
             *((_QWORD *)this + 7));
      LOBYTE(v7) = v3;
      SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_PrelaunchSkipped<bool const &>(&v7);
      if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((char *)this + 832) )
      {
        *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::operator->(
                                (char *)this + 832,
                                &v7)
                 + 289LL) = v3;
        tip2::test_data_control<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::~test_data_control<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>(&v7);
      }
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x3DF,
                           (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
                           v4);
  }
  return result;
}
