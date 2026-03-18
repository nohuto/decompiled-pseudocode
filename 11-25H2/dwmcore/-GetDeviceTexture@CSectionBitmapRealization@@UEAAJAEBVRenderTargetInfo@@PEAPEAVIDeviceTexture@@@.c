/*
 * XREFs of ?GetDeviceTexture@CSectionBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18018A450
 * Callers:
 *     ?GetDeviceTexture@?$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@@@@WBDI@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802DFEC0 (-GetDeviceTexture@-$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealizatio.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureBitmapCacheSource@CSectionBitmapRealization@@MEAAJXZ @ 0x18018A660 (-EnsureBitmapCacheSource@CSectionBitmapRealization@@MEAAJXZ.c)
 *     ?GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@PEA_N@Z @ 0x18018B7A0 (-GetBitmapInternal@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEAPEAVID2DBitmap@@PEA_N@Z.c)
 *     ?GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ @ 0x18018C0C0 (-GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSectionBitmapRealization::GetDeviceTexture(
        CSectionBitmapRealization *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  char *v3; // rdi
  __int64 (__fastcall *v7)(CSectionBitmapRealization *__hidden); // rax
  CSectionBitmapRealization *v8; // rcx
  int v9; // eax
  __int64 v10; // r9
  int v11; // ebx
  __int64 v12; // r8
  __int64 v13; // rdx
  int BitmapInternal; // eax
  CComposition *v15; // rcx
  struct IBitmapResource *StockBlackBitmap; // rbx
  __int64 (__fastcall *v18)(struct IBitmapResource *, __int64 *); // r14
  int v19; // eax
  int v20; // eax
  __int64 v21; // [rsp+60h] [rbp+30h] BYREF
  struct IDeviceTexture *v22; // [rsp+70h] [rbp+40h] BYREF

  v3 = (char *)this - 80;
  *a3 = 0LL;
  v7 = *(__int64 (__fastcall **)(CSectionBitmapRealization *__hidden))(*((_QWORD *)this - 10) + 72LL);
  v8 = (CSectionBitmapRealization *)((char *)this - 80);
  if ( v7 == CSectionBitmapRealization::EnsureBitmapCacheSource )
    v9 = CSectionBitmapRealization::EnsureBitmapCacheSource(v8);
  else
    v9 = v7(v8);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180337838, 2u, v9, 0x32u, 0LL);
  }
  else if ( *((_QWORD *)this + 33) )
  {
    *a3 = 0LL;
    LOBYTE(v10) = *((_BYTE *)a2 + 20);
    v12 = *((unsigned int *)a2 + 2);
    v13 = *(_QWORD *)a2;
    LOBYTE(v21) = 0;
    v22 = 0LL;
    BitmapInternal = CD2DBitmapCache::GetBitmapInternal(v3, v13, v12, v10, &v22, &v21);
    v11 = BitmapInternal;
    if ( BitmapInternal < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, BitmapInternal, 0x64u, 0LL);
    }
    else if ( (_BYTE)v21 )
    {
      v21 = 0LL;
      StockBlackBitmap = CComposition::GetStockBlackBitmap(v15);
      v18 = *(__int64 (__fastcall **)(struct IBitmapResource *, __int64 *))(*(_QWORD *)StockBlackBitmap + 64LL);
      if ( v21 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      v19 = v18(StockBlackBitmap, &v21);
      v11 = v19;
      if ( v19 >= 0 )
      {
        v20 = (*(__int64 (__fastcall **)(__int64, const struct RenderTargetInfo *, struct IDeviceTexture **))(*(_QWORD *)v21 + 96LL))(
                v21,
                a2,
                a3);
        v11 = v20;
        if ( v20 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0x6Eu, 0LL);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v21);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x6Cu, 0LL);
        if ( v21 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      }
    }
    else
    {
      *a3 = v22;
      v22 = 0LL;
    }
    if ( v22 )
      (*(void (__fastcall **)(struct IDeviceTexture *))(*(_QWORD *)v22 + 16LL))(v22);
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180337838, 2u, v11, 0x36u, 0LL);
  }
  else
  {
    return (unsigned int)-2003292412;
  }
  return (unsigned int)v11;
}
