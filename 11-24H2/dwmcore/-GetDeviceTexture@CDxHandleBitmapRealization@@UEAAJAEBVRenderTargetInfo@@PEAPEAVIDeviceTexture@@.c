/*
 * XREFs of ?GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180198030
 * Callers:
 *     ?GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180197040 (-GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPE.c)
 *     ?RecordUse@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@UEAAJPEAVCDrawingContext@@@Z @ 0x180197AC0 (-RecordUse@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@U.c)
 *     ?RecordUse@CBitmapRealization@@UEAAJPEAVCDrawingContext@@@Z @ 0x180197D70 (-RecordUse@CBitmapRealization@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetDeviceTexture@CDxHandleBitmapRealization@@WBAA@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802D7E20 (-GetDeviceTexture@CDxHandleBitmapRealization@@WBAA@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTextu.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x180198210 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 *     ?GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@PEA_N@Z @ 0x180198840 (-GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@PEA_N@Z.c)
 *     ?GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ @ 0x18019907C (-GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::GetDeviceTexture(
        CDxHandleBitmapRealization *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  char *v3; // rdi
  __int64 (__fastcall *v6)(CDxHandleBitmapRealization *__hidden); // rax
  CDxHandleBitmapRealization *v7; // rcx
  int v8; // eax
  int v9; // ebx
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // rdx
  int BitmapInternal; // eax
  CComposition *v15; // rcx
  struct IBitmapResource *StockBlackBitmap; // rbx
  __int64 (__fastcall *v17)(struct IBitmapResource *, __int64 *); // rdi
  int v18; // eax
  int v19; // eax
  __int64 v20; // [rsp+50h] [rbp+8h] BYREF
  struct IDeviceTexture *v21; // [rsp+60h] [rbp+18h] BYREF

  v3 = (char *)this - 80;
  *a3 = 0LL;
  v6 = *(__int64 (__fastcall **)(CDxHandleBitmapRealization *__hidden))(*((_QWORD *)this - 10) + 72LL);
  v7 = (CDxHandleBitmapRealization *)((char *)this - 80);
  if ( v6 == CDxHandleBitmapRealization::EnsureD2DBitmap )
    v8 = CDxHandleBitmapRealization::EnsureD2DBitmap(v7);
  else
    v8 = v6(v7);
  v9 = v8;
  if ( v8 >= 0 )
  {
    *a3 = 0LL;
    v11 = *((unsigned __int8 *)a2 + 20);
    v12 = *((unsigned int *)a2 + 2);
    v13 = *(_QWORD *)a2;
    LOBYTE(v20) = 0;
    v21 = 0LL;
    BitmapInternal = CD2DBitmapCache::GetBitmapInternal(v3, v13, v12, v11, &v21, &v20);
    v9 = BitmapInternal;
    if ( BitmapInternal < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, BitmapInternal, 0x64u, 0LL);
    }
    else if ( (_BYTE)v20 )
    {
      v20 = 0LL;
      StockBlackBitmap = CComposition::GetStockBlackBitmap(v15);
      v17 = *(__int64 (__fastcall **)(struct IBitmapResource *, __int64 *))(*(_QWORD *)StockBlackBitmap + 64LL);
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      v18 = v17(StockBlackBitmap, &v20);
      v9 = v18;
      if ( v18 >= 0 )
      {
        v19 = (*(__int64 (__fastcall **)(__int64, const struct RenderTargetInfo *, struct IDeviceTexture **))(*(_QWORD *)v20 + 96LL))(
                v20,
                a2,
                a3);
        v9 = v19;
        if ( v19 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x6Eu, 0LL);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v20);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x6Cu, 0LL);
        if ( v20 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
    }
    else
    {
      *a3 = v21;
      v21 = 0LL;
    }
    if ( v21 )
      (*(void (__fastcall **)(struct IDeviceTexture *))(*(_QWORD *)v21 + 16LL))(v21);
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0xB1u, 0LL);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0xAFu, 0LL);
  }
  return (unsigned int)v9;
}
