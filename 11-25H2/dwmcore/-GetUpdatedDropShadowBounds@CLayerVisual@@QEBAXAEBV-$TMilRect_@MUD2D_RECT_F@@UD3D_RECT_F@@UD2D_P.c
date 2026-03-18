/*
 * XREFs of ?GetUpdatedDropShadowBounds@CLayerVisual@@QEBAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800283D4
 * Callers:
 *     ?RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1800298B0 (-RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ @ 0x180029684 (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180099A00 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?Inflate@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x180119D40 (-Inflate@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?GetRadius@CDropShadow@@QEBAMXZ @ 0x180119F78 (-GetRadius@CDropShadow@@QEBAMXZ.c)
 */

void __fastcall CLayerVisual::GetUpdatedDropShadowBounds(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  CDropShadow *v3; // rcx
  const __m128i *v4; // rdx
  CDropShadow *v5; // rcx
  __m128 v6; // xmm3
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r8
  float v12[4]; // [rsp+20h] [rbp-20h]
  __m128 v13; // [rsp+30h] [rbp-10h] BYREF

  *a3 = *a2;
  v3 = *(CDropShadow **)(a1 + 672);
  if ( v3 )
  {
    if ( !CDropShadow::GetMaskForLayerVisualNoRef(v3) )
    {
      v6 = (__m128)_mm_loadu_si128(v4);
      v13 = v6;
      CDropShadow::GetRadius(v5);
      *(_QWORD *)v12 = *(_QWORD *)(v10 + 96);
      if ( _mm_shuffle_ps(v6, v6, 170).m128_f32[0] > v6.m128_f32[0]
        && _mm_shuffle_ps(v6, v6, 255).m128_f32[0] > _mm_shuffle_ps(v6, v6, 85).m128_f32[0] )
      {
        TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Inflate(&v13, v7, v8, v9);
        v13.m128_f32[1] = v13.m128_f32[1] + v12[1];
        v13.m128_f32[0] = v13.m128_f32[0] + v12[0];
        v13.m128_f32[2] = v13.m128_f32[2] + v12[0];
        v13.m128_f32[3] = v13.m128_f32[3] + v12[1];
        TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(v11, &v13);
      }
    }
  }
}
