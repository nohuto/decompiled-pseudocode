/*
 * XREFs of ??$?0UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@P8012345@EAA?AUfire_and_forget@5@UTileCollection@StartScreen@UI@WindowsUdk@5@UTileAddedEventArgs@89WindowsUdk@5@@Z@?$TypedEventHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@UTileAddedEventArgs@2345@@Foundation@Windows@winrt@@QEAA@$$QEAU?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@3@P8AppBackupListener@implementation@Shell@Internal@23@EAA?AUfire_and_forget@3@UTileCollection@StartScreen@UI@WindowsUdk@3@UTileAddedEventArgs@StartScreen@UI@WindowsUdk@3@@Z@Z @ 0x180292814
 * Callers:
 *     ?RegisterUTMListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180050324 (-RegisterUTMListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x180293110 (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection,winrt::WindowsUdk::UI::StartScreen::TileAddedEventArgs>::TypedEventHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection,winrt::WindowsUdk::UI::StartScreen::TileAddedEventArgs>(
        _QWORD *a1,
        __int64 *a2,
        __int128 *a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+28h] [rbp-20h]
  char *v10; // [rsp+50h] [rbp+8h]

  v4 = *a2;
  *a2 = 0LL;
  v8 = v4;
  v9 = *a3;
  v10 = (char *)operator new(0x28uLL);
  winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v10 + 8));
  v5 = v8;
  v8 = 0LL;
  *(_QWORD *)(v6 + 16) = v5;
  *(_OWORD *)(v6 + 24) = v9;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v6 = &winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection,winrt::WindowsUdk::UI::StartScreen::TileAddedEventArgs>,_lambda_e4b2097ec4fe308a5db33641a3ff4a41_>::`vftable';
  *a1 = v6;
  if ( v8 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v8);
  return a1;
}
