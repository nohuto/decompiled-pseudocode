/*
 * XREFs of BgkDisplayStringEx @ 0x14058C524
 * Callers:
 *     BgkDisplayString @ 0x14058C470 (BgkDisplayString.c)
 *     NtDisplayString @ 0x1407A83C0 (NtDisplayString.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     BgkpAcquireConsole @ 0x14058CAE8 (BgkpAcquireConsole.c)
 *     HeadlessDispatch @ 0x140647D90 (HeadlessDispatch.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     BgDisplayFade @ 0x140BA36A4 (BgDisplayFade.c)
 */

char __fastcall BgkDisplayStringEx(_WORD *a1)
{
  __int64 v3; // r8
  bool v4; // bl

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
  if ( byte_140E65B51 || byte_140E65B21 )
  {
    byte_140E65B51 = 0;
    byte_140E65B21 = 0;
    BgDisplayFade();
  }
  v4 = (int)guard_dispatch_icall_no_overrides(a1) >= 0;
  ExReleaseRundownProtection_0(&stru_140E0A7E0);
  return v4;
}
