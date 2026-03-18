/*
 * XREFs of ?Get2DPointUsing2DInverse@CMILMatrix@@QEBA_NAEBUD2D_POINT_2F@@PEAU2@@Z @ 0x180027130
 * Callers:
 *     ?Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180027044 (-Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMILMatrix::Get2DPointUsing2DInverse(
        CMILMatrix *this,
        const struct D2D_POINT_2F *a2,
        struct D2D_POINT_2F *a3)
{
  float v3; // xmm5_4
  float y; // xmm1_4
  float v5; // xmm6_4
  float v6; // xmm7_4
  float v7; // xmm8_4
  float v8; // xmm5_4
  float v9; // xmm4_4
  float v10; // xmm3_4
  bool result; // al
  float v12; // xmm2_4
  float v13; // xmm3_4

  v3 = *((float *)this + 3);
  y = a2->y;
  v5 = (float)(*((float *)this + 7) * y) - *((float *)this + 5);
  v6 = (float)(a2->x * v3) - *(float *)this;
  v7 = (float)(a2->x * *((float *)this + 7)) - *((float *)this + 4);
  v8 = (float)(v3 * y) - *((float *)this + 1);
  if ( (float)(v6 * v5) == (float)(v7 * v8) )
    return 0;
  v9 = (float)(v6 * v5) - (float)(v7 * v8);
  v10 = *((float *)this + 15);
  result = 1;
  v12 = (float)(v10 * y) - *((float *)this + 13);
  v13 = (float)(v10 * a2->x) - *((float *)this + 12);
  a3->y = (float)((float)(v13 * v8) - (float)(v12 * v6)) / v9;
  a3->x = (float)((float)(v12 * v7) - (float)(v13 * v5)) / v9;
  return result;
}
