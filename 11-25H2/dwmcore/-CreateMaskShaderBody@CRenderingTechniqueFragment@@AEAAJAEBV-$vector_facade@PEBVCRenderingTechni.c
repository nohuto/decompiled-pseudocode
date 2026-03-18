/*
 * XREFs of ?CreateMaskShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@3@PEBVCBrushRenderingGraph@@@Z @ 0x180219DC4
 * Callers:
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x18006E5C4 (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18006CF00 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?MakeShaderLinkingArgument@CRenderingTechniqueFragment@@AEAA?AW4ShaderLinkingArgument@@W42@IAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@4@PEBVCBrushRenderingGraph@@@Z @ 0x18006E270 (-MakeShaderLinkingArgument@CRenderingTechniqueFragment@@AEAA-AW4ShaderLinkingArgument@@W42@IAEBV.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRenderingTechniqueFragment::CreateMaskShaderBody(__int64 a1, _QWORD **a2, __int64 *a3)
{
  unsigned int v3; // edi
  void *v7; // rax
  void *v8; // rcx
  __int64 v9; // rsi
  _QWORD v11[3]; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 96) = 0;
  *(_BYTE *)(a1 + 102) = 1;
  *(_QWORD *)(a1 + 88) = "AlphaMultiply";
  *(_WORD *)(a1 + 100) = 10;
  v7 = MIDL_user_allocate(4uLL);
  v8 = *(void **)(a1 + 104);
  *(_QWORD *)(a1 + 104) = v7;
  if ( v8 )
    operator delete(v8);
  v9 = *(_QWORD *)(a1 + 104);
  if ( v9 )
  {
    gsl::details::extent_type<-1>::extent_type<-1>(v11, 2LL);
    if ( v11[0] == -1LL )
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    *(_QWORD *)(a1 + 56) = v11[0];
    *(_QWORD *)(a1 + 64) = v9;
    **(_WORD **)(a1 + 104) = CRenderingTechniqueFragment::MakeShaderLinkingArgument(
                               (CRenderingTechniqueFragment *)a1,
                               (const struct CBrushRenderingGraph *)0x200,
                               0,
                               a2,
                               a3);
    *(_WORD *)(*(_QWORD *)(a1 + 104) + 2LL) = CRenderingTechniqueFragment::MakeShaderLinkingArgument(
                                                (CRenderingTechniqueFragment *)a1,
                                                (const struct CBrushRenderingGraph *)0x200,
                                                1u,
                                                a2,
                                                a3);
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x25Cu, 0LL);
  }
  return v3;
}
