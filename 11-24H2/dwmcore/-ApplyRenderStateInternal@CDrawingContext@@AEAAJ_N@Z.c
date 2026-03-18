/*
 * XREFs of ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180053590
 * Callers:
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x180051E30 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z @ 0x1800CEC00 (-FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z.c)
 *     ?ApplyRenderState@CDrawingContext@@UEAAJXZ @ 0x1800FC750 (-ApplyRenderState@CDrawingContext@@UEAAJXZ.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x18013F440 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 *     ?ProcessRenderCommands_RenderPass@CCpuClipAntialiasSinkContext@@AEBAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@@Z @ 0x180147598 (-ProcessRenderCommands_RenderPass@CCpuClipAntialiasSinkContext@@AEBAJPEAVCDrawingContext@@IPEAV-.c)
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180148B80 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 *     ?DrawMesh2D@CGlobalDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x1801A3520 (-DrawMesh2D@CGlobalDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z.c)
 * Callees:
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180053B90 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ @ 0x1800F9390 (-FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?GetSize@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA?AUD2D_SIZE_U@@XZ @ 0x1802CDAE0 (-GetSize@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ceilf_0 @ 0x1802DF5CC (ceilf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::ApplyRenderStateInternal(__m128 *this, char a2)
{
  __int64 v2; // rbp
  char v3; // si
  unsigned int v5; // r15d
  __int64 result; // rax
  unsigned __int64 v7; // rax
  __m128 v8; // xmm6
  __int32 v9; // eax
  __m128 v10; // xmm2
  float v11; // xmm10_4
  float v12; // xmm9_4
  __m128 v13; // xmm7
  float v14; // xmm8_4
  unsigned __int64 v15; // rax
  __int32 v16; // eax
  __m128 v17; // xmm0
  float v18; // xmm3_4
  float v19; // xmm1_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  float v22; // xmm1_4
  float v23; // xmm0_4
  float v24; // xmm4_4
  __m128 v25; // xmm6
  float v26; // xmm5_4
  unsigned __int8 v27; // al
  __m128 v28; // xmm6
  float v29; // xmm3_4
  float v30; // xmm11_4
  __m128 v31; // xmm6
  unsigned __int64 v32; // rdx
  unsigned int v33; // r12d
  int v34; // eax
  bool v35; // zf
  __int64 v36; // rbx
  __int64 v37; // rcx
  __int128 v38; // xmm0
  int v39; // ebx
  float v40; // xmm7_4
  int v41; // eax
  float v42; // xmm8_4
  int v43; // eax
  float v44; // xmm9_4
  int v45; // eax
  float v46; // xmm10_4
  __m128 v47; // xmm1
  unsigned __int64 v48; // rax
  int v49; // eax
  __int64 v50; // rcx
  void (__fastcall *v51)(__int64, __int128 *); // rax
  __int128 v52; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v53; // [rsp+40h] [rbp-A8h]

  v2 = 0LL;
  v3 = 0;
  v5 = 0;
  if ( *(_BYTE *)(this[47].m128_u64[0] - 8) )
    v3 = a2;
  if ( !v3 )
  {
    v49 = CDrawingContext::FlushAllDeferredClipping((CDrawingContext *)this);
    v5 = v49;
    if ( v49 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v49, 0x1D6u, 0LL);
      return v5;
    }
  }
  if ( !this[504].m128_i8[1] )
    return v5;
  v7 = this[47].m128_u64[0];
  v8 = 0LL;
  v52 = 0LL;
  if ( v7 == this[46].m128_u64[1] )
  {
    LODWORD(v11) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 255).m128_u32[0];
    LODWORD(v12) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 170).m128_u32[0];
    v13 = (__m128)_xmm;
    LODWORD(v14) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 85).m128_u32[0];
LABEL_28:
    v24 = v14;
    v25 = _mm_shuffle_ps(v13, v13, 225);
    v26 = v12;
    v25.m128_f32[0] = v14;
    v27 = 0;
    v28 = _mm_shuffle_ps(v25, v25, 198);
    v29 = v13.m128_f32[0];
    v28.m128_f32[0] = v12;
    v30 = v11;
    v31 = _mm_shuffle_ps(v28, v28, 39);
    v31.m128_f32[0] = v11;
    v8 = _mm_shuffle_ps(v31, v31, 57);
    v52 = (__int128)v8;
    goto LABEL_29;
  }
  if ( *(_QWORD *)(v7 - 184) )
  {
    v9 = this[195].m128_i32[0];
    if ( v9 )
    {
      v10 = *(__m128 *)(this[194].m128_u64[1] + 16LL * (unsigned int)(v9 - 1));
      LODWORD(v11) = _mm_shuffle_ps(v10, v10, 255).m128_u32[0];
      LODWORD(v12) = _mm_shuffle_ps(v10, v10, 170).m128_u32[0];
      v13 = v10;
      LODWORD(v14) = _mm_shuffle_ps(v10, v10, 85).m128_u32[0];
    }
    else
    {
      v13 = (__m128)_xmm;
      LODWORD(v11) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 255).m128_u32[0];
      LODWORD(v12) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 170).m128_u32[0];
      LODWORD(v14) = _mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 85).m128_u32[0];
    }
  }
  else
  {
    v50 = *(_QWORD *)(v7 - 192);
    v51 = *(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v50 + 88LL);
    if ( (char *)v51 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize )
      IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize(v50, &v52);
    else
      v51(v50, &v52);
    v13 = 0LL;
    v14 = 0.0;
    v12 = (float)(int)v52;
    v11 = (float)SDWORD1(v52);
  }
  if ( v3 )
    goto LABEL_27;
  v15 = this[47].m128_u64[0];
  if ( v15 == this[46].m128_u64[1] || !*(_QWORD *)(v15 - 168) )
    goto LABEL_27;
  v16 = this[196].m128_i32[2];
  if ( v16 )
    v17 = *(__m128 *)(this[196].m128_u64[0] + 16LL * (unsigned int)(v16 - 1));
  else
    v17 = (__m128)_xmm;
  if ( v17.m128_f32[0] > v13.m128_f32[0] )
    v13 = v17;
  v18 = v14;
  v19 = _mm_shuffle_ps(v17, v17, 85).m128_f32[0];
  if ( v19 > v14 )
  {
    v14 = v19;
    v18 = v19;
  }
  v20 = v12;
  v21 = _mm_shuffle_ps(v17, v17, 170).m128_f32[0];
  if ( v12 > v21 )
  {
    v12 = v21;
    v20 = v21;
  }
  v22 = v11;
  v23 = _mm_shuffle_ps(v17, v17, 255).m128_f32[0];
  if ( v11 > v23 )
  {
    v11 = v23;
    v22 = v23;
  }
  if ( v20 > v13.m128_f32[0] && v22 > v18 )
  {
LABEL_27:
    if ( v12 > v13.m128_f32[0] && v11 > v14 )
      goto LABEL_28;
  }
  else
  {
    v11 = 0.0;
    v12 = 0.0;
    v14 = 0.0;
    v13.m128_i32[0] = 0;
  }
  LODWORD(v30) = _mm_shuffle_ps((__m128)0LL, (__m128)0LL, 255).m128_u32[0];
  LODWORD(v26) = _mm_shuffle_ps((__m128)0LL, (__m128)0LL, 170).m128_u32[0];
  v27 = 1;
  LODWORD(v24) = _mm_shuffle_ps((__m128)0LL, (__m128)0LL, 85).m128_u32[0];
  v29 = 0.0;
LABEL_29:
  v32 = this[2].m128_u64[1];
  v33 = v27;
  v34 = *(_DWORD *)(v32 + 368);
  if ( v34 )
    v2 = *(_QWORD *)(*(_QWORD *)(v32 + 344) + 8LL * (unsigned int)(v34 - 1));
  if ( !*(_BYTE *)(v32 + 453)
    || *(_BYTE *)(v32 + 455)
    || v33 != *(_DWORD *)(v32 + 432)
    || v29 != *(float *)(v32 + 416)
    || v24 != *(float *)(v32 + 420)
    || v26 != *(float *)(v32 + 424)
    || v30 != *(float *)(v32 + 428) )
  {
    CD2DContext::FlushDrawList((CD2DContext *)(v32 + 16));
    v35 = *(_BYTE *)(v2 + 78) == 0;
    *(__m128 *)(v2 + 52) = v8;
    *(_DWORD *)(v2 + 68) = v33;
    if ( !v35 )
    {
      v36 = *(_QWORD *)(v2 + 16);
      v52 = _xmm;
      v53 = 0LL;
      (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(v36 + 200) + 240LL))(*(_QWORD *)(v36 + 200), &v52);
      v37 = *(_QWORD *)(v36 + 208);
      *(_BYTE *)(v36 + 439) = 0;
      v38 = *(_OWORD *)(v2 + 52);
      *(_DWORD *)(v36 + 416) = v33;
      *(_OWORD *)(v36 + 400) = v38;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v37 + 80LL))(v37, v2 + 52, v33);
    }
    *(_BYTE *)(v2 + 77) = 1;
  }
  v39 = 0x7FFFFFFF;
  v40 = v13.m128_f32[0] - 0.5;
  if ( v40 < -2147483600.0 )
  {
    v41 = 0x80000000;
  }
  else if ( v40 >= 2147483600.0 )
  {
    v41 = 0x7FFFFFFF;
  }
  else
  {
    v41 = (int)ceilf_0(v40);
  }
  v42 = v14 - 0.5;
  *(float *)&v52 = (float)v41;
  if ( v42 < -2147483600.0 )
  {
    v43 = 0x80000000;
  }
  else if ( v42 >= 2147483600.0 )
  {
    v43 = 0x7FFFFFFF;
  }
  else
  {
    v43 = (int)ceilf_0(v42);
  }
  v44 = v12 - 0.5;
  *((float *)&v52 + 1) = (float)v43;
  if ( v44 < -2147483600.0 )
  {
    v45 = 0x80000000;
  }
  else if ( v44 >= 2147483600.0 )
  {
    v45 = 0x7FFFFFFF;
  }
  else
  {
    v45 = (int)ceilf_0(v44);
  }
  v46 = v11 - 0.5;
  *((float *)&v52 + 2) = (float)v45;
  if ( v46 < -2147483600.0 )
  {
    v39 = 0x80000000;
  }
  else if ( v46 < 2147483600.0 )
  {
    v39 = (int)ceilf_0(v46);
  }
  this[504].m128_i8[1] = 0;
  v47 = _mm_shuffle_ps((__m128)v52, (__m128)v52, 147);
  v47.m128_f32[0] = (float)v39;
  this[14] = _mm_shuffle_ps(v47, v47, 57);
  if ( !v3 )
    return v5;
  v48 = this[47].m128_u64[0];
  if ( v48 == this[46].m128_u64[1] || !*(_QWORD *)(v48 - 176) )
    return v5;
  result = v5;
  if ( *(_QWORD *)(this[168].m128_u64[1] - 24) )
    this[504].m128_i8[2] = 1;
  return result;
}
