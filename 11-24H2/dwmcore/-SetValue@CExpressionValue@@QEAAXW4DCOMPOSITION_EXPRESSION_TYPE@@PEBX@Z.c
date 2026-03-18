/*
 * XREFs of ?SetValue@CExpressionValue@@QEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18028E234
 * Callers:
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x18000F990 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?GetSampledStartingValue@CKeyframeAnimation@@QEAAJPEAVCExpressionValue@@@Z @ 0x1800E6EC4 (-GetSampledStartingValue@CKeyframeAnimation@@QEAAJPEAVCExpressionValue@@@Z.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x180154180 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?ReadValueFromCache@CExpression@@AEBA_NPEBUExpressionReferenceInfoWithCache@@PEAVCExpressionValue@@@Z @ 0x18029B0A0 (-ReadValueFromCache@CExpression@@AEBA_NPEBUExpressionReferenceInfoWithCache@@PEAVCExpressionValu.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802422DC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall CExpressionValue::SetValue(__int64 a1, int a2, __int64 a3, const char *a4)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 > 52 )
  {
    v8 = a2 - 69;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 33;
          if ( v11 )
          {
            if ( v11 != 161 )
              goto LABEL_27;
            *(_DWORD *)(a1 + 72) = 265;
            *(_OWORD *)a1 = *(_OWORD *)a3;
            *(_OWORD *)(a1 + 16) = *(_OWORD *)(a3 + 16);
            *(_OWORD *)(a1 + 32) = *(_OWORD *)(a3 + 32);
            *(_OWORD *)(a1 + 48) = *(_OWORD *)(a3 + 48);
          }
          else
          {
            *(_DWORD *)(a1 + 72) = 104;
            *(_OWORD *)a1 = *(_OWORD *)a3;
            *(_QWORD *)(a1 + 16) = *(_QWORD *)(a3 + 16);
          }
          return;
        }
        *(_DWORD *)(a1 + 72) = 71;
      }
      else
      {
        *(_DWORD *)(a1 + 72) = 70;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 72) = 69;
    }
    *(_OWORD *)a1 = *(_OWORD *)a3;
    return;
  }
  if ( a2 == 52 )
  {
    *(_DWORD *)(a1 + 72) = 52;
    *(_QWORD *)a1 = *(_QWORD *)a3;
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(a3 + 8);
  }
  else if ( a2 )
  {
    v4 = a2 - 11;
    if ( v4 )
    {
      v5 = v4 - 6;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 17;
          if ( v7 )
          {
            if ( v7 == 7 )
            {
              *(_DWORD *)(a1 + 72) = 42;
              *(_DWORD *)a1 = *(_DWORD *)a3;
              return;
            }
LABEL_27:
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              (void *)0x27D,
              (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expressionvalue.cpp",
              a4);
          }
          *(_DWORD *)(a1 + 72) = 35;
          *(_QWORD *)a1 = *(_QWORD *)a3;
        }
        else
        {
          *(_DWORD *)a1 = *(_DWORD *)a3;
          *(_DWORD *)(a1 + 72) = 18;
        }
      }
      else
      {
        *(_BYTE *)a1 = *(_BYTE *)a3;
        *(_DWORD *)(a1 + 72) = 17;
      }
    }
    else
    {
      CExpressionValue::SetPathValue((CExpressionValue *)a1, (const struct CPathData *)a3);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 72) = 0;
  }
}
