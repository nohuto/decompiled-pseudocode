/*
 * XREFs of ?Draw@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800D3ED0
 * Callers:
 *     ?Draw@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801E0420 (-Draw@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801E2D20 (-Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA.c)
 * Callees:
 *     ?IsReadyToDraw@CColorBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x18005B2A0 (-IsReadyToDraw@CColorBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z @ 0x1800724A0 (-EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z.c)
 *     ?IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800D01B0 (-IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsCloseRealZero@@YA_NMM@Z @ 0x1800D23E0 (-IsCloseRealZero@@YA_NMM@Z.c)
 *     ?empty@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@QEBA_NXZ @ 0x1800D2520 (-empty@-$vector@PEAVCColorGradientStop@@V-$allocator@PEAVCColorGradientStop@@@std@@@std@@QEBA_NX.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800D4130 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBrush::Draw(
        CEffectBrush **this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  float width; // xmm0_4
  __int64 (__fastcall *v9)(CMaskBrush *, struct CDrawingContext *, bool *); // rax
  CEffectBrush *v10; // rbx
  char v11; // bp
  char (__fastcall *v12)(CColorBrush *, struct CDrawingContext *, bool *); // rax
  char IsReadyToDraw; // al
  CEffectBrush *v14; // rcx
  bool v15; // al
  int v16; // ebx
  __int64 (__fastcall *v18)(struct CBrushRenderingGraph **, char); // rax
  int v19; // eax
  char v20; // al
  bool v21; // [rsp+30h] [rbp-28h] BYREF
  char v22[39]; // [rsp+31h] [rbp-27h] BYREF
  bool v23; // [rsp+70h] [rbp+18h] BYREF

  width = a3->width;
  v21 = 0;
  if ( width <= 0.0 || a3->height <= 0.0 )
    return 0LL;
  v9 = (__int64 (__fastcall *)(CMaskBrush *, struct CDrawingContext *, bool *))*((_QWORD *)*this + 39);
  if ( v9 == CMaskBrush::IsReadyToDraw )
  {
    v10 = this[15];
    v11 = 0;
    v23 = 0;
    v22[0] = 0;
    if ( !v10 )
      goto LABEL_13;
    v12 = *(char (__fastcall **)(CColorBrush *, struct CDrawingContext *, bool *))(*(_QWORD *)v10 + 312LL);
    if ( (char *)v12 == (char *)CGradientBrush::IsReadyToDraw )
    {
      v23 = std::vector<CColorGradientStop *>::empty((_QWORD *)v10 + 21);
      IsReadyToDraw = !std::vector<CColorGradientStop *>::empty((_QWORD *)v10 + 21);
    }
    else
    {
      if ( v12 == CColorBrush::IsReadyToDraw )
      {
        v23 = IsCloseRealZero(*((float *)v10 + 29), 0.0000011920929);
LABEL_8:
        v14 = this[14];
        if ( !v14
          || (*(unsigned __int8 (__fastcall **)(CEffectBrush *, struct CDrawingContext *, char *))(*(_QWORD *)v14 + 312LL))(
               v14,
               a2,
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
        IsReadyToDraw = CEffectBrush::IsReadyToDraw(v10, a2, &v23);
      else
        IsReadyToDraw = v12(v10, a2, &v23);
    }
    if ( !IsReadyToDraw )
      goto LABEL_11;
    goto LABEL_8;
  }
  if ( (char *)v9 == (char *)CEffectBrush::IsReadyToDraw )
  {
    v20 = CEffectBrush::IsReadyToDraw((CEffectBrush *)this, a2, &v21);
LABEL_32:
    v11 = v20;
    goto LABEL_15;
  }
  if ( (char *)v9 != (char *)CColorBrush::IsReadyToDraw )
  {
    v20 = v9((CMaskBrush *)this, a2, &v21);
    goto LABEL_32;
  }
  v11 = CColorBrush::IsReadyToDraw((CColorBrush *)this, a2, &v21);
LABEL_15:
  if ( !v11 || v21 )
    return 0LL;
  if ( *((_BYTE *)this + 96) && !this[10] )
  {
    v18 = (__int64 (__fastcall *)(struct CBrushRenderingGraph **, char))*((_QWORD *)*this + 43);
    v19 = v18 == CEffectBrush::EnsureBrushGraph ? CEffectBrush::EnsureBrushGraph(this, 0) : v18(this, 0);
    v16 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18031E8C0, 3u, v19, 0x7Au, 0LL);
      return (unsigned int)v16;
    }
  }
  v16 = CContent::Draw((CContent *)this, a2, a3, a4);
  if ( v16 >= 0 )
    return 0LL;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18031E8C0, 3u, v16, 0x7Du, 0LL);
  return (unsigned int)v16;
}
