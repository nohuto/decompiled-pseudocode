/*
 * XREFs of _dynamic_atexit_destructor_for__s_cachedIslandWindow__ @ 0x1800515C0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 */

_QWORD *dynamic_atexit_destructor_for__s_cachedIslandWindow__()
{
  _QWORD *result; // rax
  __int64 *v1; // rcx

  result = NtCurrentTeb()->ThreadLocalStoragePointer;
  v1 = (__int64 *)(result[tls_index] + 312LL);
  if ( *v1 )
    return (_QWORD *)winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v1);
  return result;
}
