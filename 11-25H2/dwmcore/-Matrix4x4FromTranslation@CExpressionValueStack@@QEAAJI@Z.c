/*
 * XREFs of ?Matrix4x4FromTranslation@CExpressionValueStack@@QEAAJI@Z @ 0x1801EA6C4
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802404F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D310 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18015F7F0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     ??4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z @ 0x1802A2C34 (--4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4FromTranslation(CExpressionValueStack *this, unsigned int a2)
{
  unsigned int v2; // eax
  char v5; // r14
  __int64 v6; // rax
  __int128 *v7; // rbx
  int v8; // eax
  unsigned int v9; // ebx
  struct CExpressionValue *v11; // rbx
  struct CExpressionValue *v12; // r15
  struct CExpressionValue *v13; // rax
  int v14; // xmm0_4
  int v15; // xmm1_4
  int v16; // xmm2_4
  unsigned int v17; // [rsp+20h] [rbp-88h]
  __int64 v18; // [rsp+30h] [rbp-78h]
  _BYTE v19[64]; // [rsp+40h] [rbp-68h] BYREF
  CPathData *v20; // [rsp+80h] [rbp-28h] BYREF
  int v21; // [rsp+88h] [rbp-20h]

  v2 = *((_DWORD *)this + 2);
  v5 = 0;
  if ( v2 < a2 )
  {
    v17 = 5478;
LABEL_11:
    v9 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v17,
      0LL);
    return v9;
  }
  if ( a2 == 1 )
  {
    v6 = v2 - 1;
    if ( (unsigned int)v6 >= *((_DWORD *)this + 10) )
    {
      memset_0(v19, 0, sizeof(v19));
      v7 = &CExpressionValueStack::s_emptyValue;
      v20 = 0LL;
      v21 = 0;
      CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v19);
      Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v20);
    }
    else
    {
      v7 = (__int128 *)(*((_QWORD *)this + 2) + 80 * v6);
    }
    if ( *((_DWORD *)v7 + 18) == 52 )
    {
      v8 = *((_DWORD *)v7 + 2);
      v5 = 1;
      v18 = *(_QWORD *)v7;
      *((_DWORD *)v7 + 18) = 265;
      *(_QWORD *)v7 = 1065353216LL;
      *((_QWORD *)v7 + 1) = 0LL;
      *((_DWORD *)v7 + 4) = 0;
      *(_QWORD *)((char *)v7 + 20) = 1065353216LL;
      *(_QWORD *)((char *)v7 + 28) = 0LL;
      *((_DWORD *)v7 + 9) = 0;
      *((_QWORD *)v7 + 5) = 1065353216LL;
      *((_QWORD *)v7 + 6) = v18;
      *((_DWORD *)v7 + 14) = v8;
      *((_DWORD *)v7 + 15) = 1065353216;
    }
  }
  else if ( a2 == 3 )
  {
    v11 = CExpressionValueStack::PeekStackValue(this, -2);
    v12 = CExpressionValueStack::PeekStackValue(this, -1);
    v13 = CExpressionValueStack::PeekStackValue(this, 0);
    if ( *((_DWORD *)v11 + 18) == 18 && *((_DWORD *)v12 + 18) == 18 && *((_DWORD *)v13 + 18) == 18 )
    {
      v14 = *(_DWORD *)v11;
      v15 = *(_DWORD *)v12;
      v16 = *(_DWORD *)v13;
      *((_DWORD *)v11 + 18) = 265;
      *(_QWORD *)v11 = 1065353216LL;
      *((_QWORD *)v11 + 1) = 0LL;
      *((_DWORD *)v11 + 4) = 0;
      *(_QWORD *)((char *)v11 + 20) = 1065353216LL;
      *(_QWORD *)((char *)v11 + 28) = 0LL;
      *((_DWORD *)v11 + 9) = 0;
      *((_QWORD *)v11 + 5) = 1065353216LL;
      *((_DWORD *)v11 + 12) = v14;
      *((_DWORD *)v11 + 13) = v15;
      *((_DWORD *)v11 + 14) = v16;
      *((_DWORD *)v11 + 15) = 1065353216;
      v9 = 0;
      goto LABEL_8;
    }
  }
  v9 = 0;
  if ( !v5 )
  {
    v17 = 5528;
    goto LABEL_11;
  }
LABEL_8:
  *((_DWORD *)this + 2) += 1 - a2;
  return v9;
}
