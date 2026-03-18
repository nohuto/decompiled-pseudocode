/*
 * XREFs of ?RecordUse@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@UEAAJPEAVCDrawingContext@@@Z @ 0x180197AC0
 * Callers:
 *     ?RecordUse@?$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@@@@WBDI@EAAJPEAVCDrawingContext@@@Z @ 0x1802D6E90 (-RecordUse@-$IBitmapRealizationMethodsT@VCSectionBitmapRealization@@VIGDIBitmapRealization@@@@WB.c)
 *     ?RecordUse@?$IBitmapRealizationMethodsT@VCBitmapRealization@@VIYUVSwapChainRealization@@@@WBAA@EAAJPEAVCDrawingContext@@@Z @ 0x1802D8140 (-RecordUse@-$IBitmapRealizationMethodsT@VCBitmapRealization@@VIYUVSwapChainRealization@@@@WBAA@E.c)
 *     ?RecordUse@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBEA@EAAJPEAVCDrawingContext@@@Z @ 0x1802D98C0 (-RecordUse@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@W.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180198030 (-GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@.c)
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x180198210 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 *     ?GetCachedTexture@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801986C0 (-GetCachedTexture@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?GetDeviceTexture@CDxHandleYUVBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180198FC0 (-GetDeviceTexture@CDxHandleYUVBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTextur.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::RecordUse(
        CDxHandleYUVBitmapRealization *this,
        __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  const struct RenderTargetInfo *v6; // r14
  int (*v7)(CDxHandleYUVBitmapRealization *__hidden, const struct RenderTargetInfo *, struct IDeviceTexture **); // rax
  __int64 (__fastcall *v8)(CDxHandleBitmapRealization *__hidden); // rax
  CDxHandleBitmapRealization *v9; // rcx
  int v10; // eax
  int v11; // ebx
  int v12; // ecx
  int CachedTexture; // eax
  int DeviceTexture; // eax
  int v16; // ecx
  struct IDeviceTexture *v17; // [rsp+30h] [rbp-58h] BYREF
  int v18; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v19[16]; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2 + 24) + 16LL))(a2 + 24);
  v5 = *(_QWORD *)this;
  v6 = (const struct RenderTargetInfo *)v4;
  v17 = 0LL;
  v7 = *(int (**)(CDxHandleYUVBitmapRealization *__hidden, const struct RenderTargetInfo *, struct IDeviceTexture **))(v5 + 104);
  if ( (char *)v7 != (char *)CDxHandleBitmapRealization::GetDeviceTexture )
  {
    if ( (char *)v7 == (char *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetDeviceTexture )
    {
      DeviceTexture = CDxHandleBitmapRealization::GetDeviceTexture(this, v6, &v17);
    }
    else
    {
      if ( v7 == CDxHandleYUVBitmapRealization::GetDeviceTexture )
      {
        v11 = CDxHandleYUVBitmapRealization::GetDeviceTexture(this, v6, &v17);
        goto LABEL_6;
      }
      DeviceTexture = ((__int64 (__fastcall *)(CDxHandleYUVBitmapRealization *, const struct RenderTargetInfo *, struct IDeviceTexture **))v7)(
                        this,
                        v6,
                        &v17);
    }
    v11 = DeviceTexture;
    goto LABEL_6;
  }
  v8 = *(__int64 (__fastcall **)(CDxHandleBitmapRealization *__hidden))(*((_QWORD *)this - 10) + 72LL);
  v9 = (CDxHandleYUVBitmapRealization *)((char *)this - 80);
  if ( v8 == CDxHandleBitmapRealization::EnsureD2DBitmap )
    v10 = CDxHandleBitmapRealization::EnsureD2DBitmap(v9);
  else
    v10 = v8(v9);
  v11 = v10;
  if ( v10 >= 0 )
  {
    CachedTexture = CD2DBitmapCache::GetCachedTexture((CDxHandleYUVBitmapRealization *)((char *)this - 80), v6, &v17);
    v11 = CachedTexture;
    if ( CachedTexture < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, CachedTexture, 0xB1u, 0LL);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0xAFu, 0LL);
  }
LABEL_6:
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x47,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\bitmaprealization.cpp",
      (const char *)(unsigned int)v11);
    if ( v17 )
      (*(void (__fastcall **)(struct IDeviceTexture *))(*(_QWORD *)v17 + 16LL))(v17);
    return (unsigned int)v11;
  }
  else
  {
    (*(void (__fastcall **)(CDxHandleYUVBitmapRealization *, int *))(*(_QWORD *)this + 48LL))(this, &v18);
    if ( ((v18 + 3) & 0xFFFFFFFD) != 0 )
    {
      v16 = *(_DWORD *)(a2 + 64);
      if ( v18 == -1 || v18 == v16 || v16 == -3 )
        *(_BYTE *)(a2 + 7981) = 1;
      else
        *(_BYTE *)(a2 + 7984) = 1;
    }
    if ( (*(unsigned __int8 (__fastcall **)(CDxHandleYUVBitmapRealization *))(*(_QWORD *)this + 56LL))(this) )
    {
      if ( *((_BYTE *)g_pComposition + 6466) )
        *(_BYTE *)(a2 + 7983) = 1;
      else
        *(_BYTE *)(a2 + 7980) = 1;
    }
    v12 = *(_DWORD *)((*(__int64 (__fastcall **)(char *, _BYTE *))(*((_QWORD *)v17 + 1) + 24LL))((char *)v17 + 8, v19)
                    + 8);
    if ( v12 == 1 )
    {
LABEL_15:
      *(_BYTE *)(a2 + 7982) = 1;
    }
    else
    {
      switch ( v12 )
      {
        case 3:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 21:
        case 23:
        case 24:
          goto LABEL_15;
        default:
          break;
      }
    }
    if ( v17 )
      (*(void (__fastcall **)(struct IDeviceTexture *))(*(_QWORD *)v17 + 16LL))(v17);
    return 0LL;
  }
}
