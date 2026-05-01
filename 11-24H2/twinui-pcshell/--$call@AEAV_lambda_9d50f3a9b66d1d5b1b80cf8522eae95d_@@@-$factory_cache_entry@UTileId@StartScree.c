/*
 * XREFs of ??$call@AEAV_lambda_9d50f3a9b66d1d5b1b80cf8522eae95d_@@@?$factory_cache_entry@UTileId@StartScreen@UI@WindowsUdk@winrt@@UITileIdStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_9d50f3a9b66d1d5b1b80cf8522eae95d_@@@Z @ 0x1805386D4
 * Callers:
 *     ?TryGetTileIdForWindow@JointResize@@AEAA?AUTileId@StartScreen@UI@WindowsUdk@winrt@@PEAUHWND__@@@Z @ 0x18053C3D0 (-TryGetTileIdForWindow@JointResize@@AEAA-AUTileId@StartScreen@UI@WindowsUdk@winrt@@PEAUHWND__@@@.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??R_lambda_89d5cc9e848954b376ddd65d03be1168_@@QEBA@AEBUIHttpFormUrlEncodedContentFactory@Http@Web@Windows@winrt@@@Z @ 0x180057864 (--R_lambda_89d5cc9e848954b376ddd65d03be1168_@@QEBA@AEBUIHttpFormUrlEncodedContentFactory@Http@We.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801CAB80 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DB14D (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UITileIdStatics@StartScreen@UI@WindowsUdk@winrt@@@winrt@@YA?AUITileIdStatics@StartScreen@UI@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x180538B9C (--$get_activation_factory@UITileIdStatics@StartScreen@UI@WindowsUdk@winrt@@@winrt@@YA-AUITileIdS.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::StartScreen::TileId,winrt::WindowsUdk::UI::StartScreen::ITileIdStatics>::call<_lambda_9d50f3a9b66d1d5b1b80cf8522eae95d_ &>(
        __int64 *a1,
        _QWORD *a2,
        __int64 **a3)
{
  __int64 v6[2]; // [rsp+28h] [rbp-48h] BYREF
  __int64 v7[2]; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v8[40]; // [rsp+48h] [rbp-28h] BYREF
  __int64 *v9; // [rsp+80h] [rbp+10h] BYREF
  __int64 v10; // [rsp+98h] [rbp+28h] BYREF

  v9 = a1;
  v7[0] = (__int64)L"WindowsUdk.UI.StartScreen.TileId";
  v7[1] = 32LL;
  winrt::param::hstring::hstring((__int64)v8, v7);
  winrt::get_activation_factory<winrt::WindowsUdk::UI::StartScreen::ITileIdStatics>(&v9, v8);
  if ( v9
    && (v10 = 0LL,
        (*(void (__fastcall **)(__int64 *, __int64 *, __int64 *))*v9)(
          v9,
          &winrt::impl::guid_v<winrt::impl::IAgileObject>,
          &v10),
        (v6[0] = v10) != 0) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v6);
    v6[1] = (__int64)&qword_1808CB148;
    _InterlockedIncrement64(&qword_1808CB148);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::StartScreen::TileId,winrt::WindowsUdk::UI::StartScreen::ITileIdStatics>,
            (signed __int64)v9,
            0LL) )
    {
      v9 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808CB150);
    }
    _lambda_89d5cc9e848954b376ddd65d03be1168_::operator()(
      a3,
      a2,
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::StartScreen::TileId,winrt::WindowsUdk::UI::StartScreen::ITileIdStatics>);
    _InterlockedDecrement64(&qword_1808CB148);
  }
  else
  {
    _lambda_89d5cc9e848954b376ddd65d03be1168_::operator()(a3, a2, &v9);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
  return a2;
}
