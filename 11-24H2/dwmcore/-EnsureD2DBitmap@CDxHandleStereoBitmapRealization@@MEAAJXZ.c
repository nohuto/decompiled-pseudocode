/*
 * XREFs of ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x1802D8BB0
 * Callers:
 *     ?GetD2DBitmap@CDxHandleStereoBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802D8C70 (-GetD2DBitmap@CDxHandleStereoBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@.c)
 *     ?GetDeviceTexture@CDxHandleStereoBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802D8D70 (-GetDeviceTexture@CDxHandleStereoBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTex.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x18005A680 (-InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x180198210 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 *     ?CreateSubResourceBitmap@CD2DBitmap@@QEAAJIPEAPEAV1@@Z @ 0x1802CD1A8 (-CreateSubResourceBitmap@CD2DBitmap@@QEAAJIPEAPEAV1@@Z.c)
 *     ?ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ @ 0x1802D8F00 (-ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ.c)
 */

__int64 __fastcall CDxHandleStereoBitmapRealization::EnsureD2DBitmap(CDxHandleStereoBitmapRealization *this)
{
  int SubResourceBitmap; // ebx
  CD2DBitmap *v3; // rbx
  __int64 v4; // rdx
  unsigned int v5; // eax

  SubResourceBitmap = CDxHandleBitmapRealization::EnsureD2DBitmap(this);
  if ( SubResourceBitmap < 0 )
  {
    v5 = 179;
    goto LABEL_7;
  }
  if ( !*((_QWORD *)this + 50) )
  {
    v3 = (CD2DBitmap *)*((_QWORD *)this + 47);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 50);
    SubResourceBitmap = CD2DBitmap::CreateSubResourceBitmap(v3, v4, (struct CD2DBitmap **)this + 50);
    if ( SubResourceBitmap >= 0 )
    {
      CD2DBitmapCache::InitializeCache(
        *((CD2DBitmapCache **)this + 51),
        (struct ID2DBitmapCacheSource *)((*((_QWORD *)this + 50) + 88LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 50) >> 64)));
      return (unsigned int)SubResourceBitmap;
    }
    v5 = 189;
LABEL_7:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, SubResourceBitmap, v5, 0LL);
    CDxHandleStereoBitmapRealization::ReleaseD2DBitmap(this);
  }
  return (unsigned int)SubResourceBitmap;
}
