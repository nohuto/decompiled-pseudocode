/*
 * XREFs of ?reset@?$unique_ptr@VCShaderCache@@U?$default_delete@VCShaderCache@@@std@@@std@@QEAAXPEAVCShaderCache@@@Z @ 0x18025B9C0
 * Callers:
 *     ?GetShaderCache@CCustomKernelEffect@@QEBAPEAVCShaderCache@@XZ @ 0x180071380 (-GetShaderCache@CCustomKernelEffect@@QEBAPEAVCShaderCache@@XZ.c)
 *     ?SetStateOnDevice@CProjectedShadowRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x18018EDE0 (-SetStateOnDevice@CProjectedShadowRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1802B443C (-AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAVCRenderingT.c)
 *     ?GetShaderCache@CRadialGradientEffect@@QEBAPEAVCShaderCache@@XZ @ 0x1802E50A0 (-GetShaderCache@CRadialGradientEffect@@QEBAPEAVCShaderCache@@XZ.c)
 * Callees:
 *     ??_GCShaderCache@@QEAAPEAXI@Z @ 0x1801B199C (--_GCShaderCache@@QEAAPEAXI@Z.c)
 */

CShaderCache *__fastcall std::unique_ptr<CShaderCache>::reset(CShaderCache **a1, CShaderCache *a2)
{
  CShaderCache *result; // rax

  result = *a1;
  *a1 = a2;
  if ( result )
    return CShaderCache::`scalar deleting destructor'(result);
  return result;
}
