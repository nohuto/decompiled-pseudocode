/*
 * XREFs of ??0CBaseRenderTargetProxy@@QEAA@XZ @ 0x18009760C
 * Callers:
 *     ??$CreateProxy@VCLegacyVisualCaptureRenderTargetProxy@@@CCompositor@@IEAAJPEAPEAVCLegacyVisualCaptureRenderTargetProxy@@@Z @ 0x180082EB4 (--$CreateProxy@VCLegacyVisualCaptureRenderTargetProxy@@@CCompositor@@IEAAJPEAPEAVCLegacyVisualCa.c)
 *     ??$CreateProxy@VCIndirectSwapchainRenderTargetProxy@@@CCompositor@@IEAAJPEAPEAVCIndirectSwapchainRenderTargetProxy@@@Z @ 0x1800B5988 (--$CreateProxy@VCIndirectSwapchainRenderTargetProxy@@@CCompositor@@IEAAJPEAPEAVCIndirectSwapchai.c)
 *     ??$CreateProxy@VCMagnifierRenderTargetProxy@@@CCompositor@@IEAAJPEAPEAVCMagnifierRenderTargetProxy@@@Z @ 0x1800B5A60 (--$CreateProxy@VCMagnifierRenderTargetProxy@@@CCompositor@@IEAAJPEAPEAVCMagnifierRenderTargetPro.c)
 * Callees:
 *     ??0CResourceProxy@@IEAA@XZ @ 0x18002676C (--0CResourceProxy@@IEAA@XZ.c)
 */

CBaseRenderTargetProxy *__fastcall CBaseRenderTargetProxy::CBaseRenderTargetProxy(CBaseRenderTargetProxy *this)
{
  CBaseRenderTargetProxy *v1; // rcx
  CBaseRenderTargetProxy *result; // rax

  CResourceProxy::CResourceProxy(this);
  result = v1;
  *(_QWORD *)v1 = &CBaseRenderTargetProxy::`vftable';
  return result;
}
