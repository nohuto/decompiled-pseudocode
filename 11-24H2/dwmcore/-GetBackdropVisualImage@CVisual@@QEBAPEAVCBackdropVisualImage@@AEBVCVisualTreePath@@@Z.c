/*
 * XREFs of ?GetBackdropVisualImage@CVisual@@QEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z @ 0x180136B10
 * Callers:
 *     ?ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@PEBUD2D_SIZE_F@@PEAU3@@Z @ 0x18004A12C (-ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800500C0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A1B00 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A2710 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ProduceRealization@CWindowBackgroundBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x1800F4830 (-ProduceRealization@CWindowBackgroundBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRea.c)
 *     ?GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@@Z @ 0x180135A9C (-GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV-$vector.c)
 *     ?GetBVIBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180295B10 (-GetBVIBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetLayeredBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180295EC0 (-GetLayeredBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct CBackdropVisualImage *__fastcall CVisual::GetBackdropVisualImage(
        CVisual *this,
        const struct CVisualTreePath *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  _QWORD *v6; // r10
  __int64 k; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v12; // r8
  __int64 v13; // rax
  _BYTE *v14; // rdx
  __int64 i; // rcx
  _QWORD **v16; // rcx
  _QWORD *v17; // rcx
  _QWORD *j; // rax

  v4 = *(_QWORD *)(*((_QWORD *)a2 + 1) - 8LL);
  v5 = 0LL;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 184LL))(v4) )
  {
    v12 = *((_QWORD *)this + 29);
    if ( *(int *)v12 < 0 )
    {
      v13 = *(unsigned int *)(v12 + 4);
      v14 = (_BYTE *)(v12 + 8);
      for ( i = 0LL; (unsigned int)i < (unsigned int)v13; ++v14 )
      {
        if ( *v14 == 1 )
          break;
        i = (unsigned int)(i + 1);
      }
      v16 = (unsigned int)i >= (unsigned int)v13 ? 0LL : (_QWORD **)(v13 + 15 + v12 + 8 * i - (((_BYTE)v13 + 15) & 7));
      v17 = *v16;
      if ( v17 )
      {
        for ( j = (_QWORD *)*v17; j != v17; j = (_QWORD *)*j )
        {
          v6 = j - 44;
          if ( j[4] == v4 )
            goto LABEL_3;
        }
      }
    }
    return 0LL;
  }
  v6 = (_QWORD *)((char *)this + 328);
LABEL_3:
  if ( !v6 )
    return 0LL;
  for ( k = v6[18]; k != v6[19]; k += 8LL )
  {
    v8 = *(_QWORD **)a2;
    v9 = *(_QWORD *)(*(_QWORD *)k + 2072LL);
    if ( *(_QWORD *)(*(_QWORD *)k + 2080LL) - v9 == *((_QWORD *)a2 + 1) - *(_QWORD *)a2 )
    {
      v10 = v9 - (_QWORD)v8;
      while ( (_QWORD *)((char *)v8 + v10) != *(_QWORD **)(*(_QWORD *)k + 2080LL) )
      {
        if ( *(_QWORD *)((char *)v8 + v10) != *v8 || *(_QWORD *)((char *)v8 + v10 + 8) != v8[1] )
          goto LABEL_28;
        v8 += 2;
      }
      *(_QWORD *)(*(_QWORD *)k + 2232LL) = *(_QWORD *)(*(_QWORD *)(v6[31] + 24LL) + 888LL);
      return *(struct CBackdropVisualImage **)k;
    }
LABEL_28:
    ;
  }
  return (struct CBackdropVisualImage *)v5;
}
