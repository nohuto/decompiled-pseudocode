/*
 * XREFs of ?ClipRectAndSimilarRect@@YAXAEBUtagRECT@@AEAV?$TMilRect_@MUD2D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x18003B770
 * Callers:
 *     ?AppendAtlasRect@CAtlasedImage@@IEAAJAEAUAtlasedRects@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1_N@Z @ 0x18003B470 (-AppendAtlasRect@CAtlasedImage@@IEAAJAEAUAtlasedRects@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD2D_POINTA.c)
 * Callees:
 *     ?Width@?$TMilRect@MUD2D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x18003B8D4 (-Width@-$TMilRect@MUD2D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     ?Height@?$TMilRect@MUD2D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x18003B8E0 (-Height@-$TMilRect@MUD2D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 */

void __fastcall ClipRectAndSimilarRect(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  int *v3; // rax
  float *v4; // rdx
  float *v5; // r8
  float v6; // xmm1_4
  float v7; // xmm5_4
  float v8; // xmm9_4
  float v9; // xmm3_4
  float v10; // xmm7_4
  float v11; // xmm2_4
  float v12; // xmm8_4
  float v13; // xmm6_4
  float v14; // xmm4_4
  float v15; // xmm2_4

  if ( TMilRect<float,D2D_RECT_F,RectUniqueness::NotNeeded>::Width(a2) > 0.0
    && TMilRect<float,D2D_RECT_F,RectUniqueness::NotNeeded>::Height(v2) > 0.0 )
  {
    v6 = v4[2];
    v7 = v5[2];
    v8 = fmaxf((float)*v3, *v4);
    v9 = v5[3];
    v10 = fminf((float)v3[2], v6);
    v11 = v9 - v5[1];
    v12 = fmaxf((float)v3[1], v4[1]);
    v13 = fminf((float)v3[3], v4[3]);
    v14 = (float)((float)((float)(v8 - *v4) * (float)(v7 - *v5)) / (float)(v6 - *v4)) + *v5;
    *v5 = v14;
    v15 = (float)((float)(v11 * (float)(v12 - v4[1])) / (float)(v4[3] - v4[1])) + v5[1];
    v5[1] = v15;
    v5[2] = (float)((float)((float)(v7 - v14) * (float)(v10 - v8)) / (float)(v4[2] - *v4)) + v14;
    v5[3] = (float)((float)((float)(v9 - v15) * (float)(v13 - v12)) / (float)(v4[3] - v4[1])) + v15;
    *v4 = v8;
    v4[1] = v12;
    v4[2] = v10;
    v4[3] = v13;
  }
}
