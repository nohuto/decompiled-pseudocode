/*
 * XREFs of ??0?$CMergedRectBase@$03@@QEAA@_N@Z @ 0x1801C67A4
 * Callers:
 *     ?AddComputeScribbleDirtyRects@CDDisplayRenderTarget@@IEAAXXZ @ 0x1801C4884 (-AddComputeScribbleDirtyRects@CDDisplayRenderTarget@@IEAAXXZ.c)
 *     ?AddComputeScribbleDirtyRects@CLegacyRenderTarget@@AEAAXXZ @ 0x1801C6630 (-AddComputeScribbleDirtyRects@CLegacyRenderTarget@@AEAAXXZ.c)
 *     ??0CCaptureRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1802344A8 (--0CCaptureRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CHolographicInteropTexture@@IEAA@PEAVCComposition@@@Z @ 0x1802D2608 (--0CHolographicInteropTexture@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CDirtyRegionAnnotation@@QEAA@XZ @ 0x180019EB0 (--0CDirtyRegionAnnotation@@QEAA@XZ.c)
 *     ??0?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEAA@XZ @ 0x18019D270 (--0-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEAA@.c)
 */

__int64 __fastcall CMergedRectBase<4>::CMergedRectBase<4>(__int64 a1, char a2)
{
  CDirtyRegionAnnotation *v2; // rdi
  __int64 v5; // rbp
  __int64 result; // rax

  *(_DWORD *)a1 = 0;
  v2 = (CDirtyRegionAnnotation *)(a1 + 4);
  v5 = 5LL;
  do
  {
    --v5;
    if ( (char *)TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_> == (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      CDirtyRegionAnnotation::CDirtyRegionAnnotation(v2);
    else
      TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>(v2);
    v2 = (CDirtyRegionAnnotation *)((char *)v2 + 16);
  }
  while ( v5 );
  *(_BYTE *)(a1 + 164) = 0;
  result = a1;
  *(_BYTE *)(a1 + 168) = a2 - 1;
  return result;
}
