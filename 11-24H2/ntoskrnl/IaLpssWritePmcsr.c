/*
 * XREFs of IaLpssWritePmcsr @ 0x1406A5A28
 * Callers:
 *     IaLpssPciSetPower @ 0x1406A5638 (IaLpssPciSetPower.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IaLpssWritePmcsr(unsigned int *a1)
{
  if ( !IaLpssPmcsr || !a1 )
    return 2LL;
  guard_dispatch_icall_no_overrides(IaLpssPmcsr, *a1);
  return 0LL;
}
