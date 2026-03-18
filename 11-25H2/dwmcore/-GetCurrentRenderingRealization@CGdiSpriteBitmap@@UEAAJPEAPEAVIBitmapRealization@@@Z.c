/*
 * XREFs of ?GetCurrentRenderingRealization@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1801044C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ @ 0x180104714 (-ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ?OnMarginsChanged@CGdiSpriteBitmap@@QEAAXXZ @ 0x180104764 (-OnMarginsChanged@CGdiSpriteBitmap@@QEAAXXZ.c)
 *     ?RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ @ 0x180104810 (-RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ.c)
 *     ?UpdatePixelFormat@CGdiSpriteBitmap@@AEAAXW4DXGI_FORMAT@@@Z @ 0x1801049D8 (-UpdatePixelFormat@CGdiSpriteBitmap@@AEAAXW4DXGI_FORMAT@@@Z.c)
 *     ?UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@AEAAXXZ @ 0x180104A30 (-UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ?CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z @ 0x180104AAC (-CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z.c)
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z @ 0x180104D8C (-CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ @ 0x1802DFE50 (-AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGdiSpriteBitmap::GetCurrentRenderingRealization(
        CGdiSpriteBitmap *this,
        struct IBitmapRealization **a2)
{
  struct IBitmapRealization *v4; // rcx
  void (*v5)(void); // rax
  int DeviceBitmap; // ebx
  enum DXGI_FORMAT v8; // edi
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned int v11; // r15d
  unsigned int v12; // r12d
  void *v13; // rbx
  int SectionBitmap; // eax
  int v15; // eax
  struct _LUID v16; // rbx
  void *v17; // rdi
  int v18; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v19[4]; // [rsp+34h] [rbp-54h]
  _DWORD v20[7]; // [rsp+44h] [rbp-44h] BYREF

  *a2 = 0LL;
  if ( !*((_QWORD *)this + 43) )
  {
    DeviceBitmap = 0;
    v8 = *((_DWORD *)this + 8);
    CGdiSpriteBitmap::ReleaseBitmapResources((CGdiSpriteBitmap *)((char *)this - 104));
    v9 = *((_QWORD *)this + 3);
    v18 = 0;
    *(_OWORD *)v19 = 0LL;
    v10 = *(_QWORD *)(v9 + 24);
    memset(v20, 0, sizeof(v20));
    if ( !(unsigned int)DwmGetSurfaceData(v10, &v18) )
    {
      GetLastError();
      goto LABEL_10;
    }
    v11 = v19[0];
    v12 = v19[1];
    if ( v18 == 1 )
    {
      v13 = *(void **)&v20[5];
      *((_DWORD *)this + 84) = v19[3];
      CGdiSpriteBitmap::UpdatePixelFormat((CGdiSpriteBitmap *)((char *)this - 104), v8);
      CGdiSpriteBitmap::UnRegisterWithSurfaceManager((CGdiSpriteBitmap *)((char *)this - 104));
      SectionBitmap = CGdiSpriteBitmap::CreateSectionBitmap((CGdiSpriteBitmap *)((char *)this - 104), v13, v11, v12);
      DeviceBitmap = SectionBitmap;
      if ( SectionBitmap < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, SectionBitmap, 0xB4u, 0LL);
        goto LABEL_23;
      }
    }
    else
    {
      if ( v18 != 2 )
        goto LABEL_10;
      v17 = *(void **)&v20[5];
      v16 = *(struct _LUID *)&v20[3];
      *((_DWORD *)this + 84) = v19[3];
      CGdiSpriteBitmap::UpdatePixelFormat((CGdiSpriteBitmap *)((char *)this - 104), DXGI_FORMAT_B8G8R8A8_UNORM);
      DeviceBitmap = CGdiSpriteBitmap::CreateDeviceBitmap((CGdiSpriteBitmap *)((char *)this - 104), v17, v16, v11, v12);
    }
    if ( !*((_QWORD *)this + 43)
      || (v15 = CGdiSpriteBitmap::RegisterForSignaling((CGdiSpriteBitmap *)((char *)this - 104)),
          DeviceBitmap = v15,
          v15 >= 0) )
    {
LABEL_10:
      CGdiSpriteBitmap::OnMarginsChanged((CGdiSpriteBitmap *)((char *)this - 104));
      if ( DeviceBitmap >= 0 )
        goto LABEL_2;
      goto LABEL_11;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0xCCu, 0LL);
LABEL_23:
    CGdiSpriteBitmap::OnMarginsChanged((CGdiSpriteBitmap *)((char *)this - 104));
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DeviceBitmap, 0xC7u, 0LL);
  }
LABEL_2:
  if ( !*((_QWORD *)this + 43) )
    return 2291674884LL;
  v4 = (struct IBitmapRealization *)*((_QWORD *)this + 43);
  *a2 = v4;
  v5 = *(void (**)(void))(*(_QWORD *)v4 + 8LL);
  if ( (char *)v5 == (char *)CGDISectionBitmapRealization::AddRef )
  {
    CGDISectionBitmapRealization::AddRef(v4);
    return 0LL;
  }
  else
  {
    if ( (char *)v5 == (char *)CMILRefCountImpl::AddReference )
      CMILRefCountImpl::AddReference(v4);
    else
      v5();
    return 0LL;
  }
}
