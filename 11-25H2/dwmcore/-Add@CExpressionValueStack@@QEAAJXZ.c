/*
 * XREFs of ?Add@CExpressionValueStack@@QEAAJXZ @ 0x1801E1D80
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802404F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D310 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     ??4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z @ 0x1802A2C34 (--4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??HD2DMatrix@@QEBA?AU0@AEBU0@@Z @ 0x1802BE784 (--HD2DMatrix@@QEBA-AU0@AEBU0@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Add(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  __int64 v3; // rax
  __int128 *v4; // rdi
  __int128 *v5; // rbx
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // r15d
  float v9; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  __int128 *v15; // rax
  int v16; // r10d
  unsigned int v17; // xmm0_4
  unsigned int v18; // xmm1_4
  float v19; // xmm2_4
  float v20; // xmm3_4
  float v21; // xmm4_4
  float v22; // xmm5_4
  unsigned int v23; // [rsp+28h] [rbp-19h]
  __int128 v24; // [rsp+38h] [rbp-9h]
  _BYTE v25[64]; // [rsp+48h] [rbp+7h] BYREF
  CPathData *v26; // [rsp+88h] [rbp+47h] BYREF
  int v27; // [rsp+90h] [rbp+4Fh]

  v1 = *((_DWORD *)this + 2);
  if ( v1 < 2 )
  {
    v23 = 583;
    goto LABEL_13;
  }
  v3 = v1 - 2;
  v4 = &CExpressionValueStack::s_emptyValue;
  if ( (unsigned int)v3 >= *((_DWORD *)this + 10) )
  {
    memset_0(v25, 0, sizeof(v25));
    v26 = 0LL;
    v27 = 0;
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v25);
    Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v26);
    v5 = &CExpressionValueStack::s_emptyValue;
  }
  else
  {
    v5 = (__int128 *)(*((_QWORD *)this + 2) + 80 * v3);
  }
  v6 = (unsigned int)(*((_DWORD *)this + 2) - 1);
  if ( (unsigned int)v6 >= *((_DWORD *)this + 10) )
  {
    memset_0(v25, 0, sizeof(v25));
    v26 = 0LL;
    v27 = 0;
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v25);
    Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v26);
  }
  else
  {
    v4 = (__int128 *)(*((_QWORD *)this + 2) + 80 * v6);
  }
  v7 = *((_DWORD *)v5 + 18);
  v8 = 0;
  if ( v7 != *((_DWORD *)v4 + 18) )
  {
    v23 = 611;
    goto LABEL_13;
  }
  if ( v7 != 18 )
  {
    switch ( v7 )
    {
      case 52:
        v9 = *(float *)v4;
        v11 = *((float *)v4 + 1) + *((float *)v5 + 1);
        v12 = *((float *)v4 + 2) + *((float *)v5 + 2);
        *((_DWORD *)v5 + 18) = 52;
        *((float *)v5 + 1) = v11;
        *((float *)v5 + 2) = v12;
        goto LABEL_9;
      case 35:
        v13 = *(float *)v4 + *(float *)v5;
        v14 = *((float *)v4 + 1) + *((float *)v5 + 1);
        *((_DWORD *)v5 + 18) = 35;
        *(float *)v5 = v13;
        *((float *)v5 + 1) = v14;
        goto LABEL_10;
      case 69:
        *(float *)&v24 = *(float *)v4 + *(float *)v5;
        *(float *)&v17 = *((float *)v4 + 2) + *((float *)v5 + 2);
        *((float *)&v24 + 1) = *((float *)v4 + 1) + *((float *)v5 + 1);
        *(float *)&v18 = *((float *)v4 + 3) + *((float *)v5 + 3);
        *((_DWORD *)v5 + 18) = 69;
        *((_QWORD *)&v24 + 1) = __PAIR64__(v18, v17);
        *v5 = v24;
        goto LABEL_10;
      case 104:
        v9 = *(float *)v4;
        v19 = *((float *)v4 + 2) + *((float *)v5 + 2);
        v20 = *((float *)v4 + 3) + *((float *)v5 + 3);
        v21 = *((float *)v4 + 4) + *((float *)v5 + 4);
        v22 = *((float *)v4 + 5) + *((float *)v5 + 5);
        *((float *)v5 + 1) = *((float *)v4 + 1) + *((float *)v5 + 1);
        *((float *)v5 + 2) = v19;
        *((float *)v5 + 3) = v20;
        *((float *)v5 + 4) = v21;
        *((float *)v5 + 5) = v22;
        *((_DWORD *)v5 + 18) = 104;
        goto LABEL_9;
      case 265:
        v15 = (__int128 *)D2DMatrix::operator+(v5, v25, v4);
        *((_DWORD *)v5 + 18) = v16;
        *v5 = *v15;
        v5[1] = v15[1];
        v5[2] = v15[2];
        v5[3] = v15[3];
        goto LABEL_10;
    }
    v23 = 666;
LABEL_13:
    v8 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v23,
      0LL);
    return v8;
  }
  v9 = *(float *)v4;
  *((_DWORD *)v5 + 18) = 18;
LABEL_9:
  *(float *)v5 = v9 + *(float *)v5;
LABEL_10:
  --*((_DWORD *)this + 2);
  return v8;
}
