/*
 * XREFs of ?GetDeviceTexture@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801978E0
 * Callers:
 *     ?GetDeviceTexture@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBAA@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802D9720 (-GetDeviceTexture@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBi_ea_1802D9720.c)
 *     ?GetDeviceTexture@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBEA@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802D9740 (-GetDeviceTexture@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBi_ea_1802D9740.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x180198210 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 *     ?GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@PEA_N@Z @ 0x180198840 (-GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@PEA_N@Z.c)
 *     ?GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ @ 0x18019907C (-GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetDeviceTexture(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3)
{
  __int64 v3; // rdi
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
  __int64 v21; // [rsp+60h] [rbp+18h] BYREF

  v3 = a1 - 80;
  *a3 = 0LL;
  v6 = *(__int64 (__fastcall **)(CDxHandleBitmapRealization *__hidden))(*(_QWORD *)(a1 - 80) + 72LL);
  v7 = (CDxHandleBitmapRealization *)(a1 - 80);
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
    v13 = *a2;
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
        v19 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD *))(*(_QWORD *)v20 + 96LL))(v20, a2, a3);
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
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0xB1u, 0LL);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0xAFu, 0LL);
  }
  return (unsigned int)v9;
}
