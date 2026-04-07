/*
 * XREFs of ?_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z @ 0x1800DDCDC
 * Callers:
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x18004232C (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_CleanupHighZOrderStaticWindowClones@CTransitionVisualController@@IEAAXXZ @ 0x180098DE8 (-_CleanupHighZOrderStaticWindowClones@CTransitionVisualController@@IEAAXXZ.c)
 * Callees:
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x180006D78 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ @ 0x1800076C4 (-GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001DE40 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_IsOwnedByWindow@CTransitionVisualController@@IEAA_NPEBVCWindowData@@QEAUHWND__@@@Z @ 0x1800DE01C (-_IsOwnedByWindow@CTransitionVisualController@@IEAA_NPEBVCWindowData@@QEAUHWND__@@@Z.c)
 */

void __fastcall CTransitionVisualController::_CleanupHighZOrderClone(
        CTransitionVisualController *this,
        CTopLevelWindow **a2)
{
  struct CWindowData *WindowData; // rdi
  __int64 v4; // r11
  __int64 i; // r9
  HWND v6; // r8
  int v7; // r9d
  __int64 v8; // r10
  struct CVisual *v9; // rdx
  CContainerVisual *v10; // rcx
  CBaseObject *v11; // rcx

  WindowData = CTopLevelWindow::GetWindowData(*a2);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v4 + 136); i = (unsigned int)(v7 + 1) )
  {
    v6 = *(HWND *)(*(_QWORD *)(*(_QWORD *)(v4 + 112) + 8 * i) + 16LL);
    if ( v6 == *((HWND *)WindowData + 5)
      || CTransitionVisualController::_IsOwnedByWindow((CTransitionVisualController *)v4, WindowData, v6)
      && (*(_DWORD *)(v8 + 24) & 0x10000000) != 0 )
    {
      goto LABEL_8;
    }
  }
  CTransitionVisualController::_MoveWindowOffscreen(*a2, 0);
LABEL_8:
  v9 = a2[1];
  v10 = (CContainerVisual *)*((_QWORD *)v9 + 3);
  if ( v10 )
    CContainerVisual::RemoveChild(v10, v9);
  v11 = a2[1];
  if ( v11 )
  {
    CBaseObject::Release(v11);
    a2[1] = 0LL;
  }
  if ( *a2 )
  {
    CBaseObject::Release(*a2);
    *a2 = 0LL;
  }
}
