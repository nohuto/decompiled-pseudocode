/*
 * XREFs of ForegroundBoost::_anonymous_namespace_::GetProcessPriorityByClass @ 0x1400FFE90
 * Callers:
 *     ForegroundBoost::_anonymous_namespace_::IsProcessForegroundBoostedNoSpin @ 0x1400FFE58 (ForegroundBoost--_anonymous_namespace_--IsProcessForegroundBoostedNoSpin.c)
 *     ForegroundBoost::_anonymous_namespace_::IsProcessBackground @ 0x1400FFE74 (ForegroundBoost--_anonymous_namespace_--IsProcessBackground.c)
 *     ?UpdateProcessPriorityForSpinning@ForegroundBoost@@YAXPEAUtagTHREADINFO@@@Z @ 0x140164430 (-UpdateProcessPriorityForSpinning@ForegroundBoost@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?SyncBoostAllProcesses@ForegroundBoost@@YAXXZ @ 0x1401ACC64 (-SyncBoostAllProcesses@ForegroundBoost@@YAXXZ.c)
 *     ForegroundBoost::_anonymous_namespace_::_SetForegroundPriority @ 0x1401ACF94 (ForegroundBoost--_anonymous_namespace_--_SetForegroundPriority.c)
 *     ForegroundBoost::_anonymous_namespace_::_SetForegroundPriority_Old @ 0x1401AD1B0 (ForegroundBoost--_anonymous_namespace_--_SetForegroundPriority_Old.c)
 * Callees:
 *     ForegroundBoost::_anonymous_namespace_::HasBoostSource @ 0x1401AC36C (ForegroundBoost--_anonymous_namespace_--HasBoostSource.c)
 */

__int64 __fastcall ForegroundBoost::_anonymous_namespace_::GetProcessPriorityByClass(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  if ( (unsigned __int8)ForegroundBoost::_anonymous_namespace_::HasBoostSource(a1, a2) )
    return (unsigned int)((*(_DWORD *)(a1 + 12) & 0x800) != 0) + 1;
  else
    return 0LL;
}
