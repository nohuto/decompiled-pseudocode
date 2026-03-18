/*
 * XREFs of ?GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEBVCBrushRenderingGraph@@IPEAUSurfaceDescription@1@@Z @ 0x18006E408
 * Callers:
 *     ?CollectStateFromFragment@CRenderingTechnique@@AEAAXPEAVCRenderingTechniqueFragment@@@Z @ 0x18006DE5C (-CollectStateFromFragment@CRenderingTechnique@@AEAAXPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?CreateEffectShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@3@PEBVCBrushRenderingGraph@@@Z @ 0x18006DFD4 (-CreateEffectShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV-$vector_facade@PEBVCRenderingTech.c)
 *     ?MakeShaderLinkingArgument@CRenderingTechniqueFragment@@AEAA?AW4ShaderLinkingArgument@@W42@IAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@4@PEBVCBrushRenderingGraph@@@Z @ 0x18006E270 (-MakeShaderLinkingArgument@CRenderingTechniqueFragment@@AEAA-AW4ShaderLinkingArgument@@W42@IAEBV.c)
 *     ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800705E0 (-GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV.c)
 * Callees:
 *     ?IsUVClampingRequired@CPassthroughEffect@@UEBA_NIIPEAW4SampleEdgeMode@Composition@UI@Windows@@0@Z @ 0x18006E550 (-IsUVClampingRequired@CPassthroughEffect@@UEBA_NIIPEAW4SampleEdgeMode@Composition@UI@Windows@@0@.c)
 *     ?IsUVClampingRequired@CCustomKernelEffect@@UEBA_NIIPEAW4SampleEdgeMode@Composition@UI@Windows@@0@Z @ 0x18006E570 (-IsUVClampingRequired@CCustomKernelEffect@@UEBA_NIIPEAW4SampleEdgeMode@Composition@UI@Windows@@0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CRenderingTechniqueFragment::GetSurfaceDescription(
        CRenderingTechniqueFragment *this,
        const struct CBrushRenderingGraph *a2,
        unsigned int a3,
        struct CRenderingTechniqueFragment::SurfaceDescription *a4)
{
  __int64 v4; // rax
  _BYTE *v5; // r12
  char v6; // bl
  _BYTE *v10; // r13
  char v11; // al
  unsigned int *v12; // r14
  char v13; // bp
  __int64 v14; // rdx
  __int64 v15; // rcx
  CPassthroughEffect *v16; // rcx
  bool (__fastcall *v17)(CPassthroughEffect *__hidden, unsigned int, unsigned int, enum Windows::UI::Composition::SampleEdgeMode *, enum Windows::UI::Composition::SampleEdgeMode *); // rax
  bool IsUVClampingRequired; // al
  __int64 v19; // rax
  const struct CBrushRenderingGraph *v20; // [rsp+78h] [rbp+10h] BYREF
  char v21; // [rsp+80h] [rbp+18h] BYREF

  v20 = a2;
  v4 = *((_QWORD *)this + 4);
  v5 = (char *)a4 + 9;
  v6 = 0;
  v21 = 0;
  LOBYTE(v20) = 0;
  v10 = (char *)a4 + 8;
  v14 = *(_QWORD *)(v4 + 16LL * a3);
  v11 = 0;
  *(_QWORD *)a4 = v14;
  v12 = (unsigned int *)((char *)this + 16);
  v13 = *((_BYTE *)this + 112);
  LOBYTE(v14) = 0;
  v15 = *(_QWORD *)this;
  if ( v15 )
  {
    v16 = (CPassthroughEffect *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 64LL))(v15, v14);
    v17 = *(bool (__fastcall **)(CPassthroughEffect *__hidden, unsigned int, unsigned int, enum Windows::UI::Composition::SampleEdgeMode *, enum Windows::UI::Composition::SampleEdgeMode *))(*(_QWORD *)v16 + 56LL);
    if ( v17 == CPassthroughEffect::IsUVClampingRequired )
    {
      IsUVClampingRequired = CPassthroughEffect::IsUVClampingRequired(
                               v16,
                               *v12,
                               a3,
                               (enum Windows::UI::Composition::SampleEdgeMode *)&v21,
                               (enum Windows::UI::Composition::SampleEdgeMode *)&v20);
    }
    else if ( v17 == CCustomKernelEffect::IsUVClampingRequired )
    {
      IsUVClampingRequired = CCustomKernelEffect::IsUVClampingRequired(
                               v16,
                               *v12,
                               a3,
                               (enum Windows::UI::Composition::SampleEdgeMode *)&v21,
                               (enum Windows::UI::Composition::SampleEdgeMode *)&v20);
    }
    else
    {
      IsUVClampingRequired = v17(
                               v16,
                               *v12,
                               a3,
                               (enum Windows::UI::Composition::SampleEdgeMode *)&v21,
                               (enum Windows::UI::Composition::SampleEdgeMode *)&v20);
    }
    LOBYTE(v14) = (_BYTE)v20;
    v13 |= IsUVClampingRequired;
    v11 = v21;
  }
  if ( v10 )
    *v10 = v11;
  if ( v5 )
    *v5 = v14;
  *((_BYTE *)a4 + 10) = v13;
  if ( *(_QWORD *)this )
  {
    v19 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)this + 64LL))(*(_QWORD *)this, v14);
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v19 + 64LL))(v19, *v12, a3);
  }
  *((_BYTE *)a4 + 11) = v6;
}
