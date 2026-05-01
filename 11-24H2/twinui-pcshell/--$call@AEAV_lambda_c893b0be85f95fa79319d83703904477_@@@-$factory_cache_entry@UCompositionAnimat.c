/*
 * XREFs of ??$call@AEAV_lambda_c893b0be85f95fa79319d83703904477_@@@?$factory_cache_entry@UCompositionAnimation@Composition@UI@WindowsUdk@winrt@@UICompositionAnimationStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_c893b0be85f95fa79319d83703904477_@@@Z @ 0x1806A8E34
 * Callers:
 *     ?CreateAnimation@VirtualDesktopSwitcherHost@@AEAA?AV?$tuple@UScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@UCompositor@2345@@std@@AEBM0AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@3@AEBU_GUID@@AEBUfloat2@Numerics@Foundation@Windows@winrt@@3@Z @ 0x180115610 (-CreateAnimation@VirtualDesktopSwitcherHost@@AEAA-AV-$tuple@UScalarKeyFrameAnimation@Composition.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?TryAddTag@?$consume_WindowsUdk_UI_Composition_ICompositionAnimationStatics@UICompositionAnimationStatics@Composition@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUICompositionAnimationBase@Composition@UI@Windows@3@AEBUguid@3@@Z @ 0x1802ACD20 (-TryAddTag@-$consume_WindowsUdk_UI_Composition_ICompositionAnimationStatics@UICompositionAnimati.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@_WU?$char_traits@_W@std@@@std@@@Z @ 0x1802CB3E8 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@_WU-$char_traits@_W@std@@@std@@@Z.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DB14D (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UICompositionAnimationStatics@Composition@UI@WindowsUdk@winrt@@@winrt@@YA?AUICompositionAnimationStatics@Composition@UI@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x1806A90D8 (--$get_activation_factory@UICompositionAnimationStatics@Composition@UI@WindowsUdk@winrt@@@winrt@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Composition::CompositionAnimation,winrt::WindowsUdk::UI::Composition::ICompositionAnimationStatics>::call<_lambda_c893b0be85f95fa79319d83703904477_ &>(
        __int64 *a1,
        __int64 a2)
{
  char v3; // bl
  _QWORD v5[2]; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v6[40]; // [rsp+38h] [rbp-28h] BYREF
  __int64 *v7; // [rsp+70h] [rbp+10h] BYREF
  __int64 v8; // [rsp+80h] [rbp+20h] BYREF
  __int64 v9; // [rsp+88h] [rbp+28h] BYREF

  v7 = a1;
  v5[0] = L"WindowsUdk.UI.Composition.CompositionAnimation";
  v5[1] = 46LL;
  winrt::param::hstring::hstring((winrt::param::hstring *)v6, (__int64)v5);
  winrt::get_activation_factory<winrt::WindowsUdk::UI::Composition::ICompositionAnimationStatics>(&v7, v6);
  if ( v7
    && (v8 = 0LL,
        (*(void (__fastcall **)(__int64 *, __int64 *, __int64 *))*v7)(
          v7,
          &winrt::impl::guid_v<winrt::impl::IAgileObject>,
          &v8),
        (v9 = v8) != 0) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v9);
    _InterlockedIncrement64(&qword_1808CBC98);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Composition::CompositionAnimation,winrt::WindowsUdk::UI::Composition::ICompositionAnimationStatics>,
            (signed __int64)v7,
            0LL) )
    {
      v7 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808CBCA0);
    }
    v3 = winrt::impl::consume_WindowsUdk_UI_Composition_ICompositionAnimationStatics<winrt::WindowsUdk::UI::Composition::ICompositionAnimationStatics>::TryAddTag(
           (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Composition::CompositionAnimation,winrt::WindowsUdk::UI::Composition::ICompositionAnimationStatics>,
           *(__int64 **)a2,
           *(__int128 **)(a2 + 8));
    _InterlockedDecrement64(&qword_1808CBC98);
  }
  else
  {
    v3 = winrt::impl::consume_WindowsUdk_UI_Composition_ICompositionAnimationStatics<winrt::WindowsUdk::UI::Composition::ICompositionAnimationStatics>::TryAddTag(
           &v7,
           *(__int64 **)a2,
           *(__int128 **)(a2 + 8));
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v7);
  return v3;
}
