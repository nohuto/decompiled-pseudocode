/*
 * XREFs of ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x180186120
 * Callers:
 *     ?CleanupAfterWalking@CBspPreComputeHelper@@QEAAXXZ @ 0x180096F10 (-CleanupAfterWalking@CBspPreComputeHelper@@QEAAXXZ.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z @ 0x18009A6D0 (-PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z.c)
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x1800D9D60 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ?Grow@?$CWatermarkStack@PEAX$01$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x180185C98 (-Grow@-$CWatermarkStack@PEAX$01$01$09@@AEAAJ_KIIPEAPEAX@Z.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z @ 0x1801861AC (-HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z.c)
 *     ?Grow@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x1801B3400 (-Grow@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z.c)
 *     ?Grow@?$CWatermarkStack@M$01$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x1801DC2F4 (-Grow@-$CWatermarkStack@M$01$01$09@@AEAAJ_KIIPEAPEAX@Z.c)
 *     ?Grow@?$CWatermarkStack@W4Enum@MilDepthMode@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x1801E394C (-Grow@-$CWatermarkStack@W4Enum@MilDepthMode@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z.c)
 *     ?Grow@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x180214FCC (-Grow@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z.c)
 *     ?HrInit@CBitmapLockUnaligned@@QEAAJPEAVCBitmap@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@II@Z @ 0x1802616FC (-HrInit@CBitmapLockUnaligned@@QEAAJPEAVCBitmap@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlag.c)
 *     ?Grow@?$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@AEAAJ_KIIPEAPEAX@Z @ 0x1802716D0 (-Grow@-$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@AEAAJ_KIIPEAPEAX@Z.c)
 *     ?Grow@?$CWatermarkStack@VCCornerRects@@$07$01$07@@AEAAJ_KIIPEAPEAX@Z @ 0x1802723BC (-Grow@-$CWatermarkStack@VCCornerRects@@$07$01$07@@AEAAJ_KIIPEAPEAX@Z.c)
 *     ?Reset@PaddedBitmap@CCursorState@@QEAAJI_N@Z @ 0x1802BCBEC (-Reset@PaddedBitmap@CCursorState@@QEAAJI_N@Z.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z @ 0x1802BFD08 (-HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z.c)
 *     ?HrInit@CSystemMemoryBitmap@@UEAAJPEAVIBitmapSource@@@Z @ 0x1802BFE70 (-HrInit@CSystemMemoryBitmap@@UEAAJPEAVIBitmapSource@@@Z.c)
 *     ?InitializeForFormatConversion@CScanPipeline@@QEAAJAEBUPixelFormatInfo@@0IE@Z @ 0x1802E6270 (-InitializeForFormatConversion@CScanPipeline@@QEAAJAEBUPixelFormatInfo@@0IE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HrMalloc(unsigned __int64 a1, unsigned __int64 a2, void **a3)
{
  SIZE_T v4; // rdi
  HANDLE ProcessHeap; // rax
  void *v6; // rax

  if ( !a3 || !a2 || !a1 || a1 >= 0xFFFFFFFFFFFFFFFFuLL / a2 )
    return 2147942487LL;
  v4 = a2 * a1;
  ProcessHeap = GetProcessHeap();
  v6 = HeapAlloc(ProcessHeap, 0, v4);
  *a3 = v6;
  if ( v6 )
    return 0LL;
  else
    return 2147942414LL;
}
