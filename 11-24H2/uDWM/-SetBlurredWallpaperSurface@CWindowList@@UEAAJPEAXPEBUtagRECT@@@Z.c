/*
 * XREFs of ?SetBlurredWallpaperSurface@CWindowList@@UEAAJPEAXPEBUtagRECT@@@Z @ 0x180076F00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18003340C (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?SetBlurredWallpaperSurface@CVisual@@QEAAJPEAVCResourceProxy@@PEBUtagRECT@@@Z @ 0x180077090 (-SetBlurredWallpaperSurface@CVisual@@QEAAJPEAVCResourceProxy@@PEBUtagRECT@@@Z.c)
 *     ?CreateVisualSurfaceProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualSurfaceProxy@@@Z @ 0x18009B418 (-CreateVisualSurfaceProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualSurfaceProxy@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWindowList::SetBlurredWallpaperSurface(CWindowList *this, void *a2, const struct tagRECT *a3)
{
  unsigned int v6; // ebx
  struct CResourceProxy **v7; // rdi
  CVisual *RootVisualForDesktop; // rax
  int v9; // eax
  CCompositor *v11; // rbx
  int v12; // eax
  struct CVisualSurfaceProxy *v13; // rdx
  CBaseObject *v14; // rax
  CBaseObject *v15; // rcx
  struct CVisualSurfaceProxy *v16; // [rsp+78h] [rbp+38h] BYREF
  unsigned __int64 v17; // [rsp+88h] [rbp+48h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 0;
  if ( a2 )
  {
    v16 = 0LL;
    v11 = (CCompositor *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v16);
    v12 = CCompositor::CreateVisualSurfaceProxyFromSharedHandle(v11, a2, &v16);
    v6 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x13C4u, 0LL);
      Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v16);
      goto LABEL_6;
    }
    v7 = (struct CResourceProxy **)((char *)this + 96);
    v13 = v16;
    v14 = 0LL;
    v16 = 0LL;
    v15 = (CBaseObject *)*((_QWORD *)this + 12);
    *((_QWORD *)this + 12) = v13;
    if ( v15 )
    {
      CBaseObject::Release(v15);
      v14 = v16;
    }
    if ( v14 )
    {
      v16 = 0LL;
      CBaseObject::Release(v14);
    }
  }
  else
  {
    v7 = (struct CResourceProxy **)((char *)this + 96);
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease((CBaseObject **)this + 12);
  }
  *(struct tagRECT *)((char *)this + 104) = *a3;
  v17 = 0LL;
  GetDesktopID(2LL, &v17);
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(this, v17);
  if ( RootVisualForDesktop )
  {
    v9 = CVisual::SetBlurredWallpaperSurface(RootVisualForDesktop, *v7, (const struct tagRECT *)((char *)this + 104));
    v6 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x13D5u, 0LL);
  }
LABEL_6:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v6;
}
