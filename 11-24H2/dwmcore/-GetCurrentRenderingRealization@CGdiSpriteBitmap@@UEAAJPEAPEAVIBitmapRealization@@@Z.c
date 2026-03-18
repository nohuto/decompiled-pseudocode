/*
 * XREFs of ?GetCurrentRenderingRealization@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800260D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ @ 0x180026324 (-ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ?OnMarginsChanged@CGdiSpriteBitmap@@QEAAXXZ @ 0x180026374 (-OnMarginsChanged@CGdiSpriteBitmap@@QEAAXXZ.c)
 *     ?RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ @ 0x180026420 (-RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ.c)
 *     ?UpdatePixelFormat@CGdiSpriteBitmap@@AEAAXW4DXGI_FORMAT@@@Z @ 0x1800265E8 (-UpdatePixelFormat@CGdiSpriteBitmap@@AEAAXW4DXGI_FORMAT@@@Z.c)
 *     ?UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@AEAAXXZ @ 0x180026640 (-UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ?CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z @ 0x1800266BC (-CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z.c)
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z @ 0x18002699C (-CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ @ 0x1802D6BB0 (-AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGdiSpriteBitmap::GetCurrentRenderingRealization(
        CGdiSpriteBitmap *this,
        struct IBitmapRealization **a2,
        __int64 a3)
{
  struct IBitmapRealization *v5; // rcx
  void (*v6)(void); // rax
  int DeviceBitmap; // ebx
  enum DXGI_FORMAT v9; // edi
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned int v12; // r15d
  unsigned int v13; // r12d
  void *v14; // rbx
  int SectionBitmap; // eax
  int v16; // eax
  struct _LUID v17; // rbx
  void *v18; // rdi
  int v19; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v20[4]; // [rsp+34h] [rbp-54h]
  _DWORD v21[7]; // [rsp+44h] [rbp-44h] BYREF

  *a2 = 0LL;
  if ( !*((_QWORD *)this + 43) )
  {
    DeviceBitmap = 0;
    v9 = *((_DWORD *)this + 8);
    CGdiSpriteBitmap::ReleaseBitmapResources((CGdiSpriteBitmap *)((char *)this - 104));
    v10 = *((_QWORD *)this + 3);
    v19 = 0;
    *(_OWORD *)v20 = 0LL;
    v11 = *(_QWORD *)(v10 + 24);
    memset(v21, 0, sizeof(v21));
    if ( !(unsigned int)DwmGetSurfaceData(v11, &v19) )
    {
      GetLastError();
      goto LABEL_10;
    }
    v12 = v20[0];
    v13 = v20[1];
    if ( v19 == 1 )
    {
      v14 = *(void **)&v21[5];
      *((_DWORD *)this + 84) = v20[3];
      CGdiSpriteBitmap::UpdatePixelFormat((CGdiSpriteBitmap *)((char *)this - 104), v9);
      CGdiSpriteBitmap::UnRegisterWithSurfaceManager((CGdiSpriteBitmap *)((char *)this - 104));
      SectionBitmap = CGdiSpriteBitmap::CreateSectionBitmap((CGdiSpriteBitmap *)((char *)this - 104), v14, v12, v13);
      DeviceBitmap = SectionBitmap;
      if ( SectionBitmap < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SectionBitmap, 0xB4u, 0LL);
        goto LABEL_23;
      }
    }
    else
    {
      if ( v19 != 2 )
        goto LABEL_10;
      v18 = *(void **)&v21[5];
      v17 = *(struct _LUID *)&v21[3];
      *((_DWORD *)this + 84) = v20[3];
      CGdiSpriteBitmap::UpdatePixelFormat((CGdiSpriteBitmap *)((char *)this - 104), DXGI_FORMAT_B8G8R8A8_UNORM);
      DeviceBitmap = CGdiSpriteBitmap::CreateDeviceBitmap((CGdiSpriteBitmap *)((char *)this - 104), v18, v17, v12, v13);
    }
    if ( !*((_QWORD *)this + 43)
      || (v16 = CGdiSpriteBitmap::RegisterForSignaling((CGdiSpriteBitmap *)((char *)this - 104)),
          DeviceBitmap = v16,
          v16 >= 0) )
    {
LABEL_10:
      CGdiSpriteBitmap::OnMarginsChanged((CGdiSpriteBitmap *)((char *)this - 104));
      if ( DeviceBitmap >= 0 )
        goto LABEL_2;
      goto LABEL_11;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0xCCu, 0LL);
LABEL_23:
    CGdiSpriteBitmap::OnMarginsChanged((CGdiSpriteBitmap *)((char *)this - 104));
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DeviceBitmap, 0xC7u, 0LL);
  }
LABEL_2:
  if ( !*((_QWORD *)this + 43) )
    return 2291674884LL;
  v5 = (struct IBitmapRealization *)*((_QWORD *)this + 43);
  *a2 = v5;
  v6 = *(void (**)(void))(*(_QWORD *)v5 + 8LL);
  if ( (char *)v6 == (char *)CGDISectionBitmapRealization::AddRef )
  {
    CGDISectionBitmapRealization::AddRef(v5, CGDISectionBitmapRealization::AddRef, a3);
    return 0LL;
  }
  else
  {
    if ( (char *)v6 == (char *)CMILRefCountImpl::AddReference )
      CMILRefCountImpl::AddReference(v5);
    else
      v6();
    return 0LL;
  }
}
