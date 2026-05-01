/*
 * XREFs of ?Provider@TaskGroupsTraceLoggingProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x180588CE0
 * Callers:
 *     ??$TaskGroupSwitchToCompleted@Uguid@winrt@@@TaskGroupsTraceLoggingProvider@@SAX$$QEAUguid@winrt@@@Z @ 0x180586D84 (--$TaskGroupSwitchToCompleted@Uguid@winrt@@@TaskGroupsTraceLoggingProvider@@SAX$$QEAUguid@winrt@.c)
 *     ??$TaskGroupInteracted@Uguid@winrt@@W4TaskGroupSwitcherSurface@@W4TaskGroupInteractionKind@@@TaskGroupsTraceLoggingProvider@@SAX$$QEAUguid@winrt@@$$QEAW4TaskGroupSwitcherSurface@@$$QEAW4TaskGroupInteractionKind@@@Z @ 0x1806AE16C (--$TaskGroupInteracted@Uguid@winrt@@W4TaskGroupSwitcherSurface@@W4TaskGroupInteractionKind@@@Tas.c)
 *     ??$TaskGroupWindowIndependentlySwitchedTo@Uguid@winrt@@IW4TaskGroupSwitcherSurface@@@TaskGroupsTraceLoggingProvider@@SAX$$QEAUguid@winrt@@$$QEAI$$QEAW4TaskGroupSwitcherSurface@@@Z @ 0x1806AE23C (--$TaskGroupWindowIndependentlySwitchedTo@Uguid@winrt@@IW4TaskGroupSwitcherSurface@@@TaskGroupsT.c)
 * Callees:
 *     ?get@?$static_lazy@VTaskGroupsTraceLoggingProvider@@@details@wil@@QEAAPEAVTaskGroupsTraceLoggingProvider@@P6AXXZ@Z @ 0x18058981C (-get@-$static_lazy@VTaskGroupsTraceLoggingProvider@@@details@wil@@QEAAPEAVTaskGroupsTraceLogging.c)
 */

const struct _tlgProvider_t *__fastcall TaskGroupsTraceLoggingProvider::Provider(__int64 a1)
{
  return *(const struct _tlgProvider_t **)(wil::details::static_lazy<TaskGroupsTraceLoggingProvider>::get(
                                             a1,
                                             _lambda_34d8d9f79e2b37c49eea107dd9a294d3_::_lambda_invoker_cdecl_)
                                         + 8);
}
