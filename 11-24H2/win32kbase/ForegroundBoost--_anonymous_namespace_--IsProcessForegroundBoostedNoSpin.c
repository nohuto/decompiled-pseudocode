/*
 * XREFs of ForegroundBoost::_anonymous_namespace_::IsProcessForegroundBoostedNoSpin @ 0x1400FFE58
 * Callers:
 *     ForegroundBoost::_anonymous_namespace_::SetProcessPriorityByClass @ 0x140164034 (ForegroundBoost--_anonymous_namespace_--SetProcessPriorityByClass.c)
 *     ?UpdateProcessPriorityForSpinning@ForegroundBoost@@YAXPEAUtagTHREADINFO@@@Z @ 0x140164430 (-UpdateProcessPriorityForSpinning@ForegroundBoost@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     ForegroundBoost::_anonymous_namespace_::GetProcessPriorityByClass @ 0x1400FFE90 (ForegroundBoost--_anonymous_namespace_--GetProcessPriorityByClass.c)
 */

bool ForegroundBoost::_anonymous_namespace_::IsProcessForegroundBoostedNoSpin()
{
  return (unsigned int)ForegroundBoost::_anonymous_namespace_::GetProcessPriorityByClass() == 1;
}
