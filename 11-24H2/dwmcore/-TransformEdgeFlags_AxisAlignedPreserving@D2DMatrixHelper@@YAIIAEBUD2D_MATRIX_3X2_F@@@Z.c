/*
 * XREFs of ?TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180152450
 * Callers:
 *     ?EmitWarpFastPathGeometry@CRenderingBatchCommand@@AEBAXPEAVCD3DBatchExecutionContext@@@Z @ 0x18006238C (-EmitWarpFastPathGeometry@CRenderingBatchCommand@@AEBAXPEAVCD3DBatchExecutionContext@@@Z.c)
 *     ?AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMatrix3x3@@M@Z @ 0x180151674 (-AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMatrix3x3@@M@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

__int64 __fastcall D2DMatrixHelper::TransformEdgeFlags_AxisAlignedPreserving(
        D2DMatrixHelper *this,
        float *a2,
        const struct D2D_MATRIX_3X2_F *a3)
{
  int v3; // r8d
  float v4; // xmm3_4
  int v5; // r9d
  int v6; // eax
  unsigned int v7; // ecx
  int v8; // eax
  int v9; // eax
  int *v10; // r9
  __int64 v11; // r10
  int *v12; // rdx
  int v14; // eax
  bool v15; // cc
  float v16; // xmm0_4
  int v17; // eax
  int v18; // eax
  int v19; // [rsp+0h] [rbp-48h] BYREF
  int v20; // [rsp+4h] [rbp-44h]
  int v21; // [rsp+8h] [rbp-40h]
  int v22; // [rsp+Ch] [rbp-3Ch]
  int v23; // [rsp+10h] [rbp-38h] BYREF
  _DWORD v24[7]; // [rsp+14h] [rbp-34h]

  v3 = (int)this;
  if ( (_DWORD)this == 50529027 || !(_DWORD)this )
    return (unsigned int)this;
  v4 = a2[1];
  v5 = 1;
  v23 = 0x1000000;
  v24[0] = 0x2000000;
  v24[1] = 1;
  v24[2] = 2;
  v24[3] = 256;
  v24[4] = 512;
  v24[5] = 0x10000;
  v24[6] = 0x20000;
  if ( COERCE_FLOAT(LODWORD(v4) & _xmm) >= 0.000081380211 || COERCE_FLOAT((_DWORD)a2[2] & _xmm) >= 0.000081380211 )
  {
    v6 = 3;
    if ( a2[2] > 0.0 )
    {
      v6 = 1;
      v5 = 3;
    }
    v19 = v6;
    v7 = 0;
    v8 = 2;
    v21 = v5;
    if ( v4 > 0.0 )
      v8 = 0;
    v20 = v8;
    v9 = 0;
    if ( v4 > 0.0 )
      v9 = 2;
    v22 = v9;
  }
  else
  {
    v7 = 0;
    v14 = 2;
    v15 = *a2 <= 0.0;
    v16 = a2[3];
    if ( *a2 > 0.0 )
      v14 = 0;
    v19 = v14;
    v17 = 0;
    if ( !v15 )
      v17 = 2;
    v21 = v17;
    v18 = 3;
    if ( v16 > 0.0 )
    {
      v18 = 1;
      v5 = 3;
    }
    v22 = v5;
    v20 = v18;
  }
  v10 = &v19;
  v11 = 4LL;
  v12 = &v23;
  do
  {
    if ( (v3 & v24[2 * *v10 - 1]) != 0 )
      v7 |= *v12;
    if ( (v3 & v24[2 * *v10]) != 0 )
      v7 |= v12[1];
    ++v10;
    v12 += 2;
    --v11;
  }
  while ( v11 );
  return v7;
}
