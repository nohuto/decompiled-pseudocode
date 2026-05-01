/*
 * XREFs of ?IsC2DAllowedByITPolicy@AIXPolicyHelper@@YA_NXZ @ 0x1805913CC
 * Callers:
 *     ?IsC2DAllowedOnDeviceByPolicy@AIXPolicyHelper@@YA_NXZ @ 0x180591634 (-IsC2DAllowedOnDeviceByPolicy@AIXPolicyHelper@@YA_NXZ.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_eb21f5065b31fe54e3e22ffca6c3b9a9_@@CA@AEBUIIntegratedServicesGeographicRegionPoliciesStatics@Profile@System@WindowsUdk@winrt@@@Z @ 0x180052A10 (-_lambda_invoker_cdecl_@_lambda_eb21f5065b31fe54e3e22ffca6c3b9a9_@@CA@AEBUIIntegratedServicesGeo.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801B4B78 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ??R_lambda_d36c29fbb2e64753b55d53c833bf7733_@@QEBA@AEBUISearchPolicySettingsStatics@SearchSettings@UserProfile@System@WindowsUdk@winrt@@@Z @ 0x1803B68D4 (--R_lambda_d36c29fbb2e64753b55d53c833bf7733_@@QEBA@AEBUISearchPolicySettingsStatics@SearchSettin.c)
 *     ??$call@AEAV_lambda_7153a6af23e55c6dd3df525319faf7bd_@@@?$factory_cache_entry@UNamedPolicy@Policies@Management@Windows@winrt@@UINamedPolicyStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_7153a6af23e55c6dd3df525319faf7bd_@@@Z @ 0x18058E8BC (--$call@AEAV_lambda_7153a6af23e55c6dd3df525319faf7bd_@@@-$factory_cache_entry@UNamedPolicy@Polic.c)
 *     ??$call@AEAV_lambda_a0180c703ad96138dbcff4843259263a_@@@?$factory_cache_entry@UNamedPolicy@Policies@Management@Windows@winrt@@UINamedPolicyStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_a0180c703ad96138dbcff4843259263a_@@@Z @ 0x18058EB68 (--$call@AEAV_lambda_a0180c703ad96138dbcff4843259263a_@@@-$factory_cache_entry@UNamedPolicy@Polic.c)
 *     ??$call@P6A?AUUser@System@Windows@winrt@@AEBUIUserStatics2@234@@Z@?$factory_cache_entry@UUser@System@Windows@winrt@@UIUserStatics2@234@@impl@winrt@@QEAA?A_P$$QEAP6A?AUUser@System@Windows@2@AEBUIUserStatics2@452@@Z@Z @ 0x18058F15C (--$call@P6A-AUUser@System@Windows@winrt@@AEBUIUserStatics2@234@@Z@-$factory_cache_entry@UUser@Sy.c)
 *     ??R_lambda_9b3fea7e440c61a5e303878d4bfaf406_@@QEBA@AEBUILauncherStatics2@System@Windows@winrt@@@Z @ 0x18058FD78 (--R_lambda_9b3fea7e440c61a5e303878d4bfaf406_@@QEBA@AEBUILauncherStatics2@System@Windows@winrt@@@.c)
 *     ??R_lambda_a0180c703ad96138dbcff4843259263a_@@QEBA@AEBUINamedPolicyStatics@Policies@Management@Windows@winrt@@@Z @ 0x18058FDE4 (--R_lambda_a0180c703ad96138dbcff4843259263a_@@QEBA@AEBUINamedPolicyStatics@Policies@Management@W.c)
 *     ?GetInt32@?$consume_Windows_Management_Policies_INamedPolicyData@UINamedPolicyData@Policies@Management@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180590F14 (-GetInt32@-$consume_Windows_Management_Policies_INamedPolicyData@UINamedPolicyData@Policies@Mana.c)
 */

