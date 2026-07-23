/*
 * XREFs of BgkGetCursorState @ 0x140BB23C0
 * Callers:
 *     <none>
 * Callees:
 *     BgkpAcquireConsole @ 0x14058D2E8 (BgkpAcquireConsole.c)
 *     BgkpReleaseConsole @ 0x14058D334 (BgkpReleaseConsole.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall BgkGetCursorState(__int64 a1, __int64 a2)
{
  unsigned int v5; // ebx

  if ( !BgkpAcquireConsole() )
    return 3221225473LL;
  v5 = guard_dispatch_icall_no_overrides(a1, a2);
  BgkpReleaseConsole();
  return v5;
}
