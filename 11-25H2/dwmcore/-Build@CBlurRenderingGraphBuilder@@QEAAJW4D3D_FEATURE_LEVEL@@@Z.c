/*
 * XREFs of ?Build@CBlurRenderingGraphBuilder@@QEAAJW4D3D_FEATURE_LEVEL@@@Z @ 0x180071698
 * Callers:
 *     ?Create@CBlurRenderingGraph@@SAJAEBVCResourceTag@@W4D3D_FEATURE_LEVEL@@AEBUD2D_VECTOR_2F@@W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@W4D2D1_BORDER_MODE@@PEAPEAV1@@Z @ 0x180071ACC (-Create@CBlurRenderingGraph@@SAJAEBVCResourceTag@@W4D3D_FEATURE_LEVEL@@AEBUD2D_VECTOR_2F@@W4D2D1.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ @ 0x18006F2A4 (-CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ.c)
 *     ?BuildOnePass@CBlurRenderingGraphBuilder@@AEAAJW4D3D_FEATURE_LEVEL@@AEBV?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@W4SeparableKernelPass@@@Z @ 0x18006F32C (-BuildOnePass@CBlurRenderingGraphBuilder@@AEAAJW4D3D_FEATURE_LEVEL@@AEBV-$vector@UKernelTap@@V-$.c)
 *     ?BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ @ 0x180071448 (-BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ.c)
 *     ?reserve_region@?$vector_facade@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@V?$buffer_impl@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@_K0@Z @ 0x180071E04 (-reserve_region@-$vector_facade@V-$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGrap.c)
 *     ?_Reset_move@?$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAX$$QEAV12@@Z @ 0x180072060 (-_Reset_move@-$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAX$$QEAV12.c)
 *     ?_Tidy@?$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAXXZ @ 0x1800720B8 (-_Tidy@-$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAXXZ.c)
 *     ?GenerateTaps@CGaussianKernel@@SAXAEAV?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@W4SeparableKernelPass@@MM@Z @ 0x18007747C (-GenerateTaps@CGaussianKernel@@SAXAEAV-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

__int64 __fastcall CBlurRenderingGraphBuilder::Build(CBlurRenderingGraphBuilder *this, int a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  int v12; // xmm0_4
  int *i; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  int ShaderBodies; // eax
  __int128 v17; // [rsp+20h] [rbp-39h] BYREF
  __int64 v18; // [rsp+30h] [rbp-29h]
  _QWORD v19[7]; // [rsp+40h] [rbp-19h] BYREF
  _QWORD *v20; // [rsp+78h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v4 = CBlurRenderingGraphBuilder::BuildPrescale(this);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC0,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\gaussianblur.cpp",
      (const char *)(unsigned int)v4,
      v17);
    return v5;
  }
  v6 = *(_QWORD *)this;
  v18 = 0LL;
  v17 = 0LL;
  CGaussianKernel::GenerateTaps(&v17, 0LL);
  CBlurRenderingGraphBuilder::BuildOnePass(this, a2, &v17, 0);
  v7 = *(_QWORD *)(v6 + 504) - *(_QWORD *)(v6 + 496);
  v19[0] = off_18030CBD8;
  v20 = v19;
  v8 = detail::vector_facade<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,detail::buffer_impl<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,16,1,detail::liberal_expansion_policy>>::reserve_region(
         v6 + 496,
         v7 >> 6);
  *(_QWORD *)(v8 + 56) = 0LL;
  std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Reset_move(v8, v19);
  std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Tidy(v19);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v6 + 1568) - *(float *)(v6 + 1572)) & _xmm) <= 0.0000011920929 )
  {
    for ( i = (int *)v17; i != *((int **)&v17 + 1); i += 3 )
    {
      v12 = *i;
      *i = i[1];
      i[1] = v12;
    }
  }
  else
  {
    v10 = *((_QWORD *)&v17 + 1);
    LOBYTE(v9) = 1;
    if ( (_QWORD)v17 != *((_QWORD *)&v17 + 1) )
      v10 = v17;
    *((_QWORD *)&v17 + 1) = v10;
    CGaussianKernel::GenerateTaps(&v17, v9);
  }
  CBlurRenderingGraphBuilder::BuildOnePass(this, a2, &v17, 1);
  v14 = *(_QWORD *)(v6 + 504) - *(_QWORD *)(v6 + 496);
  v19[0] = off_18030CDC0;
  v20 = v19;
  v15 = detail::vector_facade<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,detail::buffer_impl<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,16,1,detail::liberal_expansion_policy>>::reserve_region(
          v6 + 496,
          v14 >> 6);
  *(_QWORD *)(v15 + 56) = 0LL;
  std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Reset_move(v15, v19);
  std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Tidy(v19);
  ShaderBodies = CBrushRenderingGraphBuilder::CreateShaderBodies(this);
  v5 = ShaderBodies;
  if ( ShaderBodies < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE5,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\gaussianblur.cpp",
      (const char *)(unsigned int)ShaderBodies,
      v17);
    if ( (_QWORD)v17 )
      std::_Deallocate<16,0>((_QWORD *)v17, 4 * ((v18 - (__int64)v17) >> 2));
    return v5;
  }
  if ( (_QWORD)v17 )
    std::_Deallocate<16,0>((_QWORD *)v17, 4 * ((v18 - (__int64)v17) >> 2));
  return 0LL;
}