// Hidden C++ exception states: #wind=7
char __fastcall AIXPolicyHelper::IsC2DAllowedByITPolicy(AIXPolicyHelper *this)
{
  char v1; // bl
  bool v2; // r15
  __int64 v3; // rcx
  void (__fastcall ***v4)(_QWORD, __int64 *, __int64 *); // rcx
  char v5; // r14
  bool v6; // si
  void (__fastcall ***v7)(_QWORD, __int64 *, __int64 *); // rcx
  char v8; // di
  bool v9; // zf
  const char *v10; // r9
  char result; // al
  __int64 *v12[2]; // [rsp+20h] [rbp-E8h] BYREF
  __int64 *v13[6]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v14[32]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v15[32]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v16[32]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v17[72]; // [rsp+C0h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+0h]
  __int64 v19; // [rsp+110h] [rbp+8h] BYREF
  __int64 v20; // [rsp+118h] [rbp+10h] BYREF
  __int64 v21; // [rsp+120h] [rbp+18h] BYREF
  const struct winrt::WindowsUdk::System::UserProfile::SearchSettings::ISearchPolicySettingsStatics *(__fastcall *v22)(const struct winrt::WindowsUdk::System::UserProfile::SearchSettings::ISearchPolicySettingsStatics *, __int64); // [rsp+128h] [rbp+20h] BYREF

  v1 = 0;
  v2 = 0;
  winrt::param::hstring::hstring((winrt::param::hstring *)v15, L"DisableClickToDo");
  winrt::param::hstring::hstring((winrt::param::hstring *)v14, L"WindowsAI");
  try
  {
    v13[3] = &qword_1808CA518;
    _InterlockedIncrement64(&qword_1808CA518);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::System::User,winrt::Windows::System::IUserStatics2> )
    {
      _lambda_d36c29fbb2e64753b55d53c833bf7733_::operator()(
        v3,
        &v21,
        (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::System::User,winrt::Windows::System::IUserStatics2>);
      _InterlockedDecrement64(&qword_1808CA518);
    }
    else
    {
      _InterlockedDecrement64(&qword_1808CA518);
      v22 = _lambda_d36c29fbb2e64753b55d53c833bf7733_::_lambda_invoker_cdecl_;
      winrt::impl::factory_cache_entry<winrt::Windows::System::User,winrt::Windows::System::IUserStatics2>::call<winrt::Windows::System::User (*)(winrt::Windows::System::IUserStatics2 const &)>(
        v3,
        (__int64)&v21,
        (void (__fastcall **)(__int64, __int64 *))&v22);
    }
    v13[0] = &v21;
    v13[1] = (__int64 *)v14;
    v13[2] = (__int64 *)v15;
    v13[4] = &qword_1808CC3D8;
    _InterlockedIncrement64(&qword_1808CC3D8);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Management::Policies::NamedPolicy,winrt::Windows::Management::Policies::INamedPolicyStatics> )
    {
      _lambda_a0180c703ad96138dbcff4843259263a_::operator()(
        v13,
        &v20,
        (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::Management::Policies::NamedPolicy,winrt::Windows::Management::Policies::INamedPolicyStatics>);
      _InterlockedDecrement64(&qword_1808CC3D8);
    }
    else
    {
      _InterlockedDecrement64(&qword_1808CC3D8);
      winrt::impl::factory_cache_entry<winrt::Windows::Management::Policies::NamedPolicy,winrt::Windows::Management::Policies::INamedPolicyStatics>::call<_lambda_a0180c703ad96138dbcff4843259263a_ &>(
        v4,
        (__int64)&v20,
        (__int64)v13);
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v21);
    v5 = _lambda_eb21f5065b31fe54e3e22ffca6c3b9a9_::_lambda_invoker_cdecl_((const struct winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics *)&v20);
    if ( v5 )
      v2 = (unsigned int)winrt::impl::consume_Windows_Management_Policies_INamedPolicyData<winrt::Windows::Management::Policies::INamedPolicyData>::GetInt32(&v20) == 1;
    v6 = 0;
    winrt::param::hstring::hstring((winrt::param::hstring *)v17, L"DisableClickToDo");
    winrt::param::hstring::hstring((winrt::param::hstring *)v16, L"WindowsAI");
    v12[0] = (__int64 *)v16;
    v12[1] = (__int64 *)v17;
    v13[5] = &qword_1808CC3D8;
    _InterlockedIncrement64(&qword_1808CC3D8);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Management::Policies::NamedPolicy,winrt::Windows::Management::Policies::INamedPolicyStatics> )
    {
      _lambda_9b3fea7e440c61a5e303878d4bfaf406_::operator()(
        v12,
        &v19,
        (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::Management::Policies::NamedPolicy,winrt::Windows::Management::Policies::INamedPolicyStatics>);
      _InterlockedDecrement64(&qword_1808CC3D8);
    }
    else
    {
      _InterlockedDecrement64(&qword_1808CC3D8);
      winrt::impl::factory_cache_entry<winrt::Windows::Management::Policies::NamedPolicy,winrt::Windows::Management::Policies::INamedPolicyStatics>::call<_lambda_7153a6af23e55c6dd3df525319faf7bd_ &>(
        v7,
        (__int64)&v19,
        (__int64)v12);
    }
    v8 = _lambda_eb21f5065b31fe54e3e22ffca6c3b9a9_::_lambda_invoker_cdecl_((const struct winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics *)&v19);
    if ( v8 )
      v6 = (unsigned int)winrt::impl::consume_Windows_Management_Policies_INamedPolicyData<winrt::Windows::Management::Policies::INamedPolicyData>::GetInt32(&v19) == 1;
    if ( v5 )
    {
      v9 = !v2;
    }
    else
    {
      if ( !v8 )
        goto LABEL_20;
      v9 = !v6;
    }
    if ( !v9 )
    {
LABEL_21:
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v19);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v20);
      return v1;
    }
LABEL_20:
    v1 = 1;
    goto LABEL_21;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x4C9,
      (int)"shellcommon\\internal\\shell\\inc\\aixpolicyhelper.h",
      v10);
    return 0;
  }
  return result;
}
