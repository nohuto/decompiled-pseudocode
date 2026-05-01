/*
 * XREFs of _dynamic_atexit_destructor_for__winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::m_registrationData__ @ 0x180706FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 */

__int64 dynamic_atexit_destructor_for__winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::m_registrationData__()
{
  __int64 result; // rax

  if ( winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::m_registrationData )
    return winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::m_registrationData);
  return result;
}
