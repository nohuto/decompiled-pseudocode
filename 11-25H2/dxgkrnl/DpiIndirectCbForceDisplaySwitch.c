/*
 * XREFs of DpiIndirectCbForceDisplaySwitch @ 0x140248940
 * Callers:
 *     <none>
 * Callees:
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x1400354D0 (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x140043904 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     DxgkRequestAsyncDisplaySwitchCallout @ 0x1401D22E0 (DxgkRequestAsyncDisplaySwitchCallout.c)
 */

__int64 __fastcall DpiIndirectCbForceDisplaySwitch(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r9
  unsigned int v3; // ebx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v5[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v1 = *(_QWORD *)(a1 + 64);
  if ( !v1 || *(_DWORD *)(v1 + 16) != 1953656900 || *(_DWORD *)(v1 + 20) != 2 || !*(_BYTE *)(v1 + 1158) )
    return 3221225485LL;
  LOBYTE(v5[0]) = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(v5, 0LL, 0x38u, 0);
  v3 = DxgkRequestAsyncDisplaySwitchCallout(0LL, (const struct _GUID *)v5[1], *(_QWORD *)(v1 + 5888), v2);
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v5);
  return v3;
}
