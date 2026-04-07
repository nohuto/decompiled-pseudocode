/*
 * XREFs of ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x180043B7C
 * Callers:
 *     ?_CleanupTransition@CAnimationScheduler@@AEAAXXZ @ 0x180043A6C (-_CleanupTransition@CAnimationScheduler@@AEAAXXZ.c)
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x180044040 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ??1CTransitionVisualController@@QEAA@XZ @ 0x1800DCC88 (--1CTransitionVisualController@@QEAA@XZ.c)
 *     ?OnAnimationComplete@CTransitionVisualController@@UEAAJI@Z @ 0x1800DD9E0 (-OnAnimationComplete@CTransitionVisualController@@UEAAJI@Z.c)
 * Callees:
 *     ?DiscardStoredSnapshot@CTransitionVisualController@@QEAAJPEAUHWND__@@@Z @ 0x180003CDC (-DiscardStoredSnapshot@CTransitionVisualController@@QEAAJPEAUHWND__@@@Z.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x180006D78 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001DE40 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180020554 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x1800205B0 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?RemoveAllChildren@CContainerVisual@@QEAAXXZ @ 0x180021904 (-RemoveAllChildren@CContainerVisual@@QEAAXXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveAt@?$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAJI@Z @ 0x1800444CC (-RemoveAt@-$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAJI@Z.c)
 *     ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x18006C3AC (-ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z.c)
 *     ?RemoveAt@?$DynArray@UCFlickTextFeedback@@$0A@@@QEAAJI@Z @ 0x180083770 (-RemoveAt@-$DynArray@UCFlickTextFeedback@@$0A@@@QEAAJI@Z.c)
 *     ?RemoveAt@?$DynArray@UTransitionBitmap@CTransitionVisualController@@$0A@@@QEAAJI@Z @ 0x18008A6A0 (-RemoveAt@-$DynArray@UTransitionBitmap@CTransitionVisualController@@$0A@@@QEAAJI@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180093C5C (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x180098BEC (McTemplateU0q_EtwEventWriteTransfer.c)
 *     ?_CleanupHighZOrderStaticWindowClones@CTransitionVisualController@@IEAAXXZ @ 0x180098DE8 (-_CleanupHighZOrderStaticWindowClones@CTransitionVisualController@@IEAAXXZ.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800991E4 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 */

