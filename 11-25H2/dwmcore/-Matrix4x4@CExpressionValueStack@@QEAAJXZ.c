/*
 * XREFs of ?Matrix4x4@CExpressionValueStack@@QEAAJXZ @ 0x1801E270C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802404F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D310 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18015F7F0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     ??4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z @ 0x1802A2C34 (--4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4(CExpressionValueStack *this)
{
  int v2; // eax
  __int64 v3; // rax
  __int128 *v4; // rbx
  bool v5; // zf
  int v6; // xmm2_4
  int v7; // xmm0_4
  int v8; // xmm3_4
  int v9; // xmm1_4
  int v10; // xmm5_4
  int v11; // xmm4_4
  unsigned int v12; // ebx
  int v14; // ebx
  struct CExpressionValue **i; // r14
  struct CExpressionValue *v16; // rax
  __int128 *v17; // rcx
  int v18; // xmm14_4
  int v19; // xmm15_4
  int v20; // xmm13_4
  int v21; // xmm12_4
  int v22; // xmm11_4
  int v23; // xmm10_4
  int v24; // xmm9_4
  int v25; // xmm8_4
  int v26; // xmm7_4
  int v27; // xmm6_4
  int v28; // xmm5_4
  int v29; // xmm4_4
  int v30; // xmm3_4
  int v31; // xmm2_4
  int v32; // xmm1_4
  int v33; // xmm0_4
  unsigned int v34; // [rsp+28h] [rbp-E0h]
  _BYTE v35[64]; // [rsp+38h] [rbp-D0h] BYREF
  CPathData *v36; // [rsp+78h] [rbp-90h] BYREF
  int v37; // [rsp+80h] [rbp-88h]
  __int128 *v38; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v39[15]; // [rsp+90h] [rbp-78h] BYREF

  memset_0(v39, 0, sizeof(v39));
  v2 = *((_DWORD *)this + 2);
  if ( !v2 )
  {
    v34 = 5310;
LABEL_10:
    v12 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v34,
      0LL);
    return v12;
  }
  v3 = (unsigned int)(v2 - 1);
  if ( (unsigned int)v3 >= *((_DWORD *)this + 10) )
  {
    memset_0(v35, 0, sizeof(v35));
    v4 = &CExpressionValueStack::s_emptyValue;
    v36 = 0LL;
    v37 = 0;
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v35);
    Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v36);
  }
  else
  {
    v4 = (__int128 *)(*((_QWORD *)this + 2) + 80 * v3);
  }
  v5 = *((_DWORD *)v4 + 18) == 104;
  v38 = v4;
  if ( !v5 )
  {
    if ( *((_DWORD *)v4 + 18) == 18 )
    {
      if ( *((_DWORD *)this + 2) < 0x10u )
      {
        v34 = 5324;
      }
      else
      {
        v14 = 0;
        for ( i = (struct CExpressionValue **)&v38; ; ++i )
        {
          if ( v14 >= 16 )
          {
            v17 = v38;
            v18 = *(_DWORD *)v39[0];
            v19 = *(_DWORD *)v38;
            v20 = *(_DWORD *)v39[1];
            v21 = *(_DWORD *)v39[2];
            v22 = *(_DWORD *)v39[3];
            v23 = *(_DWORD *)v39[4];
            v24 = *(_DWORD *)v39[5];
            v25 = *(_DWORD *)v39[6];
            v26 = *(_DWORD *)v39[7];
            v27 = *(_DWORD *)v39[8];
            v28 = *(_DWORD *)v39[9];
            v29 = *(_DWORD *)v39[10];
            v30 = *(_DWORD *)v39[11];
            v31 = *(_DWORD *)v39[12];
            v32 = *(_DWORD *)v39[13];
            v33 = *(_DWORD *)v39[14];
            *((_DWORD *)v38 + 18) = 265;
            *(_DWORD *)v17 = v19;
            *((_DWORD *)v17 + 1) = v18;
            *((_DWORD *)v17 + 2) = v20;
            *((_DWORD *)v17 + 3) = v21;
            *((_DWORD *)v17 + 4) = v22;
            *((_DWORD *)v17 + 5) = v23;
            *((_DWORD *)v17 + 6) = v24;
            *((_DWORD *)v17 + 7) = v25;
            *((_DWORD *)v17 + 8) = v26;
            *((_DWORD *)v17 + 9) = v27;
            *((_DWORD *)v17 + 10) = v28;
            *((_DWORD *)v17 + 11) = v29;
            *((_DWORD *)v17 + 12) = v30;
            *((_DWORD *)v17 + 13) = v31;
            *((_DWORD *)v17 + 14) = v32;
            *((_DWORD *)v17 + 15) = v33;
            *((_DWORD *)this + 2) -= 15;
            return 0;
          }
          v16 = CExpressionValueStack::PeekStackValue(this, v14 - 15);
          *i = v16;
          if ( *((_DWORD *)v16 + 18) != 18 )
            break;
          ++v14;
        }
        v34 = 5338;
      }
    }
    else
    {
      v34 = 5376;
    }
    goto LABEL_10;
  }
  v6 = *(_DWORD *)v4;
  v7 = *((_DWORD *)v4 + 1);
  v8 = *((_DWORD *)v4 + 2);
  v9 = *((_DWORD *)v4 + 3);
  v10 = *((_DWORD *)v4 + 4);
  v11 = *((_DWORD *)v4 + 5);
  *((_DWORD *)v4 + 18) = 265;
  *(_DWORD *)v4 = v6;
  *((_DWORD *)v4 + 1) = v7;
  *((_QWORD *)v4 + 1) = 0LL;
  *((_DWORD *)v4 + 4) = v8;
  *((_DWORD *)v4 + 5) = v9;
  *((_QWORD *)v4 + 3) = 0LL;
  *((_QWORD *)v4 + 4) = 0LL;
  *((_QWORD *)v4 + 5) = 1065353216LL;
  *((_DWORD *)v4 + 12) = v10;
  *((_DWORD *)v4 + 13) = v11;
  *((_DWORD *)v4 + 14) = 0;
  *((_DWORD *)v4 + 15) = 1065353216;
  return 0;
}
