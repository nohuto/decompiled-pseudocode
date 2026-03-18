/*
 * XREFs of ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@_N@Z @ 0x18002E0FC
 * Callers:
 *     ?TrimCheckCandidatesList@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18002D664 (-TrimCheckCandidatesList@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$ve.c)
 *     ?InitCheckCandidatesList@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18023D308 (-InitCheckCandidatesList@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$ve.c)
 *     ?IsCandidateSupportedSingleton@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAVOverlayPlaneInfo@1@@Z @ 0x180276FD4 (-IsCandidateSupportedSingleton@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PE.c)
 * Callees:
 *     ?GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ @ 0x18002D9D0 (-GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ.c)
 *     ?CalcDesktopClip@COverlayContext@@AEAA_NAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@PEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18002E47C (-CalcDesktopClip@COverlayContext@@AEAA_NAEBV-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gs.c)
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18002E7F0 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180061220 (-IsEmpty@-$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?OverlaysEnabled@COverlayContext@@QEBA_NXZ @ 0x1800C2FC0 (-OverlaysEnabled@COverlayContext@@QEBA_NXZ.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180189830 (-IsEmpty@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsInfinite@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1801898D0 (-IsInfinite@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?GetPixelFormatInfo@CLegacyRenderTarget@@WFA@EBA?AUPixelFormatInfo@@XZ @ 0x180281770 (-GetPixelFormatInfo@CLegacyRenderTarget@@WFA@EBA-AUPixelFormatInfo@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall COverlayContext::DeriveDesktopPlaneAttributes(COverlayContext *this, _QWORD *a2, char a3)
{
  _BYTE *v5; // rdi
  int v6; // eax
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(__int64, __m128i *); // rax
  __int64 PixelFormatInfo; // rax
  enum DXGI_COLOR_SPACE_TYPE v10; // r14d
  __int64 v11; // rcx
  float v12; // xmm2_4
  int v13; // eax
  __int32 v14; // eax
  __m128i v15; // xmm0
  __int64 v16; // rax
  __int64 *v17; // rax
  __int64 v18; // r13
  unsigned int v19; // r15d
  unsigned int v20; // r14d
  unsigned int v21; // edi
  unsigned int v22; // esi
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __m128i v26; // xmm1
  const struct CMonitorTransform *MonitorTransform; // rax
  bool v28; // zf
  __m128i v30; // [rsp+20h] [rbp-20h] BYREF

  *((_BYTE *)this + 19473) = a3;
  if ( *a2 )
  {
    v17 = (__int64 *)a2[1];
    v18 = *v17;
    v19 = *(_DWORD *)(*v17 + 68);
    v20 = *(_DWORD *)(*v17 + 72);
    v21 = *(_DWORD *)(*v17 + 76);
    v22 = *(_DWORD *)(*v17 + 80);
    v26 = *(__m128i *)((char *)COverlayContext::GetMonitorTransform(this) + 24);
    v30 = v26;
    if ( __PAIR64__(v20, v19) == __PAIR64__(_mm_cvtsi128_si32(_mm_srli_si128(v26, 4)), _mm_cvtsi128_si32(v26))
      && v21 == _mm_cvtsi128_si32(_mm_srli_si128(v26, 8))
      && v22 == _mm_cvtsi128_si32(_mm_srli_si128(v26, 12)) )
    {
      goto LABEL_47;
    }
    if ( (v22 <= v20 || v21 <= v19)
      && (unsigned __int8)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(&v30) )
    {
      goto LABEL_47;
    }
    if ( (!v19 && v21 == -1 || !v20 && v22 == -1)
      && (unsigned __int8)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsInfinite(&v30) )
    {
LABEL_47:
      if ( (unsigned __int8)TMilRect<int,tagRECT,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::IsEmpty(
                              v18 + 228,
                              v23,
                              v24,
                              v25) )
      {
        v5 = (char *)this + 19472;
LABEL_18:
        *v5 = 0;
        goto LABEL_15;
      }
    }
  }
  v5 = (char *)this + 19472;
  *((_BYTE *)this + 19472) = 1;
  if ( !*((_DWORD *)this + 16) || (v28 = !COverlayContext::OverlaysEnabled(this), v6 = 4, !v28) )
    v6 = 0;
  *((_DWORD *)this + 4840) = v6;
  *((_DWORD *)this + 4853) = 1;
  *((_DWORD *)this + 4854) = *a2 != 0LL;
  v7 = *(_QWORD *)this;
  v8 = *(__int64 (__fastcall **)(__int64, __m128i *))(**(_QWORD **)this + 24LL);
  if ( (char *)v8 == (char *)CLegacyRenderTarget::GetPixelFormatInfo )
    PixelFormatInfo = CLegacyRenderTarget::GetPixelFormatInfo(v7, &v30);
  else
    PixelFormatInfo = v8(v7, &v30);
  v10 = *(_DWORD *)(PixelFormatInfo + 8);
  v11 = *(_QWORD *)this + 8LL;
  *((_DWORD *)this + 4859) = v10;
  v12 = *(float *)((*(__int64 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v11 + 24LL))(v11, &v30) + 16);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v12 - 1.0) & _xmm) < 0.0000011920929 || IsDXGIColorSpaceHDR(v10) )
    v13 = 0;
  else
    v13 = (int)(float)(v12 * 80.0);
  *((_DWORD *)this + 4866) = v13;
  *((_DWORD *)this + 4864) = 2;
  if ( *((_BYTE *)this + 19473) )
  {
    MonitorTransform = COverlayContext::GetMonitorTransform(this);
    *(_QWORD *)((char *)this + 19364) = 0LL;
    *((_DWORD *)this + 4843) = *((_DWORD *)MonitorTransform + 10);
    *((_DWORD *)this + 4844) = *((_DWORD *)MonitorTransform + 11);
    *((_DWORD *)this + 4845) = *((_DWORD *)MonitorTransform + 6);
    *((_DWORD *)this + 4846) = *((_DWORD *)MonitorTransform + 7);
    *((_DWORD *)this + 4847) = *((_DWORD *)MonitorTransform + 8);
    *((_DWORD *)this + 4848) = *((_DWORD *)MonitorTransform + 9);
  }
  else
  {
    (*(void (__fastcall **)(__int64, __m128i *))(*(_QWORD *)(*(_QWORD *)this + 8LL) + 40LL))(
      *(_QWORD *)this + 8LL,
      &v30);
    v14 = v30.m128i_i32[0];
    *(_QWORD *)((char *)this + 19364) = 0LL;
    *(_QWORD *)((char *)this + 19372) = __PAIR64__(v30.m128i_u32[1], v14);
    *(_OWORD *)((char *)this + 19380) = *(_OWORD *)((char *)this + 19364);
  }
  v30 = 0LL;
  if ( !(unsigned __int8)COverlayContext::CalcDesktopClip(this, a2, &v30) )
    goto LABEL_18;
  if ( *((_BYTE *)this + 19770) )
    v15 = *(__m128i *)((char *)this + 19380);
  else
    v15 = v30;
  *(__m128i *)((char *)this + 19396) = v15;
LABEL_15:
  LOBYTE(v16) = *((_BYTE *)this + 19473);
  if ( *((_BYTE *)this + 19593) != (_BYTE)v16 )
  {
    if ( *v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)this + 8LL) + 48LL))(*(_QWORD *)this + 8LL);
    v16 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 256LL))(*(_QWORD *)this);
    if ( *(_BYTE *)(v16 + 256) )
      *(_BYTE *)(v16 + 257) = 1;
  }
  return v16;
}
