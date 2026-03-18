/*
 * XREFs of ?_Tidy@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAXXZ @ 0x1800CFF9C
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x18012AB6C (-RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?RenderSubgraphToIntermediate@CBrushRenderingGraph@@QEBAJPEBVCRenderingTechnique@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEBUD2D_VECTOR_2F@@2PEAUEffectInput@@@Z @ 0x180223154 (-RenderSubgraphToIntermediate@CBrushRenderingGraph@@QEBAJPEBVCRenderingTechnique@@PEAVCDrawingCo.c)
 * Callees:
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x1800D0080 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<EffectInput>::_Tidy(__int64 a1)
{
  CDrawListBitmap *v1; // rbx
  CDrawListBitmap *v3; // rsi
  CDrawListBitmap *v4; // rcx
  unsigned __int64 v5; // rdx

  v1 = *(CDrawListBitmap **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(CDrawListBitmap **)(a1 + 8);
    while ( v1 != v3 )
    {
      CDrawListBitmap::~CDrawListBitmap(v1);
      v1 = (CDrawListBitmap *)((char *)v1 + 112);
    }
    v4 = *(CDrawListBitmap **)a1;
    v5 = 16 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4);
    if ( v5 >= 0x1000 )
    {
      v5 += 39LL;
      if ( (unsigned __int64)v4 - *((_QWORD *)v4 - 1) - 8 > 0x1F )
        _invalid_parameter_noinfo_noreturn();
      v4 = (CDrawListBitmap *)*((_QWORD *)v4 - 1);
    }
    operator delete(v4, v5);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
