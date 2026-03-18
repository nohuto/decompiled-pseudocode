/*
 * XREFs of _PnpObjectRaiseCreateEvent @ 0x1409D4F50
 * Callers:
 *     _PnpCreateObjectDispatch @ 0x14081AACC (_PnpCreateObjectDispatch.c)
 *     _CmRaiseCreateEvent @ 0x1409D440C (_CmRaiseCreateEvent.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PnpObjectRaiseCreateEvent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 496);
  if ( result )
    return guard_dispatch_icall_no_overrides(a1, a2, a3, 2LL);
  return result;
}
