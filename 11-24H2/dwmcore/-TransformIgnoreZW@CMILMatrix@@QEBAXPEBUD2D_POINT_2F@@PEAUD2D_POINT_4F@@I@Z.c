/*
 * XREFs of ?TransformIgnoreZW@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUD2D_POINT_4F@@I@Z @ 0x180166F10
 * Callers:
 *     VertexTransfer::TransformDeviceSpacePositionAndNormal @ 0x180166CB4 (VertexTransfer--TransformDeviceSpacePositionAndNormal.c)
 *     ?FillLightingData@CCpuClipAntialiasDrawListEntry@@QEBAXAEBUBounds@CCpuClipAntialiasSink@@_NAEBVCMILMatrix@@AEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x180289180 (-FillLightingData@CCpuClipAntialiasDrawListEntry@@QEBAXAEBUBounds@CCpuClipAntialiasSink@@_NAEBVC.c)
 * Callees:
 *     ??$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180167650 (--$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 */

void __fastcall CMILMatrix::TransformIgnoreZW(CMILMatrix *this, const struct D2D_POINT_2F *a2, struct D2D_POINT_4F *a3)
{
  float v3; // xmm1_4
  float y; // xmm2_4
  float x; // xmm6_4
  float *v6; // rcx
  __int64 v7; // r10
  float v8; // xmm5_4
  float v9; // xmm5_4

  v3 = a2->y * *((float *)this + 4);
  y = a2->y;
  x = a2->x;
  LOBYTE(a2) = 1;
  *(float *)a3 = (float)(v3 + (float)(x * *(float *)this)) + *((float *)this + 12);
  *((float *)a3 + 1) = (float)((float)(y * *((float *)this + 5)) + (float)(x * *((float *)this + 1)))
                     + *((float *)this + 13);
  *((float *)a3 + 2) = (float)((float)(y * *((float *)this + 6)) + (float)(x * *((float *)this + 2)))
                     + *((float *)this + 14);
  if ( (unsigned __int8)CMILMatrix::IsAffine<1>(this, a2) )
    v9 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  else
    v9 = (float)((float)(v8 * v6[7]) + (float)(x * v6[3])) + v6[15];
  *(float *)(v7 + 12) = v9;
}
