/*
 * XREFs of ?GetUpdatedDropShadowBounds@CLayerVisual@@QEBAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800A7528
 * Callers:
 *     ?RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1800A8D00 (-RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18003DED0 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ @ 0x1800A8CCC (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ.c)
 *     ?Inflate@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x18014E920 (-Inflate@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?GetRadius@CDropShadow@@QEBAMXZ @ 0x18014EB58 (-GetRadius@CDropShadow@@QEBAMXZ.c)
 */

void __fastcall CLayerVisual::GetUpdatedDropShadowBounds(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  CDropShadow *v3; // rcx
  const __m128i *v4; // rdx
  CDropShadow *v5; // rcx
  __m128 v6; // xmm3
  __int64 v7; // rcx
  float *v8; // r8
  float v9[4]; // [rsp+20h] [rbp-20h]
  __m128 v10; // [rsp+30h] [rbp-10h] BYREF

  *a3 = *a2;
  v3 = *(CDropShadow **)(a1 + 680);
  if ( v3 )
  {
    if ( !CDropShadow::GetMaskForLayerVisualNoRef(v3) )
    {
      v6 = (__m128)_mm_loadu_si128(v4);
      v10 = v6;
      CDropShadow::GetRadius(v5);
      *(_QWORD *)v9 = *(_QWORD *)(v7 + 96);
      if ( _mm_shuffle_ps(v6, v6, 170).m128_f32[0] > v6.m128_f32[0]
        && _mm_shuffle_ps(v6, v6, 255).m128_f32[0] > _mm_shuffle_ps(v6, v6, 85).m128_f32[0] )
      {
        TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Inflate(&v10);
        v10.m128_f32[1] = v10.m128_f32[1] + v9[1];
        v10.m128_f32[0] = v10.m128_f32[0] + v9[0];
        v10.m128_f32[2] = v10.m128_f32[2] + v9[0];
        v10.m128_f32[3] = v10.m128_f32[3] + v9[1];
        TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(v8, v10.m128_f32);
      }
    }
  }
}
