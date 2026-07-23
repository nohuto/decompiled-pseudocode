/*
 * XREFs of DbgkpLkmdIsMemoryBlockPresentFromCallback @ 0x140705CE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall DbgkpLkmdIsMemoryBlockPresentFromCallback(__int64 a1, __int64 a2)
{
  return guard_dispatch_icall_no_overrides(a1 + 0x4000, a2);
}
