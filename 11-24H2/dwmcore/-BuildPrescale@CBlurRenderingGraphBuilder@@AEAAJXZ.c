/*
 * XREFs of ?BuildPrescale@CBlurRenderingGraphBuilder@@AEAAJXZ @ 0x180047718
 * Callers:
 *     ?Build@CBlurRenderingGraphBuilder@@QEAAJW4D3D_FEATURE_LEVEL@@@Z @ 0x180047968 (-Build@CBlurRenderingGraphBuilder@@QEAAJW4D3D_FEATURE_LEVEL@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x180044004 (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 *     ?AddIntermediateInput@CRenderingTechniqueFragment@@QEAAXI@Z @ 0x180046288 (-AddIntermediateInput@CRenderingTechniqueFragment@@QEAAXI@Z.c)
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x180046500 (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ??0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCShaderCache@@IW4Enum@CompiledEffectSubgraphFlags@234@_N@Z @ 0x1800471D0 (--0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCShaderCach.c)
 *     ?reserve_region@?$vector_facade@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@V?$buffer_impl@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@_K0@Z @ 0x180047368 (-reserve_region@-$vector_facade@V-$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGrap.c)
 *     ?_Reset_move@?$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAX$$QEAV12@@Z @ 0x1800475C4 (-_Reset_move@-$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAX$$QEAV12.c)
 *     ?_Tidy@?$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAXXZ @ 0x18004761C (-_Tidy@-$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAXXZ.c)
 *     ?Create@CPassthroughEffect@@SAJPEAPEAV1@@Z @ 0x1800478E4 (-Create@CPassthroughEffect@@SAJPEAPEAV1@@Z.c)
 *     ?GetShaderCache@CPassthroughEffect@@QEBAPEAVCShaderCache@@XZ @ 0x180047BE0 (-GetShaderCache@CPassthroughEffect@@QEBAPEAVCShaderCache@@XZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIEffectInstance@Composition@UI@Windows@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800480B0 (-InternalRelease@-$CMILRefCountBaseT@UIEffectInstance@Composition@UI@Windows@@VCMilObjectDeleter.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

__int64 __fastcall CBlurRenderingGraphBuilder::BuildPrescale(CBlurRenderingGraphBuilder *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  CRenderingTechniqueFragment *v4; // rax
  CPassthroughEffect *v5; // rcx
  struct CPassthroughEffect *v6; // rbx
  __int64 v7; // rdi
  struct CShaderCache *ShaderCache; // rax
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // rdx
  bool v13; // zf
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  struct CPassthroughEffect *v18; // [rsp+38h] [rbp-19h] BYREF
  CRenderingTechniqueFragment *v19; // [rsp+40h] [rbp-11h] BYREF
  __int128 v20; // [rsp+48h] [rbp-9h]
  __int64 (__fastcall **v21)(); // [rsp+58h] [rbp+7h] BYREF
  __int128 v22; // [rsp+60h] [rbp+Fh]
  __int64 (__fastcall ***v23)(); // [rsp+90h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v18 = 0LL;
  v2 = CPassthroughEffect::Create(&v18);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF0,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\gaussianblur.cpp",
      (const char *)(unsigned int)v2);
    if ( v18 )
      CMILRefCountBaseT<Windows::UI::Composition::IEffectInstance,CMilObjectDeleter>::InternalRelease(v18);
    return v3;
  }
  else
  {
    v4 = (CRenderingTechniqueFragment *)operator new(0x78uLL);
    v6 = v18;
    v7 = (__int64)v4;
    if ( v4 )
    {
      ShaderCache = CPassthroughEffect::GetShaderCache(v5);
      v4 = (CRenderingTechniqueFragment *)CRenderingTechniqueFragment::CRenderingTechniqueFragment(
                                            v7,
                                            (__int64)v6,
                                            (__int64)ShaderCache,
                                            0,
                                            0,
                                            0);
    }
    v19 = v4;
    CRenderingTechniqueFragment::AddIntermediateInput(v4, -1);
    LODWORD(v18) = 0;
    v9 = CBrushRenderingGraphBuilder::CreateTechniqueForFragment(this, (__int64 *)&v19, &v18);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xFE,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\gaussianblur.cpp",
        (const char *)(unsigned int)v9);
      std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v19);
      if ( v6 )
        CMILRefCountBaseT<Windows::UI::Composition::IEffectInstance,CMilObjectDeleter>::InternalRelease(v6);
      return v10;
    }
    else
    {
      v11 = *(_QWORD *)this;
      *(_QWORD *)&v20 = *(_QWORD *)this + 1584LL;
      v12 = *(_QWORD *)(v11 + 504);
      v13 = dword_18032AEE0[5 * *(int *)(v11 + 1576)] == 3;
      v11 += 496LL;
      v14 = (v12 - *(_QWORD *)v11) >> 6;
      BYTE8(v20) = v13 + 1;
      HIDWORD(v20) = (_DWORD)v18;
      v21 = off_1802F7800;
      v23 = &v21;
      v22 = v20;
      v15 = detail::vector_facade<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,detail::buffer_impl<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,16,1,detail::liberal_expansion_policy>>::reserve_region(
              (__int64 *)v11,
              v14,
              v11);
      *(_QWORD *)(v15 + 56) = 0LL;
      std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Reset_move(v15, (__int64)&v21);
      std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Tidy((__int64)&v21, v16);
      std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v19);
      if ( v6 )
        CMILRefCountBaseT<Windows::UI::Composition::IEffectInstance,CMilObjectDeleter>::InternalRelease(v6);
      return 0LL;
    }
  }
}
