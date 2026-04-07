/*
 * XREFs of ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800EBC10
 * Callers:
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x1800139EC (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z @ 0x180015060 (-_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z.c)
 *     ??1CAnimationComponent@@UEAA@XZ @ 0x180016624 (--1CAnimationComponent@@UEAA@XZ.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18002D918 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_c41abd0b3c99427b9cbe9a707708bfad___ @ 0x1800E9E7C (CTransitionVisualController--ForEachOwnedWindow__lambda_c41abd0b3c99427b9cbe9a707708bfad___.c)
 * Callees:
 *     McTemplateU0p_EtwEventWriteTransfer @ 0x18000EC8C (McTemplateU0p_EtwEventWriteTransfer.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x1800123B8 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z @ 0x180015CC0 (-_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x18003EF90 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180045E04 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800482A0 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x18004B2C0 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ @ 0x18004ED4C (-CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_c41abd0b3c99427b9cbe9a707708bfad___ @ 0x1800E9E7C (CTransitionVisualController--ForEachOwnedWindow__lambda_c41abd0b3c99427b9cbe9a707708bfad___.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CTransitionVisualController::RestoreWindow(
        CTransitionVisualController *this,
        struct CWindowData *a2,
        char a3)
{
  __int64 v6; // rax
  int v7; // ebx
  int v8; // r14d
  struct CTopLevelWindow *v9; // rbx
  char v10; // bp
  __int64 v11; // rcx
  unsigned int v12; // edx
  __int64 v13; // rax
  unsigned int Clone; // eax
  char v15; // r8
  __int64 v16; // rcx
  __int64 v17; // r9
  CVisual *v18; // rcx
  int v19; // eax
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+48h] [rbp+10h] BYREF

  if ( *((_QWORD *)a2 + 3) )
  {
    v6 = *((_QWORD *)a2 + 55);
    if ( v6 )
      *(_BYTE *)(v6 + 248) &= ~0x80u;
    v20 = &CDesktopManager::s_csDwmInstance;
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    v7 = CWindowList::SyncWindowData(
           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
           *((struct IDwmWindow **)a2 + 3),
           a2);
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( v7 >= 0 )
    {
      v8 = *((_DWORD *)a2 + 170);
      *((_DWORD *)a2 + 170) = v8 & 0xFFEFFFFF;
      v9 = (struct CTopLevelWindow *)*((_QWORD *)a2 + 55);
      if ( v9 && (*((_BYTE *)v9 + 249) & 1) != 0 )
      {
        v10 = 1;
        v11 = 0LL;
        v12 = *((_DWORD *)this + 34);
        if ( v12 )
        {
          while ( 1 )
          {
            v13 = *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v11);
            if ( *(_QWORD *)(v13 + 16) == *((_QWORD *)a2 + 5) && *(_DWORD *)(*(_QWORD *)(v13 + 144) + 24LL) == 3 )
              break;
            v11 = (unsigned int)(v11 + 1);
            if ( (unsigned int)v11 >= v12 )
              goto LABEL_13;
          }
          v10 = 0;
        }
LABEL_13:
        Clone = CTransitionVisualController::_FindClone(this, a2, 1);
        v15 = 0;
        if ( Clone >= *((_DWORD *)this + 12) )
          v15 = v10;
        if ( v15 )
        {
          CTransitionVisualController::_MoveWindowOffscreen(v9, 0);
          if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
            McTemplateU0p_EtwEventWriteTransfer(v16, (int)&UdwmSystemAnimation_MoveOffscreen_Stop, *((_QWORD *)a2 + 5));
        }
      }
      CWindowList::ShowHide(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54), a2, 0);
      CWindowList::OnPositionChange(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54), a2, 0);
      CWindowList::UpdateWindowScale(
        *((struct CWindowData ***)CDesktopManager::s_pDesktopManagerInstance + 54),
        a2,
        0LL,
        v17);
      CWindowData::CheckOwnedWindowEligibilityForOwner(a2);
      v18 = (CVisual *)*((_QWORD *)a2 + 55);
      if ( v18 )
      {
        v19 = *((_DWORD *)v18 + 22);
        if ( (v19 & 0x4000000) == 0 )
        {
          *((_DWORD *)v18 + 22) = v19 | 0x4000000;
          CVisual::PropagateDirtyChildren(v18);
        }
      }
      *((_DWORD *)a2 + 170) = v8;
    }
    if ( a3 )
    {
      v20 = (struct _RTL_CRITICAL_SECTION *)this;
      CTransitionVisualController::ForEachOwnedWindow__lambda_c41abd0b3c99427b9cbe9a707708bfad___(
        (__int64)a2,
        (CTransitionVisualController **)&v20,
        1);
    }
  }
}
