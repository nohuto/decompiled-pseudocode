/*
 * XREFs of ?SetBlurredWallpaperSurface@CWindowList@@UEAAJPEAXPEBUtagRECT@@@Z @ 0x180020D50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18001DCB4 (-InternalRelease@-$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$CreateProxyFromSharedHandle@VCVisualSurfaceProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualSurfaceProxy@@@Z @ 0x18002113C (--$CreateProxyFromSharedHandle@VCVisualSurfaceProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualSurfac.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18004DAFC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWindowList::SetBlurredWallpaperSurface(CWindowList *this, void *a2, const struct tagRECT *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rbx
  int v8; // eax
  char *v9; // rdi
  CBaseObject *v10; // rcx
  CBaseObject **v11; // rcx
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  __int64 v13; // r8
  int v14; // eax
  unsigned __int64 v16; // [rsp+30h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+38h] [rbp-8h] BYREF
  CBaseObject *v18; // [rsp+78h] [rbp+38h] BYREF
  CBaseObject *v19; // [rsp+88h] [rbp+48h] BYREF

  v17 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 0;
  if ( a2 )
  {
    v18 = 0LL;
    v7 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
    Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease(&v18);
    v8 = CCompositor::CreateProxyFromSharedHandle<CVisualSurfaceProxy>(v7, a2, &v18);
    v6 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x1293u, 0LL);
      Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease(&v18);
      goto LABEL_9;
    }
    v9 = (char *)this + 96;
    v10 = v18;
    v18 = 0LL;
    v19 = (CBaseObject *)*((_QWORD *)this + 12);
    *((_QWORD *)this + 12) = v10;
    Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease(&v19);
    v11 = &v18;
  }
  else
  {
    v9 = (char *)this + 96;
    v11 = (CBaseObject **)((char *)this + 96);
  }
  Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease(v11);
  *(struct tagRECT *)((char *)this + 104) = *a3;
  GetDesktopID(1LL, &v16);
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(this, v16);
  if ( RootVisualForDesktop )
  {
    if ( *(_QWORD *)v9 )
      v13 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)v9 + 16LL) + 24LL);
    else
      v13 = 0LL;
    v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)RootVisualForDesktop
                                                                                                 + 2)
                                                                                               + 16LL)
                                                                                   + 16LL)
                                                                     + 288LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)RootVisualForDesktop + 2) + 16LL) + 16LL),
            *(unsigned int *)(*(_QWORD *)(*((_QWORD *)RootVisualForDesktop + 2) + 16LL) + 24LL),
            v13,
            (char *)this + 104);
    v6 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x12A4u, 0LL);
  }
LABEL_9:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v17);
  return v6;
}
