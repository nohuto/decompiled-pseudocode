/*
 * XREFs of ?EvaluateException@@YAJPEAU_EXCEPTION_POINTERS@@@Z @ 0x1401AA758
 * Callers:
 *     ?DdiRenderGdi@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDERGDI@@@Z @ 0x14029E570 (-DdiRenderGdi@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_RENDERGDI@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall EvaluateException(struct _EXCEPTION_POINTERS *a1)
{
  WdLogSingleEntry1(2LL, a1);
  WdLogGlobalForLineNumber = 3260;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"Exception encountered in pfnRenderGdi: EXCEPTION_POINTERS 0x%I64x",
    (__int64)a1,
    0LL,
    0LL,
    0LL,
    0LL);
  return 1LL;
}
