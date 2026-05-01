/*
 * XREFs of ?push_back@?$vector@U?$event_revoker@UITile@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITile@StartScreen@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BOA@AA@impl@winrt@@V?$allocator@U?$event_revoker@UITile@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITile@StartScreen@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BOA@AA@impl@winrt@@@std@@@std@@QEAAX$$QEAU?$event_revoker@UITile@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITile@StartScreen@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BOA@AA@impl@winrt@@@Z @ 0x1801EDEB8
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileAdded$_ResumeCoro$1 @ 0x1806144F0 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileAdded$_ResumeCoro$1.c)
 * Callees:
 *     <none>
 */

char *__fastcall _push_back___vector_U__event_revoker_UITile_StartScreen_UI_WindowsUdk_winrt___MP8type___abi_UITile_StartScreen_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BOA_AA_impl_winrt__V__allocator_U__event_revoker_UITile_StartScreen_UI_WindowsUdk_winrt___MP8type___abi_UITile_StartScreen_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BOA_AA_impl_winrt___std___std__QEAAX__QEAU__event_revoker_UITile_StartScreen_UI_WindowsUdk_winrt___MP8type___abi_UITile_StartScreen_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BOA_AA_impl_winrt___Z(
        __int64 **a1,
        __int64 *a2)
{
  __int64 *v2; // r9
  __int64 v3; // rax
  char *result; // rax

  v2 = a1[1];
  if ( v2 == a1[2] )
    return ____Emplace_reallocate_U__event_revoker_UITile_StartScreen_UI_WindowsUdk_winrt___MP8type___abi_UITile_StartScreen_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BOA_AA_impl_winrt_____vector_U__event_revoker_UITile_StartScreen_UI_WindowsUdk_winrt___MP8type___abi_UITile_StartScreen_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BOA_AA_impl_winrt__V__allocator_U__event_revoker_UITile_StartScreen_UI_WindowsUdk_winrt___MP8type___abi_UITile_StartScreen_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BOA_AA_impl_winrt___std___std__AEAAPEAU__event_revoker_UITile_StartScreen_UI_WindowsUdk_winrt___MP8type___abi_UITile_StartScreen_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BOA_AA_impl_winrt__QEAU234___QEAU234__Z(
             a1,
             a1[1],
             a2);
  v3 = *a2;
  *a2 = 0LL;
  *v2 = v3;
  result = (char *)a2[1];
  v2[1] = (__int64)result;
  a1[1] += 2;
  return result;
}
