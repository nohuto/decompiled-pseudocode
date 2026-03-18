/*
 * XREFs of ?RenderSubgraphToIntermediate@CBrushRenderingGraph@@QEBAJPEBVCRenderingTechnique@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEBUD2D_VECTOR_2F@@2PEAUEffectInput@@@Z @ 0x1802170E4
 * Callers:
 *     ?ProduceRealization@CEffectIntermediateProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x180216F60 (-ProduceRealization@CEffectIntermediateProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealiza.c)
 * Callees:
 *     ?RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCDrawingContext@@AEBUIntermediateConfigurationInputs@1@AEBV?$span@$$CBUEffectInput@@$0?0@gsl@@AEBV?$span@UEffectInput@@$0?0@6@@Z @ 0x180018180 (-RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCD.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180043280 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?_Tidy@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAXXZ @ 0x18004D53C (-_Tidy@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@AEAAXXZ.c)
 *     ?GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@@Z @ 0x180135A9C (-GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV-$vector.c)
 *     ??4EffectInput@@QEAAAEAU0@AEBU0@@Z @ 0x1801369CC (--4EffectInput@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?reserve@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAX_K@Z @ 0x1801370E0 (-reserve@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@QEAAX_K@Z.c)
 *     ??$emplace_back@$$T@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAA?A_T$$QEA$$T@Z @ 0x1801E4384 (--$emplace_back@$$T@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@QEAA-A_T$$QEA$.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 v22; // r8
  int v23; // edi
  __int128 v24; // [rsp+38h] [rbp-51h] BYREF
  __int64 v25; // [rsp+48h] [rbp-41h]
  __int128 v26; // [rsp+50h] [rbp-39h] BYREF
  __int64 v27; // [rsp+60h] [rbp-29h]
  unsigned __int64 v28[2]; // [rsp+68h] [rbp-21h] BYREF
  int v29[2]; // [rsp+78h] [rbp-11h] BYREF
  __int64 v30; // [rsp+80h] [rbp-9h]
  struct D2D_SIZE_F v31; // [rsp+88h] [rbp-1h] BYREF
  __int128 v32; // [rsp+90h] [rbp+7h]
  const struct D2D_SIZE_F *v33; // [rsp+A0h] [rbp+17h]
  __int64 v34; // [rsp+A8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+47h]

  v34 = 0LL;
  v27 = 0LL;
  v32 = 0LL;
  v9 = (__int64)*a5;
  v31 = *a4;
  v33 = a6;
  v26 = 0LL;
  *(_QWORD *)&v32 = v9;
  v11 = CBrushRenderingGraph::GatherEffectInputs((CBrushRenderingGraph *)this, a3, a4, &v26);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x458,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\brushrenderinggraph.cpp",
      (const char *)(unsigned int)v11);
LABEL_3:
    std::vector<EffectInput>::_Tidy((__int64)&v26);
    return v12;
  }
  v25 = 0LL;
  v14 = 0;
  v15 = *((_DWORD *)this + 42);
  v16 = this[18];
  v24 = 0LL;
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
  std::vector<EffectInput>::reserve((char **)&v24, v14);
  v18 = v14 + 1;
  do
  {
    std::vector<EffectInput>::emplace_back<std::nullptr_t>((__int64)&v24);
    --v18;
  }
  while ( v18 );
  v19 = v24;
  gsl::details::extent_type<-1>::extent_type<-1>(
    v28,
    0x6DB6DB6DB6DB6DB7LL * ((__int64)(*((_QWORD *)&v24 + 1) - v24) >> 4));
  v28[1] = v19;
  if ( v28[0] == -1LL
    || !v19 && v28[0]
    || (v20 = v26,
        gsl::details::extent_type<-1>::extent_type<-1>(
          v29,
          0x6DB6DB6DB6DB6DB7LL * ((__int64)(*((_QWORD *)&v26 + 1) - v26) >> 4)),
        v30 = v20,
        *(_QWORD *)v29 == -1LL)
    || !v20 && *(_QWORD *)v29 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  v21 = CBrushRenderingGraph::RenderSubgraphToIntermediateInternal(
          (__int64)this,
          (__int64)a2,
          a3,
          (__int128 *)&v31,
          (unsigned __int64 *)v29,
          v28);
  v23 = v21;
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x46D,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\brushrenderinggraph.cpp",
      (const char *)(unsigned int)v21);
    std::vector<EffectInput>::_Tidy((__int64)&v24);
    v12 = v23;
    goto LABEL_3;
  }
  EffectInput::operator=((__int64)a7, v19 + 112 * v17, v22);
  std::vector<EffectInput>::_Tidy((__int64)&v24);
  std::vector<EffectInput>::_Tidy((__int64)&v26);
  return 0LL;
}
