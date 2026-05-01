/*
 * XREFs of ?RuntimeClassInitialize@CShellSnapComponent@@QEAAJXZ @ 0x18020E764
 * Callers:
 *     ??$MakeAndInitialize@VCShellSnapComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18020E6AC (--$MakeAndInitialize@VCShellSnapComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkn.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x180043C40 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18004D04C (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801CAB80 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ?CSnapAssistController_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1802B9D48 (-CSnapAssistController_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?SnapServiceProvider_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1802BB9B0 (-SnapServiceProvider_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$make@UImmersiveShellThreadDispatcher@implementation@SnapComponent@Shell@Internal@Windows@winrt@@$$V@winrt@@YA?A_PXZ @ 0x1802C1A6C (--$make@UImmersiveShellThreadDispatcher@implementation@SnapComponent@Shell@Internal@Windows@winr.c)
 *     ??$as@UIUnknown@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x1802CB24C (--$as@UIUnknown@@@IUnknown@Foundation@Windows@winrt@@QEBA-A_PXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$get_activation_factory@UISnapLayoutManagerExtensionStatics@PlatformExtensions@Shell@Internal@Windows@winrt@@@winrt@@YA?AUISnapLayoutManagerExtensionStatics@PlatformExtensions@Shell@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x18059BAE4 (--$get_activation_factory@UISnapLayoutManagerExtensionStatics@PlatformExtensions@Shell@Internal@.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall CShellSnapComponent::RuntimeClassInitialize(CShellSnapComponent *this)
{
  void **v2; // r14
  const struct _GUID *v3; // rcx
  int Instance; // eax
  unsigned int v5; // ebx
  const struct _GUID *v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 *v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  __int64 *v13; // rax
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // [rsp+20h] [rbp-118h] BYREF
  __int64 v17[2]; // [rsp+28h] [rbp-110h] BYREF
  _BYTE v18[32]; // [rsp+38h] [rbp-100h] BYREF
  __int128 v19; // [rsp+58h] [rbp-E0h] BYREF
  __int64 v20; // [rsp+68h] [rbp-D0h]
  __int64 v21; // [rsp+70h] [rbp-C8h]
  _OWORD v22[5]; // [rsp+80h] [rbp-B8h] BYREF
  void *v23; // [rsp+D0h] [rbp-68h]
  __int64 v24; // [rsp+D8h] [rbp-60h]
  GUID v25; // [rsp+E0h] [rbp-58h]
  __int64 v26; // [rsp+F0h] [rbp-48h]
  __int64 v27; // [rsp+F8h] [rbp-40h]
  __int128 v28; // [rsp+100h] [rbp-38h]
  __int64 v29; // [rsp+110h] [rbp-28h]
  __int64 v30; // [rsp+118h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+0h]

  v2 = (void **)((char *)this + 248);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 31);
  Instance = CSnapAssistController_CreateInstance(v3, v2);
  v5 = Instance;
  if ( Instance >= 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 38);
    v8 = SnapServiceProvider_CreateInstance(v7, (void **)this + 38);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v10 = (__int64 *)winrt::make<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher,>(&v16);
      winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 48, v10);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v16);
      v22[0] = GUID_4128efbd_072b_4d9c_ad0f_37a7e12dd9ab;
      v22[1] = 0LL;
      v22[2] = GUID_02c44cbf_3831_4038_af3a_ddf1ada2f4b6;
      v22[3] = 0LL;
      v22[4] = GUID_91adc416_4c36_457e_9bab_7e545e723826;
      v23 = *v2;
      v24 = 0LL;
      v25 = GUID_fff59320_db70_4865_8fed_8b502d692f12;
      v26 = *((_QWORD *)this + 38);
      v27 = 0LL;
      v28 = winrt::impl::guid_v<winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcher>;
      v29 = *((_QWORD *)this + 48);
      v30 = 0LL;
      v11 = CImmersiveShellComponent::RegisterServiceInformation(
              (CShellSnapComponent *)((char *)this + 48),
              (__int64)v22,
              5uLL);
      v12 = v11;
      if ( v11 >= 0 )
      {
        v17[0] = (__int64)L"Windows.Internal.Shell.SnapComponent.DesktopSnapLayoutManager";
        v17[1] = 61LL;
        winrt::param::hstring::hstring((__int64)v18, v17);
        v13 = (__int64 *)winrt::get_activation_factory<winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtensionStatics>(
                           &v16,
                           v18);
        winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 228, v13);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v16);
        v19 = winrt::impl::guid_v<winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtensionStatics>;
        v20 = *(_QWORD *)winrt::Windows::Foundation::IUnknown::as<IUnknown>((char *)this + 1824, &v16);
        if ( v16 )
          winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v16);
        v21 = 0LL;
        v14 = CImmersiveShellComponent::RegisterServiceInformation(
                (CShellSnapComponent *)((char *)this + 48),
                (__int64)&v19,
                1uLL);
        v15 = v14;
        if ( v14 >= 0 )
        {
          return 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x13C,
            (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
            (const char *)(unsigned int)v14);
          return v15;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x131,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
          (const char *)(unsigned int)v11);
        return v12;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x125,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
        (const char *)(unsigned int)v8);
      return v9;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x124,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)(unsigned int)Instance);
    return v5;
  }
}
