/*
 * XREFs of WriteRegisterWithIndex16 @ 0x1406A5750
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall WriteRegisterWithIndex16(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  return guard_dispatch_icall_no_overrides(
           *(_QWORD *)a1 + a2 * (unsigned int)*(unsigned __int8 *)(a1 + 14),
           (unsigned __int8)a3,
           a3,
           a1);
}
