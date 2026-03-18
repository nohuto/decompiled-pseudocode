/*
 * XREFs of PpmIdleGuestComplete @ 0x140480630
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PpmIdleGuestComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( (_DWORD)a3 != -1 )
    return guard_dispatch_icall_no_overrides(a1, 0xFFFFFFFFLL, a3, a4);
  return result;
}
