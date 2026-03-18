/*
 * XREFs of ?ColorRgb@CExpressionValueStack@@QEAAJXZ @ 0x1801F7120
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802404F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D310 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     ??4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z @ 0x1802A2C34 (--4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::ColorRgb(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  __int64 v3; // rax
  _QWORD *v4; // r12
  __int128 *v5; // rbx
  __int128 *v6; // r14
  __int64 v7; // rax
  __int128 *v8; // r15
  __int64 v9; // rax
  __int128 *v10; // r13
  __int64 v11; // rax
  unsigned int v12; // r12d
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm5_4
  float v16; // xmm3_4
  unsigned int v18; // [rsp+20h] [rbp-60h]
  _BYTE v19[64]; // [rsp+30h] [rbp-50h] BYREF
  CPathData *v20; // [rsp+70h] [rbp-10h] BYREF
  int v21; // [rsp+78h] [rbp-8h]

  v1 = *((_DWORD *)this + 2);
  if ( v1 < 4 )
  {
    v18 = 5030;
    goto LABEL_17;
  }
  v3 = v1 - 4;
  v4 = (_QWORD *)((char *)this + 16);
  v5 = &CExpressionValueStack::s_emptyValue;
  if ( (unsigned int)v3 >= *((_DWORD *)this + 10) )
  {
    memset_0(v19, 0, sizeof(v19));
    v20 = 0LL;
    v21 = 0;
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v19);
    Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v20);
    v6 = &CExpressionValueStack::s_emptyValue;
  }
  else
  {
    v6 = (__int128 *)(*v4 + 80 * v3);
  }
  v7 = (unsigned int)(*((_DWORD *)this + 2) - 3);
  if ( (unsigned int)v7 >= *((_DWORD *)this + 10) )
  {
    memset_0(v19, 0, sizeof(v19));
    v20 = 0LL;
    v21 = 0;
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v19);
    Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v20);
    v8 = &CExpressionValueStack::s_emptyValue;
  }
  else
  {
    v8 = (__int128 *)(*v4 + 80 * v7);
  }
  v9 = (unsigned int)(*((_DWORD *)this + 2) - 2);
  if ( (unsigned int)v9 >= *((_DWORD *)this + 10) )
  {
    memset_0(v19, 0, sizeof(v19));
    v20 = 0LL;
    v21 = 0;
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v19);
    Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v20);
    v10 = &CExpressionValueStack::s_emptyValue;
  }
  else
  {
    v10 = (__int128 *)(*v4 + 80 * v9);
  }
  v11 = (unsigned int)(*((_DWORD *)this + 2) - 1);
  if ( (unsigned int)v11 >= *((_DWORD *)this + 10) )
  {
    memset_0(v19, 0, sizeof(v19));
    v20 = 0LL;
    v21 = 0;
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v19);
    Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v20);
  }
  else
  {
    v5 = (__int128 *)(*v4 + 80 * v11);
  }
  if ( *((_DWORD *)v6 + 18) != 18
    || *((_DWORD *)v8 + 18) != 18
    || *((_DWORD *)v10 + 18) != 18
    || (v12 = 0, *((_DWORD *)v5 + 18) != 18) )
  {
    v18 = 5048;
LABEL_17:
    v12 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v18,
      0LL);
    return v12;
  }
  v13 = *(float *)v8;
  v14 = fminf(*(float *)v10, 255.0);
  v15 = *(float *)v6;
  v16 = fminf(*(float *)v5, 255.0);
  *((_DWORD *)v6 + 18) = 70;
  *(float *)v6 = fmaxf(fminf(v13, 255.0), 0.0) / 255.0;
  *((float *)v6 + 1) = fmaxf(v14, 0.0) / 255.0;
  *((float *)v6 + 2) = fmaxf(v16, 0.0) / 255.0;
  *((float *)v6 + 3) = fmaxf(fminf(v15, 255.0), 0.0) / 255.0;
  *((_DWORD *)this + 2) -= 3;
  return v12;
}
