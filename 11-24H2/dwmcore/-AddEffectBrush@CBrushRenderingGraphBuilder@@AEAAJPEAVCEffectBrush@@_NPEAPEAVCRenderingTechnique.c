/*
 * XREFs of ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180046B2C
 * Callers:
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800462DC (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x180044004 (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 *     ?AddIntermediateInput@CRenderingTechniqueFragment@@QEAAXI@Z @ 0x180046288 (-AddIntermediateInput@CRenderingTechniqueFragment@@QEAAXI@Z.c)
 *     ?AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800462DC (-AddBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ??R?$default_delete@VCRenderingTechniqueFragment@@@std@@QEBAXPEAVCRenderingTechniqueFragment@@@Z @ 0x1800464D0 (--R-$default_delete@VCRenderingTechniqueFragment@@@std@@QEBAXPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x180046500 (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 *     ??$_Destroy_range@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@YAXPEAUSubgraphOutput@CBrushRenderingGraphBuilder@@QEAU12@AEAV?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@0@@Z @ 0x180046754 (--$_Destroy_range@V-$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@YAXPEAUS.c)
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x1800467B0 (-CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ??$emplace_back@UFragmentInput@CRenderingTechniqueFragment@@@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@QEAA?A_T$$QEAUFragmentInput@CRenderingTechniqueFragment@@@Z @ 0x180046FFC (--$emplace_back@UFragmentInput@CRenderingTechniqueFragment@@@-$vector@UFragmentInput@CRenderingT.c)
 *     ??0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCShaderCache@@IW4Enum@CompiledEffectSubgraphFlags@234@_N@Z @ 0x1800471D0 (--0CRenderingTechniqueFragment@@QEAA@PEAUIEffectInstance@Composition@UI@Windows@@PEAVCShaderCach.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@@XZ @ 0x18008CE74 (-GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@.c)
 *     ?AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBUGraphInputParameters@CBrushRenderingGraph@@@Z @ 0x1801FE80C (-AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBU.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180201658 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@USubgraphOutput@CBrushRenderingGraphBuilde.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x18020AEC4 (--1-$out_param_t@V-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechni.c)
 *     ??$?4U?$default_delete@VCRenderingTechniqueFragment@@@std@@$0A@@?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802100BC (--$-4U-$default_delete@VCRenderingTechniqueFragment@@@std@@$0A@@-$unique_ptr@VCRenderingTechniqu.c)
 *     ?GetInput@CEffectBrush@@QEBAPEAVCBrush@@I@Z @ 0x180238374 (-GetInput@CEffectBrush@@QEBAPEAVCBrush@@I@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802422DC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::AddEffectBrush(
        CBrushRenderingGraphBuilder *this,
        struct CEffectBrush *a2,
        char a3,
        struct CRenderingTechniqueFragment **a4)
{
  CCompiledEffectTemplate *v4; // rbx
  CRenderingTechniqueFragment *v6; // r12
  __int64 v7; // rsi
  const struct Windows::UI::Composition::ICompiledEffect *CompiledEffectNoRef; // rax
  __int64 v9; // rbx
  const struct Windows::UI::Composition::ICompiledEffect *v10; // r13
  struct _TP_WORK *v11; // rcx
  __int64 v12; // rdi
  unsigned int v13; // r14d
  _QWORD *v14; // r15
  unsigned int v15; // esi
  int v16; // ebx
  bool v17; // r14
  void *v18; // rax
  __int64 v19; // rcx
  CRenderingTechniqueFragment *v20; // r14
  unsigned int v21; // eax
  unsigned int v22; // r13d
  unsigned int v23; // eax
  unsigned int v24; // ebx
  _QWORD *v25; // rcx
  __int64 v26; // rax
  CRenderingTechniqueFragment **v27; // rcx
  struct CBrush *Input; // rax
  struct CBrush *v29; // r12
  char v30; // al
  bool v31; // r8
  int v32; // ebx
  CRenderingTechniqueFragment *v33; // rax
  int v34; // eax
  unsigned int *v35; // rcx
  _DWORD *v36; // rcx
  int v37; // r9d
  unsigned int v39; // [rsp+28h] [rbp-B9h]
  int v40; // [rsp+30h] [rbp-B1h]
  char v41; // [rsp+38h] [rbp-A9h] BYREF
  bool v42; // [rsp+39h] [rbp-A8h]
  unsigned int v43; // [rsp+3Ch] [rbp-A5h] BYREF
  __int64 v44; // [rsp+40h] [rbp-A1h]
  CRenderingTechniqueFragment *v45; // [rsp+48h] [rbp-99h] BYREF
  CRenderingTechniqueFragment *v46; // [rsp+50h] [rbp-91h] BYREF
  int v47; // [rsp+58h] [rbp-89h]
  unsigned int v48; // [rsp+5Ch] [rbp-85h]
  const struct Windows::UI::Composition::ICompiledEffect *v49; // [rsp+60h] [rbp-81h]
  CRenderingTechniqueFragment **v50; // [rsp+68h] [rbp-79h] BYREF
  struct CRenderingTechniqueFragment *v51[2]; // [rsp+70h] [rbp-71h] BYREF
  struct CRenderingTechniqueFragment *v52; // [rsp+80h] [rbp-61h]
  __int128 v53; // [rsp+88h] [rbp-59h] BYREF
  __int64 v54; // [rsp+98h] [rbp-49h]
  __int64 v55; // [rsp+A0h] [rbp-41h]
  __int64 v56; // [rsp+A8h] [rbp-39h]
  unsigned int v57; // [rsp+B8h] [rbp-29h]
  CRenderingTechniqueFragment *v58; // [rsp+C0h] [rbp-21h] BYREF
  int v59; // [rsp+C8h] [rbp-19h]
  CRenderingTechniqueFragment *v60; // [rsp+D0h] [rbp-11h] BYREF
  _BYTE v61[8]; // [rsp+D8h] [rbp-9h] BYREF
  __int64 v62; // [rsp+E0h] [rbp-1h] BYREF
  _BYTE v63[8]; // [rsp+E8h] [rbp+7h] BYREF
  CRenderingTechniqueFragment *v64; // [rsp+F0h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+5Fh]

  v4 = (CCompiledEffectTemplate *)*((_QWORD *)a2 + 14);
  v6 = 0LL;
  v7 = *(_QWORD *)(*((_QWORD *)v4 + 10) + 56LL);
  v56 = v7;
  CompiledEffectNoRef = CCompiledEffectTemplate::GetCompiledEffectNoRef(v4);
  v9 = *((_QWORD *)v4 + 10);
  v10 = CompiledEffectNoRef;
  v49 = CompiledEffectNoRef;
  v11 = *(struct _TP_WORK **)(v9 + 64);
  if ( v11 )
  {
    WaitForThreadpoolWorkCallbacks(v11, 0);
    CloseThreadpoolWork(*(PTP_WORK *)(v9 + 64));
    *(_QWORD *)(v9 + 64) = 0LL;
  }
  v55 = *(_QWORD *)(v9 + 80);
  v52 = (struct CRenderingTechniqueFragment *)*((_QWORD *)a2 + 16);
  v12 = 0LL;
  v48 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
  v54 = 0LL;
  v13 = v48 - 1;
  LODWORD(v44) = v48 - 1;
  v53 = 0LL;
  if ( v48 != 1 )
  {
    std::vector<CBrushRenderingGraphBuilder::SubgraphOutput>::_Resize_reallocate<std::_Value_init_tag>(&v53, v48 - 1);
    v12 = v54;
  }
  v14 = (_QWORD *)v53;
  v15 = 0;
  if ( v48 )
  {
    while ( 1 )
    {
      v16 = (*(__int64 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD))(*(_QWORD *)v10 + 40LL))(
              v10,
              v15);
      v47 = v16 & 8;
      v17 = a3 && (v15 == v13 || (v16 & 8) != 0);
      v42 = v17;
      v18 = MIDL_user_allocate(0x78uLL);
      if ( v18 )
      {
        LOBYTE(v40) = v17;
        v20 = (CRenderingTechniqueFragment *)CRenderingTechniqueFragment::CRenderingTechniqueFragment(
                                               v18,
                                               v52,
                                               v55,
                                               v15,
                                               v16,
                                               v40);
      }
      else
      {
        v20 = 0LL;
      }
      v46 = v20;
      if ( v6 )
        std::default_delete<CRenderingTechniqueFragment>::operator()(v19, v6);
      if ( !v20 )
        break;
      v21 = (*(__int64 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD))(*(_QWORD *)v10 + 32LL))(
              v10,
              v15);
      v22 = 0;
      v43 = v21;
      if ( v21 )
      {
        while ( 1 )
        {
          v41 = 0;
          v23 = (*(__int64 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD, _QWORD, char *))(*(_QWORD *)v49 + 48LL))(
                  v49,
                  v15,
                  v22,
                  &v41);
          v24 = v23;
          if ( !v41 )
            break;
          if ( v23 >= (unsigned __int64)((__int64)(*((_QWORD *)&v53 + 1) - (_QWORD)v14) >> 4) )
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              (void *)0xF7,
              (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\brushrenderinggraphbuilder.cpp",
              (const char *)retaddr);
          v25 = &v14[2 * v23];
          if ( *(_DWORD *)v25 == -1 )
          {
            v26 = v25[1];
            v25[1] = 0LL;
            v62 = v26;
            std::vector<CRenderingTechniqueFragment::FragmentInput>::emplace_back<CRenderingTechniqueFragment::FragmentInput>(
              (char *)v20 + 32,
              v61);
            v27 = (CRenderingTechniqueFragment **)&v62;
LABEL_30:
            std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(v27);
            goto LABEL_35;
          }
          CRenderingTechniqueFragment::AddIntermediateInput(v20, *(_DWORD *)v25);
LABEL_35:
          if ( ++v22 >= v43 )
            goto LABEL_36;
        }
        Input = CEffectBrush::GetInput(a2, v23);
        v29 = Input;
        if ( !Input || !*((_BYTE *)Input + 96) )
        {
          v50 = (CRenderingTechniqueFragment **)Input;
          *(_OWORD *)v51 = 0LL;
          if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v56 + 48LL))(v56, v24) )
          {
            v51[0] = v52;
            LODWORD(v51[1]) = v24;
          }
          else
          {
            v51[0] = 0LL;
            LODWORD(v51[1]) = 0;
          }
          CBrushRenderingGraphBuilder::AddNamedInputToFragment(
            this,
            v20,
            (const struct CBrushRenderingGraph::GraphInputParameters *)&v50);
          goto LABEL_35;
        }
        if ( v42
          || (v30 = (*(__int64 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v49 + 56LL))(
                      v49,
                      v15,
                      v22,
                      0LL,
                      0LL),
              v31 = 0,
              v30) )
        {
          v31 = 1;
        }
        v45 = 0LL;
        v51[0] = 0LL;
        v50 = &v45;
        LOBYTE(v51[1]) = 1;
        v32 = CBrushRenderingGraphBuilder::AddBrush(this, v29, v31, v51);
        wil::details::out_param_t<std::unique_ptr<CRenderingTechniqueFragment>>::~out_param_t<std::unique_ptr<CRenderingTechniqueFragment>>(&v50);
        if ( v32 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, 0x119u, 0LL);
          std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v45);
          goto LABEL_52;
        }
        v33 = v45;
        v45 = 0LL;
        v64 = v33;
        std::vector<CRenderingTechniqueFragment::FragmentInput>::emplace_back<CRenderingTechniqueFragment::FragmentInput>(
          (char *)v20 + 32,
          v63);
        std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v64);
        v27 = &v45;
        goto LABEL_30;
      }
LABEL_36:
      if ( v15 == (_DWORD)v44 )
      {
        v6 = v20;
      }
      else
      {
        v34 = CBrushRenderingGraphBuilder::CheckFragmentSize((struct CBrushRenderingGraph **)this, v20);
        v32 = v34;
        if ( v34 < 0 )
        {
          v39 = 311;
          goto LABEL_48;
        }
        if ( v47 )
        {
          v36 = &v14[2 * v15];
          v59 = -1;
          v6 = 0LL;
          v60 = v20;
          *v36 = -1;
          std::unique_ptr<CRenderingTechniqueFragment>::operator=<std::default_delete<CRenderingTechniqueFragment>,0>(
            v36 + 2,
            &v60);
          std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v60);
        }
        else
        {
          v43 = 0;
          v34 = CBrushRenderingGraphBuilder::CreateTechniqueForFragment(this, (__int64 *)&v46, &v43);
          v32 = v34;
          if ( v34 < 0 )
          {
            v39 = 316;
LABEL_48:
            v37 = v34;
            goto LABEL_50;
          }
          v58 = 0LL;
          v35 = (unsigned int *)&v14[2 * v15];
          v57 = v43;
          *v35 = v43;
          std::unique_ptr<CRenderingTechniqueFragment>::operator=<std::default_delete<CRenderingTechniqueFragment>,0>(
            v35 + 2,
            &v58);
          std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v58);
          v6 = v46;
        }
      }
      if ( ++v15 >= v48 )
        goto LABEL_51;
      v10 = v49;
      v13 = v44;
    }
    v32 = -2147024882;
    v37 = -2147024882;
    v39 = 233;
LABEL_50:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, v39, 0LL);
  }
  else
  {
LABEL_51:
    v46 = 0LL;
    v32 = 0;
    *a4 = v6;
  }
LABEL_52:
  if ( v14 )
  {
    std::_Destroy_range<std::allocator<CBrushRenderingGraphBuilder::SubgraphOutput>>(
      (__int64)v14,
      *((__int64 *)&v53 + 1));
    std::_Deallocate<16,0>(v14, (v12 - (_QWORD)v14) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(&v46);
  return (unsigned int)v32;
}
