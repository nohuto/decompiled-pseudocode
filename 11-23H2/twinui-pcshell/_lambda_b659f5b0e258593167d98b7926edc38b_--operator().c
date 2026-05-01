/*
 * XREFs of _lambda_b659f5b0e258593167d98b7926edc38b_::operator() @ 0x1801E5210
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b659f5b0e258593167d98b7926edc38b___::Run @ 0x1801E5680 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b659f5b0e258593167d98b7926edc38b___--Run.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x1800DD81C (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x1800EA908 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800EDA34 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?_ConstructorHelper@StringReference@Internal@Windows@@AEAAXPEBG@Z @ 0x1802D22F2 (-_ConstructorHelper@StringReference@Internal@Windows@@AEAAXPEBG@Z.c)
 *     ?GetStoreCortanaAumId@CortanaExperienceHelpers@@YA?AUhstring@winrt@@XZ @ 0x18045B814 (-GetStoreCortanaAumId@CortanaExperienceHelpers@@YA-AUhstring@winrt@@XZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_b659f5b0e258593167d98b7926edc38b_::operator()(_BYTE *a1)
{
  int v2; // eax
  __int64 v3; // r8
  int v4; // eax
  const unsigned __int16 *v5; // rax
  const WCHAR *v6; // rdx
  int v7; // eax
  const char *v8; // r9
  __int64 result; // rax
  const unsigned __int16 *v10; // rax
  const WCHAR *v11; // rdx
  int v12; // eax
  int v13; // [rsp+20h] [rbp-58h]
  int v14; // [rsp+20h] [rbp-58h]
  int v15; // [rsp+20h] [rbp-58h]
  __int64 v16; // [rsp+30h] [rbp-48h] BYREF
  __int64 v17; // [rsp+38h] [rbp-40h] BYREF
  void *v18; // [rsp+40h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-30h] BYREF
  __int64 v20; // [rsp+60h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  try
  {
    CortanaExperienceHelpers::GetStoreCortanaAumId(&v18);
    if ( *a1 )
    {
      v16 = 0LL;
      v20 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"Windows.Foundation.Collections.ValueSet",
        0x28u,
        0x27u);
      v2 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
             v20,
             &v16);
      if ( v2 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x219,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
          (const char *)(unsigned int)v2,
          v13);
      v17 = v16;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v17);
      Windows::Internal::StringReference::_ConstructorHelper(
        (Windows::Internal::StringReference *)&hstringHeader,
        CortanaStoreAppExperienceManager::s_PreLaunchActivationKey);
      v4 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
             (Windows::Internal::ShellHelpers::PropertySetHelper *)&v17,
             (HSTRING)hstringHeader.Reserved.Reserved1,
             v3,
             1);
      if ( v4 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x21D,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
          (const char *)(unsigned int)v4,
          v13);
      v5 = winrt::hstring::c_str((winrt::hstring *)&v18);
      v7 = ActivateApplicationForExperienceWithPropertySet(v5, v6, 0LL, v16, 1u, 0LL);
      if ( v7 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x225,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
          (const char *)(unsigned int)v7,
          v14);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
    }
    else
    {
      v10 = winrt::hstring::c_str((winrt::hstring *)&v18);
      v12 = ActivateApplicationForExperienceWithPropertySet(v10, v11, 0LL, 0LL, 1u, 0LL);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x22E,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
          (const char *)(unsigned int)v12,
          v15);
    }
    winrt::hstring::~hstring(&v18);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x230,
                           (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
                           v8);
  }
  return result;
}
