/*
 * XREFs of BgkSolidColorFill @ 0x14058D270
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     BgkpAcquireConsole @ 0x14058D2E8 (BgkpAcquireConsole.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall BgkSolidColorFill(int a1, int a2, int a3, int a4, unsigned int a5)
{
  __int64 v5; // rdx
  __int64 v6; // rcx

  if ( !a1 && !a2 && a3 == 639 && a4 == 479 && a5 < 0x10 )
  {
    if ( (unsigned __int8)BgkpAcquireConsole() )
    {
      guard_dispatch_icall_no_overrides(0LL, (char *)Palette + 4 * a5);
      guard_dispatch_icall_no_overrides(v6, v5);
      ExReleaseRundownProtection_0(&stru_140E0A9A0);
    }
  }
}
