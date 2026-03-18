/*
 * XREFs of IaLpssReadPmcsr @ 0x1406995E0
 * Callers:
 *     IaLpssPciSetPower @ 0x140699408 (IaLpssPciSetPower.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IaLpssReadPmcsr(_DWORD *a1)
{
  if ( !IaLpssPmcsr || !a1 )
    return 2LL;
  *a1 = guard_dispatch_icall_no_overrides(IaLpssPmcsr);
  return 0LL;
}
