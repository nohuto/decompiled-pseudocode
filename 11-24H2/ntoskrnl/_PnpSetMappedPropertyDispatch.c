/*
 * XREFs of _PnpSetMappedPropertyDispatch @ 0x140A59F64
 * Callers:
 *     _PnpSetObjectPropertyWorker @ 0x1408B8BB0 (_PnpSetObjectPropertyWorker.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PnpSetMappedPropertyDispatch(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (unsigned int)(a3 - 1) > 0xA )
    return 3221225485LL;
  if ( *(_QWORD *)(a1 + 8LL * (int)a3 + 296) )
    return guard_dispatch_icall_no_overrides(a1, a2, a3, 9LL);
  return 3221225474LL;
}
