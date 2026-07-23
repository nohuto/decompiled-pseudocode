/*
 * XREFs of IaLpssWriteCmdStatus @ 0x1406A59EC
 * Callers:
 *     IaLpssPciSetPower @ 0x1406A5638 (IaLpssPciSetPower.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IaLpssWriteCmdStatus(unsigned int *a1)
{
  if ( !IaLpssCmdStatus || !a1 )
    return 2LL;
  guard_dispatch_icall_no_overrides(IaLpssCmdStatus, *a1);
  return 0LL;
}
