/*
 * XREFs of ?Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_4F@@PEAU2@I@Z @ 0x1801674F8
 * Callers:
 *     ?CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z @ 0x180165F78 (-CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z.c)
 *     ?Init@CVisualDepthGeometry@@AEAAXAEBUfloat2@Numerics@Foundation@Windows@@AEBVCMILMatrix@@@Z @ 0x180166FC0 (-Init@CVisualDepthGeometry@@AEAAXAEBUfloat2@Numerics@Foundation@Windows@@AEBVCMILMatrix@@@Z.c)
 *     ?D2DGeometryFromPolygon@CPolygon@@QEBAJPEAUID2D1PathGeometry@@PEBVCMILMatrix@@@Z @ 0x1801672FC (-D2DGeometryFromPolygon@CPolygon@@QEBAJPEAUID2D1PathGeometry@@PEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ??$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180167650 (--$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 */

void __fastcall CMILMatrix::Transform(CMILMatrix *this, const struct D2D_POINT_4F *a2, struct D2D_POINT_4F *a3, int a4)
{
  float *v4; // r11
  float *v5; // rbx
  __int64 v7; // r10
  float v8; // xmm6_4
  float v9; // xmm5_4
  float v10; // xmm7_4
  float v11; // xmm8_4
  float v12; // xmm1_4
  float *v13; // r11
  float v14; // xmm5_4
  float v15; // xmm5_4

  v4 = (float *)((char *)a3 + 12);
  v5 = (float *)((char *)a2 + 8);
  v7 = a3 - a2;
  do
  {
    v8 = *(v5 - 2);
    v9 = *(v5 - 1);
    v10 = *v5;
    v11 = v5[1];
    v12 = *v5;
    *(float *)((char *)v5 + v7 - 8) = (float)((float)((float)(v9 * *((float *)this + 4)) + (float)(v8 * *(float *)this))
                                            + (float)(*v5 * *((float *)this + 8)))
                                    + (float)(v11 * *((float *)this + 12));
    *(v4 - 2) = (float)((float)((float)(v9 * *((float *)this + 5)) + (float)(v8 * *((float *)this + 1)))
                      + (float)(v12 * *((float *)this + 9)))
              + (float)(v11 * *((float *)this + 13));
    *(v4 - 1) = (float)((float)((float)(v9 * *((float *)this + 6)) + (float)(v8 * *((float *)this + 2)))
                      + (float)(v10 * *((float *)this + 10)))
              + (float)(v11 * *((float *)this + 14));
    if ( (unsigned __int8)CMILMatrix::IsAffine<1>(this, 0LL) )
      v15 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
    else
      v15 = (float)((float)((float)(v14 * *((float *)this + 7)) + (float)(v8 * *((float *)this + 3)))
                  + (float)(v10 * *((float *)this + 11)))
          + (float)(v11 * *((float *)this + 15));
    *v13 = v15;
    v5 += 4;
    v4 = v13 + 4;
    --a4;
  }
  while ( a4 );
}
