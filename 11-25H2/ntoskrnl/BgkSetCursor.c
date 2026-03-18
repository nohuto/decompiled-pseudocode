/*
 * XREFs of BgkSetCursor @ 0x140BA0490
 * Callers:
 *     <none>
 * Callees:
 *     BgkpAcquireConsole @ 0x14058CAE8 (BgkpAcquireConsole.c)
 *     BgkpReleaseConsole @ 0x14058CB34 (BgkpReleaseConsole.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall BgkSetCursor(unsigned int a1)
{
  unsigned int v3; // ebx

  if ( !BgkpAcquireConsole() )
    return 3221225473LL;
  v3 = guard_dispatch_icall_no_overrides(a1);
  BgkpReleaseConsole();
  return v3;
}
