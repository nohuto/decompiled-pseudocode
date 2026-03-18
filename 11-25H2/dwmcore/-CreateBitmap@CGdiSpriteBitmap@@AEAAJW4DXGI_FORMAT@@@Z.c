/*
 * XREFs of ?CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z @ 0x1801040AC
 * Callers:
 *     ?OnPixelFormatChanging@CGdiSpriteBitmap@@QEAAJW4DXGI_FORMAT@@@Z @ 0x180078398 (-OnPixelFormatChanging@CGdiSpriteBitmap@@QEAAJW4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ @ 0x180104714 (-ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ?OnMarginsChanged@CGdiSpriteBitmap@@QEAAXXZ @ 0x180104764 (-OnMarginsChanged@CGdiSpriteBitmap@@QEAAXXZ.c)
 *     ?RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ @ 0x180104810 (-RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ.c)
 *     ?UpdatePixelFormat@CGdiSpriteBitmap@@AEAAXW4DXGI_FORMAT@@@Z @ 0x1801049D8 (-UpdatePixelFormat@CGdiSpriteBitmap@@AEAAXW4DXGI_FORMAT@@@Z.c)
 *     ?UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@AEAAXXZ @ 0x180104A30 (-UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ?CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z @ 0x180104AAC (-CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z.c)
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z @ 0x180104D8C (-CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::CreateBitmap(CGdiSpriteBitmap *this, enum DXGI_FORMAT a2)
{
  unsigned int DeviceBitmap; // edi
  __int64 v5; // rcx
  __int64 v6; // rcx
  void *v7; // r14
  int v8; // esi
  void *v9; // r15
  int v10; // esi
  int SectionBitmap; // eax
  int v12; // eax
  int v14; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v15[4]; // [rsp+34h] [rbp-2Ch]
  _BYTE v16[28]; // [rsp+44h] [rbp-1Ch] BYREF

  DeviceBitmap = 0;
  CGdiSpriteBitmap::ReleaseBitmapResources(this);
  v5 = *((_QWORD *)this + 16);
  v14 = 0;
  *(_OWORD *)v15 = 0LL;
  v6 = *(_QWORD *)(v5 + 24);
  memset(v16, 0, sizeof(v16));
  if ( !(unsigned int)DwmGetSurfaceData(v6, &v14) )
  {
    GetLastError();
    goto LABEL_12;
  }
  if ( v14 )
  {
    if ( v14 == 1 )
    {
      v7 = *(void **)&v16[20];
      v8 = 1;
      v9 = 0LL;
    }
    else
    {
      if ( v14 != 2 )
        goto LABEL_12;
      v9 = *(void **)&v16[20];
      v8 = 2;
      a2 = DXGI_FORMAT_B8G8R8A8_UNORM;
      v7 = 0LL;
    }
    *((_DWORD *)this + 110) = v15[3];
    CGdiSpriteBitmap::UpdatePixelFormat(this, a2);
    v10 = v8 - 1;
    if ( v10 )
    {
      if ( v10 == 1 )
        DeviceBitmap = CGdiSpriteBitmap::CreateDeviceBitmap(this, v9, *(struct _LUID *)&v16[12], v15[0], v15[1]);
    }
    else
    {
      CGdiSpriteBitmap::UnRegisterWithSurfaceManager(this);
      SectionBitmap = CGdiSpriteBitmap::CreateSectionBitmap(this, v7, v15[0], v15[1]);
      DeviceBitmap = SectionBitmap;
      if ( SectionBitmap < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, SectionBitmap, 0xB4u, 0LL);
        goto LABEL_12;
      }
    }
    if ( *((_QWORD *)this + 56) )
    {
      v12 = CGdiSpriteBitmap::RegisterForSignaling(this);
      DeviceBitmap = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0xCCu, 0LL);
    }
  }
LABEL_12:
  CGdiSpriteBitmap::OnMarginsChanged(this);
  return DeviceBitmap;
}
