/*
 * XREFs of ??0?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@QEAA@MMMMW4LTRB@@@Z @ 0x1801BE980
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800BB3C0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>::TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>(
        __int64 a1,
        float a2,
        float a3,
        float a4,
        int a5)
{
  __int64 result; // rax

  result = a1;
  *(_DWORD *)(a1 + 12) = a5;
  *(float *)a1 = a2;
  *(float *)(a1 + 4) = a3;
  *(float *)(a1 + 8) = a4;
  return result;
}
