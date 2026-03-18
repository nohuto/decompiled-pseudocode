/*
 * XREFs of BgkSetTextColor @ 0x140590000
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     BgkpAcquireConsole @ 0x1405902C8 (BgkpAcquireConsole.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall BgkSetTextColor(unsigned int a1)
{
  __int64 v1; // rbx
  __int64 v2; // r8
  __int64 v3; // r9

  v1 = a1;
  if ( a1 < 0x10 && (unsigned __int8)BgkpAcquireConsole() )
  {
    guard_dispatch_icall_no_overrides((char *)Palette + 4 * v1, 0LL, v2, v3);
    ExReleaseRundownProtection_0(&stru_140E0A920);
  }
  return 0LL;
}
