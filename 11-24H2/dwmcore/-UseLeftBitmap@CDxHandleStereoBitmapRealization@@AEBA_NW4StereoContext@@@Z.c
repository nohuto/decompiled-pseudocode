/*
 * XREFs of ?UseLeftBitmap@CDxHandleStereoBitmapRealization@@AEBA_NW4StereoContext@@@Z @ 0x1802D9044
 * Callers:
 *     ?GetD2DBitmap@CDxHandleStereoBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802D8C70 (-GetD2DBitmap@CDxHandleStereoBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@.c)
 *     ?GetDeviceTexture@CDxHandleStereoBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802D8D70 (-GetDeviceTexture@CDxHandleStereoBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTex.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleStereoBitmapRealization::UseLeftBitmap(__int64 a1, int a2)
{
  int v2; // r8d
  int v3; // ecx
  bool result; // al

  v2 = *(_DWORD *)(a1 + 240);
  v3 = 0;
  result = 1;
  if ( (v2 & 8) == 0 )
    v3 = a2;
  if ( !v3 )
    return (v2 & 4) == 0;
  if ( v3 == 2 )
    return 0;
  return result;
}
