/*
 * XREFs of ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18003313C
 * Callers:
 *     ?OpenDxBltEvent@@YAJ_KPEAPEAX@Z @ 0x180032920 (-OpenDxBltEvent@@YAJ_KPEAPEAX@Z.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x180034A90 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800387D0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800BF8E4 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800FDE14 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?RegisterDwmGuidWithEtw@@YAXXZ @ 0x1801D94F8 (-RegisterDwmGuidWithEtw@@YAXXZ.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x18025475C (-MilUnexpectedError@@YAXJPEBG@Z.c)
 *     ??$ReportFailure_Msg@$02@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z @ 0x180292A70 (--$ReportFailure_Msg@$02@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z.c)
 *     ?OpenComposedEvent@@YAJIKPEAPEAX@Z @ 0x1802BF444 (-OpenComposedEvent@@YAJIKPEAPEAX@Z.c)
 * Callees:
 *     _vsnwprintf @ 0x18025D120 (_vsnwprintf.c)
 */

__int64 StringCchPrintfW(unsigned __int16 *a1, __int64 a2, const unsigned __int16 *a3, ...)
{
  unsigned __int64 v4; // rsi
  unsigned int v5; // edi
  int v6; // eax
  va_list Args; // [rsp+78h] [rbp+20h] BYREF

  va_start(Args, a3);
  if ( (unsigned __int64)(a2 - 1) <= 0x7FFFFFFE )
  {
    v4 = a2 - 1;
    v5 = 0;
    v6 = vsnwprintf(a1, a2 - 1, a3, Args);
    if ( v6 < 0 || v6 > v4 )
    {
      v5 = -2147024774;
    }
    else if ( v6 != v4 )
    {
      return v5;
    }
    a1[v4] = 0;
    return v5;
  }
  v5 = -2147024809;
  if ( a2 )
    *a1 = 0;
  return v5;
}
