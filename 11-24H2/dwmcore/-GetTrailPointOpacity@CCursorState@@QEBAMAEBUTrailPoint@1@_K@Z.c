/*
 * XREFs of ?GetTrailPointOpacity@CCursorState@@QEBAMAEBUTrailPoint@1@_K@Z @ 0x1802B2F7C
 * Callers:
 *     ?RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1802908E0 (-RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall CCursorState::GetTrailPointOpacity(
        CCursorState *this,
        const struct CCursorState::TrailPoint *a2,
        __int64 a3)
{
  __int64 v3; // r8
  float v4; // xmm1_4
  __int64 v5; // rax
  float v6; // xmm0_4

  v3 = a3 - *(_QWORD *)a2;
  if ( v3 < 0 )
    v4 = (float)(v3 & 1 | (unsigned int)((unsigned __int64)v3 >> 1))
       + (float)(v3 & 1 | (unsigned int)((unsigned __int64)v3 >> 1));
  else
    v4 = (float)(int)v3;
  v5 = *((_QWORD *)this + 34);
  if ( ((5 * v5) & 0x4000000000000000LL) != 0 )
    v6 = (float)(int)((unsigned __int64)(10 * v5) >> 1) + (float)(int)((unsigned __int64)(10 * v5) >> 1);
  else
    v6 = (float)(10 * v5);
  return 1.0 - (float)(v4 / v6);
}
