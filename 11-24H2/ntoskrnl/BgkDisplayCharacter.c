/*
 * XREFs of BgkDisplayCharacter @ 0x140BB2240
 * Callers:
 *     <none>
 * Callees:
 *     BgkpAcquireConsole @ 0x14058D2E8 (BgkpAcquireConsole.c)
 *     BgkpReleaseConsole @ 0x14058D334 (BgkpReleaseConsole.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     BgDisplayFade @ 0x140BB56A4 (BgDisplayFade.c)
 */

__int64 __fastcall BgkDisplayCharacter(unsigned __int16 a1, unsigned int a2)
{
  unsigned int v5; // ebx

  if ( !BgkpAcquireConsole() )
    return 3221225473LL;
  if ( byte_140E65EE1 || byte_140E65EA0 )
  {
    byte_140E65EE1 = 0;
    byte_140E65EA0 = 0;
    BgDisplayFade(0LL);
  }
  v5 = guard_dispatch_icall_no_overrides(a1, a2);
  BgkpReleaseConsole();
  return v5;
}
