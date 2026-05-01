/*
 * XREFs of ?SuspendAppInternal@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18024761C
 * Callers:
 *     ?OnViewConsolidationRequested@UndockedSearchAppExperienceManager@@QEAAJXZ @ 0x180244D38 (-OnViewConsolidationRequested@UndockedSearchAppExperienceManager@@QEAAJXZ.c)
 *     ?OnLastResortSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1803BD944 (-OnLastResortSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UndockedSearchAppExperienceManager_SuspensionEnabled@SearchAppExperienceManagerTelemetry@@SAXXZ @ 0x180236E58 (-UndockedSearchAppExperienceManager_SuspensionEnabled@SearchAppExperienceManagerTelemetry@@SAXXZ.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@1@XZ @ 0x18028AAC4 (--C-$tip_test@V-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_data_c.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEBA_NXZ @ 0x180294B9C (--B-$tip_test@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802C89C0 (--1-$test_data_control@V-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ?TryInstallDefaultWebSearchProvider@UndockedSearchAppExperienceManager@@AEAAXW4InstallTrigger@@@Z @ 0x1803C0D14 (-TryInstallDefaultWebSearchProvider@UndockedSearchAppExperienceManager@@AEAAXW4InstallTrigger@@@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_54865932@@@details@wil@@QEAA_NXZ @ 0x1803C1C1C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_54865932@@@details@wil@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall UndockedSearchAppExperienceManager::SuspendAppInternal(UndockedSearchAppExperienceManager *this)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rcx
  int v5; // eax
  int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  int v8; // [rsp+40h] [rbp+20h] BYREF
  char v9; // [rsp+48h] [rbp+28h] BYREF

  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 11) + 32LL))(
          *((_QWORD *)this + 11),
          *((_QWORD *)this + 7)) )
  {
    v2 = *((_QWORD *)this + 7);
    if ( v2 )
    {
      v8 = 3;
      v3 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v2 + 352LL))(v2, &v8);
      if ( v3 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x8D9,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
          (const char *)(unsigned int)v3);
      if ( v8 == 3 )
      {
        SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SuspensionEnabled(v4);
        v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 7) + 344LL))(*((_QWORD *)this + 7), 1LL);
        v6 = v5;
        if ( v5 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x8DE,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
            (const char *)(unsigned int)v5);
        if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::operator bool((char *)this + 888) )
        {
          *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::operator->(
                                  (char *)this + 888,
                                  &v9)
                   + 274LL) = v6 >= 0;
          tip2::test_data_control<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::~test_data_control<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>(&v9);
        }
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_54865932>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_54865932>::GetImpl'::`2'::impl) )
          UndockedSearchAppExperienceManager::TryInstallDefaultWebSearchProvider(this, 2LL);
        goto LABEL_19;
      }
      if ( v8 != 5 )
      {
        if ( v8 != 1
          || !(unsigned __int8)tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::operator bool((char *)this + 888) )
        {
          goto LABEL_19;
        }
        *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::operator->(
                                (char *)this + 888,
                                &v9)
                 + 302LL) = 1;
        tip2::test_data_control<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::~test_data_control<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>(&v9);
        *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::operator->(
                                (char *)this + 888,
                                &v9)
                 + 274LL) = 1;
        goto LABEL_18;
      }
      if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::operator bool((char *)this + 888) )
      {
        *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::operator->(
                                (char *)this + 888,
                                &v9)
                 + 301LL) = 1;
LABEL_18:
        tip2::test_data_control<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::~test_data_control<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>(&v9);
      }
    }
LABEL_19:
    *((_DWORD *)this + 186) = 6;
    return;
  }
  if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::operator bool((char *)this + 888) )
  {
    *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::operator->(
                            (char *)this + 888,
                            &v8)
             + 300LL) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::~test_data_control<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>(&v8);
  }
}
