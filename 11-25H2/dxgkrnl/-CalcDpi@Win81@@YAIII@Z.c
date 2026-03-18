/*
 * XREFs of ?CalcDpi@Win81@@YAIII@Z @ 0x1401D621C
 * Callers:
 *     ?FillDpiInfo@Win81@@YAXAEBUtagSIZE@@0IIHPEAU_DPI_INFORMATION@@@Z @ 0x1401D66D4 (-FillDpiInfo@Win81@@YAXAEBUtagSIZE@@0IIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall Win81::CalcDpi(Win81 *this, int a2)
{
  if ( a2 )
    return 254 * (int)this / (unsigned int)(10 * a2);
  WdLogSingleEntry0(1LL);
  WdLogGlobalForLineNumber = 168;
  DxgkLogInternalTriageEvent(
    0LL,
    262146,
    0xFFFFFFFFLL,
    L"Divide by zero due to 0 physical dimension.",
    168LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 0LL;
}
