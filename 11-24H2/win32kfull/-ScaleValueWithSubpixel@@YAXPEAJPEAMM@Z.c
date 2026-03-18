/*
 * XREFs of ?ScaleValueWithSubpixel@@YAXPEAJPEAMM@Z @ 0x14008D8F8
 * Callers:
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x14008D6FC (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x14008D804 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     ?GetDpiRectWithSubpixel@@YAXPEBUtagRECT@@PEBMPEBUtagWND@@2PEAM333@Z @ 0x1401A8204 (-GetDpiRectWithSubpixel@@YAXPEBUtagRECT@@PEBMPEBUtagWND@@2PEAM333@Z.c)
 *     ScaleDpiOffsetWithSubpixel @ 0x1401A83A0 (ScaleDpiOffsetWithSubpixel.c)
 *     ScaleDpiValueWithSubpixel @ 0x140281A08 (ScaleDpiValueWithSubpixel.c)
 * Callees:
 *     <none>
 */

void __fastcall ScaleValueWithSubpixel(int *a1, float *a2, float a3)
{
  float v3; // xmm0_4
  float v4; // xmm1_4
  int v5; // eax

  if ( a2 )
    v3 = *a2;
  else
    v3 = 0.0;
  v4 = (float)((float)*a1 * a3) + v3;
  v5 = (int)(float)(v4 + 0.5);
  if ( a2 )
    *a2 = v4 - (float)v5;
  *a1 = v5;
}
