/*
 * XREFs of IaLpssReadCmdStatus @ 0x1406A57D0
 * Callers:
 *     IaLpssPciSetPower @ 0x1406A5638 (IaLpssPciSetPower.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IaLpssReadCmdStatus(_DWORD *a1, __int64 a2)
{
  if ( !IaLpssCmdStatus || !a1 )
    return 2LL;
  *a1 = guard_dispatch_icall_no_overrides(IaLpssCmdStatus, a2);
  return 0LL;
}
