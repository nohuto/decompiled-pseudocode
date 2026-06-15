/*
 * XREFs of ?StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z @ 0x180018A10
 * Callers:
 *     ?LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ @ 0x180023F3C (-LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ.c)
 *     ??$ReportFailure_Msg@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z @ 0x180043400 (--$ReportFailure_Msg@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z.c)
 *     ??R_lambda_fe718337787c493ce2d833414db25eba_@@QEBAJPEBGPEADPEAG_K@Z @ 0x1800488BC (--R_lambda_fe718337787c493ce2d833414db25eba_@@QEBAJPEBGPEADPEAG_K@Z.c)
 * Callees:
 *     _vsnwprintf @ 0x1800212B4 (_vsnwprintf.c)
 */

__int64 __fastcall StringCchVPrintfW(unsigned __int16 *a1, __int64 a2, const unsigned __int16 *a3, va_list a4)
{
  unsigned int v5; // edi
  unsigned __int64 v6; // rsi
  int v7; // eax

  if ( (unsigned __int64)(a2 - 1) <= 0x7FFFFFFE )
  {
    v6 = a2 - 1;
    v5 = 0;
    v7 = vsnwprintf(a1, a2 - 1, a3, a4);
    if ( v7 < 0 || v7 > v6 )
    {
      v5 = -2147024774;
    }
    else if ( v7 != v6 )
    {
      return v5;
    }
    a1[v6] = 0;
  }
  else
  {
    v5 = -2147024809;
    if ( a2 )
      *a1 = 0;
  }
  return v5;
}
