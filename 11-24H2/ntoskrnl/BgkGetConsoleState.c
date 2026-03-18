/*
 * XREFs of BgkGetConsoleState @ 0x140BB0370
 * Callers:
 *     <none>
 * Callees:
 *     BgkpAcquireConsole @ 0x1405902C8 (BgkpAcquireConsole.c)
 *     BgkpReleaseConsole @ 0x140590314 (BgkpReleaseConsole.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall BgkGetConsoleState(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v6; // ebx

  if ( !BgkpAcquireConsole() )
    return 3221225473LL;
  v6 = guard_dispatch_icall_no_overrides(a1, v2, v3, v4);
  BgkpReleaseConsole();
  return v6;
}
