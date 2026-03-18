/*
 * XREFs of ?RenderSubgraphToIntermediate@CBrushRenderingGraph@@QEBAJPEBVCRenderingTechnique@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEBUD2D_VECTOR_2F@@2PEAUEffectInput@@@Z @ 0x180223154
 * Callers:
 *     ?ProduceRealization@CEffectIntermediateProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x180222FD0 (-ProduceRealization@CEffectIntermediateProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealiza.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18006CF00 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@@Z @ 0x18007CC64 (-GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV-$vector.c)
 *     ??4EffectInput@@QEAAAEAU0@AEBU0@@Z @ 0x18007D7F8 (--4EffectInput@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?reserve@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAX_K@Z @ 0x18007DF10 (-reserve@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@QEAAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAXXZ @ 0x1800CFF9C (-_Tidy@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@AEAAXXZ.c)
 *     ?RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCDrawingContext@@AEBUIntermediateConfigurationInputs@1@AEBV?$span@$$CBUEffectInput@@$0?0@gsl@@AEBV?$span@UEffectInput@@$0?0@6@@Z @ 0x180127930 (-RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCD.c)
 *     ??$emplace_back@$$T@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAA?A_T$$QEA$$T@Z @ 0x1801EE454 (--$emplace_back@$$T@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@QEAA-A_T$$QEA$.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBrushRenderingGraph::RenderSubgraphToIntermediate(
        const struct CRenderingTechnique ***this,
        const struct CRenderingTechnique *a2,
        struct CDrawingContext *a3,
        struct D2D_SIZE_F *a4,
        const struct D2D_VECTOR_2F *a5,
        const struct D2D_SIZE_F *a6,
        struct EffectInput *a7)
{
  __int64 v9; // xmm1_8
  int v11; // eax
  unsigned int v12; // ebx
  unsigned int v14; // ebx
  unsigned int v15; // ecx
  const struct CRenderingTechnique **v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rbx
  unsigned __int64 v19; // rbx
  __int64 v20; // rdi
  int v21; // eax
  int v22; // edi
  __int128 v23; // [rsp+38h] [rbp-51h] BYREF
  __int64 v24; // [rsp+48h] [rbp-41h]
  __int128 v25; // [rsp+50h] [rbp-39h] BYREF
  __int64 v26; // [rsp+60h] [rbp-29h]
  unsigned __int64 v27[2]; // [rsp+68h] [rbp-21h] BYREF
  int v28[2]; // [rsp+78h] [rbp-11h] BYREF
  __int64 v29; // [rsp+80h] [rbp-9h]
  struct D2D_SIZE_F v30; // [rsp+88h] [rbp-1h] BYREF
  __int128 v31; // [rsp+90h] [rbp+7h]
  const struct D2D_SIZE_F *v32; // [rsp+A0h] [rbp+17h]
  __int64 v33; // [rsp+A8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+47h]

  v33 = 0LL;
  v26 = 0LL;
  v31 = 0LL;
  v9 = (__int64)*a5;
  v30 = *a4;
  v32 = a6;
  v25 = 0LL;
  *(_QWORD *)&v31 = v9;
  v11 = CBrushRenderingGraph::GatherEffectInputs((CBrushRenderingGraph *)this, a3, a4, &v25);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x458,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\brushrenderinggraph.cpp",
      (const char *)(unsigned int)v11);
LABEL_3:
    std::vector<EffectInput>::_Tidy((__int64)&v25);
    return v12;
  }
  v24 = 0LL;
  v14 = 0;
  v15 = *((_DWORD *)this + 42);
  v16 = this[18];
  v23 = 0LL;
  if ( v15 )
  {
    do
    {
      if ( a2 == *v16 )
        break;
      ++v14;
      ++v16;
    }
    while ( v14 < v15 );
  }
  v17 = v14;
  std::vector<EffectInput>::reserve((char **)&v23, v14);
  v18 = v14 + 1;
  do
  {
    std::vector<EffectInput>::emplace_back<std::nullptr_t>((__int64)&v23);
    --v18;
  }
  while ( v18 );
  v19 = v23;
  gsl::details::extent_type<-1>::extent_type<-1>(
    v27,
    0x6DB6DB6DB6DB6DB7LL * ((__int64)(*((_QWORD *)&v23 + 1) - v23) >> 4));
  v27[1] = v19;
  if ( v27[0] == -1LL
    || !v19 && v27[0]
    || (v20 = v25,
        gsl::details::extent_type<-1>::extent_type<-1>(
          v28,
          0x6DB6DB6DB6DB6DB7LL * ((__int64)(*((_QWORD *)&v25 + 1) - v25) >> 4)),
        v29 = v20,
        *(_QWORD *)v28 == -1LL)
    || !v20 && *(_QWORD *)v28 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  v21 = CBrushRenderingGraph::RenderSubgraphToIntermediateInternal(
          (__int64)this,
          (__int64)a2,
          a3,
          (__int128 *)&v30,
          (unsigned __int64 *)v28,
          v27);
  v22 = v21;
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x46D,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\brushrenderinggraph.cpp",
      (const char *)(unsigned int)v21);
    std::vector<EffectInput>::_Tidy((__int64)&v23);
    v12 = v22;
    goto LABEL_3;
  }
  EffectInput::operator=((__int64)a7, v19 + 112 * v17);
  std::vector<EffectInput>::_Tidy((__int64)&v23);
  std::vector<EffectInput>::_Tidy((__int64)&v25);
  return 0LL;
}
