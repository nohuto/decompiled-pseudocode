/*
 * XREFs of ?StringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1801CF650
 * Callers:
 *     ?MaybeGetExceptionString@details@wil@@YAXPE$AAVException@Platform@@PEA_W_K@Z @ 0x1801CF5B4 (-MaybeGetExceptionString@details@wil@@YAXPE$AAVException@Platform@@PEA_W_K@Z.c)
 *     ?GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z @ 0x1802AE86C (-GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z.c)
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBVexception@std@@PEA_W_K@Z @ 0x180457FE4 (-MaybeGetExceptionString@details@wil@@YAXAEBVexception@std@@PEA_W_K@Z.c)
 * Callees:
 *     StringVPrintfWorkerW @ 0x1801CF69C (StringVPrintfWorkerW.c)
 */

HRESULT StringCchPrintfW(wchar_t *a1, size_t a2, wchar_t *a3, ...)
{
  HRESULT result; // eax
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  if ( a2 - 1 <= 0x7FFFFFFE )
    return StringVPrintfWorkerW(a1, a2, (size_t *)a3, a3, va);
  result = -2147024809;
  if ( a2 )
    *a1 = 0;
  return result;
}
