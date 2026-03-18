/*
 * XREFs of BgkSolidColorFill @ 0x140590250
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     BgkpAcquireConsole @ 0x1405902C8 (BgkpAcquireConsole.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall BgkSolidColorFill(int a1, int a2, int a3, int a4, unsigned int a5)
{
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9

  if ( !a1 && !a2 && a3 == 639 && a4 == 479 && a5 < 0x10 )
  {
    if ( (unsigned __int8)BgkpAcquireConsole() )
    {
      guard_dispatch_icall_no_overrides(0LL, (char *)Palette + 4 * a5, v5, v6);
      guard_dispatch_icall_no_overrides(v8, v7, v9, v10);
      ExReleaseRundownProtection_0(&stru_140E0A920);
    }
  }
}
