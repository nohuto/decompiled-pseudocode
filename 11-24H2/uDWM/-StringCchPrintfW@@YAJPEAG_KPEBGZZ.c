/*
 * XREFs of ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18008122C
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180081018 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?OpenComposedEvent@@YAJIKPEAPEAX@Z @ 0x18008117C (-OpenComposedEvent@@YAJIKPEAPEAX@Z.c)
 *     ??$ReportFailure_Msg@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z @ 0x18008B8B4 (--$ReportFailure_Msg@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18009E220 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBUhresult_error@winrt@@PEAG_K@Z @ 0x18009F0F8 (-MaybeGetExceptionString@details@wil@@YAXAEBUhresult_error@winrt@@PEAG_K@Z.c)
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBVexception@stdext@@PEAG_K@Z @ 0x18009F188 (-MaybeGetExceptionString@details@wil@@YAXAEBVexception@stdext@@PEAG_K@Z.c)
 * Callees:
 *     StringVPrintfWorkerW @ 0x180081278 (StringVPrintfWorkerW.c)
 */

HRESULT StringCchPrintfW(unsigned __int16 *a1, size_t a2, size_t *a3, ...)
{
  HRESULT result; // eax
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  if ( a2 - 1 <= 0x7FFFFFFE )
    return StringVPrintfWorkerW(a1, a2, a3, (STRSAFE_LPCWSTR)a3, va);
  result = -2147024809;
  if ( a2 )
    *a1 = 0;
  return result;
}
