/*
 * XREFs of ?Build@CBlurRenderingGraphBuilder@@QEAAJW4D3D_FEATURE_LEVEL@@@Z @ 0x180047968
 * Callers:
 *     ?Create@CBlurRenderingGraph@@SAJAEBVCResourceTag@@W4D3D_FEATURE_LEVEL@@AEBUD2D_VECTOR_2F@@W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@W4D2D1_BORDER_MODE@@PEAPEAV1@@Z @ 0x180047F34 (-Create@CBlurRenderingGraph@@SAJAEBVCResourceTag@@W4D3D_FEATURE_LEVEL@@AEBUD2D_VECTOR_2F@@W4D2D1.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ @ 0x180045678 (-CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ.c)
 *     ?BuildOnePass@CBlurRenderingGraphBuilder@@AEAAJW4D3D_FEATURE_LEVEL@@AEBV?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@W4SeparableKernelPass@@@Z @ 0x180045700 (-BuildOnePass@CBlurRenderingGraphBuilder@@AEAAJW4D3D_FEATURE_LEVEL@@AEBV-$vector@UKernelTap@@V-$.c)
 *     ?reserve_region@?$vector_facade@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@V?$buffer_impl@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@_K0@Z @ 0x180047368 (-reserve_region@-$vector_facade@V-$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGrap.c)
 *     ?_Reset_move@?$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAX$$QEAV12@@Z @ 0x1800475C4 (-_Reset_move@-$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAX$$QEAV12.c)
 *     ?_Tidy@?$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAXXZ @ 0x18004761C (-_Tidy@-$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAXXZ.c)
 *     ?BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ @ 0x180047718 (-BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ.c)
 *     ?GenerateTaps@CGaussianKernel@@SAXAEAV?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@W4SeparableKernelPass@@MM@Z @ 0x1801F5744 (-GenerateTaps@CGaussianKernel@@SAXAEAV-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

__int64 __fastcall CBlurRenderingGraphBuilder::Build(CBlurRenderingGraphBuilder *this, int a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rax
  int v14; // xmm0_4
  int *i; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rdx
  int ShaderBodies; // eax
  __int128 v21; // [rsp+20h] [rbp-39h] BYREF
  __int64 v22; // [rsp+30h] [rbp-29h]
  _QWORD v23[7]; // [rsp+40h] [rbp-19h] BYREF
  _QWORD *v24; // [rsp+78h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v4 = CBlurRenderingGraphBuilder::BuildPrescale(this);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC0,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\gaussianblur.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  v6 = *(_QWORD *)this;
  v22 = 0LL;
  v21 = 0LL;
  CGaussianKernel::GenerateTaps(&v21, 0LL);
  CBlurRenderingGraphBuilder::BuildOnePass(this, a2, &v21, 0);
  v7 = *(_QWORD *)(v6 + 504) - *(_QWORD *)(v6 + 496);
  v23[0] = off_180301780;
  v24 = v23;
  v9 = detail::vector_facade<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,detail::buffer_impl<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,16,1,detail::liberal_expansion_policy>>::reserve_region(
         (__int64 *)(v6 + 496),
         v7 >> 6,
         v8);
  *(_QWORD *)(v9 + 56) = 0LL;
  std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Reset_move(v9, (__int64)v23);
  std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Tidy((__int64)v23, v10);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v6 + 1568) - *(float *)(v6 + 1572)) & _xmm) <= 0.0000011920929 )
  {
    for ( i = (int *)v21; i != *((int **)&v21 + 1); i += 3 )
    {
      v14 = *i;
      *i = i[1];
      i[1] = v14;
    }
  }
  else
  {
    v12 = *((_QWORD *)&v21 + 1);
    LOBYTE(v11) = 1;
    if ( (_QWORD)v21 != *((_QWORD *)&v21 + 1) )
      v12 = v21;
    *((_QWORD *)&v21 + 1) = v12;
    CGaussianKernel::GenerateTaps(&v21, v11);
  }
  CBlurRenderingGraphBuilder::BuildOnePass(this, a2, &v21, 1);
  v16 = *(_QWORD *)(v6 + 504) - *(_QWORD *)(v6 + 496);
  v23[0] = off_180301A20;
  v24 = v23;
  v18 = detail::vector_facade<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,detail::buffer_impl<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,16,1,detail::liberal_expansion_policy>>::reserve_region(
          (__int64 *)(v6 + 496),
          v16 >> 6,
          v17);
  *(_QWORD *)(v18 + 56) = 0LL;
  std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Reset_move(v18, (__int64)v23);
  std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Tidy((__int64)v23, v19);
  ShaderBodies = CBrushRenderingGraphBuilder::CreateShaderBodies(this);
  v5 = ShaderBodies;
  if ( ShaderBodies < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE5,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\gaussianblur.cpp",
      (const char *)(unsigned int)ShaderBodies);
    if ( (_QWORD)v21 )
      std::_Deallocate<16,0>((_QWORD *)v21, 4 * ((v22 - (__int64)v21) >> 2));
    return v5;
  }
  if ( (_QWORD)v21 )
    std::_Deallocate<16,0>((_QWORD *)v21, 4 * ((v22 - (__int64)v21) >> 2));
  return 0LL;
}
