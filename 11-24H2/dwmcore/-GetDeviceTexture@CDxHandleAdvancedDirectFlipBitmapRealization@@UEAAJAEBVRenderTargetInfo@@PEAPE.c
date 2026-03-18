/*
 * XREFs of ?GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180197040
 * Callers:
 *     ?GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@WBAA@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802D7E00 (-GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@WBAA@EAAJAEBVRenderTargetInfo@@P.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18010BFE0 (-GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180198030 (-GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@.c)
 *     ?UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1802D8364 (-UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::GetDeviceTexture(
        CDxHandleAdvancedDirectFlipBitmapRealization *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  int updated; // eax
  unsigned int DeviceTexture; // ebx
  unsigned int v9; // [rsp+20h] [rbp-18h]

  *a3 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 40) + 24LL))((char *)this + 320) )
  {
    updated = CDxHandleAdvancedDirectFlipBitmapRealization::UpdateDecodeBitmap((CDxHandleAdvancedDirectFlipBitmapRealization *)((char *)this - 80));
    DeviceTexture = updated;
    if ( updated >= 0 )
    {
      if ( *(_BYTE *)(*((_QWORD *)this + 26) + 136LL) )
      {
        DeviceTexture = CRenderTargetBitmap::GetDeviceTexture(
                          (CRenderTargetBitmap *)(*((_QWORD *)this + 26) + 88LL),
                          a2,
                          a3);
        if ( (DeviceTexture & 0x80000000) == 0 )
          return DeviceTexture;
      }
      else
      {
        *a3 = 0LL;
        DeviceTexture = -2003292412;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DeviceTexture, 0x5Cu, 0LL);
      return DeviceTexture;
    }
    v9 = 89;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, v9, 0LL);
    return DeviceTexture;
  }
  updated = CDxHandleBitmapRealization::GetDeviceTexture(this, a2, a3);
  DeviceTexture = updated;
  if ( updated < 0 )
  {
    v9 = 85;
    goto LABEL_12;
  }
  return DeviceTexture;
}
