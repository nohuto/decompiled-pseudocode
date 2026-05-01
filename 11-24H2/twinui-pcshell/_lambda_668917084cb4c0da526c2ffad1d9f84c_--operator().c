/*
 * XREFs of _lambda_668917084cb4c0da526c2ffad1d9f84c_::operator() @ 0x1803A8C74
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_668917084cb4c0da526c2ffad1d9f84c___::Run @ 0x1803A9F00 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_668917084cb4c0da526c2ffad1d9f84c___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x18003D24C (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x18003EE68 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x180056268 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?_ConstructorHelper@StringReference@Internal@Windows@@AEAAXPEBG@Z @ 0x180056964 (-_ConstructorHelper@StringReference@Internal@Windows@@AEAAXPEBG@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800A24F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180122FC0 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation@3@@Z @ 0x1801D2B00 (--0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?GetStoreCortanaAumId@CortanaExperienceHelpers@@YA?AUhstring@winrt@@XZ @ 0x1803A93C0 (-GetStoreCortanaAumId@CortanaExperienceHelpers@@YA-AUhstring@winrt@@XZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_668917084cb4c0da526c2ffad1d9f84c_::operator()(_BYTE *a1)
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
  struct Windows::Foundation::Collections::IPropertySet *v16; // [rsp+30h] [rbp-48h] BYREF
  volatile signed __int32 *v17; // [rsp+38h] [rbp-40h] BYREF
  __int64 v18; // [rsp+40h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-30h] BYREF
  __int64 v20; // [rsp+60h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  try
  {
    CortanaExperienceHelpers::GetStoreCortanaAumId(&v17);
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
             (__int64 *)&v16);
      if ( v2 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x218,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
          (const char *)(unsigned int)v2,
          v13);
      Windows::Internal::ShellHelpers::PropertySetHelper::PropertySetHelper(
        (Windows::Internal::ShellHelpers::PropertySetHelper *)&v18,
        v16);
      Windows::Internal::StringReference::_ConstructorHelper(
        (Windows::Internal::StringReference *)&hstringHeader,
        CortanaStoreAppExperienceManager::s_PreLaunchActivationKey);
      v4 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
             &v18,
             (__int64)hstringHeader.Reserved.Reserved1,
             v3,
             1);
      if ( v4 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x21C,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
          (const char *)(unsigned int)v4,
          v13);
      v5 = winrt::hstring::c_str((winrt::hstring *)&v17);
      v7 = ActivateApplicationForExperienceWithPropertySet(v5, v6, 0LL, (__int64)v16, 1u, 0LL);
      if ( v7 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x224,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
          (const char *)(unsigned int)v7,
          v14);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
    }
    else
    {
      v10 = winrt::hstring::c_str((winrt::hstring *)&v17);
      v12 = ActivateApplicationForExperienceWithPropertySet(v10, v11, 0LL, 0LL, 1u, 0LL);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x22D,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
          (const char *)(unsigned int)v12,
          v15);
    }
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v17);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x22F,
                           (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
                           v8);
  }
  return result;
}
