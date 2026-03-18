/*
 * XREFs of IaLpssReadCmdStatus @ 0x1406995A0
 * Callers:
 *     IaLpssPciSetPower @ 0x140699408 (IaLpssPciSetPower.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IaLpssReadCmdStatus(_DWORD *a1)
{
  if ( !IaLpssCmdStatus || !a1 )
    return 2LL;
  *a1 = guard_dispatch_icall_no_overrides(IaLpssCmdStatus);
  return 0LL;
}
