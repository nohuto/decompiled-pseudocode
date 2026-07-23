/*
 * XREFs of BgkDisplayStringEx @ 0x14058CD24
 * Callers:
 *     BgkDisplayString @ 0x14058CC70 (BgkDisplayString.c)
 *     NtDisplayString @ 0x1407B7CC0 (NtDisplayString.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     BgkpAcquireConsole @ 0x14058D2E8 (BgkpAcquireConsole.c)
 *     HeadlessDispatch @ 0x1406523F0 (HeadlessDispatch.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     BgDisplayFade @ 0x140BB56A4 (BgDisplayFade.c)
 */

char __fastcall BgkDisplayStringEx(_WORD *a1)
{
  __int64 v3; // r8
  __int64 v4; // rdx
  bool v5; // bl

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
  if ( byte_140E65EE1 || byte_140E65EA0 )
  {
    byte_140E65EE1 = 0;
    byte_140E65EA0 = 0;
    BgDisplayFade();
  }
  v5 = (int)guard_dispatch_icall_no_overrides(a1, v4) >= 0;
  ExReleaseRundownProtection_0(&stru_140E0A9A0);
  return v5;
}
