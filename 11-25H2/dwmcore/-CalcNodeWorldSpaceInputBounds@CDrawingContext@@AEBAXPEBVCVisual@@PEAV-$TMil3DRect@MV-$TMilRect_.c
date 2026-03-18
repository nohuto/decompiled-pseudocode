/*
 * XREFs of ?CalcNodeWorldSpaceInputBounds@CDrawingContext@@AEBAXPEBVCVisual@@PEAV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009C480
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800E9350 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x18009CBD0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawingContext::CalcNodeWorldSpaceInputBounds(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  void *v5; // rcx
  __int64 result; // rax
  __int64 v7; // xmm1_8
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  v3 = *(_DWORD *)(a1 + 296);
  v9 = 0LL;
  v8 = 0LL;
  if ( v3 )
    v5 = (void *)(*(_QWORD *)(a1 + 288) + 68LL * (unsigned int)(v3 - 1));
  else
    v5 = &CMILMatrix::Identity;
  result = CMILMatrix::Transform3DBoundsHelper<1>(v5, a2 + 176, &v8);
  v7 = v9;
  *(_OWORD *)a3 = v8;
  *(_QWORD *)(a3 + 16) = v7;
  return result;
}
