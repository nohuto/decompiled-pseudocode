/*
 * XREFs of ?ClipRectAndSimilarRect@@YAXAEBUtagRECT@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x180004A28
 * Callers:
 *     ?AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z @ 0x18003EB00 (-AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ClipRectAndSimilarRect(int *a1, float *a2, float *a3)
{
  float v3; // xmm1_4
  float v4; // xmm2_4
  float v5; // xmm3_4
  float v6; // xmm9_4
  float v7; // xmm8_4
  float v8; // xmm7_4
  float v9; // xmm6_4
  float v10; // xmm0_4
  float v11; // xmm5_4
  float v12; // xmm4_4

  v3 = a2[2] - *a2;
  if ( v3 > 0.0 && (float)(a2[3] - a2[1]) > 0.0 )
  {
    v4 = a3[2];
    v5 = a3[3];
    v6 = fmaxf((float)*a1, *a2);
    v7 = fmaxf((float)a1[1], a2[1]);
    v8 = fminf((float)a1[2], a2[2]);
    v9 = fminf((float)a1[3], a2[3]);
    v10 = v5 - a3[1];
    v11 = (float)((float)((float)(v6 - *a2) * (float)(v4 - *a3)) / v3) + *a3;
    *a3 = v11;
    v12 = (float)((float)((float)(v7 - a2[1]) * v10) / (float)(a2[3] - a2[1])) + a3[1];
    a3[1] = v12;
    a3[2] = (float)((float)((float)(v8 - v6) * (float)(v4 - v11)) / (float)(a2[2] - *a2)) + v11;
    a3[3] = (float)((float)((float)(v9 - v7) * (float)(v5 - v12)) / (float)(a2[3] - a2[1])) + v12;
    *a2 = v6;
    a2[1] = v7;
    a2[2] = v8;
    a2[3] = v9;
  }
}
