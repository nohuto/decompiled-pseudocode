/*
 * XREFs of ForegroundBoost::_anonymous_namespace_::IsProcessBackground @ 0x1400FFE74
 * Callers:
 *     ForegroundBoost::_anonymous_namespace_::SetProcessPriorityByClass @ 0x140164034 (ForegroundBoost--_anonymous_namespace_--SetProcessPriorityByClass.c)
 *     ?UpdateProcessPriorityForSpinning@ForegroundBoost@@YAXPEAUtagTHREADINFO@@@Z @ 0x140164430 (-UpdateProcessPriorityForSpinning@ForegroundBoost@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ForegroundBoost::_anonymous_namespace_::AddProcessBoostSource @ 0x1401ABF68 (ForegroundBoost--_anonymous_namespace_--AddProcessBoostSource.c)
 *     ?OnProcessDestroyed@ForegroundBoost@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1401AC7A0 (-OnProcessDestroyed@ForegroundBoost@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     ForegroundBoost::_anonymous_namespace_::RemoveProcessBoostSource @ 0x1401AC854 (ForegroundBoost--_anonymous_namespace_--RemoveProcessBoostSource.c)
 *     ForegroundBoost::_anonymous_namespace_::SetForegroundPriorityProcess @ 0x1401AC8F8 (ForegroundBoost--_anonymous_namespace_--SetForegroundPriorityProcess.c)
 * Callees:
 *     ForegroundBoost::_anonymous_namespace_::GetProcessPriorityByClass @ 0x1400FFE90 (ForegroundBoost--_anonymous_namespace_--GetProcessPriorityByClass.c)
 */

bool ForegroundBoost::_anonymous_namespace_::IsProcessBackground()
{
  return (unsigned int)ForegroundBoost::_anonymous_namespace_::GetProcessPriorityByClass() == 0;
}
