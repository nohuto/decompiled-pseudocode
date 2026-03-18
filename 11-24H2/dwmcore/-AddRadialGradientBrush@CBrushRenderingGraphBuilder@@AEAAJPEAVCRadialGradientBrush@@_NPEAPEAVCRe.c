/*
 * XREFs of ?AddRadialGradientBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCRadialGradientBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1802AD670
 * Callers:
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800462DC (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x180046500 (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ??0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCShaderCache@@IW4Enum@CompiledEffectSubgraphFlags@234@_N@Z @ 0x1800471D0 (--0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCShaderCach.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBUGraphInputParameters@CBrushRenderingGraph@@@Z @ 0x1801FE80C (-AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBU.c)
 *     ??1?$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18020FF64 (--1-$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateRadialGradientEffect@CRadialGradientBrush@@QEAAJPEAPEAVCRadialGradientEffect@@@Z @ 0x1802A2B94 (-CreateRadialGradientEffect@CRadialGradientBrush@@QEAAJPEAPEAVCRadialGradientEffect@@@Z.c)
 *     ?reset@?$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1802A32AC (-reset@-$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetShaderCache@CRadialGradientEffect@@QEBAPEAVCShaderCache@@XZ @ 0x1802DBE00 (-GetShaderCache@CRadialGradientEffect@@QEBAPEAVCShaderCache@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::AddRadialGradientBrush(
        CBrushRenderingGraphBuilder *this,
        struct CRadialGradientBrush *a2,
        char a3,
        struct CRenderingTechniqueFragment **a4)
{
  int v8; // eax
  unsigned int v9; // edi
  CRadialGradientEffect *v10; // rbx
  char *v11; // rcx
  int v12; // r13d
  void *v13; // rax
  struct CRenderingTechniqueFragment *v14; // rax
  struct CRenderingTechniqueFragment *v15; // rsi
  struct CRadialGradientEffect *v17; // [rsp+30h] [rbp-30h] BYREF
  CRenderingTechniqueFragment *v18; // [rsp+38h] [rbp-28h] BYREF
  struct CShaderCache *ShaderCache; // [rsp+40h] [rbp-20h]
  _QWORD v20[2]; // [rsp+48h] [rbp-18h] BYREF
  int v21; // [rsp+58h] [rbp-8h]
  int v22; // [rsp+5Ch] [rbp-4h]

  v18 = 0LL;
  v17 = 0LL;
  wil::com_ptr_t<CRadialGradientEffect,wil::err_returncode_policy>::reset((__int64 *)&v17);
  v8 = CRadialGradientBrush::CreateRadialGradientEffect(a2, &v17);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x1A3u, 0LL);
  }
  else
  {
    v10 = v17;
    v11 = (char *)v17 + 16;
    if ( !v17 )
      v11 = 0LL;
    v12 = (*(__int64 (__fastcall **)(char *, _QWORD))(*(_QWORD *)v11 + 40LL))(v11, 0LL);
    ShaderCache = CRadialGradientEffect::GetShaderCache(v10);
    v13 = MIDL_user_allocate(0x78uLL);
    if ( v13
      && (v14 = (struct CRenderingTechniqueFragment *)CRenderingTechniqueFragment::CRenderingTechniqueFragment(
                                                        (__int64)v13,
                                                        (__int64)v10,
                                                        (__int64)ShaderCache,
                                                        0,
                                                        v12,
                                                        a3),
          v18 = v14,
          (v15 = v14) != 0LL) )
    {
      v22 = 0;
      v21 = 0;
      v20[0] = a2;
      v20[1] = v10;
      CBrushRenderingGraphBuilder::AddNamedInputToFragment(
        this,
        v14,
        (const struct CBrushRenderingGraph::GraphInputParameters *)v20);
      v18 = 0LL;
      *a4 = v15;
    }
    else
    {
      v9 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x1B0u, 0LL);
    }
  }
  wil::com_ptr_t<CRadialGradientEffect,wil::err_returncode_policy>::~com_ptr_t<CRadialGradientEffect,wil::err_returncode_policy>((__int64 *)&v17);
  std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v18);
  return v9;
}
