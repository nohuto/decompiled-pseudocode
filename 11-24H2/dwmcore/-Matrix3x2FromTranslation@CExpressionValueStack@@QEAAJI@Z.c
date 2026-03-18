/*
 * XREFs of ?Matrix3x2FromTranslation@CExpressionValueStack@@QEAAJI@Z @ 0x1801CDF60
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802383C0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18015B3A0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18017ECE0 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     ??4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z @ 0x180298BB4 (--4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix3x2FromTranslation(CExpressionValueStack *this, unsigned int a2)
{
  unsigned int v2; // eax
  char v3; // bp
  __int64 v6; // rax
  __int128 *v7; // rbx
  unsigned __int64 v8; // xmm1_8
  struct CExpressionValue *v10; // rbx
  struct CExpressionValue *v11; // rax
  unsigned __int64 v12; // xmm1_8
  _BYTE v13[64]; // [rsp+30h] [rbp-58h] BYREF
  CPathData *v14; // [rsp+70h] [rbp-18h] BYREF
  int v15; // [rsp+78h] [rbp-10h]

  v2 = *((_DWORD *)this + 2);
  v3 = 0;
  if ( v2 < a2 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      0x151Bu,
      0LL);
    return 2147500037LL;
  }
  if ( a2 == 1 )
  {
    v6 = v2 - 1;
    if ( (unsigned int)v6 >= *((_DWORD *)this + 10) )
    {
      memset_0(v13, 0, sizeof(v13));
      v7 = &CExpressionValueStack::s_emptyValue;
      v14 = 0LL;
      v15 = 0;
      CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v13);
      Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v14);
    }
    else
    {
      v7 = (__int128 *)(*((_QWORD *)this + 2) + 80 * v6);
    }
    if ( *((_DWORD *)v7 + 18) == 35 )
    {
      v3 = 1;
      v8 = _mm_unpacklo_ps((__m128)*(unsigned int *)v7, (__m128)*((unsigned int *)v7 + 1)).m128_u64[0];
      *v7 = _xmm;
      *((_DWORD *)v7 + 18) = 104;
      *((_QWORD *)v7 + 2) = v8;
    }
  }
  else if ( a2 == 2 )
  {
    v10 = CExpressionValueStack::PeekStackValue(this, -1);
    v11 = CExpressionValueStack::PeekStackValue(this, 0);
    if ( *((_DWORD *)v10 + 18) == 18 && *((_DWORD *)v11 + 18) == 18 )
    {
      v12 = _mm_unpacklo_ps((__m128)*(unsigned int *)v10, (__m128)*(unsigned int *)v11).m128_u64[0];
      *(_OWORD *)v10 = _xmm;
      *((_DWORD *)v10 + 18) = 104;
      *((_QWORD *)v10 + 2) = v12;
      goto LABEL_8;
    }
  }
  if ( !v3 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      0x1544u,
      0LL);
    return 2147500037LL;
  }
LABEL_8:
  *((_DWORD *)this + 2) += 1 - a2;
  return 0LL;
}
