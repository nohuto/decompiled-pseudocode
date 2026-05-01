/*
 * XREFs of ??$create_and_initialize@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@AEBUhstring@6@AEAW4SearchAppActivationMode@3456@AEAURect@Foundation@Windows@6@AEAUDeferralCompletedHandler@Foundation@Windows@6@AEA_NAEAU76@AEAUSearchAppHost@3456@@impl@winrt@@YAPEAUSearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@1@AEBUhstring@1@AEAW4SearchAppActivationMode@4561@AEAURect@Foundation@Windows@1@AEAUDeferralCompletedHandler@Foundation@Windows@1@AEA_NAEAU71@AEAUSearchAppHost@4561@@Z @ 0x1801BB4EC
 * Callers:
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x1802430DC (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800549EC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ??0?$producers_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@V?$tuple@USearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@UISearchAppActivatedEventArgs2@2345@UIActivatedEventArgs@Activation@ApplicationModel@Windows@5@UIInitializeActivatedEventArgs@89Windows@5@UILaunchActivatedEventArgs@89Windows@5@UILaunchActivatedEventArgs2@89Windows@5@UIActivatedEventArgsWithUser@89Windows@5@UIPrelaunchActivatedEventArgs@89Windows@5@@std@@@impl@winrt@@QEAA@XZ @ 0x1801BB6FC (--0-$producers_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@V-$tu.c)
 *     ??0?$IReference@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@AEBURect@123@@Z @ 0x1801BB854 (--0-$IReference@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@AEBURect@123@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=8
_QWORD *__fastcall winrt::impl::create_and_initialize<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,winrt::hstring const &,enum winrt::WindowsUdk::UI::Shell::SearchAppActivationMode &,winrt::Windows::Foundation::Rect &,winrt::Windows::Foundation::DeferralCompletedHandler &,bool &,winrt::hstring &,winrt::WindowsUdk::UI::Shell::SearchAppHost &>(
        struct winrt::hstring *a1,
        _DWORD *a2,
        __int64 a3,
        _QWORD *a4,
        char *a5,
        struct winrt::hstring *a6,
        _QWORD *a7)
{
  _QWORD *v11; // r15
  char v12; // bp
  __int64 v13; // r9
  _QWORD v15[6]; // [rsp+28h] [rbp-30h] BYREF

  v11 = operator new(0x98uLL);
  v15[1] = v11;
  v12 = *a5;
  winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::Rect>::IReference<winrt::Windows::Foundation::Rect>(
    v15,
    a3);
  winrt::impl::producers_base<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,std::tuple<winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs,winrt::WindowsUdk::UI::Shell::ISearchAppActivatedEventArgs2,winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,winrt::Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser,winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>>::producers_base<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,std::tuple<winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs,winrt::WindowsUdk::UI::Shell::ISearchAppActivatedEventArgs2,winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,winrt::Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser,winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>>(v11 + 2);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  v11[1] = v13;
  *v11 = &winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs::`vftable';
  winrt::hstring::hstring((winrt::hstring *)(v11 + 10), a1);
  *((_DWORD *)v11 + 22) = *a2;
  v11[12] = v15[0];
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(v11 + 12);
  v11[13] = *a4;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(v11 + 13);
  *((_DWORD *)v11 + 28) = 0;
  *((_DWORD *)v11 + 29) = 0;
  v11[15] = 0LL;
  *((_BYTE *)v11 + 128) = v12;
  winrt::hstring::hstring((winrt::hstring *)(v11 + 17), a6);
  v11[18] = *a7;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(v11 + 18);
  *v11 = &winrt::impl::heap_implements<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs>::`vftable';
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v15);
  return v11;
}
