/*
 * XREFs of PopCoalescingCallback @ 0x140A7F010
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopCoalescingCallback(__int64 a1, __int64 a2)
{
  return guard_dispatch_icall_no_overrides(*(unsigned int *)(a2 + 4));
}
