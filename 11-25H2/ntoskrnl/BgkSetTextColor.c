/*
 * XREFs of BgkSetTextColor @ 0x14058C820
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     BgkpAcquireConsole @ 0x14058CAE8 (BgkpAcquireConsole.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall BgkSetTextColor(unsigned int a1)
{
  __int64 v1; // rbx

  v1 = a1;
  if ( a1 < 0x10 && (unsigned __int8)BgkpAcquireConsole() )
  {
    guard_dispatch_icall_no_overrides((char *)Palette + 4 * v1);
    ExReleaseRundownProtection_0(&stru_140E0A7E0);
  }
  return 0LL;
}
