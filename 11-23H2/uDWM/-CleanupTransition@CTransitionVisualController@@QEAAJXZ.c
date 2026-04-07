/*
 * XREFs of ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18002D918
 * Callers:
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x180014E94 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ?_CleanupTransition@CAnimationScheduler@@AEAAXXZ @ 0x18002D8D8 (-_CleanupTransition@CAnimationScheduler@@AEAAXXZ.c)
 *     ??1CTransitionVisualController@@QEAA@XZ @ 0x1800E9F38 (--1CTransitionVisualController@@QEAA@XZ.c)
 *     ?OnAnimationComplete@CTransitionVisualController@@UEAAJI@Z @ 0x1800EB990 (-OnAnimationComplete@CTransitionVisualController@@UEAAJI@Z.c)
 * Callees:
 *     ?RemoveAt@?$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z @ 0x18000B694 (-RemoveAt@-$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x1800123B8 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     McTemplateU0d_EtwEventWriteTransfer @ 0x180014940 (McTemplateU0d_EtwEventWriteTransfer.c)
 *     ?DiscardStoredSnapshot@CTransitionVisualController@@QEAAJPEAUHWND__@@@Z @ 0x180015328 (-DiscardStoredSnapshot@CTransitionVisualController@@QEAAJPEAUHWND__@@@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x1800177D0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800182E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x18004CE14 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x18005608C (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x1800560C0 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x180056954 (-ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveAt@?$DynArray@UTransitionBitmap@CTransitionVisualController@@$0A@@@QEAAJI@Z @ 0x1800D0948 (-RemoveAt@-$DynArray@UTransitionBitmap@CTransitionVisualController@@$0A@@@QEAAJI@Z.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800EBC10 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z @ 0x1800EBE0C (-_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::CleanupTransition(CTransitionVisualController *this)
{
  int v2; // eax
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CBaseObject *v8; // rcx
  __int64 v9; // rdi
  CBaseObject ***v10; // rdi
  CBaseObject **v11; // rax
  struct CTopLevelWindow *v12; // rcx
  CBaseObject *v13; // rcx
  CBaseObject *v14; // rcx
  CAnimationEngine *v15; // rax
  __int64 v16; // rcx
  CAnimationEngine *v17; // rdi
  _QWORD *v18; // rdi
  unsigned int v19; // ebp
  __int64 v20; // rsi
  CBaseObject *v21; // rcx
  __int64 v22; // rax
  unsigned int v23; // ecx
  __int64 v24; // rdi
  struct CVisual *v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned int v28; // edx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rsi
  __int64 v32; // rdx
  struct CWindowData *v33; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 22) != -1 )
  {
    v15 = CDesktopManager::AcquireAnimationEngine();
    v17 = v15;
    if ( v15 )
    {
      CAnimationEngine::ScheduleStopAnimation(v15, *((_DWORD *)this + 22));
      CAnimationEngine::Release(v17);
    }
    *((_DWORD *)this + 22) = -1;
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0d_EtwEventWriteTransfer(v16, (int)&UdwmTransitionVisualController_Stop, *((_DWORD *)this + 26));
  }
  v2 = *((_DWORD *)this + 44);
  if ( v2 )
  {
    v18 = (_QWORD *)((char *)this + 152);
    do
    {
      v19 = v2 - 1;
      v20 = 56LL * (unsigned int)(v2 - 1);
      v21 = *(CBaseObject **)(v20 + *v18 + 48);
      if ( v21 )
      {
        CBaseObject::Release(v21);
        *(_QWORD *)(*v18 + v20 + 48) = 0LL;
      }
      DynArray<CTransitionVisualController::TransitionBitmap,0>::RemoveAt((char *)this + 152, v19);
      v2 = *((_DWORD *)this + 44);
    }
    while ( v2 );
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
      DynArray<CTransitionVisualController::TlwPair,0>::RemoveAt((__int64 *)this + 3, 0);
    }
    while ( *((_DWORD *)this + 12) );
  }
  if ( *((_QWORD *)this + 1) )
  {
    if ( *((_QWORD *)this + 2) )
    {
      while ( *((_DWORD *)this + 34) )
      {
        v22 = *((_QWORD *)this + 14);
        v23 = *((_DWORD *)this + 34) - 1;
        v33 = 0LL;
        v24 = *(_QWORD *)(v22 + 8LL * v23);
        if ( (int)CWindowList::GetSyncedWindowDataByHwnd(
                    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                    *(HWND *)(v24 + 16),
                    &v33) >= 0
          && v33 )
        {
          CTransitionVisualController::RestoreWindow(this, v33, 1);
        }
        v25 = *(struct CVisual **)(v24 + 32);
        if ( v25 )
        {
          v26 = *((_QWORD *)v25 + 3);
          if ( v26 )
            VisualCollection::Remove((VisualCollection *)(v26 + 32), v25);
        }
        v27 = *(_QWORD *)(v24 + 40);
        if ( v27 )
          VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 2) + 32LL), (struct CVisual *)(v27 + 8));
        CBaseObject::Release((CBaseObject *)v24);
        v28 = *((_DWORD *)this + 34);
        v29 = v28 - 1;
        if ( (unsigned int)v29 < v28 )
        {
          v30 = *((_QWORD *)this + 14);
          while ( (unsigned int)v29 < v28 - 1 )
          {
            *(_QWORD *)(v30 + 8 * v29) = *(_QWORD *)(v30 + 8LL * (unsigned int)(v29 + 1));
            v29 = (unsigned int)(v29 + 1);
            v28 = *((_DWORD *)this + 34);
          }
          *((_DWORD *)this + 34) = v28 - 1;
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x194u, 0LL);
        }
      }
      VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 1) + 32LL), *((struct CVisual **)this + 2));
      v8 = (CBaseObject *)*((_QWORD *)this + 2);
      if ( v8 )
      {
        CBaseObject::Release(v8);
        *((_QWORD *)this + 2) = 0LL;
      }
    }
    v9 = (unsigned int)(*((_DWORD *)this + 12) - 1);
    if ( (int)v9 >= 0 )
    {
      v31 = 24LL * (int)v9;
      do
      {
        v32 = *((_QWORD *)this + 3);
        if ( *(_BYTE *)(v32 + v31 + 16) )
        {
          CTransitionVisualController::_CleanupHighZOrderClone(
            this,
            (struct CTransitionVisualController::TlwPair *)(v32 + 24 * v9));
          DynArray<CTransitionVisualController::TlwPair,0>::RemoveAt((__int64 *)this + 3, v9);
        }
        v31 -= 24LL;
        v9 = (unsigned int)(v9 - 1);
      }
      while ( (int)v9 >= 0 );
    }
    VisualCollection::RemoveAll((VisualCollection *)(*((_QWORD *)this + 1) + 32LL));
    VisualCollection::Remove(
      (VisualCollection *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 32LL),
      *((struct CVisual **)this + 1));
  }
  v3 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *((_QWORD *)this + 2) = 0LL;
  }
  v4 = (CBaseObject *)*((_QWORD *)this + 18);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 18) = 0LL;
  }
  v5 = (CBaseObject *)*((_QWORD *)this + 1);
  if ( v5 )
  {
    CBaseObject::Release(v5);
    *((_QWORD *)this + 1) = 0LL;
  }
  v6 = (CBaseObject *)*((_QWORD *)this + 23);
  if ( v6 )
  {
    CBaseObject::Release(v6);
    *((_QWORD *)this + 23) = 0LL;
  }
  *((_QWORD *)this + 12) = -1LL;
  *((_DWORD *)this + 26) = -1;
  return 0LL;
}
