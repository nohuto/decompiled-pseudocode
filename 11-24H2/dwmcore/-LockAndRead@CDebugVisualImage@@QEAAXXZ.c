/*
 * XREFs of ?LockAndRead@CDebugVisualImage@@QEAAXXZ @ 0x18028DD10
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x18007AD60 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ??0DbgString@DwmDbg@@QEAA@AEBUD2D_RECT_F@@@Z @ 0x18000AA04 (--0DbgString@DwmDbg@@QEAA@AEBUD2D_RECT_F@@@Z.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18000AAA0 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?IsInfinite@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18003DB50 (-IsInfinite@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x180046790 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18010BE90 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetPrimaryAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ @ 0x180155944 (-GetPrimaryAdapterLuid@CDisplayManager@@QEAA-AU_LUID@@XZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?GetRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18028D0C4 (-GetRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap.c)
 *     ?Print@DwmDbg@@YAXQEBDZZ @ 0x1802AEE4C (-Print@DwmDbg@@YAXQEBDZZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // xmm1_8
  __int64 v22; // rbx
  __int64 v23; // rax
  __m128 v24; // [rsp+28h] [rbp-19h] BYREF
  __int64 v25; // [rsp+38h] [rbp-9h]
  char *v26; // [rsp+40h] [rbp-1h] BYREF
  struct IRenderTargetBitmap *v27; // [rsp+48h] [rbp+7h] BYREF
  _BYTE v28[24]; // [rsp+50h] [rbp+Fh] BYREF

  v1 = (const __m128i *)*((_QWORD *)this + 22);
  v3 = *((_QWORD *)this + 17);
  v4 = v1 + 5;
  if ( v3 != v1[4].m128i_i64[1] )
    v4 = (const __m128i *)(v3 + 152);
  v5 = (__m128)_mm_loadu_si128(v4);
  v24 = v5;
  IsInfinite = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsInfinite(v24.m128_f32);
  v7 = CDebugVisualImage::s_renderTargetSize;
  v8 = 0.0;
  v9 = HIDWORD(CDebugVisualImage::s_renderTargetSize);
  if ( IsInfinite )
  {
    v24.m128_u64[0] = 0LL;
    v10 = (float)SHIDWORD(CDebugVisualImage::s_renderTargetSize);
    v11 = (float)(int)CDebugVisualImage::s_renderTargetSize;
    v12 = 0.0;
    v24.m128_f32[3] = (float)SHIDWORD(CDebugVisualImage::s_renderTargetSize);
    v24.m128_f32[2] = (float)(int)CDebugVisualImage::s_renderTargetSize;
    v5 = v24;
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
  CDisplayManager::GetPrimaryAdapterLuid(v7, &v24);
  v24.m128_u64[1] = 0xFFFFFFFFLL;
  v25 = 0LL;
  v19 = **((_QWORD **)g_pComposition + 77);
  if ( v19 )
  {
    v20 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v19 + 8) + 24LL))(v19 + 8, v28);
    v21 = *(_QWORD *)(v20 + 16);
    v24 = *(__m128 *)v20;
    v25 = v21;
  }
  v27 = 0LL;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v27, v17, v18);
  if ( (int)CCachedVisualImage::GetRenderTargetBitmap(
              (struct D2D_SIZE_U *)this,
              (const struct RenderTargetInfo *)&v24,
              &v27) < 0 )
  {
    DwmDbg::DbgString::DbgString(&v26, "0x%p", *((const void **)this + 17));
    DwmDbg::Print((DwmDbg *)"Unable to render DebugCVI with root visual %s!\n", v26);
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>((void **)&v26);
  }
  else
  {
    v22 = *(_QWORD *)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v24, (const struct D2D_RECT_F *)this + 6);
    DwmDbg::DbgString::DbgString(&v26, "0x%p", *((const void **)this + 17));
    DwmDbg::Print((DwmDbg *)"Successfully rendered DebugCVI with root visual %s and bounds [%s]!\n", v26, v22);
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>((void **)&v26);
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>((void **)&v24);
    v23 = (*(__int64 (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v27 + 144LL))(v27);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v23 + 112LL))(v23, 0LL);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v27);
}
