/*
 * XREFs of ??0CDisplayScenarioContextScope@@QEAA@AEAVCDisplayScenarioContextCarrier@@@Z @ 0x1400F78B8
 * Callers:
 *     DrvProcessDxgkDisplayCallout @ 0x1400F7124 (DrvProcessDxgkDisplayCallout.c)
 *     xxxVideoPortCalloutThread @ 0x1401B08D4 (xxxVideoPortCalloutThread.c)
 * Callees:
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x1400F78E4 (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 */

CDisplayScenarioContextScope *__fastcall CDisplayScenarioContextScope::CDisplayScenarioContextScope(
        CDisplayScenarioContextScope *this,
        const struct _GUID **a2)
{
  *(_BYTE *)this = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(this, a2[1], 0, 0);
  return this;
}
