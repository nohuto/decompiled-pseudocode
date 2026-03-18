/*
 * XREFs of IommuHvFlushAllPasid @ 0x1404A4850
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommuHvFlushAllPasid(__int64 a1, unsigned int a2, __int64 a3)
{
  if ( qword_140FC0FB8 )
    guard_dispatch_icall_no_overrides(0LL, 0xFFFFFFFFLL, a2, a3);
  return 0LL;
}
