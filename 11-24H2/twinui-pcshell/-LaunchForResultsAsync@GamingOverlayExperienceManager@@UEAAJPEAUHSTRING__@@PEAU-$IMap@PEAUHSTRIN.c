/*
 * XREFs of ?LaunchForResultsAsync@GamingOverlayExperienceManager@@UEAAJPEAUHSTRING__@@PEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@PEAPEAU?$IAsyncOperation@PEAVValueSet@Collections@Foundation@Windows@@@56@@Z @ 0x180352870
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?copy_from_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z @ 0x180050F60 (-copy_from_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z.c)
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x1800537E8 (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800549EC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?LaunchForResultsAsyncInternal@GamingOverlayExperienceManager@@AEAA?AU?$IAsyncOperation@UValueSet@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@Uhstring@5@U?$IMap@Uhstring@winrt@@U12@@Collections@345@@Z @ 0x180353C48 (-LaunchForResultsAsyncInternal@GamingOverlayExperienceManager@@AEAA-AU-$IAsyncOperation@UValueSe.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GamingOverlayExperienceManager::LaunchForResultsAsync(
        __int64 a1,
        __int64 a2,
        struct IUnknown *a3,
        __int64 *a4)
{
  void *v7; // r8
  winrt::hstring *v8; // rax
  __int64 v9; // rax
  const char *v10; // r9
  __int64 result; // rax
  __int64 v12; // [rsp+20h] [rbp-58h] BYREF
  __int64 v13; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v14[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 *v15; // [rsp+38h] [rbp-40h]
  __int64 v16; // [rsp+48h] [rbp-30h] BYREF
  struct winrt::impl::hstring_header *v17; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v16 = a2;
  *a4 = 0LL;
  v17 = 0LL;
  winrt::hstring::operator=(&v17, &v16, (unsigned int)a3);
  v13 = 0LL;
  winrt::copy_from_abi((winrt *)&v13, a3, v7);
  v15 = &v12;
  v12 = v13;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v12);
  try
  {
    v8 = winrt::hstring::hstring((winrt::hstring *)v14, (const struct winrt::hstring *)&v17);
    GamingOverlayExperienceManager::LaunchForResultsAsyncInternal(a1 - 160, &v16, v8, &v12);
    v9 = v16;
    v16 = 0LL;
    *a4 = v9;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v16);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v13);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v17);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v12) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0xF58,
                     (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
                     v10);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v13);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v17);
    return (unsigned int)v12;
  }
  return result;
}
