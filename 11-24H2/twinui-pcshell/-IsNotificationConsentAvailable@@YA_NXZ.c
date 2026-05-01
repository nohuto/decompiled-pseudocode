/*
 * XREFs of ?IsNotificationConsentAvailable@@YA_NXZ @ 0x1805EFB20
 * Callers:
 *     ?IsPinAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@@Z @ 0x180057378 (-IsPinAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x1805DF1B0 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801B4B78 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ?CreateToastNotifier@ToastNotificationManager@Notifications@UI@Windows@winrt@@SA@AEBUhstring@param@5@@Z @ 0x1802BE6C8 (-CreateToastNotifier@ToastNotificationManager@Notifications@UI@Windows@winrt@@SA@AEBUhstring@par.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
bool IsNotificationConsentAvailable(void)
{
  int v0; // eax
  _BOOL8 v1; // rbx
  __int64 v3; // [rsp+20h] [rbp-68h] BYREF
  int v4; // [rsp+28h] [rbp-60h] BYREF
  int v5; // [rsp+30h] [rbp-58h] BYREF
  __int128 v6; // [rsp+38h] [rbp-50h]
  __int64 v7[4]; // [rsp+48h] [rbp-40h] BYREF
  int v8; // [rsp+68h] [rbp-20h] BYREF

  winrt::param::hstring::hstring((winrt::param::hstring *)v7, L"Windows.SystemToast.PinConsent");
  winrt::Windows::UI::Notifications::ToastNotificationManager::CreateToastNotifier(
    (const struct winrt::param::hstring *)&v3,
    v7);
  v8 = 0;
  v5 = 0;
  v6 = 0LL;
  v0 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v3 + 64LL))(v3, &v8);
  winrt::check_hresult(&v4, v0, (__int64)&v5);
  v1 = v8 == 0;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v3);
  return v1;
}
