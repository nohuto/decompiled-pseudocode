/*
 * XREFs of ?LogErrorIfStartOrCortanaArentInstalled@XamlLauncher@@CAXXZ @ 0x18024BC30
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_014daf4e80f8d9d33103ca7fb469f571___::Run @ 0x180460EE0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_014daf4e80f8d9d33103ca7fb469f571___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18005480C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800A24F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Find@AppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@AEBW4AppExtensionOptions@2345@@Z @ 0x1801C4BD4 (-Find@AppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@AEBW4.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIApplicationStatics@StateRepository@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIApplicationStatics@StateRepository@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1802C8690 (--$GetActivationFactory@V-$ComPtr@UIApplicationStatics@StateRepository@Internal@Windows@@@WRL@Mi.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_53852258@@@details@wil@@QEAA_NXZ @ 0x1803C1BE0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_53852258@@@details@wil@@QEAA_NXZ.c)
 *     ??$ShellExperienceHostNotInstalled@AEBJ@StartWindowTelemetry@@SAXAEBJ@Z @ 0x180459D4C (--$ShellExperienceHostNotInstalled@AEBJ@StartWindowTelemetry@@SAXAEBJ@Z.c)
 *     ??$StartMenuExperienceHostNotInstalled@AEBJ@StartWindowTelemetry@@SAXAEBJ@Z @ 0x180459DBC (--$StartMenuExperienceHostNotInstalled@AEBJ@StartWindowTelemetry@@SAXAEBJ@Z.c)
 *     ?UndockedSearchFullTrustAppNotInstalled@StartWindowTelemetry@@SAXXZ @ 0x1804615D0 (-UndockedSearchFullTrustAppNotInstalled@StartWindowTelemetry@@SAXXZ.c)
 *     ?UndockedSearchNotInstalled@StartWindowTelemetry@@SAXXZ @ 0x180461624 (-UndockedSearchNotInstalled@StartWindowTelemetry@@SAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void XamlLauncher::LogErrorIfStartOrCortanaArentInstalled(void)
{
  __int64 v0; // rbx
  __int64 (__fastcall *v1)(__int64, _QWORD, __int64, _BYTE *); // rdi
  __int64 v2; // rbx
  __int64 (__fastcall *v3)(__int64, _QWORD, __int64, _BYTE *); // rdi
  __int64 v4; // rbx
  __int64 v5; // rbx
  _BYTE v6[4]; // [rsp+30h] [rbp-50h] BYREF
  int v7; // [rsp+34h] [rbp-4Ch] BYREF
  __int64 v8; // [rsp+38h] [rbp-48h] BYREF
  volatile signed __int32 *v9; // [rsp+40h] [rbp-40h] BYREF
  volatile signed __int32 *v10; // [rsp+48h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  __int64 v12; // [rsp+68h] [rbp-18h]

  v8 = 0LL;
  v12 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.StateRepository.Application",
    0x2Du,
    0x2Cu);
  if ( (int)Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IApplicationStatics>>(
              v12,
              &v8) >= 0 )
  {
    v6[0] = 0;
    v0 = v8;
    v1 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _BYTE *))(*(_QWORD *)v8 + 184LL);
    v12 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
      0x38u,
      0x37u);
    v7 = v1(v0, 0LL, v12, v6);
    if ( v7 < 0 || !v6[0] )
      StartWindowTelemetry::ShellExperienceHostNotInstalled<long const &>(&v7);
    v2 = v8;
    v3 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _BYTE *))(*(_QWORD *)v8 + 184LL);
    v12 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Microsoft.Windows.StartMenuExperienceHost_cw5n1h2txyewy!App",
      0x3Cu,
      0x3Bu);
    v7 = v3(v2, 0LL, v12, v6);
    if ( v7 < 0 || !v6[0] )
      StartWindowTelemetry::StartMenuExperienceHostNotInstalled<long const &>(&v7);
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_53852258>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_53852258>::GetImpl'::`2'::impl) )
    {
      v7 = 1;
      hstringHeader.Reserved.Reserved1 = *(PVOID *)winrt::hstring::hstring(
                                                     (winrt::hstring *)&v10,
                                                     L"com.microsoft.windows.app.searchMI");
      v4 = *(_QWORD *)winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension::Find(
                        (const struct winrt::param::hstring *)&v9,
                        (const enum winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionOptions *)&hstringHeader,
                        (__int64)&v7);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v10);
      if ( !v4 )
        StartWindowTelemetry::UndockedSearchFullTrustAppNotInstalled();
    }
    v7 = 1;
    hstringHeader.Reserved.Reserved1 = *(PVOID *)winrt::hstring::hstring(
                                                   (winrt::hstring *)&v9,
                                                   L"com.microsoft.windows.app.search");
    v5 = *(_QWORD *)winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension::Find(
                      (const struct winrt::param::hstring *)&v10,
                      (const enum winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionOptions *)&hstringHeader,
                      (__int64)&v7);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v9);
    if ( !v5 )
      StartWindowTelemetry::UndockedSearchNotInstalled();
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v8);
}
