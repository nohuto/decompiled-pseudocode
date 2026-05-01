/*
 * XREFs of ?GetBackgroundHostForId@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAA?AU?$com_ptr@USharedDesktopBackgroundVisualHost@@@7@_K@Z @ 0x180605268
 * Callers:
 *     ?DisplaySettingsChange@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1806051C0 (-DisplaySettingsChange@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAJPE.c)
 *     ?GetParentWallpaperHwnd@?$produce@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UIThemeCoordinator@34567@@impl@winrt@@UEAAHHPEA_K@Z @ 0x1806055E0 (-GetParentWallpaperHwnd@-$produce@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@wi.c)
 *     ?GetSharedBackgroundVisualHostFromSinkId@?$produce@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UIThemeCoordinator@34567@@impl@winrt@@UEAAH_KPEAPEAX@Z @ 0x1806057A0 (-GetSharedBackgroundVisualHostFromSinkId@-$produce@UThemeCoordinator@implementation@Themes@UI@In.c)
 *     ?GetXamlHostHwnd@?$produce@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UIThemeCoordinator@34567@@impl@winrt@@UEAAHHPEA_K@Z @ 0x1806058C0 (-GetXamlHostHwnd@-$produce@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UI.c)
 *     ?SetParentWallpaperHwnd@?$produce@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UIThemeCoordinator@34567@@impl@winrt@@UEAAHH_K@Z @ 0x180606390 (-SetParentWallpaperHwnd@-$produce@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@wi.c)
 *     ?ShutdownHostForId@?$produce@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UIThemeCoordinator@34567@@impl@winrt@@UEAAHH@Z @ 0x180606400 (-ShutdownHostForId@-$produce@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$_Find_lower_bound@PEAUHWND__@@@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@std@@@1@AEBQEAUHWND__@@@Z @ 0x1801B0FE8 (--$_Find_lower_bound@PEAUHWND__@@@-$_Tree@V-$_Tmap_traits@PEAUHWND__@@UExeData@@U-$less@PEAUHWND.c)
 *     ?copy_ref@?$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@AEAAXPEAUSharedDesktopBackgroundVisualHost@@@Z @ 0x1806067E8 (-copy_ref@-$com_ptr@USharedDesktopBackgroundVisualHost@@@winrt@@AEAAXPEAUSharedDesktopBackground.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::GetBackgroundHostForId(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3)
{
  bool v6; // si
  __int64 v7; // rdx
  __int64 v9; // [rsp+28h] [rbp-30h] BYREF
  __int64 v10; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  RTL_SRWLOCK *v12; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v13; // [rsp+68h] [rbp+10h]
  unsigned __int64 v14; // [rsp+70h] [rbp+18h] BYREF

  v14 = a3;
  v13 = a2;
  *a2 = 0LL;
  v6 = 1;
  wil::AcquireSRWLockExclusive(&v12, (RTL_SRWLOCK *)(a1 + 208));
  std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::_Find_lower_bound<HWND__ *>(
    (__int64 *)(a1 + 240),
    &v9,
    &v14);
  v7 = v10;
  if ( *(_BYTE *)(v10 + 25) || a3 < *(_QWORD *)(v10 + 32) )
    v7 = *(_QWORD *)(a1 + 240);
  else
    v6 = v10 == *(_QWORD *)(a1 + 240);
  if ( v6 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x377,
      (int)"pcshell\\twinui\\themecoordinator\\lib\\themecoordinator.cpp",
      (const char *)0x8000FFFFLL,
      1);
  winrt::com_ptr<SharedDesktopBackgroundVisualHost>::copy_ref(a2, *(_QWORD *)(v7 + 40));
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v12);
  return a2;
}
