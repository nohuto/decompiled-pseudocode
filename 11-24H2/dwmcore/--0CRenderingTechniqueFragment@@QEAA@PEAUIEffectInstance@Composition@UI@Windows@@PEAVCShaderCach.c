/*
 * XREFs of ??0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCShaderCache@@IW4Enum@CompiledEffectSubgraphFlags@234@_N@Z @ 0x1800471D0
 * Callers:
 *     ?BuildOnePass@CBlurRenderingGraphBuilder@@AEAAJW4D3D_FEATURE_LEVEL@@AEBV?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@W4SeparableKernelPass@@@Z @ 0x180045700 (-BuildOnePass@CBlurRenderingGraphBuilder@@AEAAJW4D3D_FEATURE_LEVEL@@AEBV-$vector@UKernelTap@@V-$.c)
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180046B2C (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 *     ?BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ @ 0x180047718 (-BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ.c)
 *     ?AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1802AA97C (-AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAVCRenderingT.c)
 *     ?AddRadialGradientBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCRadialGradientBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1802AD670 (-AddRadialGradientBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCRadialGradientBrush@@_NPEAPEAVCRe.c)
 * Callees:
 *     ?GetConstantBufferSize@CCustomKernelEffect@@UEBAII@Z @ 0x1800472B0 (-GetConstantBufferSize@CCustomKernelEffect@@UEBAII@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRenderingTechniqueFragment::CRenderingTechniqueFragment(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        char a6)
{
  CCustomKernelEffect *v10; // rcx
  unsigned int (__fastcall *v11)(CCustomKernelEffect *__hidden, unsigned int); // rax
  unsigned int ConstantBufferSize; // eax

  *(_QWORD *)a1 = a2;
  if ( a2 )
    (**(void (__fastcall ***)(__int64))a2)(a2);
  *(_QWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 16) = a4;
  v10 = (CCustomKernelEffect *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2);
  v11 = *(unsigned int (__fastcall **)(CCustomKernelEffect *__hidden, unsigned int))(*(_QWORD *)v10 + 72LL);
  if ( v11 == CCustomKernelEffect::GetConstantBufferSize )
    ConstantBufferSize = CCustomKernelEffect::GetConstantBufferSize(v10, a4);
  else
    ConstantBufferSize = v11(v10, a4);
  *(_DWORD *)(a1 + 20) = ConstantBufferSize;
  *(_DWORD *)(a1 + 24) = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 80LL))(a2, a4);
  *(_DWORD *)(a1 + 28) = a5;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_BYTE *)(a1 + 112) = a6;
  return a1;
}
