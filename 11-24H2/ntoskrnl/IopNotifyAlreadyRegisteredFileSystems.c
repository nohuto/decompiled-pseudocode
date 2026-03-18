/*
 * XREFs of IopNotifyAlreadyRegisteredFileSystems @ 0x140714FE0
 * Callers:
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1407144C0 (IoRegisterFsRegistrationChangeMountAware.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IopNotifyAlreadyRegisteredFileSystems(__int64 **a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rdi
  char i; // si
  __int64 result; // rax
  __int64 *v8; // rcx

  v4 = *a1;
  for ( i = a3; v4 != (__int64 *)a1; result = guard_dispatch_icall_no_overrides(v8, a2, a3, a4) )
  {
    result = *v4;
    if ( (__int64 **)*v4 == a1 && i )
      break;
    v8 = v4 - 10;
    LOBYTE(a2) = 1;
    v4 = (__int64 *)*v4;
  }
  return result;
}
