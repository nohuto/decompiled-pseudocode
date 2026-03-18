/*
 * XREFs of ?Negate@CExpressionValueStack@@QEAAJXZ @ 0x1801E1A1C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802404F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D310 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     ??4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z @ 0x1802A2C34 (--4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??GD2DMatrix@@QEBA?AU0@XZ @ 0x1802BE740 (--GD2DMatrix@@QEBA-AU0@XZ.c)
 */

__int64 __fastcall CExpressionValueStack::Negate(CExpressionValueStack *this)
{
  int v1; // eax
  __int64 v2; // rax
  __int128 *v3; // rbx
  int v4; // eax
  int v5; // xmm1_4
  unsigned int v6; // ebx
  int v8; // xmm1_4
  int v9; // xmm0_4
  __int128 *v10; // rax
  int v11; // r9d
  __m128 v12; // xmm0
  int v13; // xmm1_4
  __m128 v14; // xmm0
  unsigned int v15; // [rsp+20h] [rbp-78h]
  _BYTE v16[64]; // [rsp+40h] [rbp-58h] BYREF
  CPathData *v17; // [rsp+80h] [rbp-18h] BYREF
  int v18; // [rsp+88h] [rbp-10h]

  v1 = *((_DWORD *)this + 2);
  if ( !v1 )
  {
    v15 = 491;
    goto LABEL_11;
  }
  v2 = (unsigned int)(v1 - 1);
  if ( (unsigned int)v2 >= *((_DWORD *)this + 10) )
  {
    memset_0(v16, 0, sizeof(v16));
    v17 = 0LL;
    v3 = &CExpressionValueStack::s_emptyValue;
    v18 = 0;
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v16);
    Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v17);
  }
  else
  {
    v3 = (__int128 *)(*((_QWORD *)this + 2) + 80 * v2);
  }
  v4 = *((_DWORD *)v3 + 18);
  if ( v4 != 35 )
  {
    switch ( v4 )
    {
      case 18:
        *(_DWORD *)v3 ^= _xmm;
        *((_DWORD *)v3 + 18) = 18;
        return 0;
      case 52:
        v8 = *((_DWORD *)v3 + 2);
        *(_DWORD *)v3 ^= _xmm;
        v9 = *((_DWORD *)v3 + 1) ^ _xmm;
        *((_DWORD *)v3 + 2) = v8 ^ _xmm;
        *((_DWORD *)v3 + 1) = v9;
        *((_DWORD *)v3 + 18) = 52;
        return 0;
      case 69:
        v14 = (__m128)*v3;
        *((_DWORD *)v3 + 18) = 69;
        *v3 = (__int128)_mm_xor_ps(v14, (__m128)_xmm);
        return 0;
      case 104:
        v12 = (__m128)*v3;
        *((_DWORD *)v3 + 18) = 104;
        v13 = *((_DWORD *)v3 + 4) ^ _xmm;
        *v3 = (__int128)_mm_xor_ps(v12, (__m128)_xmm);
        v12.m128_i32[0] = *((_DWORD *)v3 + 5) ^ _xmm;
        *((_DWORD *)v3 + 4) = v13;
        *((_DWORD *)v3 + 5) = v12.m128_i32[0];
        return 0;
      case 265:
        v10 = (__int128 *)D2DMatrix::operator-(v3, v16);
        *((_DWORD *)v3 + 18) = v11;
        *v3 = *v10;
        v3[1] = v10[1];
        v3[2] = v10[2];
        v3[3] = v10[3];
        return 0;
    }
    v15 = 553;
LABEL_11:
    v6 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v15,
      0LL);
    return v6;
  }
  v5 = *((_DWORD *)v3 + 1) ^ _xmm;
  *(_DWORD *)v3 ^= _xmm;
  *((_DWORD *)v3 + 1) = v5;
  *((_DWORD *)v3 + 18) = 35;
  return 0;
}
