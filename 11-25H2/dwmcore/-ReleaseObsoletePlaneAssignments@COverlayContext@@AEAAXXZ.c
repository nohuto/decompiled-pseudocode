/*
 * XREFs of ?ReleaseObsoletePlaneAssignments@COverlayContext@@AEAAXXZ @ 0x18002D8C8
 * Callers:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18002CA40 (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@.c)
 * Callees:
 *     ?DisableOverlay@CGlobalCompositionSurfaceInfo@@UEAAJ_K@Z @ 0x18002C520 (-DisableOverlay@CGlobalCompositionSurfaceInfo@@UEAAJ_K@Z.c)
 *     ?GetLocalClipRect@OverlayPlaneInfo@COverlayContext@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x18002C578 (-GetLocalClipRect@OverlayPlaneInfo@COverlayContext@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?FindOverlayCandidateIndex@COverlayContext@@AEBAHPEBVCVisual@@PEBVCCompositionSurfaceInfo@@_K@Z @ 0x18002C6EC (-FindOverlayCandidateIndex@COverlayContext@@AEBAHPEBVCVisual@@PEBVCCompositionSurfaceInfo@@_K@Z.c)
 *     ?GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ @ 0x18002D9D0 (-GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall COverlayContext::ReleaseObsoletePlaneAssignments(COverlayContext *this)
{
  const struct CMonitorTransform *MonitorTransform; // rax
  __int64 v3; // rbx
  const struct CMonitorTransform *v4; // rbp
  __int64 v5; // r14
  CGlobalCompositionSurfaceInfo *v6; // rsi
  __int64 v7; // rdx
  __int64 (__fastcall *v8)(CGlobalCompositionSurfaceInfo *, __int64); // rax
  _BYTE v9[16]; // [rsp+20h] [rbp-38h] BYREF

  MonitorTransform = COverlayContext::GetMonitorTransform(this);
  v3 = *((_QWORD *)this + 1617);
  v4 = MonitorTransform;
  v5 = *((_QWORD *)this + 1618);
  while ( v3 != v5 )
  {
    v6 = *(CGlobalCompositionSurfaceInfo **)(v3 + 16);
    if ( (unsigned int)COverlayContext::FindOverlayCandidateIndex(
                         this,
                         *(const struct CVisual **)(v3 + 8),
                         v6,
                         *(_QWORD *)(v3 + 24)) == -1 )
    {
      v7 = *(_QWORD *)(v3 + 24);
      v8 = *(__int64 (__fastcall **)(CGlobalCompositionSurfaceInfo *, __int64))(*(_QWORD *)v6 + 288LL);
      if ( v8 == CGlobalCompositionSurfaceInfo::DisableOverlay )
        CGlobalCompositionSurfaceInfo::DisableOverlay(v6, v7);
      else
        v8(v6, v7);
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v3 + 16) + 488LL))(*(_QWORD *)(v3 + 16), 2LL);
      COverlayContext::OverlayPlaneInfo::GetLocalClipRect(v3, (__int64)v9, (__int64)v4 + 120);
      (*(void (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)this + 296LL))(*(_QWORD *)this, v9);
    }
    v3 += 400LL;
  }
}
