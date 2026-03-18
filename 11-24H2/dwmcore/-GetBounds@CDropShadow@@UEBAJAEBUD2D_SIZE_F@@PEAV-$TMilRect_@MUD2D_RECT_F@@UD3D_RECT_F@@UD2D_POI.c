/*
 * XREFs of ?GetBounds@CDropShadow@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014DF60
 * Callers:
 *     ?GetContentBounds@CSpriteVisual@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014D5C0 (-GetContentBounds@CSpriteVisual@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 * Callees:
 *     ?Inflate@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x18014E920 (-Inflate@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?GetRadius@CDropShadow@@QEBAMXZ @ 0x18014EB58 (-GetRadius@CDropShadow@@QEBAMXZ.c)
 *     ?IsEmptyDrawing@CDropShadow@@UEBA_NXZ @ 0x18014EDD0 (-IsEmptyDrawing@CDropShadow@@UEBA_NXZ.c)
 */

__int64 __fastcall CDropShadow::GetBounds(CDropShadow *this, float *a2, float *a3)
{
  float v7; // xmm4_4
  float v8; // xmm5_4
  float v9; // xmm0_4
  float v10; // xmm1_4

  if ( *a2 <= 0.0 || a2[1] <= 0.0 || CDropShadow::IsEmptyDrawing(this) )
  {
    a3[3] = 0.0;
    a3[2] = 0.0;
    a3[1] = 0.0;
    *a3 = 0.0;
  }
  else
  {
    *a3 = 0.0;
    a3[1] = 0.0;
    v7 = *a2;
    a3[2] = *a2;
    v8 = a2[1];
    a3[3] = v8;
    v9 = *((float *)this + 24);
    v10 = *((float *)this + 25) + 0.0;
    a3[3] = v8 + *((float *)this + 25);
    a3[2] = v7 + v9;
    *a3 = v9 + 0.0;
    a3[1] = v10;
    CDropShadow::GetRadius(this);
    TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Inflate(a3);
  }
  return 0LL;
}
