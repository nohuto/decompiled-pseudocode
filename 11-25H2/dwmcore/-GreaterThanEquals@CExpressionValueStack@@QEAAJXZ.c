/*
 * XREFs of ?GreaterThanEquals@CExpressionValueStack@@QEAAJXZ @ 0x1801FCF68
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802404F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D310 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     ??4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z @ 0x1802A2C34 (--4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::GreaterThanEquals(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  __int64 v3; // rax
  __int128 *v4; // rbx
  __int128 *v5; // rdi
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // r14d
  bool v10; // cf
  unsigned int v11; // [rsp+20h] [rbp-68h]
  _BYTE v12[64]; // [rsp+30h] [rbp-58h] BYREF
  CPathData *v13; // [rsp+70h] [rbp-18h] BYREF
  int v14; // [rsp+78h] [rbp-10h]

  v1 = *((_DWORD *)this + 2);
  if ( v1 < 2 )
  {
    v11 = 1727;
  }
  else
  {
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
    v6 = (unsigned int)(*((_DWORD *)this + 2) - 1);
    if ( (unsigned int)v6 >= *((_DWORD *)this + 10) )
    {
      memset_0(v12, 0, sizeof(v12));
      v13 = 0LL;
      v14 = 0;
      CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v12);
      Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v13);
    }
    else
    {
      v4 = (__int128 *)(*((_QWORD *)this + 2) + 80 * v6);
    }
    v7 = *((_DWORD *)v5 + 18);
    v8 = 0;
    if ( v7 == *((_DWORD *)v4 + 18) )
    {
      if ( v7 == 18 )
      {
        v10 = *(float *)v5 < *(float *)v4;
        *((_DWORD *)v5 + 18) = 17;
        *(_BYTE *)v5 = !v10;
        --*((_DWORD *)this + 2);
        return v8;
      }
      v11 = 1775;
    }
    else
    {
      v11 = 1755;
    }
  }
  v8 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    20,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v11,
    0LL);
  return v8;
}
