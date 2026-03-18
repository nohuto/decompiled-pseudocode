/*
 * XREFs of IopNotifyAlreadyRegisteredFileSystems @ 0x140708EE0
 * Callers:
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1407083C0 (IoRegisterFsRegistrationChangeMountAware.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IopNotifyAlreadyRegisteredFileSystems(__int64 **a1, __int64 a2, char a3)
{
  __int64 *i; // rdi
  __int64 result; // rax
  __int64 *v7; // rcx

  for ( i = *a1; i != (__int64 *)a1; result = guard_dispatch_icall_no_overrides(v7) )
  {
    result = *i;
    if ( (__int64 **)*i == a1 && a3 )
      break;
    v7 = i - 10;
    i = (__int64 *)*i;
  }
  return result;
}
