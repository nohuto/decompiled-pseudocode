/*
 * XREFs of ?AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1802127FC
 * Callers:
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18006FF08 (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z.c)
 * Callees:
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18006FF08 (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ??R?$default_delete@VCRenderingTechniqueFragment@@@std@@QEBAXPEAVCRenderingTechniqueFragment@@@Z @ 0x1800700FC (--R-$default_delete@VCRenderingTechniqueFragment@@@std@@QEBAXPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x18007012C (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ??$_Emplace_reallocate@UFragmentInput@CRenderingTechniqueFragment@@@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@AEAAPEAUFragmentInput@CRenderingTechniqueFragment@@QEAU23@$$QEAU23@@Z @ 0x1800701B8 (--$_Emplace_reallocate@UFragmentInput@CRenderingTechniqueFragment@@@-$vector@UFragmentInput@CRen.c)
 *     ?AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBUGraphInputParameters@CBrushRenderingGraph@@@Z @ 0x180070DA4 (-AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBU.c)
 *     ??$emplace_back@UFragmentInput@CRenderingTechniqueFragment@@@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@QEAA?A_T$$QEAUFragmentInput@CRenderingTechniqueFragment@@@Z @ 0x180070E88 (--$emplace_back@UFragmentInput@CRenderingTechniqueFragment@@@-$vector@UFragmentInput@CRenderingT.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180217194 (--1-$out_param_t@V-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechni.c)
 *     ??$?4U?$default_delete@VCRenderingTechniqueFragment@@@std@@$0A@@?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18021BC5C (--$-4U-$default_delete@VCRenderingTechniqueFragment@@@std@@$0A@@-$unique_ptr@VCRenderingTechniqu.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::AddMaskBrush(
        CBrushRenderingGraphBuilder *this,
        struct CMaskBrush *a2,
        bool a3,
        struct CRenderingTechniqueFragment **a4)
{
  struct CBrush *v4; // r14
  int v5; // edi
  struct CBrush *v6; // rsi
  struct CRenderingTechniqueFragment *v10; // rcx
  CRenderingTechniqueFragment *v11; // rdx
  CRenderingTechniqueFragment *v12; // rax
  CRenderingTechniqueFragment *v13; // rbx
  struct CRenderingTechniqueFragment *v14; // rcx
  __int64 v15; // r14
  __int64 *v16; // rdx
  CRenderingTechniqueFragment *v18; // [rsp+30h] [rbp-30h] BYREF
  CRenderingTechniqueFragment *v19; // [rsp+38h] [rbp-28h] BYREF
  CRenderingTechniqueFragment **v20; // [rsp+40h] [rbp-20h] BYREF
  struct CRenderingTechniqueFragment *v21; // [rsp+48h] [rbp-18h] BYREF
  __int64 v22; // [rsp+50h] [rbp-10h]
  CRenderingTechniqueFragment *v23; // [rsp+98h] [rbp+38h] BYREF

  v4 = (struct CBrush *)*((_QWORD *)a2 + 15);
  v5 = 0;
  v6 = (struct CBrush *)*((_QWORD *)a2 + 14);
  v18 = 0LL;
  v19 = 0LL;
  if ( *((_BYTE *)v4 + 96) )
  {
    v21 = 0LL;
    v20 = &v18;
    LOBYTE(v22) = 1;
    v5 = CBrushRenderingGraphBuilder::AddBrush(this, v4, a3, &v21);
    if ( (_BYTE)v22 )
    {
      v10 = v21;
      v11 = *v20;
      *v20 = v21;
      if ( v11 )
        std::default_delete<CRenderingTechniqueFragment>::operator()((__int64)v10, v11);
    }
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x15Cu, 0LL);
      goto LABEL_19;
    }
    v5 = 0;
  }
  if ( v6 )
  {
    v12 = (CRenderingTechniqueFragment *)MIDL_user_allocate(0x78uLL);
    v13 = v12;
    if ( v12 )
    {
      *(_QWORD *)v12 = 0LL;
      *((_QWORD *)v12 + 2) = 0LL;
      *((_QWORD *)v12 + 3) = 0LL;
      *((_QWORD *)v12 + 1) = 0LL;
      *((_QWORD *)v12 + 4) = 0LL;
      *((_QWORD *)v12 + 5) = 0LL;
      *((_QWORD *)v12 + 6) = 0LL;
      *((_QWORD *)v12 + 7) = 0LL;
      *((_QWORD *)v12 + 8) = 0LL;
      *((_QWORD *)v12 + 9) = 0LL;
      *((_QWORD *)v12 + 10) = 0LL;
      *((_QWORD *)v12 + 13) = 0LL;
      *((_BYTE *)v12 + 112) = a3;
    }
    else
    {
      v13 = 0LL;
    }
    v19 = v13;
    if ( !v13 )
    {
      v5 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x162u, 0LL);
      goto LABEL_19;
    }
    v14 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      v15 = (__int64)v13 + 32;
      v16 = (__int64 *)*((_QWORD *)v13 + 5);
      v21 = v14;
      if ( v16 == *((__int64 **)v13 + 6) )
      {
        std::vector<CRenderingTechniqueFragment::FragmentInput>::_Emplace_reallocate<CRenderingTechniqueFragment::FragmentInput>(
          (__int64)v13 + 32,
          v16,
          &v20);
      }
      else
      {
        *v16 = (__int64)v20;
        v16[1] = (__int64)v14;
        *((_QWORD *)v13 + 5) += 16LL;
        v21 = 0LL;
      }
      std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v21);
    }
    else
    {
      v22 = 0LL;
      v20 = (CRenderingTechniqueFragment **)v4;
      v21 = 0LL;
      CBrushRenderingGraphBuilder::AddNamedInputToFragment(
        this,
        v13,
        (const struct CBrushRenderingGraph::GraphInputParameters *)&v20);
      v15 = (__int64)v13 + 32;
    }
    v21 = 0LL;
    if ( *((_BYTE *)v6 + 96) )
    {
      v23 = 0LL;
      v20 = &v23;
      LOBYTE(v22) = 1;
      v5 = CBrushRenderingGraphBuilder::AddBrush(this, v6, a3, &v21);
      wil::details::out_param_t<std::unique_ptr<CRenderingTechniqueFragment>>::~out_param_t<std::unique_ptr<CRenderingTechniqueFragment>>(&v20);
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x176u, 0LL);
        std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v23);
        goto LABEL_19;
      }
      v5 = 0;
      v21 = v23;
      v23 = 0LL;
      std::vector<CRenderingTechniqueFragment::FragmentInput>::emplace_back<CRenderingTechniqueFragment::FragmentInput>(
        v15,
        (__int64 *)&v20);
      std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v21);
      std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v23);
    }
    else
    {
      v22 = 0LL;
      v20 = (CRenderingTechniqueFragment **)v6;
      CBrushRenderingGraphBuilder::AddNamedInputToFragment(
        this,
        v13,
        (const struct CBrushRenderingGraph::GraphInputParameters *)&v20);
    }
  }
  else
  {
    std::unique_ptr<CRenderingTechniqueFragment>::operator=<std::default_delete<CRenderingTechniqueFragment>,0>(
      &v19,
      &v18);
    v13 = v19;
  }
  v19 = 0LL;
  *a4 = v13;
LABEL_19:
  std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v18);
  std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v19);
  return (unsigned int)v5;
}
