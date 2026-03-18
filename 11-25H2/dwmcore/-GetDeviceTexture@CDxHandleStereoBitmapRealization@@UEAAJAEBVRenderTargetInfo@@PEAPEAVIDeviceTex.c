/*
 * XREFs of ?GetDeviceTexture@CDxHandleStereoBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802E2010
 * Callers:
 *     ?GetDeviceTexture@CDxHandleStereoBitmapRealization@@WBAA@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802E20E0 (-GetDeviceTexture@CDxHandleStereoBitmapRealization@@WBAA@EAAJAEBVRenderTargetInfo@@PEAPEAVIDevic.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCachedTexture@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18018B620 (-GetCachedTexture@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x1802E1E50 (-EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ.c)
 *     ?UseLeftBitmap@CDxHandleStereoBitmapRealization@@AEBA_NW4StereoContext@@@Z @ 0x1802E22E4 (-UseLeftBitmap@CDxHandleStereoBitmapRealization@@AEBA_NW4StereoContext@@@Z.c)
 */

__int64 __fastcall CDxHandleStereoBitmapRealization::GetDeviceTexture(
        CD2DBitmapCache **this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  CD2DBitmapCache *v3; // rsi
  int v7; // eax
  unsigned int v8; // ebx
  int CachedTexture; // eax
  int v10; // eax

  *a3 = 0LL;
  v3 = (CD2DBitmapCache *)(this - 10);
  v7 = CDxHandleStereoBitmapRealization::EnsureD2DBitmap((CDxHandleStereoBitmapRealization *)(this - 10));
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x4Fu, 0LL);
  }
  else if ( (unsigned __int8)CDxHandleStereoBitmapRealization::UseLeftBitmap(v3, *((unsigned int *)a2 + 3)) )
  {
    CachedTexture = CD2DBitmapCache::GetCachedTexture(v3, a2, a3);
    v8 = CachedTexture;
    if ( CachedTexture < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, CachedTexture, 0x53u, 0LL);
  }
  else
  {
    v10 = CD2DBitmapCache::GetCachedTexture(this[41], a2, a3);
    v8 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x58u, 0LL);
  }
  return v8;
}
