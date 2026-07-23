/*
 * XREFs of PopCoalescingCallback @ 0x140A7D610
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopCoalescingCallback(__int64 a1, __int64 a2, __int64 a3)
{
  return guard_dispatch_icall_no_overrides(*(unsigned int *)(a2 + 4), a3);
}
