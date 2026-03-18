/*
 * XREFs of ?reserve@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAX_K@Z @ 0x18007DF10
 * Callers:
 *     ?RenderSubgraphToIntermediate@CBrushRenderingGraph@@QEBAJPEBVCRenderingTechnique@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEBUD2D_VECTOR_2F@@2PEAUEffectInput@@@Z @ 0x180223154 (-RenderSubgraphToIntermediate@CBrushRenderingGraph@@QEBAJPEBVCRenderingTechnique@@PEAVCDrawingCo.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$construct@UEffectInput@@U1@@detail@@YAPEAUEffectInput@@PEAU1@$$QEAU1@@Z @ 0x18007E01C (--$construct@UEffectInput@@U1@@detail@@YAPEAUEffectInput@@PEAU1@$$QEAU1@@Z.c)
 *     ??$destruct_range@UEffectInput@@@detail@@YAXPEAUEffectInput@@0@Z @ 0x180202208 (--$destruct_range@UEffectInput@@@detail@@YAXPEAUEffectInput@@0@Z.c)
 */

unsigned __int64 __fastcall std::vector<EffectInput>::reserve(char **a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 v4; // r12
  __int64 v5; // rbp
  __int64 v6; // rax
  char *v7; // r15
  char *v8; // rsi
  char *v9; // rdi
  __int64 v10; // r14

  result = 0x6DB6DB6DB6DB6DB7LL * ((a1[2] - *a1) >> 4);
  if ( a2 > result )
  {
    if ( a2 > 0x249249249249249LL )
      std::_Xlength_error("vector too long");
    v4 = 112 * a2;
    v5 = 0x6DB6DB6DB6DB6DB7LL * ((a1[1] - *a1) >> 4);
    v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(112 * a2);
    v7 = a1[1];
    v8 = (char *)v6;
    v9 = *a1;
    v10 = v6;
    while ( v9 != v7 )
    {
      detail::construct<EffectInput,EffectInput>(v10, v9);
      v10 += 112LL;
      v9 += 112;
    }
    if ( *a1 )
    {
      detail::destruct_range<EffectInput>((CDrawListBitmap *)*a1);
      std::_Deallocate<16,0>(*a1, 16 * ((a1[2] - *a1) >> 4));
    }
    *a1 = v8;
    a1[1] = &v8[112 * v5];
    result = (unsigned __int64)&v8[v4];
    a1[2] = &v8[v4];
  }
  return result;
}
