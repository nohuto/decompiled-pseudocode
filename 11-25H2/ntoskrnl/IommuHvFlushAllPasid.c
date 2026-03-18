/*
 * XREFs of IommuHvFlushAllPasid @ 0x140562B90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 IommuHvFlushAllPasid()
{
  if ( qword_140FC0818 )
    guard_dispatch_icall_no_overrides(0LL);
  return 0LL;
}
