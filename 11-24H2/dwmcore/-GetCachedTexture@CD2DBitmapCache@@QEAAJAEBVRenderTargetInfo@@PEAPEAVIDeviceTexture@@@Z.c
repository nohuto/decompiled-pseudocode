/*
 * XREFs of ?GetCachedTexture@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801986C0
 * Callers:
 *     ?GetDeviceTexture@CColorKeyBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180197260 (-GetDeviceTexture@CColorKeyBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@.c)
 *     ?RecordUse@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@UEAAJPEAVCDrawingContext@@@Z @ 0x180197AC0 (-RecordUse@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@U.c)
 *     ?RecordUse@CBitmapRealization@@UEAAJPEAVCDrawingContext@@@Z @ 0x180197D70 (-RecordUse@CBitmapRealization@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetDeviceTexture@CDxHandleStereoBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802D8D70 (-GetDeviceTexture@CDxHandleStereoBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTex.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@PEA_N@Z @ 0x180198840 (-GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@PEA_N@Z.c)
 *     ?GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ @ 0x18019907C (-GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DBitmapCache::GetCachedTexture(
        CD2DBitmapCache *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // rdx
  int BitmapInternal; // eax
  CComposition *v9; // rcx
  unsigned int v10; // edi
  struct IBitmapResource *StockBlackBitmap; // rdi
  __int64 (__fastcall *v13)(struct IBitmapResource *, __int64 *); // rbp
  int v14; // eax
  int v15; // eax
  __int64 v16; // [rsp+58h] [rbp+10h] BYREF
  struct IDeviceTexture *v17; // [rsp+60h] [rbp+18h] BYREF

  *a3 = 0LL;
  v5 = *((unsigned __int8 *)a2 + 20);
  v6 = *((unsigned int *)a2 + 2);
  v7 = *(_QWORD *)a2;
  LOBYTE(v16) = 0;
  v17 = 0LL;
  BitmapInternal = CD2DBitmapCache::GetBitmapInternal(this, v7, v6, v5, &v17, &v16);
  v10 = BitmapInternal;
  if ( BitmapInternal < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, BitmapInternal, 0x64u, 0LL);
  }
  else if ( (_BYTE)v16 )
  {
    v16 = 0LL;
    StockBlackBitmap = CComposition::GetStockBlackBitmap(v9);
    v13 = *(__int64 (__fastcall **)(struct IBitmapResource *, __int64 *))(*(_QWORD *)StockBlackBitmap + 64LL);
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    v14 = v13(StockBlackBitmap, &v16);
    v10 = v14;
    if ( v14 >= 0 )
    {
      v15 = (*(__int64 (__fastcall **)(__int64, const struct RenderTargetInfo *, struct IDeviceTexture **))(*(_QWORD *)v16 + 96LL))(
              v16,
              a2,
              a3);
      v10 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x6Eu, 0LL);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v16);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x6Cu, 0LL);
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
  }
  else
  {
    *a3 = v17;
    v17 = 0LL;
  }
  if ( v17 )
    (*(void (__fastcall **)(struct IDeviceTexture *))(*(_QWORD *)v17 + 16LL))(v17);
  return v10;
}
