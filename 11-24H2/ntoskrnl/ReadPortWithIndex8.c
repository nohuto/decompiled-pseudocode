/*
 * XREFs of ReadPortWithIndex8 @ 0x1406A64D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ReadPortWithIndex8(__int64 a1, __int64 a2)
{
  return guard_dispatch_icall_no_overrides(
           *(_QWORD *)a1 + (unsigned __int8)a2 * (unsigned int)*(unsigned __int8 *)(a1 + 14),
           a2);
}
