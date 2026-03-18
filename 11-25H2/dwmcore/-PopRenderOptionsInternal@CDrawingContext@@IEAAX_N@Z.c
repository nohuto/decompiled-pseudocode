/*
 * XREFs of ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180118380
 * Callers:
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x18000C52C (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x180054628 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@_NH@Z @ 0x1800727D4 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800769C8 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV-$TMilRect_.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x180117180 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?RenderLayer@CColorTransformLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x180117910 (-RenderLayer@CColorTransformLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?PreRestoreState@CLinearInterpolationLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x18022B0D0 (-PreRestoreState@CLinearInterpolationLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x1802677DC (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@.c)
 *     gsl::final_action__lambda_e39790a6e1273eaffacbd5f9d20d42be___::_final_action__lambda_e39790a6e1273eaffacbd5f9d20d42be___ @ 0x18028CC84 (gsl--final_action__lambda_e39790a6e1273eaffacbd5f9d20d42be___--_final_action__lambda_e39790a6e12.c)
 *     gsl::final_action__lambda_faa70d9ea42e229a5160edc59fc05eae___::_final_action__lambda_faa70d9ea42e229a5160edc59fc05eae___ @ 0x18028CCCC (gsl--final_action__lambda_faa70d9ea42e229a5160edc59fc05eae___--_final_action__lambda_faa70d9ea42.c)
 *     ?RenderCursors_Feature_FixCaptureMagnifierCursors_Off@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18028DA5C (-RenderCursors_Feature_FixCaptureMagnifierCursors_Off@CCaptureRenderTarget@@IEAAJPEAVCDrawingCon.c)
 *     gsl::final_action__lambda_f5980df7b8a7e043f4787e76bfd73b62___::_final_action__lambda_f5980df7b8a7e043f4787e76bfd73b62___ @ 0x180299BE4 (gsl--final_action__lambda_f5980df7b8a7e043f4787e76bfd73b62___--_final_action__lambda_f5980df7b8a.c)
 *     ?RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18029A990 (-RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDrawingContext::PopRenderOptionsInternal(CDrawingContext *this, char a2)
{
  __m128i v2; // xmm1
  int v3; // eax
  int v4; // eax
  unsigned int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // [rsp+10h] [rbp-18h]

  v2 = 0LL;
  v8 = 0LL;
  if ( a2 )
  {
    v3 = *((_DWORD *)this + 68);
    if ( v3 )
      *((_DWORD *)this + 68) = v3 - 1;
  }
  v4 = *((_DWORD *)this + 182);
  if ( v4 )
  {
    v5 = v4 - 1;
    *((_DWORD *)this + 182) = v5;
    v6 = 3LL * v5;
    v7 = *((_QWORD *)this + 90);
    v2 = *(__m128i *)(v7 + 8 * v6);
    v8 = *(_QWORD *)(v7 + 8 * v6 + 16);
  }
  *((_DWORD *)this + 60) = _mm_cvtsi128_si32(v2);
  *((_DWORD *)this + 63) = v8;
  *((_DWORD *)this + 61) = _mm_cvtsi128_si32(_mm_srli_si128(v2, 4));
  *((_DWORD *)this + 62) = _mm_cvtsi128_si32(_mm_srli_si128(v2, 12));
  *((_DWORD *)this + 64) = HIDWORD(v8);
}
