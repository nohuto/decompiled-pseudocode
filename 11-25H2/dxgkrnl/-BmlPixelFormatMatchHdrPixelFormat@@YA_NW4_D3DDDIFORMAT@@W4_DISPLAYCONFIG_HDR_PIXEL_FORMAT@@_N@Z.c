/*
 * XREFs of ?BmlPixelFormatMatchHdrPixelFormat@@YA_NW4_D3DDDIFORMAT@@W4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@_N@Z @ 0x1402C778C
 * Callers:
 *     ?IsHdrSourceModePinned@@YA_NPEBVDXGADAPTER@@PEBVDMMVIDPNSOURCEMODESET@@@Z @ 0x1402629C8 (-IsHdrSourceModePinned@@YA_NPEBVDXGADAPTER@@PEBVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     BmlDoesSourceModeObeyConstraint @ 0x1402C75BC (BmlDoesSourceModeObeyConstraint.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140311874 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
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
      return a1 == 31;
    if ( (unsigned int)(a2 - 2) > 1 )
    {
      WdLogSingleEntry1(1LL, a2);
      result = 0;
      WdLogGlobalForLineNumber = 1461;
      return result;
    }
    return a1 == 113;
  }
  if ( (unsigned int)(a1 - 21) <= 1 || a1 == 32 || a3 && a1 == 31 )
    return 1;
  return v3;
}
