/*
 * XREFs of ?And@CExpressionValueStack@@QEAAJXZ @ 0x1801F0180
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802383C0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18017ECE0 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     ??4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z @ 0x180298BB4 (--4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::And(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  __int64 v3; // rax
  __int128 *v4; // rdi
  __int128 *v5; // rsi
  char v6; // r14
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // r15d
  unsigned int v11; // [rsp+20h] [rbp-68h]
  _BYTE v12[64]; // [rsp+30h] [rbp-58h] BYREF
  CPathData *v13; // [rsp+70h] [rbp-18h] BYREF
  int v14; // [rsp+78h] [rbp-10h]

  v1 = *((_DWORD *)this + 2);
  if ( v1 < 2 )
  {
    v11 = 1808;
LABEL_15:
    v9 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v11,
      0LL);
    return v9;
  }
  v3 = v1 - 2;
  v4 = &CExpressionValueStack::s_emptyValue;
  if ( (unsigned int)v3 >= *((_DWORD *)this + 10) )
  {
    memset_0(v12, 0, sizeof(v12));
    v13 = 0LL;
    v14 = 0;
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v12);
    Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v13);
    v5 = &CExpressionValueStack::s_emptyValue;
  }
  else
  {
    v5 = (__int128 *)(*((_QWORD *)this + 2) + 80 * v3);
  }
  v6 = 1;
  v7 = (unsigned int)(*((_DWORD *)this + 2) - 1);
  if ( (unsigned int)v7 >= *((_DWORD *)this + 10) )
  {
    memset_0(v12, 0, sizeof(v12));
    v13 = 0LL;
    v14 = 0;
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v12);
    Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v13);
  }
  else
  {
    v4 = (__int128 *)(*((_QWORD *)this + 2) + 80 * v7);
  }
  v8 = *((_DWORD *)v5 + 18);
  v9 = 0;
  if ( v8 != *((_DWORD *)v4 + 18) )
  {
    v11 = 1836;
    goto LABEL_15;
  }
  if ( v8 != 17 )
  {
    v11 = 1855;
    goto LABEL_15;
  }
  if ( !*(_BYTE *)v5 || !*(_BYTE *)v4 )
    v6 = 0;
  *((_DWORD *)v5 + 18) = 17;
  *(_BYTE *)v5 = v6;
  --*((_DWORD *)this + 2);
  return v9;
}
