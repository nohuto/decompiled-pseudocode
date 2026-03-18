/*
 * XREFs of ?Transform@CExpressionValueStack@@QEAAJXZ @ 0x1801F9E48
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802404F0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D310 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D3DXVec4TransformArray@@YAPEAUD2DVector4@@PEAU1@IPEBU1@IPEBUD2DMatrix@@I@Z @ 0x1801FA044 (-D3DXVec4TransformArray@@YAPEAUD2DVector4@@PEAU1@IPEBU1@IPEBUD2DMatrix@@I@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     ??4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z @ 0x1802A2C34 (--4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Transform(
        CExpressionValueStack *this,
        unsigned int a2,
        __int64 a3,
        unsigned int a4)
{
  unsigned int v4; // eax
  __int64 v6; // rax
  __int128 *v7; // rbx
  __int128 *v8; // rdi
  __int64 v9; // rax
  float v10; // xmm2_4
  float v11; // xmm3_4
  unsigned int v12; // ebx
  __int128 v14; // xmm0
  unsigned int v15; // [rsp+20h] [rbp-49h]
  unsigned int v16; // [rsp+28h] [rbp-41h]
  _BYTE v17[64]; // [rsp+30h] [rbp-39h] BYREF
  CPathData *v18; // [rsp+70h] [rbp+7h] BYREF
  int v19; // [rsp+78h] [rbp+Fh]
  __int128 v20; // [rsp+80h] [rbp+17h] BYREF
  __int128 v21; // [rsp+90h] [rbp+27h] BYREF

  v4 = *((_DWORD *)this + 2);
  if ( v4 < 2 )
  {
    v15 = 2517;
    goto LABEL_16;
  }
  v6 = v4 - 2;
  v7 = &CExpressionValueStack::s_emptyValue;
  if ( (unsigned int)v6 >= *((_DWORD *)this + 10) )
  {
    memset_0(v17, 0, sizeof(v17));
    v18 = 0LL;
    v19 = 0;
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v17);
    Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v18);
    v8 = &CExpressionValueStack::s_emptyValue;
  }
  else
  {
    v8 = (__int128 *)(*((_QWORD *)this + 2) + 80 * v6);
  }
  v9 = (unsigned int)(*((_DWORD *)this + 2) - 1);
  if ( (unsigned int)v9 >= *((_DWORD *)this + 10) )
  {
    memset_0(v17, 0, sizeof(v17));
    v18 = 0LL;
    v19 = 0;
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v17);
    Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v18);
  }
  else
  {
    v7 = (__int128 *)(*((_QWORD *)this + 2) + 80 * v9);
  }
  if ( *((_DWORD *)v8 + 18) != 35 )
  {
    if ( *((_DWORD *)v8 + 18) != 69 )
      goto LABEL_9;
    if ( *((_DWORD *)v7 + 18) == 265 )
    {
      v21 = *v8;
      v20 = 0LL;
      D3DXVec4TransformArray(
        (struct D2DVector4 *)&v20,
        a2,
        (const struct D2DVector4 *)&v21,
        a4,
        (const struct D2DMatrix *)v7,
        v16);
      v14 = v20;
      *((_DWORD *)v8 + 18) = 69;
      *v8 = v14;
      goto LABEL_9;
    }
    v15 = 2543;
LABEL_16:
    v12 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v15,
      0LL);
    return v12;
  }
  if ( *((_DWORD *)v7 + 18) != 104 )
  {
    v15 = 2574;
    goto LABEL_16;
  }
  v10 = (float)((float)(*((float *)v8 + 1) * *((float *)v7 + 2)) + (float)(*(float *)v8 * *(float *)v7))
      + *((float *)v7 + 4);
  v11 = (float)((float)(*(float *)v8 * *((float *)v7 + 1)) + (float)(*((float *)v8 + 1) * *((float *)v7 + 3)))
      + *((float *)v7 + 5);
  *((_DWORD *)v8 + 18) = 35;
  *(float *)v8 = v10;
  *((float *)v8 + 1) = v11;
LABEL_9:
  --*((_DWORD *)this + 2);
  return 0;
}
