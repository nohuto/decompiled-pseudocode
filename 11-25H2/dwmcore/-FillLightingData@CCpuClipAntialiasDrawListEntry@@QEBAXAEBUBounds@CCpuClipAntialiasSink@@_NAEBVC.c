/*
 * XREFs of ?FillLightingData@CCpuClipAntialiasDrawListEntry@@QEBAXAEBUBounds@CCpuClipAntialiasSink@@_NAEBVCMILMatrix@@AEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x180294320
 * Callers:
 *     ?EmitGeometry@CCpuClipAntialiasBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z @ 0x1801658F0 (-EmitGeometry@CCpuClipAntialiasBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z.c)
 * Callees:
 *     ?TransformIgnoreZW@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUD2D_POINT_4F@@I@Z @ 0x18011E8B0 (-TransformIgnoreZW@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUD2D_POINT_4F@@I@Z.c)
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEAPEBUD2D_POINT_2F@@0AEBVCMILMatrix@@1@Z @ 0x18015F9BC (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEAPEBUD2D_POINT_2F@@0AEBVCMILMatrix@@1@Z.c)
 *     ?Transpose@CMILMatrix@@QEAAXXZ @ 0x180160CF8 (-Transpose@CMILMatrix@@QEAAXXZ.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1801612EC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?GetAntialiasTemplateGeometry@CCpuClipAntialiasSink@@QEBAXW4TemplateID@1@AEBUBounds@1@PEAUTemplateGeometryDesc@1@@Z @ 0x1801D1260 (-GetAntialiasTemplateGeometry@CCpuClipAntialiasSink@@QEBAXW4TemplateID@1@AEBUBounds@1@PEAUTempla.c)
 *     ??A?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@_K@Z @ 0x1801D4478 (--A-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayCo.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

void __fastcall CCpuClipAntialiasDrawListEntry::FillLightingData(
        __int64 a1,
        __int64 a2,
        char a3,
        CMILMatrix *a4,
        __int64 *a5)
{
  __int64 v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // rbx
  float v8; // xmm0_4
  unsigned int v9; // r12d
  unsigned int v10; // r14d
  float v11; // xmm0_4
  float v12; // xmm6_4
  unsigned int v13; // r15d
  float *v14; // rbx
  float *v15; // rax
  float v16; // xmm2_4
  float v17; // xmm1_4
  __int64 v18; // rcx
  __int64 v19; // rax
  float v20; // xmm1_4
  float v21; // xmm0_4
  __int64 v22; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v23; // r8
  float v24; // xmm0_4
  float v25; // xmm7_4
  unsigned int v26; // eax
  unsigned int v27; // r15d
  float v28; // xmm6_4
  float *v29; // rbx
  float *v30; // rax
  float v31; // xmm0_4
  float v32; // xmm1_4
  float v33; // xmm2_4
  float v34; // xmm0_4
  __int64 v35; // rcx
  __int64 v36; // rax
  __m128 v37; // xmm6
  __int64 v38; // rax
  __m128 v39; // xmm1
  __int64 v40; // rcx
  __int64 v41; // rax
  unsigned int i; // edx
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rax
  float *v46; // r14
  __m128 v47; // xmm0
  __m128 v48; // xmm1
  __m128 v49; // xmm0
  __m128 v50; // xmm1
  __int64 v51; // r8
  __int64 v52; // rdx
  __int64 v53; // rcx
  int v54; // xmm6_4
  int v55; // xmm7_4
  int v56; // xmm8_4
  int v57; // xmm9_4
  int v58; // eax
  struct D2D_POINT_2F *v59; // rbx
  _DWORD *v60; // r11
  float v61; // xmm2_4
  float v62; // xmm3_4
  float v63; // xmm0_4
  float Y; // [rsp+3Ch] [rbp-CCh] BYREF
  __m128 v66[4]; // [rsp+48h] [rbp-C0h] BYREF
  int v67; // [rsp+88h] [rbp-80h]
  __int64 v68; // [rsp+98h] [rbp-70h]
  _QWORD v69[3]; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v70[3]; // [rsp+B8h] [rbp-50h] BYREF
  CMILMatrix *v71[2]; // [rsp+D0h] [rbp-38h] BYREF

  v5 = *(_QWORD *)(a1 + 88);
  v6 = 0;
  v7 = a2;
  v71[0] = a4;
  v68 = a2;
  memset(v66, 0, sizeof(v66));
  CCpuClipAntialiasSink::GetAntialiasTemplateGeometry(v5, 0, a2, (__int64)v66);
  v8 = *(float *)(v7 + 4);
  v9 = *((_DWORD *)a5 + 3);
  v10 = 0;
  Y = 0.0;
  v11 = modff(v8, &Y);
  if ( v11 > 0.000081380211 )
  {
    v10 = 2;
    v12 = 1.0 - v11;
    v13 = 0;
    do
    {
      v14 = (float *)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[]((unsigned __int64 *)v66, v13 + 2);
      v15 = (float *)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[]((unsigned __int64 *)v66, v13);
      v16 = v12 * *v15;
      v17 = v12 * v15[1];
      LODWORD(v15) = v13++;
      v18 = *((_DWORD *)a5 + 2) * (int)v15;
      v19 = *a5;
      v20 = v17 + (float)(v11 * v14[1]);
      *(float *)(v18 + v19 + 16) = v16 + (float)(v11 * *v14);
      *(float *)(v18 + v19 + 20) = v20;
      *(_DWORD *)(v18 + v19 + 24) = 0;
    }
    while ( v13 < 2 );
    v7 = v68;
  }
  v21 = *(float *)(v7 + 8);
  Y = 0.0;
  v24 = modff(v21, &Y);
  v25 = v24;
  if ( v24 > 0.000081380211 )
  {
    v26 = *((_DWORD *)a5 + 3);
    v27 = v26 - 2;
    if ( v26 >= 2 )
    {
      v28 = 1.0 - v24;
      do
      {
        v29 = (float *)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[]((unsigned __int64 *)v66, v27);
        v30 = (float *)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[]((unsigned __int64 *)v66, v27 - 2);
        v31 = v28 * *v30;
        v32 = v28 * v30[1];
        LODWORD(v30) = v27++;
        v33 = (float)(v25 * *v29) + v31;
        v34 = v25 * v29[1];
        v35 = *((_DWORD *)a5 + 2) * (int)v30;
        v36 = *a5;
        *(float *)(v35 + v36 + 16) = v33;
        *(float *)(v35 + v36 + 20) = v32 + v34;
        *(_DWORD *)(v35 + v36 + 24) = 0;
      }
      while ( v27 < *((_DWORD *)a5 + 3) );
    }
    v9 -= 2;
  }
  while ( v10 < v9 )
  {
    v37 = (__m128)*(unsigned int *)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](
                                     (unsigned __int64 *)v66,
                                     v10);
    v38 = gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[]((unsigned __int64 *)v66, v10);
    v22 = 0LL;
    v39 = (__m128)*(unsigned int *)(v38 + 4);
    LODWORD(v38) = *((_DWORD *)a5 + 2) * v10++;
    v40 = (int)v38;
    v41 = *a5;
    *(_QWORD *)(v40 + v41 + 16) = _mm_unpacklo_ps(v37, v39).m128_u64[0];
    *(_DWORD *)(v40 + v41 + 24) = 0;
  }
  if ( a3 )
  {
    for ( i = 0; i < *((_DWORD *)a5 + 3); *(_DWORD *)(v44 + v45 + 44) = 1065353216 )
    {
      v43 = i++;
      v44 = *((_DWORD *)a5 + 2) * v43;
      v45 = *a5;
      *(_QWORD *)(v44 + v45 + 32) = 0LL;
      *(_DWORD *)(v44 + v45 + 40) = 0;
    }
  }
  else
  {
    v46 = (float *)v71[0];
    v47 = *(__m128 *)v71[0];
    v48 = *((__m128 *)v71[0] + 1);
    v67 = *((_DWORD *)v71[0] + 16);
    v66[0] = v47;
    v49 = *((__m128 *)v71[0] + 2);
    v66[1] = v48;
    v50 = *((__m128 *)v71[0] + 3);
    v66[2] = v49;
    v66[3] = v50;
    CMILMatrix::Invert((CMILMatrix *)v66, v22, v23);
    CMILMatrix::Transpose(v66);
    v51 = *a5;
    v52 = *((int *)a5 + 2);
    v70[0] = v51 + 16;
    v70[1] = v52 + v51 + 16;
    v53 = 2 * (int)v52;
    v70[2] = v53 + v51 + 16;
    v69[0] = v51 + 48;
    v69[1] = v52 + v51 + 48;
    v69[2] = v53 + v51 + 48;
    CalculateTBNFrameFrom3Vertices((struct D2DQuaternion *)v71, (int)v70, (int)v69, v46, v66[0].m128_f32);
    if ( *((_DWORD *)a5 + 3) )
    {
      v54 = (int)v71[0];
      v55 = HIDWORD(v71[0]);
      v56 = (int)v71[1];
      v57 = HIDWORD(v71[1]);
      do
      {
        v58 = *((_DWORD *)a5 + 2) * v6;
        *(_OWORD *)v71 = 0LL;
        v59 = (struct D2D_POINT_2F *)(*a5 + v58 + 16);
        CMILMatrix::TransformIgnoreZW((CMILMatrix *)v46, v59, (struct D2D_POINT_4F *)v71);
        v61 = *((float *)v71 + 1);
        v62 = *(float *)&v71[1];
        v59->x = *(FLOAT *)v71;
        v59->y = v61;
        v59[1].x = v62;
        v63 = *((float *)&v71[1] + 1);
        if ( *((float *)&v71[1] + 1) != 1.0 && *((float *)&v71[1] + 1) != 0.0 )
        {
          v59->x = (float)(1.0 / *((float *)&v71[1] + 1)) * v59->x;
          v59->y = v61 * (float)(1.0 / v63);
          v59[1].x = v62 * (float)(1.0 / v63);
        }
        ++v6;
        v60[8] = v54;
        v60[9] = v55;
        v60[10] = v56;
        v60[11] = v57;
      }
      while ( v6 < *((_DWORD *)a5 + 3) );
    }
  }
}
