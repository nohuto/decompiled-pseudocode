/*
 * XREFs of ?Round@CExpressionValueStack@@QEAAJXZ @ 0x1801F86D8
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802404F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D310 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     ??4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z @ 0x1802A2C34 (--4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ceilf_0 @ 0x1802E886C (ceilf_0.c)
 *     floorf_0 @ 0x1802E88A8 (floorf_0.c)
 */

__int64 __fastcall CExpressionValueStack::Round(CExpressionValueStack *this)
{
  int v1; // eax
  __int64 v2; // rax
  __int128 *v3; // rbx
  float v4; // xmm6_4
  float v5; // xmm0_4
  float v6; // xmm0_4
  unsigned int v7; // ebx
  unsigned int v9; // [rsp+20h] [rbp-78h]
  _BYTE v10[64]; // [rsp+30h] [rbp-68h] BYREF
  CPathData *v11; // [rsp+70h] [rbp-28h] BYREF
  int v12; // [rsp+78h] [rbp-20h]
  float Y; // [rsp+A0h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 2);
  if ( !v1 )
  {
    v9 = 4327;
    goto LABEL_16;
  }
  v2 = (unsigned int)(v1 - 1);
  if ( (unsigned int)v2 >= *((_DWORD *)this + 10) )
  {
    memset_0(v10, 0, sizeof(v10));
    v11 = 0LL;
    v3 = &CExpressionValueStack::s_emptyValue;
    v12 = 0;
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v10);
    Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v11);
  }
  else
  {
    v3 = (__int128 *)(*((_QWORD *)this + 2) + 80 * v2);
  }
  if ( *((_DWORD *)v3 + 18) != 18 )
  {
    v9 = 4372;
LABEL_16:
    v7 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v9,
      0LL);
    return v7;
  }
  v4 = *(float *)v3;
  Y = 0.0;
  v5 = modff(v4, &Y);
  if ( ((int)COERCE_FLOAT(LODWORD(Y) & _xmm) & 1) != 0 || COERCE_FLOAT(LODWORD(v5) & _xmm) != 0.5 )
  {
    if ( v4 < 0.0 )
      v6 = ceilf_0(v4 - 0.5);
    else
      v6 = floorf_0(v4 + 0.5);
  }
  else if ( v4 >= 0.0 )
  {
    v6 = floorf_0(v4 + 0.5) - 1.0;
  }
  else
  {
    v6 = ceilf_0(v4 - 0.5) + 1.0;
  }
  *((_DWORD *)v3 + 18) = 18;
  *(float *)v3 = v6;
  return 0;
}
