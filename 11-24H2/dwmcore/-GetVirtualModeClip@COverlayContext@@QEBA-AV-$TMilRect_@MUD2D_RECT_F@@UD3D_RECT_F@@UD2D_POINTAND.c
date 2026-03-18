/*
 * XREFs of ?GetVirtualModeClip@COverlayContext@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800231A8
 * Callers:
 *     ?GetInverseDesktopMPOTransform@COverlayContext@@QEBAXPEAVCMILMatrix@@@Z @ 0x1801F3254 (-GetInverseDesktopMPOTransform@COverlayContext@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180234A5C (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 * Callees:
 *     ?GetMonitorTransform@CLegacyRenderTarget@@UEBAAEBVCMonitorTransform@@XZ @ 0x180023490 (-GetMonitorTransform@CLegacyRenderTarget@@UEBAAEBVCMonitorTransform@@XZ.c)
 *     ?GetMonitorTransform@CDDisplayRenderTarget@@UEBAAEBVCMonitorTransform@@XZ @ 0x1800234A0 (-GetMonitorTransform@CDDisplayRenderTarget@@UEBAAEBVCMonitorTransform@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

float *__fastcall COverlayContext::GetVirtualModeClip(CLegacyRenderTarget **a1, float *a2)
{
  CLegacyRenderTarget *v2; // rcx
  __int64 (*v4)(void); // rax
  const struct CMonitorTransform *MonitorTransform; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // xmm1_8
  float v8; // xmm0_4
  float *result; // rax

  v2 = *a1;
  v4 = *(__int64 (**)(void))(*(_QWORD *)v2 + 256LL);
  if ( (char *)v4 == (char *)CLegacyRenderTarget::GetMonitorTransform )
  {
    MonitorTransform = CLegacyRenderTarget::GetMonitorTransform(v2);
  }
  else if ( (char *)v4 == (char *)CDDisplayRenderTarget::GetMonitorTransform )
  {
    MonitorTransform = CDDisplayRenderTarget::GetMonitorTransform(v2);
  }
  else
  {
    MonitorTransform = (const struct CMonitorTransform *)v4();
  }
  v6 = *((_QWORD *)MonitorTransform + 3);
  v7 = _mm_srli_si128(*(__m128i *)((char *)MonitorTransform + 24), 8).m128i_u64[0];
  v8 = (float)(int)*(_OWORD *)((char *)MonitorTransform + 24);
  result = a2;
  *a2 = v8;
  a2[1] = (float)SHIDWORD(v6);
  a2[2] = (float)(int)v7;
  a2[3] = (float)SHIDWORD(v7);
  return result;
}
