/*
 * XREFs of IopEnumerateEnvironmentVariablesHal @ 0x140A955F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IopEnumerateEnvironmentVariablesHal(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  return guard_dispatch_icall_no_overrides(a3, a4, a5, a6);
}
