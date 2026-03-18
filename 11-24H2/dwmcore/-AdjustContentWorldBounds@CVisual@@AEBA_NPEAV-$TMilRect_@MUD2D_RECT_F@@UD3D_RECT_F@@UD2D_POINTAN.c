/*
 * XREFs of ?AdjustContentWorldBounds@CVisual@@AEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801AA270
 * Callers:
 *     ?CollectAdditionalDirtyRects@CVisual@@MEAAJPEBVCVisualTree@@PEAVCTreeDirty@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180039D50 (-CollectAdditionalDirtyRects@CVisual@@MEAAJPEBVCVisualTree@@PEAVCTreeDirty@@AEBVCMILMatrix@@PEBV.c)
 * Callees:
 *     ?IsOfType@CBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18007F390 (-IsOfType@CBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?HasAntialiasedContent@CVisual@@MEBA_NXZ @ 0x1801AA4B0 (-HasAntialiasedContent@CVisual@@MEBA_NXZ.c)
 *     ?HasAntialiasedContent@CSpriteVisual@@UEBA_NXZ @ 0x1801AA4F0 (-HasAntialiasedContent@CSpriteVisual@@UEBA_NXZ.c)
 *     ?ShouldSnapToPixels@CMaskBrush@@UEBA_NXZ @ 0x1801AA660 (-ShouldSnapToPixels@CMaskBrush@@UEBA_NXZ.c)
 *     ?ShouldSnapToPixels@CEffectBrush@@UEBA_NXZ @ 0x1801AA700 (-ShouldSnapToPixels@CEffectBrush@@UEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CVisual::AdjustContentWorldBounds(CSpriteVisual *this, float *a2)
{
  bool (__fastcall *v4)(CVisual *__hidden); // rax
  bool HasAntialiasedContent; // al
  float v6; // xmm6_4
  __int64 v7; // rcx
  float v8; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm2_4
  float v11; // xmm0_4
  float v12; // xmm0_4
  char result; // al
  float v14; // xmm0_4
  bool (__fastcall *v15)(__int64, unsigned __int64); // rax
  CMaskBrush *v16; // rcx
  __int64 (*v17)(void); // rax
  char ShouldSnapToPixels; // al

  if ( a2[2] <= *a2 || a2[3] <= a2[1] )
    return 0;
  v4 = *(bool (__fastcall **)(CVisual *__hidden))(*(_QWORD *)this + 352LL);
  if ( v4 == CVisual::HasAntialiasedContent )
  {
    HasAntialiasedContent = CVisual::HasAntialiasedContent(this);
  }
  else if ( v4 == CSpriteVisual::HasAntialiasedContent )
  {
    HasAntialiasedContent = CSpriteVisual::HasAntialiasedContent(this);
  }
  else
  {
    HasAntialiasedContent = v4(this);
  }
  if ( HasAntialiasedContent )
    v6 = FLOAT_0_5;
  else
    v6 = 0.0;
  v7 = *((_QWORD *)this + 32);
  if ( v7 )
  {
    v15 = *(bool (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v7 + 64LL);
    if ( v15 == CColorBrush::IsOfType )
    {
      if ( !CBrush::IsOfType(v7, 17) )
        goto LABEL_8;
    }
    else if ( !v15(v7, 17uLL) )
    {
      goto LABEL_8;
    }
    v16 = (CMaskBrush *)*((_QWORD *)this + 32);
    v17 = *(__int64 (**)(void))(*(_QWORD *)v16 + 328LL);
    if ( (char *)v17 == (char *)CSurfaceBrush::ShouldSnapToPixels )
    {
      ShouldSnapToPixels = *((_BYTE *)v16 + 200);
    }
    else if ( (char *)v17 == (char *)CMaskBrush::ShouldSnapToPixels )
    {
      ShouldSnapToPixels = CMaskBrush::ShouldSnapToPixels(v16);
    }
    else if ( (char *)v17 == (char *)CEffectBrush::ShouldSnapToPixels )
    {
      ShouldSnapToPixels = CEffectBrush::ShouldSnapToPixels(v16);
    }
    else
    {
      ShouldSnapToPixels = v17();
    }
    if ( ShouldSnapToPixels )
      v6 = v6 + 0.5;
  }
LABEL_8:
  if ( v6 == 0.0 )
    return 1;
  if ( *a2 <= (float)(v6 - 3.4028235e38) )
    v8 = FLOAT_N3_4028235e38;
  else
    v8 = *a2 - v6;
  *a2 = v8;
  v9 = a2[1];
  if ( v9 <= (float)(v6 - 3.4028235e38) )
    v10 = FLOAT_N3_4028235e38;
  else
    v10 = v9 - v6;
  a2[1] = v10;
  v11 = a2[2];
  if ( (float)(3.4028235e38 - v6) <= v11 )
    v12 = FLOAT_3_4028235e38;
  else
    v12 = v11 + v6;
  a2[2] = v12;
  result = 1;
  v14 = a2[3];
  if ( (float)(3.4028235e38 - v6) <= v14 )
    a2[3] = 3.4028235e38;
  else
    a2[3] = v14 + v6;
  return result;
}
