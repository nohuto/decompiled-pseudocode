/*
 * XREFs of ?reset@?$unique_ptr@VCShaderCache@@U?$default_delete@VCShaderCache@@@std@@@std@@QEAAXPEAVCShaderCache@@@Z @ 0x180250370
 * Callers:
 *     ?GetShaderCache@CCustomKernelEffect@@QEBAPEAVCShaderCache@@XZ @ 0x1800472D4 (-GetShaderCache@CCustomKernelEffect@@QEBAPEAVCShaderCache@@XZ.c)
 *     ?SetStateOnDevice@CProjectedShadowRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1801B4E10 (-SetStateOnDevice@CProjectedShadowRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1802AA97C (-AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAVCRenderingT.c)
 *     ?GetShaderCache@CRadialGradientEffect@@QEBAPEAVCShaderCache@@XZ @ 0x1802DBE00 (-GetShaderCache@CRadialGradientEffect@@QEBAPEAVCShaderCache@@XZ.c)
 * Callees:
 *     ??_GCShaderCache@@QEAAPEAXI@Z @ 0x1801B424C (--_GCShaderCache@@QEAAPEAXI@Z.c)
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
