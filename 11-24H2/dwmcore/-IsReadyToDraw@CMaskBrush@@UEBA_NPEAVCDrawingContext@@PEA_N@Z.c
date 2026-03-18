/*
 * XREFs of ?IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x18004F9B0
 * Callers:
 *     ?EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z @ 0x18021CF70 (-EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z.c)
 * Callees:
 *     ?IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x18004D750 (-IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsCloseRealZero@@YA_NMM@Z @ 0x18004F990 (-IsCloseRealZero@@YA_NMM@Z.c)
 *     ?empty@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@QEBA_NXZ @ 0x18004FAD0 (-empty@-$vector@PEAVCColorGradientStop@@V-$allocator@PEAVCColorGradientStop@@@std@@@std@@QEBA_NX.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMaskBrush::IsReadyToDraw(CMaskBrush *this, struct CDrawingContext *a2, bool *a3)
{
  float *v3; // rbx
  unsigned __int8 v4; // si
  bool (__fastcall *v8)(CGradientBrush *__hidden, struct CDrawingContext *, bool *); // rax
  char IsReadyToDraw; // al
  __int64 v10; // rcx
  bool v12; // [rsp+40h] [rbp+8h] BYREF
  char v13; // [rsp+50h] [rbp+18h] BYREF

  v3 = (float *)*((_QWORD *)this + 15);
  v4 = 0;
  v12 = 0;
  v13 = 0;
  if ( !v3 )
    goto LABEL_10;
  v8 = *(bool (__fastcall **)(CGradientBrush *__hidden, struct CDrawingContext *, bool *))(*(_QWORD *)v3 + 312LL);
  if ( v8 == CGradientBrush::IsReadyToDraw )
  {
    v12 = std::vector<CColorGradientStop *>::empty(v3 + 42);
    IsReadyToDraw = std::vector<CColorGradientStop *>::empty(v3 + 42) ^ 1;
    goto LABEL_4;
  }
  if ( (char *)v8 != (char *)CColorBrush::IsReadyToDraw )
  {
    if ( (char *)v8 == (char *)CEffectBrush::IsReadyToDraw )
      IsReadyToDraw = CEffectBrush::IsReadyToDraw((CEffectBrush *)v3, a2, &v12);
    else
      IsReadyToDraw = v8((CGradientBrush *)v3, a2, &v12);
LABEL_4:
    if ( !IsReadyToDraw )
      goto LABEL_8;
    goto LABEL_5;
  }
  v12 = IsCloseRealZero(v3[29], 0.0000011920929);
LABEL_5:
  v10 = *((_QWORD *)this + 14);
  if ( !v10
    || (*(unsigned __int8 (__fastcall **)(__int64, struct CDrawingContext *, char *))(*(_QWORD *)v10 + 312LL))(
         v10,
         a2,
         &v13) )
  {
    v4 = 1;
  }
LABEL_8:
  if ( v12 || v13 )
  {
    *a3 = 1;
    return v4;
  }
LABEL_10:
  *a3 = 0;
  return v4;
}
