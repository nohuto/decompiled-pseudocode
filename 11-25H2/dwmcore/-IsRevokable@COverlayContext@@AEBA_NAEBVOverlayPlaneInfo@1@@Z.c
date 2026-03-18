/*
 * XREFs of ?IsRevokable@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z @ 0x18018959C
 * Callers:
 *     ?BeginOverlayCandidateCollection@COverlayContext@@QEAA_NPEBVCRegion@@PEAV2@@Z @ 0x18023C6A8 (-BeginOverlayCandidateCollection@COverlayContext@@QEAA_NPEBVCRegion@@PEAV2@@Z.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z @ 0x18023CA68 (-EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z.c)
 *     ?HasRevokablePlanes@COverlayContext@@QEBA_NXZ @ 0x18023D270 (-HasRevokablePlanes@COverlayContext@@QEBA_NXZ.c)
 * Callees:
 *     ?IsOverlayRevokable@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x180189760 (-IsOverlayRevokable@CGlobalCompositionSurfaceInfo@@UEBA_NXZ.c)
 *     ?GetMonitorTransform@CLegacyRenderTarget@@UEBAAEBVCMonitorTransform@@XZ @ 0x180189810 (-GetMonitorTransform@CLegacyRenderTarget@@UEBAAEBVCMonitorTransform@@XZ.c)
 *     ?GetMonitorTransform@CDDisplayRenderTarget@@UEBAAEBVCMonitorTransform@@XZ @ 0x180189820 (-GetMonitorTransform@CDDisplayRenderTarget@@UEBAAEBVCMonitorTransform@@XZ.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180189830 (-IsEmpty@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsInfinite@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1801898D0 (-IsInfinite@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall COverlayContext::IsRevokable(
        CLegacyRenderTarget **this,
        const struct COverlayContext::OverlayPlaneInfo *a2)
{
  CGlobalCompositionSurfaceInfo *v4; // rcx
  __int64 (*v5)(void); // rax
  char IsOverlayRevokable; // al
  CLegacyRenderTarget *v7; // rcx
  unsigned int v8; // edi
  unsigned int v9; // ebx
  unsigned int v10; // esi
  unsigned int v11; // ebp
  const struct CMonitorTransform *(__fastcall *v12)(CDDisplayRenderTarget *__hidden); // rax
  const struct CMonitorTransform *MonitorTransform; // rax
  unsigned __int64 v14; // r8
  __int64 v15; // r9
  char v16; // cl
  int v18; // edi
  int v19; // eax
  unsigned __int64 v20; // r8
  int v21; // ebx
  __int128 v22; // [rsp+20h] [rbp-38h] BYREF

  v4 = (CGlobalCompositionSurfaceInfo *)*((_QWORD *)a2 + 2);
  v5 = *(__int64 (**)(void))(*(_QWORD *)v4 + 152LL);
  if ( (char *)v5 == (char *)CGlobalCompositionSurfaceInfo::IsOverlayRevokable )
    IsOverlayRevokable = CGlobalCompositionSurfaceInfo::IsOverlayRevokable(v4);
  else
    IsOverlayRevokable = v5();
  if ( !IsOverlayRevokable )
    return 0;
  v7 = *this;
  v8 = *((_DWORD *)a2 + 17);
  v9 = *((_DWORD *)a2 + 18);
  v10 = *((_DWORD *)a2 + 19);
  v11 = *((_DWORD *)a2 + 20);
  v12 = *(const struct CMonitorTransform *(__fastcall **)(CDDisplayRenderTarget *__hidden))(*(_QWORD *)*this + 256LL);
  if ( v12 == CLegacyRenderTarget::GetMonitorTransform )
    MonitorTransform = CLegacyRenderTarget::GetMonitorTransform(v7);
  else
    MonitorTransform = v12 == CDDisplayRenderTarget::GetMonitorTransform
                     ? CDDisplayRenderTarget::GetMonitorTransform(v7)
                     : (const struct CMonitorTransform *)((__int64 (*)(void))v12)();
  v14 = *((_QWORD *)MonitorTransform + 4);
  v22 = *(_OWORD *)((char *)MonitorTransform + 24);
  v15 = v22;
  if ( __PAIR64__(v9, v8) == (_QWORD)v22 && __PAIR64__(v11, v10) == v14 )
    return 0;
  if ( (v11 <= v9 || v10 <= v8)
    && (unsigned __int8)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(&v22) )
  {
    return 0;
  }
  if ( (!v8 && v10 == -1 || !v9 && v11 == -1)
    && (unsigned __int8)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsInfinite(&v22) )
  {
    return 0;
  }
  v16 = 1;
  if ( v8 == (_DWORD)v15 && v10 == (_DWORD)v14 && v9 > HIDWORD(v15) )
  {
    v20 = HIDWORD(v14);
    if ( v11 >= (unsigned int)v20 )
      return v16;
    v21 = v11 + v9 - v20 - HIDWORD(v15);
    v19 = -v21;
    if ( v21 > 0 )
      v19 = v21;
    goto LABEL_33;
  }
  if ( v9 == HIDWORD(v15) && v11 == HIDWORD(v14) && v10 < (unsigned int)v14 && v8 > (unsigned int)v15 )
  {
    v18 = v10 + v8 - v14 - v15;
    v19 = -v18;
    if ( v18 > 0 )
      v19 = v18;
LABEL_33:
    if ( v19 > 1 )
      return v16;
    return 0;
  }
  return v16;
}
