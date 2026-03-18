/*
 * XREFs of ?GetDeviceTransform@COverlayContext@@QEBAAEBVCMILMatrix@@XZ @ 0x180023440
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z @ 0x180231EE4 (-EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z.c)
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180234A5C (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 * Callees:
 *     ?GetMonitorTransform@CLegacyRenderTarget@@UEBAAEBVCMonitorTransform@@XZ @ 0x180023490 (-GetMonitorTransform@CLegacyRenderTarget@@UEBAAEBVCMonitorTransform@@XZ.c)
 *     ?GetMonitorTransform@CDDisplayRenderTarget@@UEBAAEBVCMonitorTransform@@XZ @ 0x1800234A0 (-GetMonitorTransform@CDDisplayRenderTarget@@UEBAAEBVCMonitorTransform@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

const struct CMILMatrix *__fastcall COverlayContext::GetDeviceTransform(CLegacyRenderTarget **this)
{
  CLegacyRenderTarget *v1; // rcx
  __int64 (*v2)(void); // rax
  const struct CMonitorTransform *MonitorTransform; // rax

  v1 = *this;
  v2 = *(__int64 (**)(void))(*(_QWORD *)v1 + 256LL);
  if ( (char *)v2 == (char *)CLegacyRenderTarget::GetMonitorTransform )
  {
    MonitorTransform = CLegacyRenderTarget::GetMonitorTransform(v1);
  }
  else if ( (char *)v2 == (char *)CDDisplayRenderTarget::GetMonitorTransform )
  {
    MonitorTransform = CDDisplayRenderTarget::GetMonitorTransform(v1);
  }
  else
  {
    MonitorTransform = (const struct CMonitorTransform *)v2();
  }
  return (const struct CMonitorTransform *)((char *)MonitorTransform + 52);
}
