/*
 * XREFs of BgkSetCursor @ 0x140BB0490
 * Callers:
 *     <none>
 * Callees:
 *     BgkpAcquireConsole @ 0x1405902C8 (BgkpAcquireConsole.c)
 *     BgkpReleaseConsole @ 0x140590314 (BgkpReleaseConsole.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall BgkSetCursor(unsigned int a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // r9
  unsigned int v8; // ebx

  if ( !BgkpAcquireConsole() )
    return 3221225473LL;
  v8 = guard_dispatch_icall_no_overrides(a1, a2, a3, v6);
  BgkpReleaseConsole();
  return v8;
}
