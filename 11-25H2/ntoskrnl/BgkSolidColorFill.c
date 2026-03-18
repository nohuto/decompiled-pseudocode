/*
 * XREFs of BgkSolidColorFill @ 0x14058CA70
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     BgkpAcquireConsole @ 0x14058CAE8 (BgkpAcquireConsole.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall BgkSolidColorFill(int a1, int a2, int a3, int a4, unsigned int a5)
{
  __int64 v5; // rcx

  if ( !a1 && !a2 && a3 == 639 && a4 == 479 && a5 < 0x10 )
  {
    if ( (unsigned __int8)BgkpAcquireConsole() )
    {
      guard_dispatch_icall_no_overrides(0LL);
      guard_dispatch_icall_no_overrides(v5);
      ExReleaseRundownProtection_0(&stru_140E0A7E0);
    }
  }
}
