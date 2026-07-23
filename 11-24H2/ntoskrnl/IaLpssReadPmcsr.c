/*
 * XREFs of IaLpssReadPmcsr @ 0x1406A5810
 * Callers:
 *     IaLpssPciSetPower @ 0x1406A5638 (IaLpssPciSetPower.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IaLpssReadPmcsr(_DWORD *a1, __int64 a2)
{
  if ( !IaLpssPmcsr || !a1 )
    return 2LL;
  *a1 = guard_dispatch_icall_no_overrides(IaLpssPmcsr, a2);
  return 0LL;
}
