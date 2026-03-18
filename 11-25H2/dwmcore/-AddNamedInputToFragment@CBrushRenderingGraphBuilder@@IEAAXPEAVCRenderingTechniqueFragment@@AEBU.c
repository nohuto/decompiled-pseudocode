/*
 * XREFs of ?AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBUGraphInputParameters@CBrushRenderingGraph@@@Z @ 0x180070DA4
 * Callers:
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180070758 (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 *     ?AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1802127FC (-AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFrag.c)
 *     ?AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1802B443C (-AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAVCRenderingT.c)
 *     ?AddRadialGradientBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCRadialGradientBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1802B7260 (-AddRadialGradientBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCRadialGradientBrush@@_NPEAPEAVCRe.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B1330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CBrushRenderingGraphBuilder::AddNamedInputToFragment(
        CBrushRenderingGraphBuilder *this,
        struct CRenderingTechniqueFragment *a2,
        const struct CBrushRenderingGraph::GraphInputParameters *a3)
{
  __int64 v3; // rdi
  unsigned int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // r10
  __int64 v9; // r8
  unsigned int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // esi
  unsigned int v14; // eax
  int v15; // r9d
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *(_QWORD *)this;
  v6 = 0;
  v7 = *(unsigned int *)(*(_QWORD *)this + 40LL);
  if ( (_DWORD)v7 )
  {
    v8 = *(_QWORD *)a3;
    v9 = *(_QWORD *)(v3 + 16);
    do
    {
      if ( *(_QWORD *)v9 == v8
        && *(_QWORD *)(v9 + 8) == *((_QWORD *)a3 + 1)
        && *(_DWORD *)(v9 + 16) == *((_DWORD *)a3 + 4) )
      {
        break;
      }
      ++v6;
      v9 += 24LL;
    }
    while ( v6 < (unsigned int)v7 );
  }
  if ( v6 >= (unsigned int)v7 )
  {
    v10 = v7 + 1;
    if ( (int)v7 + 1 < (unsigned int)v7 )
    {
      v13 = -2147024362;
      v14 = 181;
      v15 = -2147024362;
    }
    else
    {
      if ( v10 <= *(_DWORD *)(v3 + 36) )
      {
        v11 = *(_QWORD *)(v3 + 16);
        v12 = 3 * v7;
        *(_OWORD *)(v11 + 8 * v12) = *(_OWORD *)a3;
        *(_QWORD *)(v11 + 8 * v12 + 16) = *((_QWORD *)a3 + 2);
        *(_DWORD *)(v3 + 40) = v10;
LABEL_9:
        v6 = *(_DWORD *)(v3 + 40) - 1;
        goto LABEL_10;
      }
      v13 = DynArrayImpl<0>::AddMultipleAndSet(v3 + 16, 24LL, 1LL, a3);
      v15 = v13;
      if ( v13 >= 0 )
        goto LABEL_9;
      v14 = 192;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, v14, 0LL);
    ModuleFailFastForHRESULT(v13, retaddr);
  }
LABEL_10:
  CRenderingTechniqueFragment::AddNamedInput(a2, v6);
}
