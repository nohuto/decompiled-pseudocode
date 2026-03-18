/*
 * XREFs of ?ApplyMaskToValue@CExpressionValue@@QEAAJPEBVSubchannelMaskInfo@@@Z @ 0x1802993D0
 * Callers:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800387D0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x18003A6F0 (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 *     ?ResolveReference@CExpression@@AEBAJAEBUExpressionReferenceInfo@@PEAVCExpressionValue@@@Z @ 0x1802A4EE4 (-ResolveReference@CExpression@@AEBAJAEBUExpressionReferenceInfo@@PEAVCExpressionValue@@@Z.c)
 *     ?SampleInitialValueAndFinalValueIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x1802AA87C (-SampleInitialValueAndFinalValueIfNecessary@CNaturalAnimation@@AEAAJXZ.c)
 * Callees:
 *     ?CopyIntoFloatArray@CExpressionValue@@QEBAJIPEAM@Z @ 0x180039EA0 (-CopyIntoFloatArray@CExpressionValue@@QEBAJIPEAM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180195980 (-GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 */

__int64 __fastcall CExpressionValue::ApplyMaskToValue(CExpressionValue *this, const struct SubchannelMaskInfo *a2)
{
  unsigned int ExpressionTypeChannelCount; // eax
  unsigned int v5; // edi
  unsigned int v6; // r15d
  __int64 v7; // rdx
  int v8; // eax
  unsigned int v9; // esi
  unsigned int i; // edx
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // edi
  unsigned int v14; // edi
  unsigned int v15; // edi
  unsigned int v16; // edi
  unsigned int v17; // edi
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  int v22; // xmm4_4
  int v23; // xmm5_4
  int v24; // eax
  int v25; // xmm0_4
  int v26; // xmm1_4
  int v27; // xmm2_4
  int v28; // xmm1_4
  __int128 v30; // [rsp+48h] [rbp-49h] BYREF
  __int128 v31; // [rsp+58h] [rbp-39h]
  __int128 v32; // [rsp+68h] [rbp-29h]
  __int128 v33; // [rsp+78h] [rbp-19h]
  float v34[16]; // [rsp+88h] [rbp-9h] BYREF

  memset_0(v34, 0, sizeof(v34));
  memset_0(&v30, 0, 0x40uLL);
  ExpressionTypeChannelCount = GetExpressionTypeChannelCount(*((_DWORD *)this + 18));
  v5 = *((unsigned __int8 *)a2 + 4);
  v6 = ExpressionTypeChannelCount;
  v8 = CExpressionValue::CopyIntoFloatArray(this, v7, v34);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x2D5u, 0LL);
    return v9;
  }
  for ( i = 0; i < v5; *((float *)&v30 + v12) = v34[v11] )
  {
    if ( *(_DWORD *)a2 == 1 )
    {
      v11 = (*((unsigned __int8 *)a2 + 8) >> (2 * (*((_BYTE *)a2 + 4) - i) - 2)) & 3;
    }
    else
    {
      if ( *(_DWORD *)a2 != 2 )
      {
        v9 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147467259, 0x2F0u, 0LL);
        return v9;
      }
      v11 = (*((_QWORD *)a2 + 1) >> (4 * (*((_BYTE *)a2 + 4) - (unsigned __int8)i) - 4)) & 0xFLL;
    }
    if ( (unsigned int)v11 >= v6 )
    {
      v9 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147467259, 0x2FBu, 0LL);
      return v9;
    }
    if ( i >= 0x10 )
    {
      v9 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147467259, 0x306u, 0LL);
      return v9;
    }
    v12 = i++;
  }
  v13 = v5 - 1;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          v17 = v16 - 2;
          if ( v17 )
          {
            if ( v17 == 10 )
            {
              v18 = v31;
              *(_OWORD *)this = v30;
              *((_DWORD *)this + 18) = 265;
              v19 = v32;
              *((_OWORD *)this + 1) = v18;
              v20 = v33;
              *((_OWORD *)this + 2) = v19;
              *((_OWORD *)this + 3) = v20;
            }
            else
            {
              v9 = -2147467259;
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147467259, 0x33Du, 0LL);
            }
          }
          else
          {
            v21 = v30;
            v22 = v31;
            v23 = DWORD1(v31);
            *((_DWORD *)this + 18) = 104;
            *(_OWORD *)this = v21;
            *((_DWORD *)this + 4) = v22;
            *((_DWORD *)this + 5) = v23;
          }
        }
        else
        {
          v24 = 71;
          if ( *((_DWORD *)this + 18) != 71 )
            v24 = 69;
          *(_OWORD *)this = v30;
          *((_DWORD *)this + 18) = v24;
        }
      }
      else
      {
        v25 = v30;
        v26 = DWORD1(v30);
        v27 = DWORD2(v30);
        *((_DWORD *)this + 18) = 52;
        *(_DWORD *)this = v25;
        *((_DWORD *)this + 1) = v26;
        *((_DWORD *)this + 2) = v27;
      }
    }
    else
    {
      v28 = DWORD1(v30);
      *(_DWORD *)this = v30;
      *((_DWORD *)this + 1) = v28;
      *((_DWORD *)this + 18) = 35;
    }
  }
  else
  {
    *(_DWORD *)this = v30;
    *((_DWORD *)this + 18) = 18;
  }
  return v9;
}
