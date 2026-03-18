/*
 * XREFs of ?Vector3@CExpressionValueStack@@QEAAJXZ @ 0x1801EC7B0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802404F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D310 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     ??4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z @ 0x1802A2C34 (--4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Vector3(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  __int64 v3; // rax
  _QWORD *v4; // r12
  __int128 *v5; // rdi
  __int128 *v6; // rsi
  __int64 v7; // rax
  __int128 *v8; // r15
  __int64 v9; // rax
  unsigned int v10; // r12d
  int v11; // xmm0_4
  int v12; // xmm1_4
  unsigned int v14; // [rsp+20h] [rbp-60h]
  _BYTE v15[64]; // [rsp+30h] [rbp-50h] BYREF
  CPathData *v16; // [rsp+70h] [rbp-10h] BYREF
  int v17; // [rsp+78h] [rbp-8h]

  v1 = *((_DWORD *)this + 2);
  if ( v1 < 3 )
  {
    v14 = 4913;
    goto LABEL_14;
  }
  v3 = v1 - 3;
  v4 = (_QWORD *)((char *)this + 16);
  v5 = &CExpressionValueStack::s_emptyValue;
  if ( (unsigned int)v3 >= *((_DWORD *)this + 10) )
  {
    memset_0(v15, 0, sizeof(v15));
    v16 = 0LL;
    v17 = 0;
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v15);
    Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v16);
    v6 = &CExpressionValueStack::s_emptyValue;
  }
  else
  {
    v6 = (__int128 *)(*v4 + 80 * v3);
  }
  v7 = (unsigned int)(*((_DWORD *)this + 2) - 2);
  if ( (unsigned int)v7 >= *((_DWORD *)this + 10) )
  {
    memset_0(v15, 0, sizeof(v15));
    v16 = 0LL;
    v17 = 0;
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v15);
    Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v16);
    v8 = &CExpressionValueStack::s_emptyValue;
  }
  else
  {
    v8 = (__int128 *)(*v4 + 80 * v7);
  }
  v9 = (unsigned int)(*((_DWORD *)this + 2) - 1);
  if ( (unsigned int)v9 >= *((_DWORD *)this + 10) )
  {
    memset_0(v15, 0, sizeof(v15));
    v16 = 0LL;
    v17 = 0;
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v15);
    Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v16);
  }
  else
  {
    v5 = (__int128 *)(*v4 + 80 * v9);
  }
  if ( *((_DWORD *)v6 + 18) != 18 || *((_DWORD *)v8 + 18) != 18 || (v10 = 0, *((_DWORD *)v5 + 18) != 18) )
  {
    v14 = 4929;
LABEL_14:
    v10 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v14,
      0LL);
    return v10;
  }
  v11 = *(_DWORD *)v8;
  v12 = *(_DWORD *)v5;
  *((_DWORD *)v6 + 18) = 52;
  *((_DWORD *)v6 + 1) = v11;
  *((_DWORD *)v6 + 2) = v12;
  *((_DWORD *)this + 2) -= 2;
  return v10;
}