__int64 __fastcall CTransitionVisualController::CleanupTransition(CTransitionVisualController *this)
{
  CAnimationEngine *v2; // rax
  __int64 v3; // rcx
  CAnimationEngine *v4; // rdi
  int v5; // eax
  _QWORD *v6; // rdi
  unsigned int v7; // ebp
  __int64 v8; // rsi
  CBaseObject *v9; // rcx
  CBaseObject ***v10; // rdi
  CBaseObject **v11; // rax
  struct CTopLevelWindow *v12; // rcx
  CBaseObject *v13; // rcx
  CBaseObject *v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // ecx
  __int64 v17; // rdi
  struct CVisual *v18; // rdx
  CContainerVisual *v19; // rcx
  __int64 v20; // rdx
  CBaseObject *v21; // rcx
  CBaseObject *v22; // rcx
  CBaseObject *v23; // rcx
  CBaseObject *v24; // rcx
  CBaseObject *v25; // rcx
  struct CWindowData *v27; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 22) != -1 )
  {
    v2 = CDesktopManager::AcquireAnimationEngine();
    v4 = v2;
    if ( v2 )
    {
      CAnimationEngine::ScheduleStopAnimation(v2, *((_DWORD *)this + 22));
      CAnimationEngine::Release(v4);
    }
    *((_DWORD *)this + 22) = -1;
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0q_EtwEventWriteTransfer(v3, &UdwmTransitionVisualController_Stop, *((unsigned int *)this + 26));
  }
  v5 = *((_DWORD *)this + 44);
  if ( v5 )
  {
    v6 = (_QWORD *)((char *)this + 152);
    do
    {
      v7 = v5 - 1;
      v8 = 56LL * (unsigned int)(v5 - 1);
      v9 = *(CBaseObject **)(*v6 + v8 + 48);
      if ( v9 )
      {
        CBaseObject::Release(v9);
        *(_QWORD *)(*v6 + v8 + 48) = 0LL;
      }
      DynArray<CTransitionVisualController::TransitionBitmap,0>::RemoveAt((char *)this + 152, v7);
      v5 = *((_DWORD *)this + 44);
    }
    while ( v5 );
  }
  while ( *((_DWORD *)this + 20) )
    CTransitionVisualController::DiscardStoredSnapshot(this, **((HWND **)this + 7));
  if ( *((_DWORD *)this + 12) )
  {
    v10 = (CBaseObject ***)((char *)this + 24);
    do
    {
      v11 = *v10;
      v12 = **v10;
      if ( v12 )
      {
        CTransitionVisualController::_MoveWindowOffscreen(v12, 0);
        v11 = *v10;
        v13 = **v10;
        if ( v13 )
        {
          CBaseObject::Release(v13);
          v11 = *v10;
        }
      }
      v14 = v11[1];
      if ( v14 )
        CBaseObject::Release(v14);
      DynArray<CFlickTextFeedback,0>::RemoveAt((char *)this + 24, 0LL);
    }
    while ( *((_DWORD *)this + 12) );
  }
  if ( *((_QWORD *)this + 1) )
  {
    if ( *((_QWORD *)this + 2) )
    {
      while ( *((_DWORD *)this + 34) )
      {
        v15 = *((_QWORD *)this + 14);
        v16 = *((_DWORD *)this + 34) - 1;
        v27 = 0LL;
        v17 = *(_QWORD *)(v15 + 8LL * v16);
        CWindowList::GetSyncedWindowDataByHwnd(
          *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
          *(HWND *)(v17 + 16),
          &v27);
        if ( v27 )
          CTransitionVisualController::RestoreWindow(this, v27, 1);
        v18 = *(struct CVisual **)(v17 + 32);
        if ( v18 )
        {
          v19 = (CContainerVisual *)*((_QWORD *)v18 + 3);
          if ( v19 )
            CContainerVisual::RemoveChild(v19, v18);
        }
        v20 = *(_QWORD *)(v17 + 40);
        if ( v20 )
          CContainerVisual::RemoveChild(*((CContainerVisual **)this + 2), (struct CVisual *)(v20 + 8));
        CBaseObject::Release((CBaseObject *)v17);
        DynArray<CAnimationComponent *,0>::RemoveAt((char *)this + 112, (unsigned int)(*((_DWORD *)this + 34) - 1));
      }
      CContainerVisual::RemoveChild(*((CContainerVisual **)this + 1), *((struct CVisual **)this + 2));
      v21 = (CBaseObject *)*((_QWORD *)this + 2);
      if ( v21 )
      {
        CBaseObject::Release(v21);
        *((_QWORD *)this + 2) = 0LL;
      }
    }
    CTransitionVisualController::_CleanupHighZOrderStaticWindowClones(this);
    CContainerVisual::RemoveAllChildren(*((CContainerVisual **)this + 1));
    CContainerVisual::RemoveChild(*(CContainerVisual **)(*((_QWORD *)this + 1) + 24LL), *((struct CVisual **)this + 1));
  }
  v22 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( v22 )
  {
    CBaseObject::Release(v22);
    *((_QWORD *)this + 2) = 0LL;
  }
  v23 = (CBaseObject *)*((_QWORD *)this + 18);
  if ( v23 )
  {
    CBaseObject::Release(v23);
    *((_QWORD *)this + 18) = 0LL;
  }
  v24 = (CBaseObject *)*((_QWORD *)this + 1);
  if ( v24 )
  {
    CBaseObject::Release(v24);
    *((_QWORD *)this + 1) = 0LL;
  }
  v25 = (CBaseObject *)*((_QWORD *)this + 23);
  if ( v25 )
  {
    CBaseObject::Release(v25);
    *((_QWORD *)this + 23) = 0LL;
  }
  *((_QWORD *)this + 12) = -1LL;
  *((_DWORD *)this + 26) = -1;
  return 0LL;
}
