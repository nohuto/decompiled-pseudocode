/*
 * XREFs of ?AddNineGridBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCNineGridBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1802AD550
 * Callers:
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800462DC (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z.c)
 * Callees:
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800462DC (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x180046500 (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindExistingNamedInput@CBrushRenderingGraphBuilder@@AEBA_NAEBUGraphInputParameters@CBrushRenderingGraph@@PEAI@Z @ 0x18020AE18 (-FindExistingNamedInput@CBrushRenderingGraphBuilder@@AEBA_NAEBUGraphInputParameters@CBrushRender.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x18020AEC4 (--1-$out_param_t@V-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechni.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::AddNineGridBrush(
        CBrushRenderingGraphBuilder *this,
        struct CNineGridBrush *a2,
        bool a3,
        struct CRenderingTechniqueFragment **a4)
{
  struct CBrush *v4; // rdi
  int v8; // ebx
  struct CRenderingTechniqueFragment *v9; // rax
  struct CRenderingTechniqueFragment **v11; // [rsp+30h] [rbp-20h] BYREF
  struct CRenderingTechniqueFragment ***v12; // [rsp+38h] [rbp-18h] BYREF
  struct CRenderingTechniqueFragment *v13; // [rsp+40h] [rbp-10h] BYREF
  int v14; // [rsp+48h] [rbp-8h]
  int v15; // [rsp+4Ch] [rbp-4h]
  unsigned int v16; // [rsp+78h] [rbp+28h] BYREF

  v4 = (struct CBrush *)*((_QWORD *)a2 + 13);
  v11 = 0LL;
  v13 = 0LL;
  v12 = &v11;
  LOBYTE(v14) = 1;
  v8 = CBrushRenderingGraphBuilder::AddBrush(this, v4, a3, &v13);
  wil::details::out_param_t<std::unique_ptr<CRenderingTechniqueFragment>>::~out_param_t<std::unique_ptr<CRenderingTechniqueFragment>>((__int64)&v12);
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x1CEu, 0LL);
    goto LABEL_8;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)v4 + 64LL))(v4, 126LL) )
    goto LABEL_6;
  v15 = 0;
  v14 = 0;
  v16 = 0;
  v13 = *v11;
  v12 = (struct CRenderingTechniqueFragment ***)v4;
  if ( CBrushRenderingGraphBuilder::FindExistingNamedInput(
         this,
         (const struct CBrushRenderingGraph::GraphInputParameters *)&v12,
         &v16) )
  {
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 24LL * v16) = a2;
LABEL_6:
    v9 = (struct CRenderingTechniqueFragment *)v11;
    v11 = 0LL;
    *a4 = v9;
    goto LABEL_8;
  }
  v8 = -2147418113;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147418113, 0x1DDu, 0LL);
LABEL_8:
  std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>((CRenderingTechniqueFragment **)&v11);
  return (unsigned int)v8;
}
