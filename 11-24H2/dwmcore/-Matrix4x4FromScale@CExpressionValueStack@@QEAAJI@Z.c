/*
 * XREFs of ?Matrix4x4FromScale@CExpressionValueStack@@QEAAJI@Z @ 0x1802199E0
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802383C0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18015B3A0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ?D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@MMMUD2DVector3@@@Z @ 0x1802B53FC (-D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@MMMUD2DVector3@@@Z.c)
 *     ?D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@MUD2DVector3@@@Z @ 0x1802B5470 (-D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@MUD2DVector3@@@Z.c)
 *     ?D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@UD2DVector3@@1@Z @ 0x1802B54D8 (-D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@UD2DVector3@@1@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4FromScale(CExpressionValueStack *this, unsigned int a2)
{
  struct CExpressionValue *v4; // rax
  struct CExpressionValue *v5; // rcx
  __int64 v6; // xmm0_8
  int v7; // eax
  char v8; // r9
  unsigned int v9; // edi
  int v11; // xmm0_4
  struct CExpressionValue *v12; // rdi
  struct CExpressionValue *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // xmm0_8
  int v17; // eax
  __int64 v18; // xmm0_8
  int v19; // eax
  __int64 v20; // xmm0_8
  int v21; // eax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  struct CExpressionValue *v25; // rdi
  struct CExpressionValue *v26; // r12
  struct CExpressionValue *v27; // rax
  int v28; // xmm0_4
  int v29; // xmm1_4
  int v30; // xmm2_4
  struct CExpressionValue *v31; // r12
  struct CExpressionValue *v32; // r13
  struct CExpressionValue *v33; // rax
  __int64 v34; // xmm0_8
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  unsigned int v38; // [rsp+28h] [rbp-39h]
  __int64 v39; // [rsp+38h] [rbp-29h] BYREF
  int v40; // [rsp+40h] [rbp-21h]
  __int64 v41; // [rsp+48h] [rbp-19h] BYREF
  int v42; // [rsp+50h] [rbp-11h]
  __int128 v43; // [rsp+58h] [rbp-9h] BYREF
  __int128 v44; // [rsp+68h] [rbp+7h]
  __int128 v45; // [rsp+78h] [rbp+17h]
  __int128 v46; // [rsp+88h] [rbp+27h]

  if ( *((_DWORD *)this + 2) < a2 )
  {
    v38 = 5930;
LABEL_11:
    v9 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v38,
      0LL);
    return v9;
  }
  if ( a2 == 1 )
  {
    v4 = CExpressionValueStack::PeekStackValue(this, 0);
    v5 = v4;
    if ( *((_DWORD *)v4 + 18) == 18 )
    {
      v11 = *(_DWORD *)v4;
      *((_DWORD *)v4 + 18) = 265;
      *(_DWORD *)v4 = v11;
      *(_QWORD *)((char *)v4 + 4) = 0LL;
      *(_QWORD *)((char *)v4 + 12) = 0LL;
      *((_DWORD *)v4 + 5) = v11;
      *((_QWORD *)v4 + 3) = 0LL;
      *((_QWORD *)v4 + 4) = 0LL;
      *((_DWORD *)v4 + 10) = v11;
      *(_QWORD *)((char *)v4 + 44) = 0LL;
      *(_QWORD *)((char *)v4 + 52) = 0LL;
      *((_DWORD *)v4 + 15) = 1065353216;
      goto LABEL_8;
    }
    if ( *((_DWORD *)v4 + 18) != 52 )
      goto LABEL_12;
    v6 = *(_QWORD *)v4;
    v7 = *((_DWORD *)v4 + 2);
    v39 = v6;
    *((_DWORD *)v5 + 18) = 265;
    *(_DWORD *)v5 = v6;
    *(_QWORD *)((char *)v5 + 4) = 0LL;
    *(_QWORD *)((char *)v5 + 12) = 0LL;
    *((_DWORD *)v5 + 5) = HIDWORD(v39);
    *((_QWORD *)v5 + 3) = 0LL;
    *((_QWORD *)v5 + 4) = 0LL;
    *((_DWORD *)v5 + 10) = v7;
    *(_QWORD *)((char *)v5 + 44) = 0LL;
    *(_QWORD *)((char *)v5 + 52) = 0LL;
    *((_DWORD *)v5 + 15) = 1065353216;
LABEL_6:
    v8 = 1;
    goto LABEL_7;
  }
  if ( a2 != 2 )
  {
    if ( a2 == 3 )
    {
      v25 = CExpressionValueStack::PeekStackValue(this, -2);
      v26 = CExpressionValueStack::PeekStackValue(this, -1);
      v27 = CExpressionValueStack::PeekStackValue(this, 0);
      if ( *((_DWORD *)v25 + 18) != 18 || *((_DWORD *)v26 + 18) != 18 || *((_DWORD *)v27 + 18) != 18 )
        goto LABEL_12;
      v28 = *(_DWORD *)v25;
      v29 = *(_DWORD *)v26;
      v30 = *(_DWORD *)v27;
      *((_DWORD *)v25 + 18) = 265;
      *(_DWORD *)v25 = v28;
      *(_QWORD *)((char *)v25 + 4) = 0LL;
      *(_QWORD *)((char *)v25 + 12) = 0LL;
      *((_DWORD *)v25 + 5) = v29;
      *((_QWORD *)v25 + 3) = 0LL;
      *((_QWORD *)v25 + 4) = 0LL;
      *((_DWORD *)v25 + 10) = v30;
      *(_QWORD *)((char *)v25 + 44) = 0LL;
      *(_QWORD *)((char *)v25 + 52) = 0LL;
      *((_DWORD *)v25 + 15) = 1065353216;
      goto LABEL_6;
    }
    if ( a2 != 4 )
      goto LABEL_12;
    v12 = CExpressionValueStack::PeekStackValue(this, -3);
    v31 = CExpressionValueStack::PeekStackValue(this, -2);
    v32 = CExpressionValueStack::PeekStackValue(this, -1);
    v33 = CExpressionValueStack::PeekStackValue(this, 0);
    if ( *((_DWORD *)v12 + 18) != 18
      || *((_DWORD *)v31 + 18) != 18
      || *((_DWORD *)v32 + 18) != 18
      || *((_DWORD *)v33 + 18) != 52 )
    {
      goto LABEL_12;
    }
    v34 = *(_QWORD *)v33;
    v42 = *((_DWORD *)v33 + 2);
    v41 = v34;
    D2DMatrixScaling(&v43);
LABEL_32:
    v35 = v44;
    *(_OWORD *)v12 = v43;
    v36 = v45;
    *((_OWORD *)v12 + 1) = v35;
    v37 = v46;
    *((_OWORD *)v12 + 2) = v36;
    *((_OWORD *)v12 + 3) = v37;
    *((_DWORD *)v12 + 18) = 265;
    goto LABEL_8;
  }
  v12 = CExpressionValueStack::PeekStackValue(this, -1);
  v13 = CExpressionValueStack::PeekStackValue(this, 0);
  if ( *((_DWORD *)v12 + 18) == 18 )
  {
    if ( *((_DWORD *)v13 + 18) != 52 )
      goto LABEL_12;
    v16 = *(_QWORD *)v13;
    v17 = *((_DWORD *)v13 + 2);
    v39 = v16;
    v40 = v17;
    D2DMatrixScaling(&v43, v14, &v39);
    goto LABEL_32;
  }
  if ( *((_DWORD *)v12 + 18) != 52 || *((_DWORD *)v13 + 18) != 52 )
    goto LABEL_12;
  v18 = *(_QWORD *)v13;
  v19 = *((_DWORD *)v13 + 2);
  v39 = v18;
  v20 = *(_QWORD *)v12;
  LOBYTE(v15) = 1;
  v40 = v19;
  v21 = *((_DWORD *)v12 + 2);
  v41 = v20;
  v42 = v21;
  D2DMatrixScaling(&v43, &v41, &v39, v15);
  v22 = v44;
  *(_OWORD *)v12 = v43;
  *((_DWORD *)v12 + 18) = 265;
  v23 = v45;
  *((_OWORD *)v12 + 1) = v22;
  v24 = v46;
  *((_OWORD *)v12 + 2) = v23;
  *((_OWORD *)v12 + 3) = v24;
LABEL_7:
  if ( !v8 )
  {
LABEL_12:
    v38 = 6057;
    goto LABEL_11;
  }
LABEL_8:
  v9 = 0;
  *((_DWORD *)this + 2) += 1 - a2;
  return v9;
}
