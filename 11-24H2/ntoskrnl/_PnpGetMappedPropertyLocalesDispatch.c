/*
 * XREFs of _PnpGetMappedPropertyLocalesDispatch @ 0x1409953E8
 * Callers:
 *     _PnpGetObjectPropertyLocalesWorker @ 0x1409952A8 (_PnpGetObjectPropertyLocalesWorker.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PnpGetMappedPropertyLocalesDispatch(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (unsigned int)(a3 - 1) > 0xA )
    return 3221225485LL;
  if ( *(_QWORD *)(a1 + 8LL * (int)a3 + 296) )
    return guard_dispatch_icall_no_overrides(a1, a2, a3, 7LL);
  return 3221225474LL;
}
