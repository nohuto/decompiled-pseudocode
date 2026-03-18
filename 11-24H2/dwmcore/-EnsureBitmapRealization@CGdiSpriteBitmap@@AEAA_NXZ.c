/*
 * XREFs of ?EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x180025ED0
 * Callers:
 *     ?ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x18003FA40 (-ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ.c)
 *     ?SetSurface@?$CGdiSpriteBitmapGeneratedT@VCGdiSpriteBitmap@@VCResource@@@@QEAAJPEAUHLSURF__@@@Z @ 0x1801A736C (-SetSurface@-$CGdiSpriteBitmapGeneratedT@VCGdiSpriteBitmap@@VCResource@@@@QEAAJPEAUHLSURF__@@@Z.c)
 *     ?NeedsTiling@CGdiSpriteBitmap@@QEAA_NI@Z @ 0x1801D86F4 (-NeedsTiling@CGdiSpriteBitmap@@QEAA_NI@Z.c)
 *     ?TryGetBitmapRealization@CGdiSpriteBitmap@@UEAAPEAVIBitmapRealization@@XZ @ 0x180291250 (-TryGetBitmapRealization@CGdiSpriteBitmap@@UEAAPEAVIBitmapRealization@@XZ.c)
 * Callees:
 *     ?OnMarginsChanged@CGdiSpriteBitmap@@QEAAXXZ @ 0x180026374 (-OnMarginsChanged@CGdiSpriteBitmap@@QEAAXXZ.c)
 *     ?RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ @ 0x180026420 (-RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ.c)
 *     ?ReleaseBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x18002650C (-ReleaseBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ.c)
 *     ?UpdatePixelFormat@CGdiSpriteBitmap@@AEAAXW4DXGI_FORMAT@@@Z @ 0x1800265E8 (-UpdatePixelFormat@CGdiSpriteBitmap@@AEAAXW4DXGI_FORMAT@@@Z.c)
 *     ?UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@AEAAXXZ @ 0x180026640 (-UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ?CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z @ 0x1800266BC (-CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z.c)
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z @ 0x18002699C (-CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

bool __fastcall CGdiSpriteBitmap::EnsureBitmapRealization(CGdiSpriteBitmap *this)
{
  void *v1; // r12
  enum DXGI_FORMAT v4; // r13d
  int DeviceBitmap; // esi
  void *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // kr00_8
  void *v10; // r15
  int v11; // r14d
  struct _LUID v12; // rbx
  int v13; // r14d
  int v14; // eax
  int SectionBitmap; // eax
  int v16; // [rsp+30h] [rbp-30h] BYREF
  __int128 v17; // [rsp+34h] [rbp-2Ch]
  _BYTE v18[28]; // [rsp+44h] [rbp-1Ch] BYREF

  v1 = 0LL;
  if ( *((_QWORD *)this + 56) )
    return *((_QWORD *)this + 56) != 0LL;
  v4 = *((_DWORD *)this + 34);
  DeviceBitmap = 0;
  v6 = (void *)*((_QWORD *)this + 45);
  if ( v6 )
  {
    CloseHandle(v6);
    *((_QWORD *)this + 45) = 0LL;
  }
  if ( *((_QWORD *)this + 52) )
    *((_QWORD *)this + 52) = 0LL;
  CGdiSpriteBitmap::ReleaseBitmapRealization(this);
  v7 = *((_QWORD *)this + 16);
  v16 = 0;
  v17 = 0LL;
  v8 = *(_QWORD *)(v7 + 24);
  memset(v18, 0, sizeof(v18));
  if ( (unsigned int)DwmGetSurfaceData(v8, &v16) )
  {
    v9 = v17;
    switch ( v16 )
    {
      case 0:
        goto LABEL_17;
      case 1:
        v10 = *(void **)&v18[20];
        v11 = 1;
        break;
      case 2:
        v10 = 0LL;
        v11 = 2;
        v1 = *(void **)&v18[20];
        v4 = DXGI_FORMAT_B8G8R8A8_UNORM;
        break;
      default:
        goto LABEL_17;
    }
    v12 = *(struct _LUID *)&v18[12];
    *((_DWORD *)this + 110) = HIDWORD(v17);
    CGdiSpriteBitmap::UpdatePixelFormat(this, v4);
    v13 = v11 - 1;
    if ( v13 )
    {
      if ( v13 == 1 )
        DeviceBitmap = CGdiSpriteBitmap::CreateDeviceBitmap(this, v1, v12, v9, HIDWORD(v9));
      goto LABEL_14;
    }
    CGdiSpriteBitmap::UnRegisterWithSurfaceManager(this);
    SectionBitmap = CGdiSpriteBitmap::CreateSectionBitmap(this, v10, v9, HIDWORD(v9));
    DeviceBitmap = SectionBitmap;
    if ( SectionBitmap >= 0 )
    {
LABEL_14:
      if ( *((_QWORD *)this + 56) )
      {
        v14 = CGdiSpriteBitmap::RegisterForSignaling(this);
        DeviceBitmap = v14;
        if ( v14 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xCCu, 0LL);
      }
      goto LABEL_17;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SectionBitmap, 0xB4u, 0LL);
  }
  else
  {
    GetLastError();
  }
LABEL_17:
  CGdiSpriteBitmap::OnMarginsChanged(this);
  if ( DeviceBitmap < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DeviceBitmap, 0xC7u, 0LL);
  return *((_QWORD *)this + 56) != 0LL;
}
