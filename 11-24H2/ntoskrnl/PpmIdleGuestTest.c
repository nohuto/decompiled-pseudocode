/*
 * XREFs of PpmIdleGuestTest @ 0x1405DC1E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PpmIdleGuestTest(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edx

  v4 = 0;
  if ( (_DWORD)a3 != -1 && *(_QWORD *)(PpmPlatformStates + 16) )
    return (unsigned int)guard_dispatch_icall_no_overrides(a1, 0LL, a3, a4);
  return v4;
}
