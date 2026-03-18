/*
 * XREFs of ?DpiKsrFinalize@@YAXPEAU_KSR_FINALIZE_NOTIFICATION_CONTEXT@@@Z @ 0x140250534
 * Callers:
 *     DpiKsrCallback @ 0x140250B20 (DpiKsrCallback.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DpiKsrFinalize(struct _KSR_FINALIZE_NOTIFICATION_CONTEXT *a1)
{
  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1284;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pContext != nullptr", 1284LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( dword_1401612CC < 0 )
  {
    if ( *(int *)a1 >= 0 )
    {
      *(_DWORD *)a1 = dword_1401612CC;
      *((_DWORD *)a1 + 2) = 1799837764;
    }
    WdLogSingleEntry1(2LL, dword_1401612CC);
    WdLogGlobalForLineNumber = 1294;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failing the KSR Finalize",
      1295LL,
      dword_1401612CC,
      0LL,
      0LL,
      0LL);
  }
  dword_1401612CC = 0;
}
