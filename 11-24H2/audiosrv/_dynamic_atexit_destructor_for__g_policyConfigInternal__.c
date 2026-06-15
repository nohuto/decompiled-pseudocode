/*
 * XREFs of _dynamic_atexit_destructor_for__g_policyConfigInternal__ @ 0x180173100
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 dynamic_atexit_destructor_for__g_policyConfigInternal__()
{
  __int64 result; // rax

  if ( g_policyConfigInternal )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)g_policyConfigInternal + 16LL))(g_policyConfigInternal);
  return result;
}
