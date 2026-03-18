/*
 * XREFs of ?Vector4Transform@CExpressionValueStack@@QEAAJXZ @ 0x18024D798
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802383C0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18015B3A0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ?D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x1802B5758 (-D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBU1@PEBUD2DQuaternion@@@Z @ 0x1802B5858 (-D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBU1@PEBUD2DQuaternion@@@Z.c)
 *     ?D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector2@@PEBUD2DMatrix@@@Z @ 0x1802B59D8 (-D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector2@@PEBUD2DMatrix@@@Z.c)
 *     ?D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector2@@PEBUD2DQuaternion@@@Z @ 0x1802B5A68 (-D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector2@@PEBUD2DQuaternion@@@Z.c)
 *     ?D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector3@@PEBUD2DMatrix@@@Z @ 0x1802B5B98 (-D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector3@@PEBUD2DMatrix@@@Z.c)
 *     ?D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector3@@PEBUD2DQuaternion@@@Z @ 0x1802B5C70 (-D3DXVec4Transform@@YAPEAUD2DVector4@@PEAU1@PEBUD2DVector3@@PEBUD2DQuaternion@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Vector4Transform(CExpressionValueStack *this)
{
  unsigned int v2; // ebx
  struct CExpressionValue *v3; // rbx
  struct CExpressionValue *v4; // rcx
  int v5; // eax
  int v6; // edx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  int v10; // eax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  unsigned int v19; // [rsp+28h] [rbp-29h]
  __int128 v20; // [rsp+38h] [rbp-19h] BYREF
  __int128 v21; // [rsp+48h] [rbp-9h] BYREF
  __int128 v22; // [rsp+58h] [rbp+7h] BYREF
  __int128 v23; // [rsp+68h] [rbp+17h] BYREF
  __int128 v24; // [rsp+78h] [rbp+27h]
  __int128 v25; // [rsp+88h] [rbp+37h]
  __int128 v26; // [rsp+98h] [rbp+47h]
  __int64 v27; // [rsp+B8h] [rbp+67h] BYREF

  if ( *((_DWORD *)this + 2) < 2u )
  {
    v19 = 7441;
LABEL_3:
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v19,
      0LL);
    return v2;
  }
  v3 = CExpressionValueStack::PeekStackValue(this, -1);
  v4 = CExpressionValueStack::PeekStackValue(this, 0);
  v5 = *((_DWORD *)v3 + 18);
  if ( v5 != 35 && v5 != 52 && v5 != 69 )
  {
    v19 = 7455;
    goto LABEL_3;
  }
  v6 = *((_DWORD *)v4 + 18);
  if ( v6 != 71 && v6 != 265 )
  {
    v19 = 7464;
    goto LABEL_3;
  }
  v21 = 0LL;
  if ( v5 == 35 )
  {
    v27 = *(_QWORD *)v3;
    if ( v6 == 265 )
    {
      v7 = *((_OWORD *)v4 + 1);
      v23 = *(_OWORD *)v4;
      v8 = *((_OWORD *)v4 + 2);
      v24 = v7;
      v9 = *((_OWORD *)v4 + 3);
      v25 = v8;
      v26 = v9;
      D3DXVec4Transform((struct D2DVector4 *)&v21, (const struct D2DVector2 *)&v27, (const struct D2DMatrix *)&v23);
    }
    else
    {
      v20 = *(_OWORD *)v4;
      D3DXVec4Transform((struct D2DVector4 *)&v21, (const struct D2DVector2 *)&v27, (const struct D2DQuaternion *)&v20);
    }
  }
  else if ( v5 == 52 )
  {
    v10 = *((_DWORD *)v3 + 2);
    *(_QWORD *)&v20 = *(_QWORD *)v3;
    DWORD2(v20) = v10;
    if ( v6 == 265 )
    {
      v11 = *((_OWORD *)v4 + 1);
      v23 = *(_OWORD *)v4;
      v12 = *((_OWORD *)v4 + 2);
      v24 = v11;
      v13 = *((_OWORD *)v4 + 3);
      v25 = v12;
      v26 = v13;
      D3DXVec4Transform((struct D2DVector4 *)&v21, (const struct D2DVector3 *)&v20, (const struct D2DMatrix *)&v23);
    }
    else
    {
      v22 = *(_OWORD *)v4;
      D3DXVec4Transform((struct D2DVector4 *)&v21, (const struct D2DVector3 *)&v20, (const struct D2DQuaternion *)&v22);
    }
  }
  else
  {
    v20 = *(_OWORD *)v3;
    if ( v6 == 265 )
    {
      v14 = *((_OWORD *)v4 + 1);
      v23 = *(_OWORD *)v4;
      v15 = *((_OWORD *)v4 + 2);
      v24 = v14;
      v16 = *((_OWORD *)v4 + 3);
      v25 = v15;
      v26 = v16;
      D3DXVec4Transform((struct D2DVector4 *)&v21, (const struct D2DVector4 *)&v20, (const struct D2DMatrix *)&v23);
    }
    else
    {
      v22 = *(_OWORD *)v4;
      D3DXVec4Transform((struct D2DVector4 *)&v21, (const struct D2DVector4 *)&v20, (const struct D2DQuaternion *)&v22);
    }
  }
  v17 = v21;
  *((_DWORD *)v3 + 18) = 69;
  *(_OWORD *)v3 = v17;
  --*((_DWORD *)this + 2);
  return 0;
}
