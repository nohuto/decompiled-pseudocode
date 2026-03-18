/*
 * XREFs of HalAssignSlotResources @ 0x1406F1660
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalAssignSlotResources(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  if ( a5 == 5 )
    return guard_dispatch_icall_no_overrides(a1);
  else
    return 3221225474LL;
}
