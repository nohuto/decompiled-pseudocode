/*
 * XREFs of IaLpssWritePmcsr @ 0x1406997F8
 * Callers:
 *     IaLpssPciSetPower @ 0x140699408 (IaLpssPciSetPower.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IaLpssWritePmcsr(__int64 a1)
{
  if ( !IaLpssPmcsr || !a1 )
    return 2LL;
  guard_dispatch_icall_no_overrides(IaLpssPmcsr);
  return 0LL;
}
