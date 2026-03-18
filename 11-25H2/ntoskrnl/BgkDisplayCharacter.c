/*
 * XREFs of BgkDisplayCharacter @ 0x140BA0240
 * Callers:
 *     <none>
 * Callees:
 *     BgkpAcquireConsole @ 0x14058CAE8 (BgkpAcquireConsole.c)
 *     BgkpReleaseConsole @ 0x14058CB34 (BgkpReleaseConsole.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     BgDisplayFade @ 0x140BA36A4 (BgDisplayFade.c)
 */

__int64 __fastcall BgkDisplayCharacter(unsigned __int16 a1)
{
  unsigned int v3; // ebx

  if ( !BgkpAcquireConsole() )
    return 3221225473LL;
  if ( byte_140E65B51 || byte_140E65B21 )
  {
    byte_140E65B51 = 0;
    byte_140E65B21 = 0;
    BgDisplayFade(0LL);
  }
  v3 = guard_dispatch_icall_no_overrides(a1);
  BgkpReleaseConsole();
  return v3;
}
