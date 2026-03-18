/*
 * XREFs of ?DoesIntersect@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1801C6D84
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083CD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::DoesIntersect(float *a1, float *a2)
{
  float v2; // xmm2_4
  float v3; // xmm1_4
  bool result; // al

  v2 = a1[2];
  result = 0;
  if ( v2 > *a1 && a1[3] > a1[1] )
  {
    v3 = a2[2];
    if ( v3 > *a2 && a2[3] > a2[1] && v2 > *a2 && v3 > *a1 && a1[3] > a2[1] && a2[3] > a1[1] )
      return 1;
  }
  return result;
}
