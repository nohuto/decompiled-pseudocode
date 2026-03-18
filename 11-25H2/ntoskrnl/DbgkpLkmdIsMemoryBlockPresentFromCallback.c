/*
 * XREFs of DbgkpLkmdIsMemoryBlockPresentFromCallback @ 0x1406FC240
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall DbgkpLkmdIsMemoryBlockPresentFromCallback(__int64 a1)
{
  return guard_dispatch_icall_no_overrides(a1 + 0x4000);
}
