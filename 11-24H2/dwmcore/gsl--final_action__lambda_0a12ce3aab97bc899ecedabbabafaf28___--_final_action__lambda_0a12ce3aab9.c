/*
 * XREFs of gsl::final_action__lambda_0a12ce3aab97bc899ecedabbabafaf28___::_final_action__lambda_0a12ce3aab97bc899ecedabbabafaf28___ @ 0x1801DA4D8
 * Callers:
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_F@@AEBU4@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801D9FFC (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_.c)
 * Callees:
 *     ?RestoreStateToLastMark@CDrawingContext@@QEAAXXZ @ 0x1801DA4F8 (-RestoreStateToLastMark@CDrawingContext@@QEAAXXZ.c)
 */

void __fastcall gsl::final_action__lambda_0a12ce3aab97bc899ecedabbabafaf28___::_final_action__lambda_0a12ce3aab97bc899ecedabbabafaf28___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
    CDrawingContext::RestoreStateToLastMark(*(CDrawingContext **)a1);
}
