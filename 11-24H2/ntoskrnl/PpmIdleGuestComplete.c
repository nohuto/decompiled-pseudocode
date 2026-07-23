/*
 * XREFs of PpmIdleGuestComplete @ 0x14047B190
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PpmIdleGuestComplete(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  if ( a3 != -1 )
    return guard_dispatch_icall_no_overrides(a1, 0xFFFFFFFFLL);
  return result;
}
