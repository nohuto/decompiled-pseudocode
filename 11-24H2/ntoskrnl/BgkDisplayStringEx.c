/*
 * XREFs of BgkDisplayStringEx @ 0x14058FD04
 * Callers:
 *     BgkDisplayString @ 0x14058FC50 (BgkDisplayString.c)
 *     NtDisplayString @ 0x1407B7870 (NtDisplayString.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     BgkpAcquireConsole @ 0x1405902C8 (BgkpAcquireConsole.c)
 *     HeadlessDispatch @ 0x140653C90 (HeadlessDispatch.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     BgDisplayFade @ 0x140BB36A4 (BgDisplayFade.c)
 */

char __fastcall BgkDisplayStringEx(_WORD *a1)
{
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  bool v7; // bl

  if ( !a1 )
    return 0;
  if ( !*a1 )
    return 1;
  if ( !(unsigned __int8)BgkpAcquireConsole() )
    return 0;
  v3 = -1LL;
  do
    ++v3;
  while ( a1[v3] );
  HeadlessDispatch(23LL, a1, 2 * v3 + 2);
  if ( byte_140E65DA9 || byte_140E65D68 )
  {
    byte_140E65DA9 = 0;
    byte_140E65D68 = 0;
    BgDisplayFade();
  }
  v7 = (int)guard_dispatch_icall_no_overrides(a1, v4, v5, v6) >= 0;
  ExReleaseRundownProtection_0(&stru_140E0A920);
  return v7;
}
