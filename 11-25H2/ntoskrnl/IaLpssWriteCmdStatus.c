/*
 * XREFs of IaLpssWriteCmdStatus @ 0x1406997BC
 * Callers:
 *     IaLpssPciSetPower @ 0x140699408 (IaLpssPciSetPower.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IaLpssWriteCmdStatus(__int64 a1)
{
  if ( !IaLpssCmdStatus || !a1 )
    return 2LL;
  guard_dispatch_icall_no_overrides(IaLpssCmdStatus);
  return 0LL;
}
