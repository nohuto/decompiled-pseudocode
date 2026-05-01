/*
 * XREFs of _lambda_a9532b1fa26d741b99fb0a1f5016c730_::__lambda_a9532b1fa26d741b99fb0a1f5016c730_ @ 0x1806B06D4
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::publish_services_::_1_::dtor$25 @ 0x1802C19AD (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--publish_services_--_1_--dt.c)
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::publish_services_::_1_::dtor$41 @ 0x1802C19BF (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--publish_servi_ea_1802C19BF.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_a9532b1fa26d741b99fb0a1f5016c730_::__lambda_a9532b1fa26d741b99fb0a1f5016c730_(__int64 a1)
{
  __int64 *v1; // rcx
  __int64 result; // rax

  v1 = (__int64 *)(a1 + 8);
  if ( *v1 )
    return winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v1);
  return result;
}
