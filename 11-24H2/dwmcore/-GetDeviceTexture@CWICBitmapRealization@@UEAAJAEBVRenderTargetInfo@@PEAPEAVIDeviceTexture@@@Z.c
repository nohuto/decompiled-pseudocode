/*
 * XREFs of ?GetDeviceTexture@CWICBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180197360
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@PEA_N@Z @ 0x180198840 (-GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@PEA_N@Z.c)
 *     ?GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ @ 0x18019907C (-GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWICBitmapRealization::GetDeviceTexture(
        CWICBitmapRealization *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3,
        __int64 a4)
{
  __int64 v5; // r8
  __int64 v7; // rdx
  int BitmapInternal; // eax
  CComposition *v9; // rcx
  unsigned int v10; // ebx
  struct IDeviceTexture *v11; // rax
  struct IBitmapResource *StockBlackBitmap; // rbx
  __int64 (__fastcall *v14)(struct IBitmapResource *, __int64 *); // rsi
  int v15; // eax
  int v16; // eax
  __int64 v17; // [rsp+50h] [rbp+20h] BYREF
  struct IDeviceTexture *v18; // [rsp+58h] [rbp+28h] BYREF

  *a3 = 0LL;
  LOBYTE(a4) = *((_BYTE *)a2 + 20);
  v5 = *((unsigned int *)a2 + 2);
  v7 = *(_QWORD *)a2;
  v18 = 0LL;
  LOBYTE(v17) = 0;
  BitmapInternal = CD2DBitmapCache::GetBitmapInternal((char *)this - 80, v7, v5, a4, &v18, &v17);
  v10 = BitmapInternal;
  if ( BitmapInternal < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, BitmapInternal, 0x64u, 0LL);
  }
  else if ( (_BYTE)v17 )
  {
    v17 = 0LL;
    StockBlackBitmap = CComposition::GetStockBlackBitmap(v9);
    v14 = *(__int64 (__fastcall **)(struct IBitmapResource *, __int64 *))(*(_QWORD *)StockBlackBitmap + 64LL);
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    v15 = v14(StockBlackBitmap, &v17);
    v10 = v15;
    if ( v15 >= 0 )
    {
      v16 = (*(__int64 (__fastcall **)(__int64, const struct RenderTargetInfo *, struct IDeviceTexture **))(*(_QWORD *)v17 + 96LL))(
              v17,
              a2,
              a3);
      v10 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x6Eu, 0LL);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v17);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x6Cu, 0LL);
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
  }
  else
  {
    v11 = v18;
    v18 = 0LL;
    *a3 = v11;
  }
  if ( v18 )
    (*(void (__fastcall **)(struct IDeviceTexture *))(*(_QWORD *)v18 + 16LL))(v18);
  return v10;
}
