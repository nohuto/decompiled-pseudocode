/*
 * XREFs of _PnpGetMappedPropertyLocalesDispatch @ 0x140980428
 * Callers:
 *     _PnpGetObjectPropertyLocalesWorker @ 0x1409802E8 (_PnpGetObjectPropertyLocalesWorker.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PnpGetMappedPropertyLocalesDispatch(__int64 a1, __int64 a2, int a3)
{
  if ( (unsigned int)(a3 - 1) > 0xA )
    return 3221225485LL;
  if ( *(_QWORD *)(a1 + 8LL * a3 + 296) )
    return guard_dispatch_icall_no_overrides(a1, a2);
  return 3221225474LL;
}
