/*
 * XREFs of winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_0c278ba272db598cb3813ab71714e0df___ @ 0x180292B80
 * Callers:
 *     ?publish_services@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180215B00 (-publish_services@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x180293110 (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ShellViewCoordinator_winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs___lambda_0c278ba272db598cb3813ab71714e0df___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // r8
  __int64 v5; // rdx
  char *v7; // [rsp+38h] [rbp+10h]

  v7 = (char *)operator new(0x20uLL);
  winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v7 + 8));
  v4[2] = *a2;
  v5 = a2[1];
  a2[1] = 0LL;
  v4[3] = v5;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *v4 = off_18071F168;
  *a1 = v4;
  if ( a2[1] )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a2 + 1);
  return a1;
}
