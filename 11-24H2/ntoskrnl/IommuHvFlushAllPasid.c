/*
 * XREFs of IommuHvFlushAllPasid @ 0x14049F5E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 IommuHvFlushAllPasid()
{
  if ( qword_140FC1218 )
    guard_dispatch_icall_no_overrides(0LL, 0xFFFFFFFFLL);
  return 0LL;
}
