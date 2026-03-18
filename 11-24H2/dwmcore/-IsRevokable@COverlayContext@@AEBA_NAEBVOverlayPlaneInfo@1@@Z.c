/*
 * XREFs of ?IsRevokable@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z @ 0x18002324C
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z @ 0x180231EE4 (-EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z.c)
 *     ?HasRevokablePlanes@COverlayContext@@QEBA_NXZ @ 0x180232A20 (-HasRevokablePlanes@COverlayContext@@QEBA_NXZ.c)
 * Callees:
 *     ?IsOverlayRevokable@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x180023410 (-IsOverlayRevokable@CGlobalCompositionSurfaceInfo@@UEBA_NXZ.c)
 *     ?GetMonitorTransform@CLegacyRenderTarget@@UEBAAEBVCMonitorTransform@@XZ @ 0x180023490 (-GetMonitorTransform@CLegacyRenderTarget@@UEBAAEBVCMonitorTransform@@XZ.c)
 *     ?GetMonitorTransform@CDDisplayRenderTarget@@UEBAAEBVCMonitorTransform@@XZ @ 0x1800234A0 (-GetMonitorTransform@CDDisplayRenderTarget@@UEBAAEBVCMonitorTransform@@XZ.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800234B0 (-IsEmpty@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsInfinite@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180023550 (-IsInfinite@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 v14; // rdx
  unsigned __int64 v15; // r8
  __int64 v16; // r9
  char v17; // cl
  int v19; // edi
  int v20; // eax
  unsigned __int64 v21; // r8
  int v22; // ebx
  __int128 v23; // [rsp+20h] [rbp-38h] BYREF

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
  v15 = *((_QWORD *)MonitorTransform + 4);
  v23 = *(_OWORD *)((char *)MonitorTransform + 24);
  v16 = v23;
  if ( __PAIR64__(v9, v8) == (_QWORD)v23 && __PAIR64__(v11, v10) == v15 )
    return 0;
  if ( (v11 <= v9 || v10 <= v8)
    && (unsigned __int8)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(&v23) )
  {
    return 0;
  }
  if ( (!v8 && v10 == -1 || !v9 && v11 == -1)
    && (unsigned __int8)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsInfinite(&v23, v14, v15) )
  {
    return 0;
  }
  v17 = 1;
  if ( v8 == (_DWORD)v16 && v10 == (_DWORD)v15 && v9 > HIDWORD(v16) )
  {
    v21 = HIDWORD(v15);
    if ( v11 >= (unsigned int)v21 )
      return v17;
    v22 = v11 + v9 - v21 - HIDWORD(v16);
    v20 = -v22;
    if ( v22 > 0 )
      v20 = v22;
    goto LABEL_33;
  }
  if ( v9 == HIDWORD(v16) && v11 == HIDWORD(v15) && v10 < (unsigned int)v15 && v8 > (unsigned int)v16 )
  {
    v19 = v10 + v8 - v15 - v16;
    v20 = -v19;
    if ( v19 > 0 )
      v20 = v19;
LABEL_33:
    if ( v20 > 1 )
      return v17;
    return 0;
  }
  return v17;
}
