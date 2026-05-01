/*
 * XREFs of ??$?0V_lambda_09ec479edf7333951db41c7f2e8a33bc_@@@?$TypedEventHandler@UTile@StartScreen@UI@WindowsUdk@winrt@@UTileChangedEventArgs@2345@@Foundation@Windows@winrt@@QEAA@V_lambda_09ec479edf7333951db41c7f2e8a33bc_@@@Z @ 0x1801FC0BC
 * Callers:
 *     ??$?0UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@P8012345@EAA?AUfire_and_forget@5@UTile@StartScreen@UI@WindowsUdk@5@UTileChangedEventArgs@89WindowsUdk@5@@Z@?$TypedEventHandler@UTile@StartScreen@UI@WindowsUdk@winrt@@UTileChangedEventArgs@2345@@Foundation@Windows@winrt@@QEAA@$$QEAU?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@3@P8AppBackupListener@implementation@Shell@Internal@23@EAA?AUfire_and_forget@3@UTile@StartScreen@UI@WindowsUdk@3@UTileChangedEventArgs@StartScreen@UI@WindowsUdk@3@@Z@Z @ 0x1801FC080 (--$-0UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@P8012345@EAA-AUfire_and_for.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x180293110 (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::StartScreen::Tile,winrt::WindowsUdk::UI::StartScreen::TileChangedEventArgs>::TypedEventHandler<winrt::WindowsUdk::UI::StartScreen::Tile,winrt::WindowsUdk::UI::StartScreen::TileChangedEventArgs>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  char *v7; // [rsp+38h] [rbp+10h]

  v7 = (char *)operator new(0x28uLL);
  winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v7 + 8));
  v4 = *(_QWORD *)a2;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(v5 + 16) = v4;
  *(_OWORD *)(v5 + 24) = *(_OWORD *)(a2 + 8);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v5 = &winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::StartScreen::Tile,winrt::WindowsUdk::UI::StartScreen::TileChangedEventArgs>,_lambda_09ec479edf7333951db41c7f2e8a33bc_>::`vftable';
  *a1 = v5;
  if ( *(_QWORD *)a2 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)a2);
  return a1;
}
