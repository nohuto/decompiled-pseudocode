/*
 * XREFs of ?CanFastDisableDesktopPlane@COverlayContext@@AEAA_NAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@@Z @ 0x18005EC3C
 * Callers:
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@_N@Z @ 0x180231CCC (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV-$span@PEAVOverlayPlaneInfo@COverlayCont.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800234B0 (-IsEmpty@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsInfinite@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180023550 (-IsInfinite@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180027EE0 (-IsEmpty@-$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ @ 0x180060010 (-GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall COverlayContext::CanFastDisableDesktopPlane(COverlayContext *a1, _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // r14
  unsigned int v5; // ebp
  unsigned int v6; // esi
  unsigned int v7; // edi
  unsigned int v8; // ebx
  __m128i v9; // xmm1
  __m128i v10; // [rsp+20h] [rbp-18h] BYREF

  if ( !*a2 )
    return 0;
  v3 = (__int64 *)a2[1];
  v4 = *v3;
  v5 = *(_DWORD *)(*v3 + 68);
  v6 = *(_DWORD *)(*v3 + 72);
  v7 = *(_DWORD *)(*v3 + 76);
  v8 = *(_DWORD *)(*v3 + 80);
  v9 = *(__m128i *)((char *)COverlayContext::GetMonitorTransform(a1) + 24);
  v10 = v9;
  if ( v5 == _mm_cvtsi128_si32(v9)
    && v6 == _mm_cvtsi128_si32(_mm_srli_si128(v9, 4))
    && v7 == _mm_cvtsi128_si32(_mm_srli_si128(v9, 8))
    && v8 == _mm_cvtsi128_si32(_mm_srli_si128(v9, 12)) )
  {
    return TMilRect<int,tagRECT,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::IsEmpty((_DWORD *)(v4 + 228));
  }
  if ( (v8 <= v6 || v7 <= v5) && TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(&v10) )
    return TMilRect<int,tagRECT,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::IsEmpty((_DWORD *)(v4 + 228));
  return (!v5 && v7 == -1 || !v6 && v8 == -1)
      && TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsInfinite(&v10)
      && TMilRect<int,tagRECT,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::IsEmpty((_DWORD *)(v4 + 228));
}
