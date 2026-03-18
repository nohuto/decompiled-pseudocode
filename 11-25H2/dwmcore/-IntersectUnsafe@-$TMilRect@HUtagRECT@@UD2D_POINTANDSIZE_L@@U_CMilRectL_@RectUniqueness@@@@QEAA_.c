/*
 * XREFs of ?IntersectUnsafe@?$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1801D6420
 * Callers:
 *     ?SetPerPresentDisplayScanoutOptions@CDDisplaySwapChain@@IEAAJPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IPEAUIDisplayScanout@Core@Display@Devices@Windows@@_NW4DXGI_HDR_METADATA_TYPE@@PEBX@Z @ 0x180171CE0 (-SetPerPresentDisplayScanoutOptions@CDDisplaySwapChain@@IEAAJPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@.c)
 *     ?GetBits@COffScreenRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x18028AAF0 (-GetBits@COffScreenRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z.c)
 *     ?NotifyRenderedRect@CCompSwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1802D1000 (-NotifyRenderedRect@CCompSwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DR.c)
 *     ?NotifyRenderedRect@CLegacyRemotingSwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1802D5930 (-NotifyRenderedRect@CLegacyRemotingSwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_.c)
 * Callees:
 *     <none>
 */

char __fastcall TMilRect<int,tagRECT,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::IntersectUnsafe(int *a1, int *a2)
{
  int v2; // eax
  int v3; // r8d
  int v4; // eax
  int v5; // r9d
  int v6; // eax
  int v7; // r10d
  int v8; // r11d
  int v9; // eax
  char result; // al

  v2 = *a2;
  v3 = *a1;
  if ( *a2 > *a1 )
  {
    *a1 = v2;
    v3 = v2;
  }
  v4 = a2[1];
  v5 = a1[1];
  if ( v4 > v5 )
  {
    a1[1] = v4;
    v5 = v4;
  }
  v6 = a2[2];
  v7 = a1[2];
  if ( v6 < v7 )
  {
    a1[2] = v6;
    v7 = v6;
  }
  v8 = a2[3];
  v9 = a1[3];
  if ( v8 < v9 )
  {
    a1[3] = v8;
    v9 = v8;
  }
  if ( v7 > v3 && v9 > v5 )
    return 1;
  result = 0;
  *((_QWORD *)a1 + 1) = 0LL;
  *(_QWORD *)a1 = 0LL;
  return result;
}
