/*
 * XREFs of ?BuildOnePass@CBlurRenderingGraphBuilder@@AEAAJW4D3D_FEATURE_LEVEL@@AEBV?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@W4SeparableKernelPass@@@Z @ 0x18006F32C
 * Callers:
 *     ?Build@CBlurRenderingGraphBuilder@@QEAAJW4D3D_FEATURE_LEVEL@@@Z @ 0x180071698 (-Build@CBlurRenderingGraphBuilder@@QEAAJW4D3D_FEATURE_LEVEL@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18006CF00 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x18006DC54 (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 *     ?Create@CCustomKernelEffect@@SAJW4D3DShaderProfileVersion@@W4Enum@ExtendMode@@AEBV?$span@$$CBUKernelTap@@$0?0@gsl@@PEAPEAV1@@Z @ 0x18006F6A4 (-Create@CCustomKernelEffect@@SAJW4D3DShaderProfileVersion@@W4Enum@ExtendMode@@AEBV-$span@$$CBUKe.c)
 *     ?AddIntermediateInput@CRenderingTechniqueFragment@@QEAAXI@Z @ 0x18006FEB4 (-AddIntermediateInput@CRenderingTechniqueFragment@@QEAAXI@Z.c)
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x18007012C (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ??0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCShaderCache@@IW4Enum@CompiledEffectSubgraphFlags@234@_N@Z @ 0x180070CA4 (--0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCShaderCach.c)
 *     ?GetShaderCache@CCustomKernelEffect@@QEBAPEAVCShaderCache@@XZ @ 0x180071380 (-GetShaderCache@CCustomKernelEffect@@QEBAPEAVCShaderCache@@XZ.c)
 *     ?reserve_region@?$vector_facade@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@V?$buffer_impl@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@_K0@Z @ 0x180071E04 (-reserve_region@-$vector_facade@V-$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGrap.c)
 *     ?_Reset_move@?$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAX$$QEAV12@@Z @ 0x180072060 (-_Reset_move@-$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAX$$QEAV12.c)
 *     ?_Tidy@?$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAXXZ @ 0x1800720B8 (-_Tidy@-$_Func_class@JPEAVCGraphRenderingContext@CExternalEffectGraph@@@std@@IEAAXXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIEffectInstance@Composition@UI@Windows@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x180072160 (-InternalRelease@-$CMILRefCountBaseT@UIEffectInstance@Composition@UI@Windows@@VCMilObjectDeleter.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBlurRenderingGraphBuilder::BuildOnePass(_QWORD *a1, int a2, _QWORD *a3, char a4)
{
  __int64 v4; // r14
  _QWORD *v5; // rbx
  char v6; // r12
  unsigned __int64 v7; // rdi
  unsigned int v8; // esi
  unsigned int v9; // eax
  float v10; // xmm0_4
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned int v15; // r13d
  __int64 v16; // rax
  unsigned int v17; // edx
  __int64 v18; // rbx
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // eax
  unsigned int v23; // ebx
  CCustomKernelEffect *v24; // rax
  CCustomKernelEffect *v25; // rbx
  CCustomKernelEffect *v26; // r15
  struct CShaderCache *ShaderCache; // rax
  int v28; // eax
  unsigned int v29; // r15d
  __int64 v30; // rdx
  __int64 v31; // rax
  int v33; // [rsp+28h] [rbp-69h]
  CCustomKernelEffect *v34; // [rsp+38h] [rbp-59h] BYREF
  int v35; // [rsp+40h] [rbp-51h] BYREF
  unsigned int v36; // [rsp+44h] [rbp-4Dh]
  int v37; // [rsp+48h] [rbp-49h]
  _QWORD *v38; // [rsp+50h] [rbp-41h]
  _QWORD *v39; // [rsp+58h] [rbp-39h]
  _QWORD v40[3]; // [rsp+60h] [rbp-31h] BYREF
  __int64 (__fastcall **v41)(); // [rsp+78h] [rbp-19h] BYREF
  CCustomKernelEffect *v42; // [rsp+80h] [rbp-11h]
  __int64 (__fastcall ***v43)(); // [rsp+B0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v4 = *a1;
  v5 = a3;
  v39 = a3;
  v38 = a1;
  if ( a2 < 40960 )
    v6 = a2 >= 37632;
  else
    v6 = 2;
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a3[1] - *a3) >> 2);
  if ( (unsigned __int8)v6 < 2u )
    v8 = (0x400000009LL - (unsigned __int64)(1431655766 * (unsigned int)((__int64)(a3[1] - *a3) >> 2))) >> 32;
  else
    v8 = 128;
  v9 = v8 + v7 - 1;
  if ( v9 < (unsigned int)v7 )
  {
    v23 = -2147024362;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x131,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\gaussianblur.cpp",
      (const char *)0x80070216LL,
      v33);
  }
  else
  {
    v36 = v9 / v8;
    if ( a4 )
      v10 = *(float *)(v4 + 1572);
    else
      v10 = *(float *)(v4 + 1568);
    v11 = *(int *)(v4 + 1576);
    v12 = *(_QWORD *)(v4 + 504);
    LOBYTE(v35) = a4;
    v13 = v12 - *(_QWORD *)(v4 + 496);
    BYTE1(v35) = v10 > *((float *)&unk_180336DD8 + 5 * v11);
    v41 = off_180303508;
    LOWORD(v42) = v35;
    v43 = &v41;
    v14 = detail::vector_facade<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,detail::buffer_impl<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,16,1,detail::liberal_expansion_policy>>::reserve_region(
            v4 + 496,
            v13 >> 6);
    *(_QWORD *)(v14 + 56) = 0LL;
    std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Reset_move(v14, &v41);
    std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Tidy(&v41);
    v15 = 0;
    v37 = *(_DWORD *)(v4 + 168);
    while ( 1 )
    {
      if ( v15 >= v36 )
      {
        HIDWORD(v34) = *(_DWORD *)(v4 + 168) - v37;
        LODWORD(v34) = v37;
        v30 = *(_QWORD *)(v4 + 504) - *(_QWORD *)(v4 + 496);
        v41 = off_18030C6B0;
        v42 = v34;
        v43 = &v41;
        v31 = detail::vector_facade<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,detail::buffer_impl<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,16,1,detail::liberal_expansion_policy>>::reserve_region(
                v4 + 496,
                v30 >> 6);
        *(_QWORD *)(v31 + 56) = 0LL;
        std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Reset_move(v31, &v41);
        std::_Func_class<long,CExternalEffectGraph::CGraphRenderingContext *>::_Tidy(&v41);
        return 0LL;
      }
      v16 = v15 * v8;
      v17 = v7 - v16;
      v18 = *v5 + 12 * v16;
      v19 = v8;
      if ( v8 >= v17 )
        v19 = v17;
      gsl::details::extent_type<-1>::extent_type<-1>(v40, v19);
      v40[1] = v18;
      if ( v40[0] == -1LL || !v18 && v40[0] )
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      v34 = 0LL;
      LOBYTE(v21) = v6;
      LOBYTE(v20) = *(_DWORD *)(v4 + 1580) != 0 ? 3 : 1;
      v22 = CCustomKernelEffect::Create(v21, v20, v40, &v34);
      v23 = v22;
      if ( v22 < 0 )
        break;
      v24 = (CCustomKernelEffect *)operator new(0x78uLL);
      v25 = v34;
      v26 = v24;
      if ( v24 )
      {
        ShaderCache = CCustomKernelEffect::GetShaderCache(v34);
        v33 = 0;
        v24 = (CCustomKernelEffect *)CRenderingTechniqueFragment::CRenderingTechniqueFragment(
                                       v26,
                                       v25,
                                       ShaderCache,
                                       0LL);
      }
      v34 = v24;
      CRenderingTechniqueFragment::AddIntermediateInput(v24, 0xFFFFFFFF);
      v35 = 0;
      v28 = CBrushRenderingGraphBuilder::CreateTechniqueForFragment(v38, (__int64 *)&v34, &v35);
      v29 = v28;
      if ( v28 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x173,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\gaussianblur.cpp",
          (const char *)(unsigned int)v28,
          v33);
        std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v34);
        if ( v25 )
          CMILRefCountBaseT<Windows::UI::Composition::IEffectInstance,CMilObjectDeleter>::InternalRelease(v25);
        return v29;
      }
      std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v34);
      if ( v25 )
        CMILRefCountBaseT<Windows::UI::Composition::IEffectInstance,CMilObjectDeleter>::InternalRelease(v25);
      v5 = v39;
      ++v15;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x165,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\gaussianblur.cpp",
      (const char *)(unsigned int)v22,
      v33);
    if ( v34 )
      CMILRefCountBaseT<Windows::UI::Composition::IEffectInstance,CMilObjectDeleter>::InternalRelease(v34);
  }
  return v23;
}
