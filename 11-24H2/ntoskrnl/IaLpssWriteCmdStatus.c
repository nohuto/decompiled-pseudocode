/*
 * XREFs of IaLpssWriteCmdStatus @ 0x1406A49EC
 * Callers:
 *     IaLpssPciSetPower @ 0x1406A4638 (IaLpssPciSetPower.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IaLpssWriteCmdStatus(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( !IaLpssCmdStatus || !a1 )
    return 2LL;
  guard_dispatch_icall_no_overrides(IaLpssCmdStatus, *a1, IaLpssCmdStatus, a4);
  return 0LL;
}
