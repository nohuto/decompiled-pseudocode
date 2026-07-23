/*
 * XREFs of ReadPortWithIndex16 @ 0x1406A6470
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ReadPortWithIndex16(__int64 a1, __int64 a2)
{
  return guard_dispatch_icall_no_overrides(
           *(_QWORD *)a1 + (unsigned __int8)a2 * (unsigned int)*(unsigned __int8 *)(a1 + 14),
           a2);
}
