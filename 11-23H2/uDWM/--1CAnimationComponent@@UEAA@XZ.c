/*
 * XREFs of ??1CAnimationComponent@@UEAA@XZ @ 0x180016624
 * Callers:
 *     ??_ECAnimationComponent@@UEAAPEAXI@Z @ 0x18000B440 (--_ECAnimationComponent@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z @ 0x1800125DC (-IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800152B0 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     McTemplateU0pdd_EtwEventWriteTransfer @ 0x1800159B4 (McTemplateU0pdd_EtwEventWriteTransfer.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?UnregisterIconicAnimatedVisual@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCIconicAnimatedVisual@@@Z @ 0x1800C411C (-UnregisterIconicAnimatedVisual@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCIconicAnimatedVisual@@.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800EBC10 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 */

void __fastcall CAnimationComponent::~CAnimationComponent(CAnimationComponent *this)
{
  HWND v2; // rdx
  CDesktopManager *v3; // rdi
  HWND v4; // rdx
  CTransitionVisualController *v5; // rsi
  struct CWindowData *WindowDataByHwnd; // rax
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx
  __int64 v9; // rcx
  struct CIconicAnimatedVisual *v10; // rdx
  CBaseObject *v11; // rcx

  *(_QWORD *)this = &CAnimationComponent::`vftable';
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0pdd_EtwEventWriteTransfer(
      (__int64)this,
      (int)&UdwmAnimationComponent_Destroyed,
      *((_QWORD *)this + 2),
      *(_DWORD *)(*((_QWORD *)this + 18) + 72LL),
      *((_BYTE *)this + 24));
  v2 = (HWND)*((_QWORD *)this + 2);
  if ( (unsigned __int64)v2 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v3 = CDesktopManager::s_pDesktopManagerInstance;
    if ( !CAnimationScheduler::IsWindowCurrentlyAnimating(
            *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 23),
            v2,
            68,
            0) )
    {
      v5 = (CTransitionVisualController *)*((_QWORD *)v3 + 24);
      WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(*((CWindowList **)v3 + 54), v4);
      if ( WindowDataByHwnd )
        CTransitionVisualController::RestoreWindow(v5, WindowDataByHwnd, 1);
    }
  }
  v7 = (CBaseObject *)*((_QWORD *)this + 6);
  if ( v7 )
  {
    CBaseObject::Release(v7);
    *((_QWORD *)this + 6) = 0LL;
  }
  v8 = (CBaseObject *)*((_QWORD *)this + 4);
  if ( v8 )
  {
    CBaseObject::Release(v8);
    *((_QWORD *)this + 4) = 0LL;
  }
  v9 = *((_QWORD *)this + 5);
  if ( v9 )
  {
    CBaseObject::Release((CBaseObject *)(v9 + 8));
    *((_QWORD *)this + 5) = 0LL;
  }
  v10 = (struct CIconicAnimatedVisual *)*((_QWORD *)this + 19);
  if ( v10 )
  {
    CImmersiveIconicBitmapRegistry::UnregisterIconicAnimatedVisual(
      *((CImmersiveIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 30),
      v10);
    v11 = (CBaseObject *)*((_QWORD *)this + 19);
    if ( v11 )
    {
      CBaseObject::Release(v11);
      *((_QWORD *)this + 19) = 0LL;
    }
  }
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
