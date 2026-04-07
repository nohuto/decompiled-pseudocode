/*
 * XREFs of ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x180004E74
 * Callers:
 *     ?OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x180003294 (-OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARG.c)
 * Callees:
 *     ?Create@CTransitionWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z @ 0x18000360C (-Create@CTransitionWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z.c)
 *     ?_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z @ 0x180004D14 (-_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z.c)
 *     ?_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z @ 0x180004E14 (-_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z.c)
 *     ?_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x180005424 (-_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 *     ?CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z @ 0x180005458 (-CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z.c)
 *     ?GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ @ 0x1800076C4 (-GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ.c)
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x18001A1E0 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x18002576C (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180025C04 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180025C28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18003340C (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?Create@CContainerVisual@@SAJPEAPEAV1@@Z @ 0x18003DF7C (-Create@CContainerVisual@@SAJPEAPEAV1@@Z.c)
 *     ?CommitDwmChannel@CCompositor@@QEAAJXZ @ 0x18003EF80 (-CommitDwmChannel@CCompositor@@QEAAJXZ.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180040A2C (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z @ 0x180042210 (-_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z.c)
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual@@HW4StagedBackgroundPolicy@1@@Z @ 0x18008BAFC (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContain.c)
 *     McTemplateU0p_EtwEventWriteTransfer @ 0x180098C50 (McTemplateU0p_EtwEventWriteTransfer.c)
 *     ?_StageClone@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual@@_N2PEA_N@Z @ 0x18009A5B8 (-_StageClone@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual@@_N2PEA.c)
 *     ?GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z @ 0x1800DD7C8 (-GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTransitionVisualController::EnsureSnapshot(CContainerVisual **this, struct CWindowData *a2)
{
  int v2; // eax
  struct CTransitionWindowSnapshot *v3; // rdi
  int v6; // r12d
  CBaseObject *v7; // r15
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  const struct tagRECT *v11; // r13
  unsigned int Clone; // r13d
  int v13; // eax
  bool v14; // r8
  int v15; // eax
  bool v16; // r9
  unsigned int v18; // eax
  unsigned int v19; // edx
  unsigned int v20; // eax
  int v21; // r12d
  struct CTopLevelWindow *v22; // rdx
  int v23; // eax
  int v24; // eax
  bool v25; // r8
  int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  int v29; // eax
  int v30; // eax
  CContainerVisual *RootVisualForDesktop; // rax
  struct CVisual *v32; // r14
  struct CVisual *v33; // r8
  int inserted; // eax
  CDesktopManager *v35; // rcx
  struct tagRECT *v36; // [rsp+30h] [rbp-20h]
  __int128 v37; // [rsp+38h] [rbp-18h] BYREF
  char v38; // [rsp+98h] [rbp+48h]
  struct CTransitionWindowSnapshot *v39; // [rsp+A0h] [rbp+50h] BYREF
  CBaseObject *v40; // [rsp+A8h] [rbp+58h] BYREF

  v2 = *((_DWORD *)a2 + 186);
  v3 = 0LL;
  v39 = 0LL;
  if ( (v2 & 0x40000) != 0 )
  {
    v6 = 1;
LABEL_3:
    v38 = 1;
    goto LABEL_4;
  }
  v6 = 0;
  if ( (v2 & 0x10000000) != 0 && (int)CTransitionVisualController::GetClonableOwnedWindowCount(a2) > 0 )
    goto LABEL_3;
  v38 = 0;
LABEL_4:
  v7 = 0LL;
  v40 = 0LL;
  v8 = CTransitionVisualController::_EnsureStagingVisualRoot((CTransitionVisualController *)this);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      v8,
      0xA68u,
      0LL);
    goto LABEL_14;
  }
  if ( !*((_QWORD *)a2 + 5) )
  {
    v9 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      -2147024809,
      0xA6Cu,
      0LL);
    return v9;
  }
  v10 = CTransitionVisualController::_SetDesktopId((CTransitionVisualController *)this, *((_QWORD *)a2 + 17));
  v9 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      v10,
      0xA70u,
      0LL);
    return v9;
  }
  if ( (int)CTransitionVisualController::_GetSnapshotIndex((CTransitionVisualController *)this, *((HWND *)a2 + 5)) < 0 )
  {
    v11 = (const struct tagRECT *)(((unsigned __int64)a2 + 748) & -(__int64)((*((_DWORD *)a2 + 186) & 0x1000000) != 0));
    v36 = (struct tagRECT *)v11;
    v37 = 0LL;
    if ( CTransitionWindowSnapshot::CanUseCVIFromSnapshot(a2) )
    {
      v29 = CTransitionWindowSnapshot::Create(*((struct CTopLevelWindow **)a2 + 55), 0LL, v11, &v39);
      v3 = v39;
      if ( v29 >= 0 )
      {
        *(_QWORD *)&v37 = *((_QWORD *)a2 + 5);
        *((_QWORD *)&v37 + 1) = v39;
        goto LABEL_20;
      }
    }
    if ( (*((_BYTE *)a2 + 740) & 0x10) != 0 )
    {
      v9 = -2147483638;
      goto LABEL_20;
    }
    Clone = CTransitionVisualController::_FindClone((CTransitionVisualController *)this, a2);
    if ( Clone >= *((_DWORD *)this + 12) )
    {
      v13 = CContainerVisual::Create(&v40);
      v9 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2u,
          v13,
          0xA85u,
          0LL);
        goto LABEL_51;
      }
      v7 = v40;
      v15 = CContainerVisual::AddChild(this[18], v40, v14);
      v9 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2u,
          v15,
          0xA86u,
          0LL);
        goto LABEL_14;
      }
      v22 = (struct CTopLevelWindow *)*((_QWORD *)a2 + 55);
      if ( v38 )
      {
        v30 = CTransitionVisualController::_StageCloneWithOwnedWindows(this, v22, v7, 0xFFFFFFFFLL, v6);
        v9 = v30;
        if ( v30 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
            2u,
            v30,
            0xA8Bu,
            0LL);
          goto LABEL_14;
        }
        Clone = CTransitionVisualController::_FindClone((CTransitionVisualController *)this, a2);
      }
      else
      {
        v23 = CTransitionVisualController::_StageClone((CTransitionVisualController *)this, v22, v7, v16, 1, 0LL);
        v9 = v23;
        if ( v23 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
            2u,
            v23,
            0xA92u,
            0LL);
          goto LABEL_14;
        }
      }
    }
    if ( Clone < *((_DWORD *)this + 12) )
    {
      _mm_lfence();
      if ( *((_QWORD *)CTopLevelWindow::GetWindowData(*((CTopLevelWindow **)this[3] + 3 * Clone)) + 5) == *((_QWORD *)a2 + 5) )
      {
        _mm_lfence();
        v24 = CTransitionWindowSnapshot::Create(
                *((struct CTopLevelWindow **)a2 + 55),
                *(struct CVisual **)(*((_QWORD *)this[3] + 3 * Clone + 1) + 24LL),
                v36,
                &v39);
        v9 = v24;
        if ( v24 >= 0 )
        {
          v7 = v40;
          v3 = v39;
          *((_BYTE *)v39 + 316) = *((_BYTE *)this[3] + 24 * Clone + 18);
          *(_QWORD *)&v37 = *((_QWORD *)a2 + 5);
          *((_QWORD *)&v37 + 1) = v3;
          goto LABEL_20;
        }
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2u,
          v24,
          0xA9Eu,
          0LL);
        v3 = v39;
LABEL_51:
        v7 = v40;
        goto LABEL_14;
      }
      v3 = v39;
      v7 = v40;
    }
    v9 = -2147467259;
LABEL_20:
    if ( !v3 )
    {
LABEL_16:
      if ( v7 )
        CBaseObject::Release(v7);
      return v9;
    }
    if ( (v9 & 0x80000000) == 0 )
    {
      v18 = *((_DWORD *)this + 20);
      v19 = v18 + 1;
      if ( v18 + 1 < v18 )
      {
        v9 = -2147024362;
        v20 = 179;
        v21 = -2147024362;
LABEL_24:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, v20, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2u,
          v21,
          0xAB1u,
          0LL);
        goto LABEL_14;
      }
      if ( v19 > *((_DWORD *)this + 19) )
      {
        v21 = DynArrayImpl<0>::AddMultipleAndSet(this + 7, 16LL, 1LL, &v37);
        v9 = v21;
        if ( v21 < 0 )
        {
          v20 = 190;
          goto LABEL_24;
        }
      }
      else
      {
        *((_OWORD *)this[7] + *((unsigned int *)this + 20)) = v37;
        *((_DWORD *)this + 20) = v19;
      }
      CMILRefCountBase::AddRef(v3);
      if ( (*((_DWORD *)a2 + 186) & 0x100000) != 0 )
      {
        RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                                 *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                                 *((_QWORD *)a2 + 17));
        v32 = RootVisualForDesktop;
        v33 = (struct CVisual *)*((_QWORD *)a2 + 55);
        if ( (*((_BYTE *)a2 + 742) & 0x10) != 0 )
          v33 = *(struct CVisual **)(*((_QWORD *)a2 + 75) + 440LL);
        inserted = CContainerVisual::InsertChildAfter(RootVisualForDesktop, v3, v33);
        v9 = inserted;
        if ( inserted >= 0 )
        {
          CTransitionVisualController::_MoveOwnedWindowTreeOffscreen((struct CTopLevelWindow **)a2);
          CDesktopManager::UpdateSceneImpl(v35, v32);
          goto LABEL_34;
        }
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2u,
          inserted,
          0xAC3u,
          0LL);
      }
      else
      {
        *((_DWORD *)v3 + 74) = 0;
        *((_DWORD *)v3 + 75) = 0;
        *((_DWORD *)v3 + 76) = 1;
        *((_DWORD *)v3 + 77) = 1;
        v26 = CContainerVisual::AddChild(this[18], v3, v25);
        v9 = v26;
        if ( v26 >= 0 )
        {
          (*(void (__fastcall **)(CContainerVisual *))(*(_QWORD *)this[18] + 48LL))(this[18]);
LABEL_34:
          if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
            McTemplateU0p_EtwEventWriteTransfer(v27, &CommitChannel_Transition_Snapshot, v3);
          v28 = CCompositor::CommitDwmChannel(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6));
          v9 = v28;
          if ( v28 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
              2u,
              v28,
              0xAD8u,
              0LL);
          goto LABEL_14;
        }
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2u,
          v26,
          0xAD2u,
          0LL);
      }
    }
LABEL_14:
    if ( v3 )
      CBaseObject::Release(v3);
    goto LABEL_16;
  }
  return v9;
}
