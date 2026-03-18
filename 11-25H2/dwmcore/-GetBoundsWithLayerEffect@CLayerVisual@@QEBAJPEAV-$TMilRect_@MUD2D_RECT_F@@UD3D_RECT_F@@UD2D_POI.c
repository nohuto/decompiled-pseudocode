/*
 * XREFs of ?GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800279C8
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180027560 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEB.c)
 *     ?GetMaskBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002849C (-GetMaskBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F.c)
 * Callees:
 *     ?GetBounds@CEffectBrush@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@PEAV2@@Z @ 0x180026BF4 (-GetBounds@CEffectBrush@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UN.c)
 *     ?IsInfinite@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180099680 (-IsInfinite@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CLayerVisual::GetBoundsWithLayerEffect(__int64 a1, _OWORD *a2)
{
  _OWORD *v2; // rsi
  int Bounds; // ebx
  __int64 *v5; // rax
  float v6; // xmm0_4
  int v8; // [rsp+40h] [rbp+8h] BYREF
  float v9; // [rsp+44h] [rbp+Ch]

  v2 = (_OWORD *)(a1 + 176);
  Bounds = 0;
  *a2 = *(_OWORD *)(a1 + 176);
  v5 = *(__int64 **)(a1 + 680);
  if ( v5 )
  {
    if ( (v6 = *(float *)(a1 + 148), *(float *)(a1 + 144) != 0.0) && v6 != 0.0 || *(_BYTE *)(a1 + 696) )
    {
      v8 = *(_DWORD *)(a1 + 144);
      v9 = v6;
      if ( *v5 )
        Bounds = CEffectBrush::GetBounds(*v5, v2, (__int64)&v8, a2);
      if ( Bounds >= 0 )
      {
        if ( (unsigned __int8)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsInfinite(a2) )
          *a2 = *v2;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Bounds, 0x1C2u, 0LL);
      }
    }
  }
  return (unsigned int)Bounds;
}
