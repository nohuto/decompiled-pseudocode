/*
 * XREFs of ?Draw@CSurfaceRenderStrategy@CSurfaceBrush@@UEBAJPEAV2@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180048180
 * Callers:
 *     <none>
 * Callees:
 *     ?IsReadyToDraw@CColorBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800483F0 (-IsReadyToDraw@CColorBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z @ 0x180048430 (-EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z.c)
 *     ?IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x18004D750 (-IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsCloseRealZero@@YA_NMM@Z @ 0x18004F990 (-IsCloseRealZero@@YA_NMM@Z.c)
 *     ?empty@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@QEBA_NXZ @ 0x18004FAD0 (-empty@-$vector@PEAVCColorGradientStop@@V-$allocator@PEAVCColorGradientStop@@@std@@@std@@QEBA_NX.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800516E0 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSurfaceBrush::CSurfaceRenderStrategy::Draw(
        CSurfaceBrush::CSurfaceRenderStrategy *this,
        float **a2,
        struct CDrawingContext *a3,
        const struct D2D_SIZE_F *a4,
        struct CDrawListCache *a5)
{
  float width; // xmm0_4
  bool (__fastcall *v9)(CMaskBrush *__hidden, struct CDrawingContext *, bool *); // rax
  float *v10; // rbx
  bool v11; // bp
  bool (__fastcall *v12)(CColorBrush *__hidden, struct CDrawingContext *, bool *); // rax
  char IsReadyToDraw; // al
  float *v14; // rcx
  bool v15; // al
  int v16; // ebx
  __int64 (__fastcall *v18)(CEffectBrush *__hidden, bool); // rax
  int v19; // eax
  bool v20; // al
  bool v21; // [rsp+30h] [rbp-28h] BYREF
  char v22[39]; // [rsp+31h] [rbp-27h] BYREF
  bool v23; // [rsp+78h] [rbp+20h] BYREF

  width = a4->width;
  v21 = 0;
  if ( width <= 0.0 || a4->height <= 0.0 )
    return 0LL;
  v9 = (bool (__fastcall *)(CMaskBrush *__hidden, struct CDrawingContext *, bool *))*((_QWORD *)*a2 + 39);
  if ( v9 == CMaskBrush::IsReadyToDraw )
  {
    v10 = a2[15];
    v11 = 0;
    v23 = 0;
    v22[0] = 0;
    if ( !v10 )
      goto LABEL_13;
    v12 = *(bool (__fastcall **)(CColorBrush *__hidden, struct CDrawingContext *, bool *))(*(_QWORD *)v10 + 312LL);
    if ( v12 == CGradientBrush::IsReadyToDraw )
    {
      v23 = std::vector<CColorGradientStop *>::empty(v10 + 42);
      IsReadyToDraw = std::vector<CColorGradientStop *>::empty(v10 + 42) ^ 1;
    }
    else
    {
      if ( v12 == CColorBrush::IsReadyToDraw )
      {
        v23 = IsCloseRealZero(v10[29], 0.0000011920929);
LABEL_8:
        v14 = a2[14];
        if ( !v14
          || (*(unsigned __int8 (__fastcall **)(float *, struct CDrawingContext *, char *))(*(_QWORD *)v14 + 312LL))(
               v14,
               a3,
               v22) )
        {
          v11 = 1;
        }
LABEL_11:
        if ( v23 || v22[0] )
        {
          v15 = 1;
          goto LABEL_14;
        }
LABEL_13:
        v15 = 0;
LABEL_14:
        v21 = v15;
        goto LABEL_15;
      }
      if ( v12 == CEffectBrush::IsReadyToDraw )
        IsReadyToDraw = CEffectBrush::IsReadyToDraw((CEffectBrush *)v10, a3, &v23);
      else
        IsReadyToDraw = v12((CColorBrush *)v10, a3, &v23);
    }
    if ( !IsReadyToDraw )
      goto LABEL_11;
    goto LABEL_8;
  }
  if ( v9 == CEffectBrush::IsReadyToDraw )
  {
    v20 = CEffectBrush::IsReadyToDraw((CEffectBrush *)a2, a3, &v21);
LABEL_32:
    v11 = v20;
    goto LABEL_15;
  }
  if ( v9 != CColorBrush::IsReadyToDraw )
  {
    v20 = v9((CMaskBrush *)a2, a3, &v21);
    goto LABEL_32;
  }
  v11 = CColorBrush::IsReadyToDraw((CColorBrush *)a2, a3, &v21);
LABEL_15:
  if ( !v11 || v21 )
    return 0LL;
  if ( *((_BYTE *)a2 + 96) && !a2[10] )
  {
    v18 = (__int64 (__fastcall *)(CEffectBrush *__hidden, bool))*((_QWORD *)*a2 + 43);
    v19 = v18 == CEffectBrush::EnsureBrushGraph
        ? CEffectBrush::EnsureBrushGraph((CEffectBrush *)a2, 0)
        : v18((CEffectBrush *)a2, 0);
    v16 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18032AF58, 3u, v19, 0x7Au, 0LL);
      return (unsigned int)v16;
    }
  }
  v16 = CContent::Draw((CContent *)a2, a3, a4, a5);
  if ( v16 >= 0 )
    return 0LL;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18032AF58, 3u, v16, 0x7Du, 0LL);
  return (unsigned int)v16;
}
