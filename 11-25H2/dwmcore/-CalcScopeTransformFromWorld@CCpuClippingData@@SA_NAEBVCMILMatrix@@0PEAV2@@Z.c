/*
 * XREFs of ?CalcScopeTransformFromWorld@CCpuClippingData@@SA_NAEBVCMILMatrix@@0PEAV2@@Z @ 0x1800822D4
 * Callers:
 *     ?TransformToDifferentScope@CCpuClippingData@@QEBA_NPEAV1@AEBVCMILMatrix@@1@Z @ 0x1800813DC (-TransformToDifferentScope@CCpuClippingData@@QEBA_NPEAV1@AEBVCMILMatrix@@1@Z.c)
 *     ?DoesCpuClipFullyContainRect@CDrawingContext@@QEBA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x180082100 (-DoesCpuClipFullyContainRect@CDrawingContext@@QEBA_NAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x1800D4880 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180016DF0 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ??$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180124AD0 (--$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x180161320 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 */

char __fastcall CCpuClippingData::CalcScopeTransformFromWorld(
        const struct CMILMatrix *a1,
        __m128 *a2,
        struct CMILMatrix *a3)
{
  int v3; // eax
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  bool v8; // al
  __int64 v9; // r9
  struct CMILMatrix *v10; // r10
  struct Windows::Foundation::Numerics::float4x4 *v12; // r8
  int *v13; // r9
  int v14; // xmm0_4
  unsigned int v15; // xmm1_4
  unsigned int v16; // xmm2_4
  unsigned int v17; // xmm3_4
  int v18; // xmm4_4
  unsigned int v19; // xmm5_4
  bool v20; // al
  __int128 v21; // [rsp+20h] [rbp-49h] BYREF
  __m256i v22; // [rsp+30h] [rbp-39h]
  __int128 v23; // [rsp+50h] [rbp-19h]
  int v24; // [rsp+60h] [rbp-9h]
  __int128 v25; // [rsp+70h] [rbp+7h]
  __m256i v26; // [rsp+80h] [rbp+17h]
  __int128 v27; // [rsp+A0h] [rbp+37h]
  int v28; // [rsp+B0h] [rbp+47h]

  v3 = *((_DWORD *)a1 + 16);
  v5 = *((_OWORD *)a1 + 1);
  v21 = *(_OWORD *)a1;
  v6 = *((_OWORD *)a1 + 2);
  v24 = v3;
  *(_OWORD *)v22.m256i_i8 = v5;
  v7 = *((_OWORD *)a1 + 3);
  *(_OWORD *)&v22.m256i_u64[2] = v6;
  v23 = v7;
  v8 = Windows::Foundation::Numerics::invert(
         (Windows::Foundation::Numerics *)&v21,
         (const struct Windows::Foundation::Numerics::float4x4 *)&v21,
         a3);
  LOWORD(v24) = v24 & 0xC003;
  if ( !v8 )
  {
    if ( COERCE_FLOAT(*(_DWORD *)(v9 + 40) & _xmm) >= 0.000081380211 )
      return 0;
    if ( !(unsigned __int8)CMILMatrix::IsPure2DUniformZ<1>(v9) )
      return 0;
    v28 = 0;
    v14 = *v13;
    v15 = v13[1];
    v16 = v13[4];
    v17 = v13[5];
    v18 = v13[12];
    v19 = v13[13];
    HIDWORD(v25) = 0;
    LODWORD(v25) = v14;
    *(_OWORD *)&v26.m256i_u64[1] = 0LL;
    *(_QWORD *)((char *)&v25 + 4) = v15;
    v26.m256i_i64[3] = 1065353216LL;
    v26.m256i_i64[0] = __PAIR64__(v17, v16);
    HIDWORD(v27) = 1065353216;
    v21 = v25;
    LOWORD(v28) = 10248;
    v22 = v26;
    LODWORD(v27) = v18;
    *(_QWORD *)((char *)&v27 + 4) = v19;
    v24 = 10248;
    v23 = v27;
    v20 = Windows::Foundation::Numerics::invert(
            (Windows::Foundation::Numerics *)&v21,
            (const struct Windows::Foundation::Numerics::float4x4 *)&v21,
            v12);
    LOWORD(v24) = v24 & 0xC003;
    if ( !v20 )
      return 0;
  }
  CMILMatrix::Multiply(a2, (const struct CMILMatrix *)&v21, v10);
  return 1;
}
