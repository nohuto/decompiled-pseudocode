/*
 * XREFs of ?GetShadowBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A9BF0
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x1800A6B00 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEB.c)
 *     ?CalcDeviceTransformDelta@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x1800A9D10 (-CalcDeviceTransformDelta@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetMaskBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A8004 (-GetMaskBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F.c)
 *     ?Inflate@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x18014E920 (-Inflate@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?GetRadius@CDropShadow@@QEBAMXZ @ 0x18014EB58 (-GetRadius@CDropShadow@@QEBAMXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

__int64 __fastcall CLayerVisual::GetShadowBounds(__int64 a1, _OWORD *a2)
{
  int MaskBounds; // eax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  float v8[4]; // [rsp+30h] [rbp-30h]
  __int128 v9; // [rsp+40h] [rbp-20h] BYREF

  *a2 = DirectX::g_XMZero;
  if ( !*(_QWORD *)(a1 + 680) )
    return 0LL;
  v9 = 0LL;
  MaskBounds = CLayerVisual::GetMaskBounds(a1, &v9);
  v6 = MaskBounds;
  if ( MaskBounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, MaskBounds, 0x218u, 0LL);
  }
  else
  {
    CDropShadow::GetRadius(*(CDropShadow **)(a1 + 680));
    *(_QWORD *)v8 = *(_QWORD *)(v7 + 96);
    if ( *((float *)&v9 + 2) > *(float *)&v9 && *((float *)&v9 + 3) > *((float *)&v9 + 1) )
    {
      TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Inflate(&v9);
      *((float *)&v9 + 1) = *((float *)&v9 + 1) + v8[1];
      *(float *)&v9 = *(float *)&v9 + v8[0];
      *((float *)&v9 + 2) = *((float *)&v9 + 2) + v8[0];
      *((float *)&v9 + 3) = *((float *)&v9 + 3) + v8[1];
      *a2 = v9;
    }
  }
  return v6;
}
