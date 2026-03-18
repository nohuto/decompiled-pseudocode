/*
 * XREFs of ??0?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MM@Z @ 0x1801B5320
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800BB3C0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>(
        __int64 a1,
        _DWORD *a2,
        float a3,
        float a4)
{
  int v4; // xmm4_4
  int v5; // xmm1_4
  int v6; // xmm0_4
  __int64 result; // rax

  v4 = a2[3];
  v5 = a2[2];
  v6 = a2[1];
  *(_DWORD *)a1 = *a2;
  result = a1;
  *(_DWORD *)(a1 + 4) = v6;
  *(_DWORD *)(a1 + 8) = v5;
  *(_DWORD *)(a1 + 12) = v4;
  *(float *)(a1 + 16) = a3;
  *(float *)(a1 + 20) = a4;
  return result;
}
