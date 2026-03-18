/*
 * XREFs of ?GreaterThan@CExpressionValueStack@@QEAAJXZ @ 0x1801E02E4
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802383C0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18017ECE0 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     ??4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z @ 0x180298BB4 (--4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::GreaterThan(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  __int64 v3; // rax
  __int128 *v4; // rbx
  __int128 *v5; // rdi
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // r14d
  bool v9; // cf
  bool v10; // zf
  unsigned int v12; // [rsp+20h] [rbp-68h]
  _BYTE v13[64]; // [rsp+30h] [rbp-58h] BYREF
  CPathData *v14; // [rsp+70h] [rbp-18h] BYREF
  int v15; // [rsp+78h] [rbp-10h]

  v1 = *((_DWORD *)this + 2);
  if ( v1 < 2 )
  {
    v12 = 1646;
    goto LABEL_11;
  }
  v3 = v1 - 2;
  v4 = &CExpressionValueStack::s_emptyValue;
  if ( (unsigned int)v3 >= *((_DWORD *)this + 10) )
  {
    memset_0(v13, 0, sizeof(v13));
    v14 = 0LL;
    v15 = 0;
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v13);
    Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v14);
    v5 = &CExpressionValueStack::s_emptyValue;
  }
  else
  {
    v5 = (__int128 *)(*((_QWORD *)this + 2) + 80 * v3);
  }
  v6 = (unsigned int)(*((_DWORD *)this + 2) - 1);
  if ( (unsigned int)v6 >= *((_DWORD *)this + 10) )
  {
    memset_0(v13, 0, sizeof(v13));
    v14 = 0LL;
    v15 = 0;
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v13);
    Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v14);
  }
  else
  {
    v4 = (__int128 *)(*((_QWORD *)this + 2) + 80 * v6);
  }
  v7 = *((_DWORD *)v5 + 18);
  v8 = 0;
  if ( v7 != *((_DWORD *)v4 + 18) )
  {
    v12 = 1674;
    goto LABEL_11;
  }
  if ( v7 != 18 )
  {
    v12 = 1694;
LABEL_11:
    v8 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v12,
      0LL);
    return v8;
  }
  v9 = *(float *)v5 < *(float *)v4;
  v10 = *(float *)v5 == *(float *)v4;
  *((_DWORD *)v5 + 18) = 17;
  *(_BYTE *)v5 = !v9 && !v10;
  --*((_DWORD *)this + 2);
  return v8;
}
