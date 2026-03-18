/*
 * XREFs of ??0CDisplayScenarioContextScope@@QEAA@AEAVCDisplayScenarioContextCarrier@@@Z @ 0x1400354A4
 * Callers:
 *     ?_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z @ 0x1402716D8 (-_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z.c)
 * Callees:
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x1400354D0 (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 */

CDisplayScenarioContextScope *__fastcall CDisplayScenarioContextScope::CDisplayScenarioContextScope(
        CDisplayScenarioContextScope *this,
        const struct _GUID **a2)
{
  *(_BYTE *)this = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(this, a2[1], 0, 0);
  return this;
}
