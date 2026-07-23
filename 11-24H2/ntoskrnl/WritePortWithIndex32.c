/*
 * XREFs of WritePortWithIndex32 @ 0x1406A66F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall WritePortWithIndex32(__int64 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  return guard_dispatch_icall_no_overrides(*(_QWORD *)a1 + a2 * (unsigned int)*(unsigned __int8 *)(a1 + 14), a3);
}
