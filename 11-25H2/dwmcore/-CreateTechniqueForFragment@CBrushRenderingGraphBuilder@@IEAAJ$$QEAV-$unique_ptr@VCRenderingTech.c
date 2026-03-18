/*
 * XREFs of ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x18006DC54
 * Callers:
 *     ?BuildOnePass@CBlurRenderingGraphBuilder@@AEAAJW4D3D_FEATURE_LEVEL@@AEBV?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@W4SeparableKernelPass@@@Z @ 0x18006F32C (-BuildOnePass@CBlurRenderingGraphBuilder@@AEAAJW4D3D_FEATURE_LEVEL@@AEBV-$vector@UKernelTap@@V-$.c)
 *     ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@@Z @ 0x18006FD84 (-Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@@Z.c)
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x1800703DC (-CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180070758 (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 *     ?BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ @ 0x180071448 (-BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ.c)
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x1802B45D8 (-Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composit.c)
 * Callees:
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x18006C2B0 (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@AEAAXXZ @ 0x18006CB44 (-_Tidy@-$vector@UFragmentStackEntry@CFragmentIterator@@V-$allocator@UFragmentStackEntry@CFragmen.c)
 *     ?CollectStateFromFragment@CRenderingTechnique@@AEAAXPEAVCRenderingTechniqueFragment@@@Z @ 0x18006DE5C (-CollectStateFromFragment@CRenderingTechnique@@AEAAXPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ??_GCRenderingTechnique@@QEAAPEAXI@Z @ 0x18006F098 (--_GCRenderingTechnique@@QEAAPEAXI@Z.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800B2860 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetFragmentIterator@CRenderingTechnique@@AEBA?AVCFragmentIterator@@XZ @ 0x18014A530 (-GetFragmentIterator@CRenderingTechnique@@AEBA-AVCFragmentIterator@@XZ.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::CreateTechniqueForFragment(_QWORD *a1, __int64 *a2, _DWORD *a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  unsigned int v12; // eax
  unsigned int v13; // edx
  unsigned int v14; // edi
  int v16; // esi
  unsigned int v17; // eax
  unsigned int v18; // edx
  _QWORD *v19; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+38h] [rbp-18h] BYREF
  __int64 v21; // [rsp+40h] [rbp-10h]
  _QWORD *v22; // [rsp+88h] [rbp+38h] BYREF

  v6 = MIDL_user_allocate(0x118uLL);
  v7 = v6;
  if ( !v6 )
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x246u, 0LL);
    return v14;
  }
  *v6 = *a1;
  v8 = v6;
  v9 = *a2;
  *a2 = 0LL;
  v7[1] = v9;
  v7[2] = 0LL;
  v7[3] = &CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique>::`vftable';
  v7[4] = v7;
  v7[5] = v7 + 8;
  v7[6] = v7 + 8;
  v7[7] = v7 + 10;
  *((_DWORD *)v7 + 64) = 0;
  *((_DWORD *)v7 + 65) = 0;
  *((_DWORD *)v7 + 66) = 0;
  *((_DWORD *)v7 + 67) = 0;
  *((_DWORD *)v7 + 68) = 0;
  *((_BYTE *)v7 + 276) = 0;
  CRenderingTechnique::GetFragmentIterator(v8, &v20);
  while ( v21 != v20 )
  {
    CRenderingTechnique::CollectStateFromFragment(
      (CRenderingTechnique *)v7,
      *(struct CRenderingTechniqueFragment **)(v21 - 16));
    v10 = v21 - 16;
    v21 = v10;
    if ( v10 == v20 )
      break;
    ++*(_DWORD *)(v10 - 8);
    CFragmentIterator::FindFirst((CFragmentIterator *)&v20);
  }
  std::vector<CFragmentIterator::FragmentStackEntry>::_Tidy((__int64)&v20);
  v11 = *a1 + 144LL;
  v19 = v7;
  v12 = *(_DWORD *)(v11 + 24);
  v13 = v12 + 1;
  if ( v12 + 1 < v12 )
  {
    v16 = -2147024362;
    v17 = 181;
    goto LABEL_15;
  }
  if ( v13 > *(_DWORD *)(v11 + 20) )
  {
    v22 = &v19;
    v16 = DynArrayImpl<0>::Grow(v11, 8, 1, 0, (__int64)&v22);
    if ( v16 >= 0 )
    {
      *(_QWORD *)((unsigned int)(8 * (*(_DWORD *)(v11 + 24))++) + *(_QWORD *)v11) = *v22;
      goto LABEL_8;
    }
    v17 = 192;
LABEL_15:
    v14 = v16;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, v17, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x249u, 0LL);
    CRenderingTechnique::`scalar deleting destructor'((CRenderingTechnique *)v7, v18);
    return v14;
  }
  *(_QWORD *)(*(_QWORD *)v11 + 8LL * v12) = v7;
  *(_DWORD *)(v11 + 24) = v13;
LABEL_8:
  *a3 = *(_DWORD *)(v11 + 24) - 1;
  return 0;
}
