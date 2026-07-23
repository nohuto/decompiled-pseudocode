/*
 * XREFs of BgkGetConsoleState @ 0x140BB2370
 * Callers:
 *     <none>
 * Callees:
 *     BgkpAcquireConsole @ 0x14058D2E8 (BgkpAcquireConsole.c)
 *     BgkpReleaseConsole @ 0x14058D334 (BgkpReleaseConsole.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall BgkGetConsoleState(__int64 a1)
{
  __int64 v2; // rdx
  unsigned int v4; // ebx

  if ( !BgkpAcquireConsole() )
    return 3221225473LL;
  v4 = guard_dispatch_icall_no_overrides(a1, v2);
  BgkpReleaseConsole();
  return v4;
}
