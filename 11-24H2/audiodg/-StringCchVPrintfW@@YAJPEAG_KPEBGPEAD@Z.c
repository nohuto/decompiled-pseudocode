/*
 * XREFs of ?StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z @ 0x14005E4D8
 * Callers:
 *     ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x1400467E8 (-PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z.c)
 *     ?LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ @ 0x14005D250 (-LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ.c)
 * Callees:
 *     StringVPrintfWorkerW @ 0x14003B584 (StringVPrintfWorkerW.c)
 */

HRESULT __fastcall StringCchVPrintfW(unsigned __int16 *a1, size_t a2, size_t *a3, va_list argList)
{
  HRESULT result; // eax

  if ( a2 - 1 <= 0x7FFFFFFE )
    return StringVPrintfWorkerW(a1, a2, a3, (STRSAFE_LPCWSTR)a3, argList);
  result = -2147024809;
  if ( a2 )
    *a1 = 0;
  return result;
}
