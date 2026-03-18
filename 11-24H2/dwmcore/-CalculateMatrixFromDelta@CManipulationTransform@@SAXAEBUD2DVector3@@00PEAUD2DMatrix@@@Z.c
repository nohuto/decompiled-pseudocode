/*
 * XREFs of ?CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z @ 0x1800EB264
 * Callers:
 *     ?_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z @ 0x1800EA8DC (-_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z.c)
 *     ?ProcessSetComponents@CManipulationTransform@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATIONTRANSFORM_SETCOMPONENTS@@@Z @ 0x1800EAEE4 (-ProcessSetComponents@CManipulationTransform@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATIO.c)
 *     ?GetProperty@CManipulationTransform@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801FC970 (-GetProperty@CManipulationTransform@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetRealization@CManipulationTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18020BC00 (-GetRealization@CManipulationTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x1800EB920 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     WithinEpsilon @ 0x1800EC020 (WithinEpsilon.c)
 */

void __fastcall CManipulationTransform::CalculateMatrixFromDelta(
        const struct D2DVector3 *a1,
        const struct D2DVector3 *a2,
        const struct D2DVector3 *a3,
        struct D2DMatrix *a4)
{
  float v4; // xmm5_4
  float v5; // xmm0_4
  float v6; // xmm4_4
  const struct D2DVector3 *v7; // r11
  char v8; // bl
  char v9; // di
  float v10; // xmm0_4
  char v11; // al
  float v12; // xmm0_4
  int v13; // xmm0_4
  int v14; // xmm1_4
  int v15; // xmm3_4
  int v16; // xmm0_4
  float v17; // xmm0_4
  int v18; // xmm1_4
  const struct D2DMatrix *v19; // rdx
  int *v20; // r10
  int v21; // xmm1_4
  int v22; // [rsp+20h] [rbp-40h] BYREF
  int v23; // [rsp+24h] [rbp-3Ch]
  int v24; // [rsp+28h] [rbp-38h]
  int v25; // [rsp+2Ch] [rbp-34h]
  int v26; // [rsp+30h] [rbp-30h]
  int v27; // [rsp+34h] [rbp-2Ch]
  int v28; // [rsp+38h] [rbp-28h]
  int v29; // [rsp+3Ch] [rbp-24h]
  int v30; // [rsp+40h] [rbp-20h]
  int v31; // [rsp+44h] [rbp-1Ch]
  int v32; // [rsp+48h] [rbp-18h]
  int v33; // [rsp+4Ch] [rbp-14h]
  int v34; // [rsp+50h] [rbp-10h]
  int v35; // [rsp+54h] [rbp-Ch]
  int v36; // [rsp+58h] [rbp-8h]
  int v37; // [rsp+5Ch] [rbp-4h]

  v4 = FLOAT_N1_1920929eN7;
  v5 = *(float *)a1 - 0.0;
  v6 = FLOAT_1_1920929eN7;
  v7 = a1;
  v8 = 1;
  if ( v5 < -0.00000011920929
    || v5 > 0.00000011920929
    || !(unsigned __int8)WithinEpsilon(a1, a2, a3, a4)
    || (v9 = 0, !(unsigned __int8)WithinEpsilon(a1, a2, a3, a4)) )
  {
    v9 = 1;
  }
  v10 = *(float *)a2 - 1.0;
  if ( v10 < v4
    || v6 < v10
    || !(unsigned __int8)WithinEpsilon(a1, a2, a3, a4)
    || (v11 = WithinEpsilon(a1, a2, a3, a4), LOBYTE(a1) = 0, !v11) )
  {
    LOBYTE(a1) = 1;
  }
  v12 = *(float *)a3 - 0.0;
  if ( v12 >= v4
    && v6 >= v12
    && (unsigned __int8)WithinEpsilon(a1, a2, a3, a4)
    && (unsigned __int8)WithinEpsilon(a1, a2, a3, a4) )
  {
    v8 = 0;
  }
  *(_QWORD *)((char *)a4 + 52) = 0LL;
  *((_DWORD *)a4 + 15) = 1065353216;
  *((_DWORD *)a4 + 10) = 1065353216;
  *((_DWORD *)a4 + 5) = 1065353216;
  *(_DWORD *)a4 = 1065353216;
  *(_QWORD *)((char *)a4 + 44) = 0LL;
  *((_QWORD *)a4 + 4) = 0LL;
  *((_QWORD *)a4 + 3) = 0LL;
  *(_QWORD *)((char *)a4 + 12) = 0LL;
  *(_QWORD *)((char *)a4 + 4) = 0LL;
  if ( (_BYTE)a1 )
  {
    if ( v8 )
    {
      v15 = *((_DWORD *)a3 + 2) ^ _xmm;
      v16 = *(_DWORD *)a3 ^ _xmm;
      *((_DWORD *)a4 + 13) = *((_DWORD *)a3 + 1) ^ _xmm;
      *((_DWORD *)a4 + 12) = v16;
      *((_DWORD *)a4 + 14) = v15;
    }
    v17 = *(float *)a2;
    v18 = *((_DWORD *)a2 + 1);
    v36 = 0;
    v35 = 0;
    v34 = 0;
    v33 = 0;
    v31 = 0;
    v30 = 0;
    v29 = 0;
    v28 = 0;
    v26 = 0;
    v25 = 0;
    v24 = 0;
    v23 = 0;
    v22 = LODWORD(v17);
    v32 = *((_DWORD *)a2 + 2);
    v27 = v18;
    v37 = 1065353216;
    D2DMatrixMultiply(a4, a4, (const struct D2DMatrix *)&v22);
    if ( v8 )
    {
      v21 = v20[1];
      v34 = *v20;
      v36 = v20[2];
      v35 = v21;
      v32 = 1065353216;
      v27 = 1065353216;
      v22 = 1065353216;
      D2DMatrixMultiply(a4, v19, (const struct D2DMatrix *)&v22);
    }
  }
  if ( v9 )
  {
    v13 = *(_DWORD *)v7;
    v14 = *((_DWORD *)v7 + 1);
    v33 = 0;
    v31 = 0;
    v30 = 0;
    v29 = 0;
    v28 = 0;
    v26 = 0;
    v25 = 0;
    v24 = 0;
    v23 = 0;
    v34 = v13;
    v36 = *((_DWORD *)v7 + 2);
    v35 = v14;
    v37 = 1065353216;
    v32 = 1065353216;
    v27 = 1065353216;
    v22 = 1065353216;
    D2DMatrixMultiply(a4, a4, (const struct D2DMatrix *)&v22);
  }
}
