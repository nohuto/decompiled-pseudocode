/*
 * XREFs of ??$swap@U?$weak_ref@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@$0A@@std@@YAXAEAU?$weak_ref@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@0@Z @ 0x18004E3A0
 * Callers:
 *     ??4?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BHA@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x18004DF40 (--4-$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi@UIShellViewC.c)
 *     ??4?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x18004E288 (--4-$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi_ea_18004E288.c)
 *     ??4?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BDI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x18004E314 (--4-$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi_ea_18004E314.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

__int64 *__fastcall std::swap<winrt::weak_ref<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>,0>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v4; // rax
  __int64 *result; // rax
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF

  v2 = *a1;
  v6 = *a1;
  *a1 = 0LL;
  if ( a1 != a2 )
  {
    v4 = *a2;
    *a2 = 0LL;
    *a1 = v4;
  }
  result = &v6;
  if ( a2 == &v6 )
  {
    if ( v2 )
      return (__int64 *)winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v6);
  }
  else
  {
    if ( *a2 )
      result = (__int64 *)winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a2);
    *a2 = v2;
  }
  return result;
}
