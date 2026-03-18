/*
 * XREFs of ?LockAndRead@CDebugVisualImage@@QEAAXXZ @ 0x180299140
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x1800ACB80 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ??0DbgString@DwmDbg@@QEAA@AEBUD2D_RECT_F@@@Z @ 0x18000BEF4 (--0DbgString@DwmDbg@@QEAA@AEBUD2D_RECT_F@@@Z.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18000BF90 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetPrimaryAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ @ 0x18003EB34 (-GetPrimaryAdapterLuid@CDisplayManager@@QEAA-AU_LUID@@XZ.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800703BC (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ?IsInfinite@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180099680 (-IsInfinite@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180147AD0 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?GetRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180298534 (-GetRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap.c)
 *     ?Print@DwmDbg@@YAXQEBDZZ @ 0x1802B8A3C (-Print@DwmDbg@@YAXQEBDZZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDebugVisualImage::LockAndRead(CDebugVisualImage *this)
{
  const __m128i *v1; // r8
  __int64 v3; // r9
  const __m128i *v4; // rdx
  __m128 v5; // xmm2
  bool IsInfinite; // al
  CDisplayManager *v7; // rcx
  float v8; // xmm0_4
  int v9; // edx
  float v10; // xmm3_4
  float v11; // xmm4_4
  float v12; // xmm5_4
  float v13; // xmm4_4
  float v14; // xmm2_4
  float v15; // xmm7_4
  float v16; // xmm1_4
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // xmm1_8
  __int64 v20; // rbx
  __int64 v21; // rax
  __m128 v22; // [rsp+28h] [rbp-19h] BYREF
  __int64 v23; // [rsp+38h] [rbp-9h]
  char *v24; // [rsp+40h] [rbp-1h] BYREF
  struct IRenderTargetBitmap *v25; // [rsp+48h] [rbp+7h] BYREF
  _BYTE v26[24]; // [rsp+50h] [rbp+Fh] BYREF

  v1 = (const __m128i *)*((_QWORD *)this + 22);
  v3 = *((_QWORD *)this + 17);
  v4 = v1 + 5;
  if ( v3 != v1[4].m128i_i64[1] )
    v4 = (const __m128i *)(v3 + 152);
  v5 = (__m128)_mm_loadu_si128(v4);
  v22 = v5;
  IsInfinite = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsInfinite(v22.m128_f32);
  v7 = CDebugVisualImage::s_renderTargetSize;
  v8 = 0.0;
  v9 = HIDWORD(CDebugVisualImage::s_renderTargetSize);
  if ( IsInfinite )
  {
    v22.m128_u64[0] = 0LL;
    v10 = (float)SHIDWORD(CDebugVisualImage::s_renderTargetSize);
    v11 = (float)(int)CDebugVisualImage::s_renderTargetSize;
    v12 = 0.0;
    v22.m128_f32[3] = (float)SHIDWORD(CDebugVisualImage::s_renderTargetSize);
    v22.m128_f32[2] = (float)(int)CDebugVisualImage::s_renderTargetSize;
    v5 = v22;
  }
  else
  {
    LODWORD(v10) = _mm_shuffle_ps(v5, v5, 255).m128_u32[0];
    LODWORD(v11) = _mm_shuffle_ps(v5, v5, 170).m128_u32[0];
    v8 = v5.m128_f32[0];
    LODWORD(v12) = _mm_shuffle_ps(v5, v5, 85).m128_u32[0];
  }
  v13 = v11 - v8;
  *((__m128 *)this + 6) = v5;
  v14 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  v15 = (float)(int)v7;
  if ( v13 > (float)(int)v7 || (float)(v10 - v12) > (float)v9 )
  {
    v16 = (float)(v10 - v12) / (float)v9;
    if ( (float)(v13 / v15) <= v16 )
      v14 = 1.0 / v16;
    else
      v14 = 1.0 / (float)(v13 / v15);
  }
  *((float *)this + 30) = v13 * v14;
  *((float *)this + 31) = (float)(v10 - v12) * v14;
  CDisplayManager::GetPrimaryAdapterLuid(v7, &v22);
  v22.m128_u64[1] = 0xFFFFFFFFLL;
  v23 = 0LL;
  v17 = **((_QWORD **)g_pComposition + 77);
  if ( v17 )
  {
    v18 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v17 + 8) + 24LL))(v17 + 8, v26);
    v19 = *(_QWORD *)(v18 + 16);
    v22 = *(__m128 *)v18;
    v23 = v19;
  }
  v25 = 0LL;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v25);
  if ( (int)CCachedVisualImage::GetRenderTargetBitmap(
              (struct D2D_SIZE_U *)this,
              (const struct RenderTargetInfo *)&v22,
              &v25) < 0 )
  {
    DwmDbg::DbgString::DbgString(&v24, "0x%p", *((const void **)this + 17));
    DwmDbg::Print((DwmDbg *)"Unable to render DebugCVI with root visual %s!\n", v24);
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>((void **)&v24);
  }
  else
  {
    v20 = *(_QWORD *)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v22, (const struct D2D_RECT_F *)this + 6);
    DwmDbg::DbgString::DbgString(&v24, "0x%p", *((const void **)this + 17));
    DwmDbg::Print((DwmDbg *)"Successfully rendered DebugCVI with root visual %s and bounds [%s]!\n", v24, v20);
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>((void **)&v24);
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>((void **)&v22);
    v21 = (*(__int64 (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v25 + 144LL))(v25);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v21 + 112LL))(v21, 0LL);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v25);
}
