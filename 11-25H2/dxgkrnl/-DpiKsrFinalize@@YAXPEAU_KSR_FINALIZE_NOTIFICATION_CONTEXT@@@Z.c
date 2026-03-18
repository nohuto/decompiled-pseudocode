/*
 * XREFs of ?DpiKsrFinalize@@YAXPEAU_KSR_FINALIZE_NOTIFICATION_CONTEXT@@@Z @ 0x140249704
 * Callers:
 *     DpiKsrCallback @ 0x140249CF0 (DpiKsrCallback.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DpiKsrFinalize(struct _KSR_FINALIZE_NOTIFICATION_CONTEXT *a1)
{
  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1284;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pContext != nullptr", 1284LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( dword_14015E30C < 0 )
  {
    if ( *(int *)a1 >= 0 )
    {
      *(_DWORD *)a1 = dword_14015E30C;
      *((_DWORD *)a1 + 2) = 1799837764;
    }
    WdLogSingleEntry1(2LL, dword_14015E30C);
    WdLogGlobalForLineNumber = 1294;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failing the KSR Finalize",
      1295LL,
      dword_14015E30C,
      0LL,
      0LL,
      0LL);
  }
  dword_14015E30C = 0;
}
