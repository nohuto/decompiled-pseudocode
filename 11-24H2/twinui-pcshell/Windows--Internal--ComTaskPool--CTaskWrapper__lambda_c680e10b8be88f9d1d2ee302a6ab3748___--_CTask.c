/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c680e10b8be88f9d1d2ee302a6ab3748___::_CTaskWrapper__lambda_c680e10b8be88f9d1d2ee302a6ab3748___ @ 0x180361DC4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c680e10b8be88f9d1d2ee302a6ab3748___::_scalar_deleting_destructor_ @ 0x180361EE0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c680e10b8be88f9d1d2ee302a6ab3748___--_scala.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c680e10b8be88f9d1d2ee302a6ab3748___::_CTaskWrapper__lambda_c680e10b8be88f9d1d2ee302a6ab3748___(
        __int64 a1)
{
  __int64 *v2; // rcx
  __int64 result; // rax

  v2 = (__int64 *)(a1 + 24);
  if ( *v2 )
    result = winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v2);
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
