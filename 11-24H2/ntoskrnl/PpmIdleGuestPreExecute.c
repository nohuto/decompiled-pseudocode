/*
 * XREFs of PpmIdleGuestPreExecute @ 0x1405D8F10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PpmIdleGuestPreExecute(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  if ( a3 == -1 )
    return 0LL;
  result = 0LL;
  if ( *(_QWORD *)(PpmPlatformStates + 24) )
    return guard_dispatch_icall_no_overrides(a1, 0xFFFFFFFFLL);
  return result;
}
