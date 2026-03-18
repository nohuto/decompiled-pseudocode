/*
 * XREFs of ?GetMaskBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002849C
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180027560 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEB.c)
 *     ?CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV3@2@Z @ 0x1800280AC (-CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatr.c)
 *     ?GetShadowBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002BA04 (-GetShadowBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 * Callees:
 *     ?GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800279C8 (-GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ @ 0x180029684 (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLayerVisual::GetMaskBounds(__int64 a1, _OWORD *a2)
{
  unsigned int v2; // ebx
  CDropShadow *v3; // rcx
  struct CBrush *MaskForLayerVisualNoRef; // rax
  _OWORD *v5; // rdx
  __int64 v6; // r8
  struct CBrush *v7; // rcx
  int BoundsWithLayerEffect; // eax
  float v10; // xmm1_4
  __int64 v11; // rax
  int v12; // eax
  int v13; // [rsp+40h] [rbp+8h] BYREF
  float v14; // [rsp+44h] [rbp+Ch]

  v2 = 0;
  *a2 = DirectX::g_XMZero;
  v3 = *(CDropShadow **)(a1 + 672);
  if ( v3 )
  {
    MaskForLayerVisualNoRef = CDropShadow::GetMaskForLayerVisualNoRef(v3);
    v7 = MaskForLayerVisualNoRef;
    if ( MaskForLayerVisualNoRef )
    {
      v10 = *(float *)(v6 + 148);
      if ( *(float *)(v6 + 144) != 0.0 && v10 != 0.0 )
      {
        v11 = *(_QWORD *)MaskForLayerVisualNoRef;
        v13 = *(_DWORD *)(v6 + 144);
        v14 = v10;
        v12 = (*(__int64 (__fastcall **)(struct CBrush *, int *, _OWORD *))(v11 + 184))(v7, &v13, v5);
        v2 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x1FDu, 0LL);
      }
    }
    else
    {
      BoundsWithLayerEffect = CLayerVisual::GetBoundsWithLayerEffect(v6, v5);
      v2 = BoundsWithLayerEffect;
      if ( BoundsWithLayerEffect < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BoundsWithLayerEffect, 0x202u, 0LL);
    }
  }
  return v2;
}
