/*
 * XREFs of BgkDisplayCharacter @ 0x140BB0240
 * Callers:
 *     <none>
 * Callees:
 *     BgkpAcquireConsole @ 0x1405902C8 (BgkpAcquireConsole.c)
 *     BgkpReleaseConsole @ 0x140590314 (BgkpReleaseConsole.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     BgDisplayFade @ 0x140BB36A4 (BgDisplayFade.c)
 */

__int64 __fastcall BgkDisplayCharacter(unsigned __int16 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v9; // ebx

  if ( !BgkpAcquireConsole() )
    return 3221225473LL;
  if ( byte_140E65DA9 || byte_140E65D68 )
  {
    byte_140E65DA9 = 0;
    byte_140E65D68 = 0;
    BgDisplayFade(0LL);
  }
  v9 = guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  BgkpReleaseConsole();
  return v9;
}
