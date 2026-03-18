/*
 * XREFs of BgkGetCursorState @ 0x140BA03C0
 * Callers:
 *     <none>
 * Callees:
 *     BgkpAcquireConsole @ 0x14058CAE8 (BgkpAcquireConsole.c)
 *     BgkpReleaseConsole @ 0x14058CB34 (BgkpReleaseConsole.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall BgkGetCursorState(__int64 a1)
{
  unsigned int v3; // ebx

  if ( !BgkpAcquireConsole() )
    return 3221225473LL;
  v3 = guard_dispatch_icall_no_overrides(a1);
  BgkpReleaseConsole();
  return v3;
}
