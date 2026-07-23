/*
 * XREFs of _PnpObjectRaiseDeleteEvent @ 0x14081CB1C
 * Callers:
 *     _PnpDeleteObjectDispatch @ 0x14081B438 (_PnpDeleteObjectDispatch.c)
 *     _CmRaiseDeleteEvent @ 0x14081CA00 (_CmRaiseDeleteEvent.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PnpObjectRaiseDeleteEvent(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 496);
  if ( result )
    return guard_dispatch_icall_no_overrides(a1, a2);
  return result;
}
