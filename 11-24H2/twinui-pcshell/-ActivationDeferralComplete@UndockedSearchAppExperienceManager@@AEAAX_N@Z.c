/*
 * XREFs of ?ActivationDeferralComplete@UndockedSearchAppExperienceManager@@AEAAX_N@Z @ 0x180243B2C
 * Callers:
 *     ?OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z @ 0x1802449F0 (-OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z.c)
 *     ?OnPrelaunchDeferralTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180244CE0 (-OnPrelaunchDeferralTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x18004689C (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?UnboostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800AD8DC (-UnboostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?CompleteFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18022F2B0 (-CompleteFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ??0?$test_watcher@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAA@$$T@Z @ 0x18028BB64 (--0-$test_watcher@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAA@$.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@1@XZ @ 0x18028BF04 (--C-$tip_test@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$t.c)
 *     ?watch_errors@?$tip_test@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@2@XZ @ 0x18028BF30 (-watch_errors@-$tip_test@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180291D80 (--1-$test_data_control@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@Q.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180291DB8 (--1-$test_watcher@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAA@X.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180291DE0 (--1-$com_ptr_t@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@Uerr_returncode_.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x1802A9934 (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1802B0070 (--4-$com_ptr_t@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@Uerr_returncode_.c)
 *     ?StartDeferredSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1802CD1DC (-StartDeferredSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchWebView2@@@details@wil@@QEAA_NXZ @ 0x1803C1F30 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchWebView2@@@det_ea_1803C1F30.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall UndockedSearchAppExperienceManager::ActivationDeferralComplete(
        UndockedSearchAppExperienceManager *this,
        char a2)
{
  __int64 v4; // rax
  char IsEnabled; // al
  __int64 *v6; // rdx
  _BYTE v7[56]; // [rsp+20h] [rbp-39h] BYREF
  __int64 v8; // [rsp+58h] [rbp-1h]
  _BYTE v9[80]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v10; // [rsp+C0h] [rbp+67h] BYREF
  __int64 v11; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v12; // [rsp+D8h] [rbp+7Fh] BYREF

  tip2::test_watcher<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::test_watcher<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>(v7);
  v10 = v8;
  if ( v8 )
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 344));
  tip2::test_watcher<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::~test_watcher<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>(v7);
  if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((char *)this + 832) )
  {
    v4 = tip2::tip_test<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::watch_errors(
           (char *)this + 832,
           v9);
    wil::com_ptr_t<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>,wil::err_returncode_policy>::operator=(
      &v10,
      v4 + 56);
    tip2::test_watcher<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::~test_watcher<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>(v9);
  }
  if ( a2 )
  {
    if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((char *)this + 832) )
    {
      *(_BYTE *)(*(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::operator->(
                              (char *)this + 832,
                              &v11)
               + 338LL) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::~test_data_control<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>(&v11);
    }
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchWebView2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SearchWebView2>::GetImpl'::`2'::impl);
  }
  else
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchWebView2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SearchWebView2>::GetImpl'::`2'::impl) )
      goto LABEL_13;
    IsEnabled = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 11) + 32LL))(
                  *((_QWORD *)this + 11),
                  *((_QWORD *)this + 7));
  }
  if ( !IsEnabled )
    UndockedSearchAppExperienceManager::StartDeferredSuspensionTimer(this);
LABEL_13:
  UndockedSearchAppExperienceManager::UnboostPriority(this);
  v6 = (__int64 *)*((_QWORD *)this + 100);
  if ( v6 )
  {
    v12 = 0LL;
    v11 = *v6;
    *v6 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
    std::shared_ptr<PeoplePaneViewInfo>::reset((_QWORD *)this + 100);
  }
  if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((char *)this + 832) )
    UndockedSearchAppExperienceManager::CompleteFullActivationTest((struct _TP_TIMER **)this);
  wil::com_ptr_t<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>,wil::err_returncode_policy>(&v10);
}
