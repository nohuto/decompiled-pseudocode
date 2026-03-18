/*
 * XREFs of ?BmlPixelFormatMatchHdrPixelFormat@@YA_NW4_D3DDDIFORMAT@@W4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@_N@Z @ 0x1402DE5CC
 * Callers:
 *     ?IsHdrSourceModePinned@@YA_NPEBVDXGADAPTER@@PEBVDMMVIDPNSOURCEMODESET@@@Z @ 0x1402698C8 (-IsHdrSourceModePinned@@YA_NPEBVDXGADAPTER@@PEBVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     BmlGetRecommendedContentSizeForPath @ 0x1402DC1E4 (BmlGetRecommendedContentSizeForPath.c)
 *     BmlGetNextBestSourceMode @ 0x1402DDD64 (BmlGetNextBestSourceMode.c)
 *     BmlDoesSourceModeObeyConstraint @ 0x1402DE3FC (BmlDoesSourceModeObeyConstraint.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140380FF4 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 * Callees:
 *     <none>
 */

char __fastcall BmlPixelFormatMatchHdrPixelFormat(int a1, int a2, char a3)
{
  char v3; // r10
  char result; // al

  v3 = 0;
  if ( a2 )
  {
    if ( a2 == 1 )
      return ((a1 - 31) & 0xFFFFFFFB) == 0;
    if ( (unsigned int)(a2 - 2) >= 2 )
    {
      WdLogSingleEntry1(1LL, a2);
      result = 0;
      WdLogGlobalForLineNumber = 1483;
      return result;
    }
    return a1 == 113;
  }
  else
  {
    if ( (unsigned int)(a1 - 21) <= 1 || a1 == 32 || a3 && a1 == 31 )
      return 1;
    return v3;
  }
}
