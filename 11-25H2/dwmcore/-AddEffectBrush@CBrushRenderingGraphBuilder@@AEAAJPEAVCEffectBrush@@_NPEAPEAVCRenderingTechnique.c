/*
 * XREFs of ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180070758
 * Callers:
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18006FF08 (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x18006DC54 (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 *     ?AddIntermediateInput@CRenderingTechniqueFragment@@QEAAXI@Z @ 0x18006FEB4 (-AddIntermediateInput@CRenderingTechniqueFragment@@QEAAXI@Z.c)
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18006FF08 (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ??R?$default_delete@VCRenderingTechniqueFragment@@@std@@QEBAXPEAVCRenderingTechniqueFragment@@@Z @ 0x1800700FC (--R-$default_delete@VCRenderingTechniqueFragment@@@std@@QEBAXPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x18007012C (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ??$_Emplace_reallocate@UFragmentInput@CRenderingTechniqueFragment@@@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@AEAAPEAUFragmentInput@CRenderingTechniqueFragment@@QEAU23@$$QEAU23@@Z @ 0x1800701B8 (--$_Emplace_reallocate@UFragmentInput@CRenderingTechniqueFragment@@@-$vector@UFragmentInput@CRen.c)
 *     ??$_Destroy_range@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@YAXPEAUSubgraphOutput@CBrushRenderingGraphBuilder@@QEAU12@AEAV?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@0@@Z @ 0x180070380 (--$_Destroy_range@V-$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@YAXPEAUS.c)
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x1800703DC (-CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ??0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCShaderCache@@IW4Enum@CompiledEffectSubgraphFlags@234@_N@Z @ 0x180070CA4 (--0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCShaderCach.c)
 *     ?AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBUGraphInputParameters@CBrushRenderingGraph@@@Z @ 0x180070DA4 (-AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBU.c)
 *     ?GetResults@CEffectCompilationTask@@QEAAPEAVCCompiledEffectCache@@XZ @ 0x180070F00 (-GetResults@CEffectCompilationTask@@QEAAPEAVCCompiledEffectCache@@XZ.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18020FF20 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@USubgraphOutput@CBrushRenderingGraphBuilde.c)
 *     ??$?4U?$default_delete@VCRenderingTechniqueFragment@@@std@@$0A@@?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18021BC5C (--$-4U-$default_delete@VCRenderingTechniqueFragment@@@std@@$0A@@-$unique_ptr@VCRenderingTechniqu.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::AddEffectBrush(
        struct CBrushRenderingGraph **this,
        struct CEffectBrush *a2,
        char a3,
        struct CRenderingTechniqueFragment **a4)
{
  __int64 v4; // rbx
  struct CRenderingTechniqueFragment *v5; // r13
  __int64 v7; // rcx
  _QWORD *v8; // rsi
  __int64 *v9; // r12
  CEffectCompilationTask *v10; // rcx
  struct CCompiledEffectCache *Results; // rax
  __int64 v12; // rcx
  unsigned int v13; // eax
  __int64 v14; // rsi
  unsigned int v15; // edi
  _QWORD *v16; // r15
  unsigned int v17; // r14d
  int v18; // ebx
  bool v19; // di
  void *v20; // rax
  __int64 v21; // rcx
  CRenderingTechniqueFragment *v22; // rdi
  CRenderingTechniqueFragment *v23; // rdx
  unsigned int v24; // eax
  unsigned int v25; // edx
  __int64 v26; // rcx
  unsigned int v27; // eax
  __int64 v28; // r12
  __int64 v29; // rax
  struct CBrush *v30; // rbx
  int v31; // ebx
  int v32; // r9d
  int v33; // eax
  unsigned int *v34; // rcx
  _QWORD *v36; // rcx
  __int64 v37; // r8
  __int64 *v38; // rdx
  CRenderingTechniqueFragment **v39; // rcx
  char v40; // al
  bool v41; // r8
  __int64 v42; // rcx
  CRenderingTechniqueFragment *v43; // rdx
  CRenderingTechniqueFragment *v44; // rcx
  __int64 *v45; // rdx
  _DWORD *v46; // rcx
  int v47; // [rsp+28h] [rbp-B9h]
  unsigned int v48; // [rsp+28h] [rbp-B9h]
  int v49; // [rsp+30h] [rbp-B1h]
  char v50; // [rsp+38h] [rbp-A9h] BYREF
  bool v51; // [rsp+39h] [rbp-A8h]
  unsigned int v52; // [rsp+3Ch] [rbp-A5h] BYREF
  unsigned int v53; // [rsp+40h] [rbp-A1h]
  unsigned int v54; // [rsp+44h] [rbp-9Dh]
  CRenderingTechniqueFragment *v55; // [rsp+48h] [rbp-99h] BYREF
  CRenderingTechniqueFragment *v56; // [rsp+50h] [rbp-91h] BYREF
  CRenderingTechniqueFragment **v57; // [rsp+58h] [rbp-89h] BYREF
  struct CRenderingTechniqueFragment *v58[2]; // [rsp+60h] [rbp-81h] BYREF
  unsigned int v59; // [rsp+70h] [rbp-71h]
  int v60; // [rsp+74h] [rbp-6Dh]
  __int64 *v61; // [rsp+78h] [rbp-69h]
  struct CRenderingTechniqueFragment *v62; // [rsp+80h] [rbp-61h]
  __int64 v63; // [rsp+88h] [rbp-59h] BYREF
  __int64 v64; // [rsp+90h] [rbp-51h] BYREF
  __int64 v65; // [rsp+98h] [rbp-49h] BYREF
  CRenderingTechniqueFragment *v66; // [rsp+A0h] [rbp-41h] BYREF
  struct CCompiledEffectCache *v67; // [rsp+A8h] [rbp-39h]
  _QWORD *v68; // [rsp+B0h] [rbp-31h]
  unsigned int v69; // [rsp+B8h] [rbp-29h]
  CRenderingTechniqueFragment *v70; // [rsp+C0h] [rbp-21h] BYREF
  int v71; // [rsp+C8h] [rbp-19h]
  CRenderingTechniqueFragment *v72; // [rsp+D0h] [rbp-11h] BYREF
  __int128 v73; // [rsp+D8h] [rbp-9h] BYREF
  __int64 v74; // [rsp+E8h] [rbp+7h]

  v4 = *((_QWORD *)a2 + 14);
  v5 = 0LL;
  v7 = *(_QWORD *)(v4 + 80);
  v8 = *(_QWORD **)(v7 + 56);
  v68 = v8;
  if ( v7 && *(_DWORD *)(v7 + 72) == 3 )
    v9 = (__int64 *)*((_QWORD *)CEffectCompilationTask::GetResults((CEffectCompilationTask *)v7) + 4);
  else
    v9 = 0LL;
  v10 = *(CEffectCompilationTask **)(v4 + 80);
  v61 = v9;
  Results = CEffectCompilationTask::GetResults(v10);
  v12 = *v8;
  v67 = Results;
  v62 = (struct CRenderingTechniqueFragment *)*((_QWORD *)a2 + 16);
  v13 = (*(__int64 (__fastcall **)(_QWORD *))(v12 + 32))(v8);
  v14 = 0LL;
  v54 = v13;
  v74 = 0LL;
  v73 = 0LL;
  v15 = v13 - 1;
  v53 = v13 - 1;
  if ( v13 != 1 )
  {
    std::vector<CBrushRenderingGraphBuilder::SubgraphOutput>::_Resize_reallocate<std::_Value_init_tag>(&v73, v13 - 1);
    v13 = v54;
    v14 = v74;
  }
  v16 = (_QWORD *)v73;
  v17 = 0;
LABEL_7:
  if ( v17 >= v13 )
  {
    v56 = 0LL;
    v31 = 0;
    *a4 = v5;
    goto LABEL_33;
  }
  v18 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v9 + 40))(v9, v17);
  v60 = v18 & 8;
  v19 = a3 && (v17 == v15 || (v18 & 8) != 0);
  v51 = v19;
  v20 = MIDL_user_allocate(0x78uLL);
  if ( v20 )
  {
    LOBYTE(v49) = v19;
    v47 = v18;
    v22 = (CRenderingTechniqueFragment *)CRenderingTechniqueFragment::CRenderingTechniqueFragment(v20, v62, v67, v17);
  }
  else
  {
    v22 = 0LL;
  }
  v23 = v5;
  v56 = v22;
  v5 = v22;
  if ( v23 )
    std::default_delete<CRenderingTechniqueFragment>::operator()(v21, v23);
  if ( !v22 )
  {
    v31 = -2147024882;
    v32 = -2147024882;
    v48 = 232;
    goto LABEL_27;
  }
  v24 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v9 + 32))(v9, v17);
  v59 = v24;
  v25 = 0;
  while ( 1 )
  {
    v52 = v25;
    if ( v25 >= v24 )
    {
      if ( v17 == v53 )
      {
LABEL_25:
        v15 = v53;
        ++v17;
        v13 = v54;
        goto LABEL_7;
      }
      v33 = CBrushRenderingGraphBuilder::CheckFragmentSize(this, v22);
      v31 = v33;
      if ( v33 < 0 )
      {
        v48 = 304;
      }
      else
      {
        if ( v60 )
        {
          v46 = &v16[2 * v17];
          v71 = -1;
          v5 = 0LL;
          v72 = v22;
          *v46 = -1;
          std::unique_ptr<CRenderingTechniqueFragment>::operator=<std::default_delete<CRenderingTechniqueFragment>,0>(
            v46 + 2,
            &v72);
          std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v72);
          goto LABEL_25;
        }
        v52 = 0;
        v33 = CBrushRenderingGraphBuilder::CreateTechniqueForFragment(this, (__int64 *)&v56, &v52);
        v31 = v33;
        if ( v33 >= 0 )
        {
          v70 = 0LL;
          v34 = (unsigned int *)&v16[2 * v17];
          v69 = v52;
          *v34 = v52;
          std::unique_ptr<CRenderingTechniqueFragment>::operator=<std::default_delete<CRenderingTechniqueFragment>,0>(
            v34 + 2,
            &v70);
          std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v70);
          v5 = v56;
          goto LABEL_25;
        }
        v48 = 309;
      }
      v32 = v33;
LABEL_27:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, v48, 0LL);
      goto LABEL_33;
    }
    v26 = *v9;
    v50 = 0;
    v27 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, char *, int))(v26 + 48))(v9, v17, v25, &v50, v47);
    v28 = v27;
    if ( v50 )
    {
      v36 = &v16[2 * v27];
      if ( *(_DWORD *)v36 != -1 )
      {
        CRenderingTechniqueFragment::AddIntermediateInput(v22, *(_DWORD *)v36);
        goto LABEL_23;
      }
      v37 = v36[1];
      v36[1] = 0LL;
      v38 = (__int64 *)*((_QWORD *)v22 + 5);
      v64 = v37;
      if ( v38 == *((__int64 **)v22 + 6) )
      {
        std::vector<CRenderingTechniqueFragment::FragmentInput>::_Emplace_reallocate<CRenderingTechniqueFragment::FragmentInput>(
          (__int64)v22 + 32,
          v38,
          &v63);
      }
      else
      {
        v64 = 0LL;
        *v38 = v63;
        v38[1] = v37;
        *((_QWORD *)v22 + 5) += 16LL;
      }
      v39 = (CRenderingTechniqueFragment **)&v64;
      goto LABEL_45;
    }
    v29 = *((_QWORD *)a2 + 17);
    v30 = *(struct CBrush **)(v29 + 8 * v28);
    if ( v30 )
    {
      if ( *((_BYTE *)v30 + 96) )
        break;
    }
    v57 = *(CRenderingTechniqueFragment ***)(v29 + 8 * v28);
    *(_OWORD *)v58 = 0LL;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*v68 + 48LL))(v68, (unsigned int)v28) )
    {
      v58[0] = v62;
      LODWORD(v58[1]) = v28;
    }
    else
    {
      v58[0] = 0LL;
      LODWORD(v58[1]) = 0;
    }
    CBrushRenderingGraphBuilder::AddNamedInputToFragment(
      (CBrushRenderingGraphBuilder *)this,
      v22,
      (const struct CBrushRenderingGraph::GraphInputParameters *)&v57);
LABEL_23:
    v9 = v61;
    v25 = v52 + 1;
    v24 = v59;
  }
  if ( v51
    || (v40 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD, int))(*v61 + 56))(
                v61,
                v17,
                v52,
                0LL,
                0LL,
                v49),
        v41 = 0,
        v40) )
  {
    v41 = 1;
  }
  v55 = 0LL;
  v58[0] = 0LL;
  v57 = &v55;
  LOBYTE(v58[1]) = 1;
  v31 = CBrushRenderingGraphBuilder::AddBrush((CBrushRenderingGraphBuilder *)this, v30, v41, v58);
  if ( LOBYTE(v58[1]) )
  {
    v42 = (__int64)v58[0];
    v43 = *v57;
    *v57 = v58[0];
    if ( v43 )
      std::default_delete<CRenderingTechniqueFragment>::operator()(v42, v43);
  }
  if ( v31 >= 0 )
  {
    v44 = v55;
    v55 = 0LL;
    v45 = (__int64 *)*((_QWORD *)v22 + 5);
    v66 = v44;
    if ( v45 == *((__int64 **)v22 + 6) )
    {
      std::vector<CRenderingTechniqueFragment::FragmentInput>::_Emplace_reallocate<CRenderingTechniqueFragment::FragmentInput>(
        (__int64)v22 + 32,
        v45,
        &v65);
    }
    else
    {
      v66 = 0LL;
      *v45 = v65;
      v45[1] = (__int64)v44;
      *((_QWORD *)v22 + 5) += 16LL;
    }
    std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v66);
    v39 = &v55;
LABEL_45:
    std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(v39);
    goto LABEL_23;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x114u, 0LL);
  std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v55);
LABEL_33:
  if ( v16 )
  {
    std::_Destroy_range<std::allocator<CBrushRenderingGraphBuilder::SubgraphOutput>>(
      (__int64)v16,
      *((__int64 *)&v73 + 1));
    std::_Deallocate<16,0>(v16, (v14 - (_QWORD)v16) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v56);
  return (unsigned int)v31;
}
