/*
 * XREFs of ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x18001671C
 * Callers:
 *     ?OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x18001D85C (-OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARG.c)
 * Callees:
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N122PEA_N@Z @ 0x18000A3F8 (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N122PE.c)
 *     ?CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z @ 0x18000B180 (-CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z.c)
 *     ?_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z @ 0x18000B2B4 (-_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z.c)
 *     McTemplateU0p_EtwEventWriteTransfer @ 0x18000EC8C (McTemplateU0p_EtwEventWriteTransfer.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x1800154D4 (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?Create@CTransitionWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z @ 0x1800156B0 (-Create@CTransitionWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z.c)
 *     ?_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z @ 0x180015BDC (-_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z.c)
 *     ?_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z @ 0x180015CC0 (-_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z.c)
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x180016C00 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 *     ?_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x18001DB30 (-_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180036F9C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18004DAFC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x18004F93C (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z @ 0x1800EB654 (-GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z.c)
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@HW4StagedBackgroundPolicy@1@@Z @ 0x1800EC420 (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@.c)
 */

__int64 __fastcall CTransitionVisualController::EnsureSnapshot(
        CTransitionVisualController *this,
        struct CWindowData *a2)
{
  int v2; // eax
  volatile signed __int32 *v5; // rdi
  int v6; // r15d
  char v7; // r13
  int v8; // eax
  unsigned int v9; // ebx
  struct tagRECT *v10; // r12
  unsigned int Clone; // r12d
  int inserted; // eax
  struct CTopLevelWindow *v13; // rdx
  int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // edx
  int v17; // r15d
  struct CVisual *v18; // rdx
  __int64 v19; // rcx
  int v21; // r9d
  int v22; // eax
  unsigned int v23; // eax
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  struct CVisual *v25; // r14
  struct CVisual *v26; // r8
  CDesktopManager *v27; // rcx
  bool v28; // [rsp+20h] [rbp-30h]
  unsigned int v29; // [rsp+20h] [rbp-30h]
  unsigned int v30; // [rsp+20h] [rbp-30h]
  __int128 v31; // [rsp+40h] [rbp-10h] BYREF
  CBaseObject *v32; // [rsp+98h] [rbp+48h] BYREF
  CBaseObject *v33; // [rsp+A0h] [rbp+50h] BYREF
  struct tagRECT *v34; // [rsp+A8h] [rbp+58h]

  v2 = *((_DWORD *)a2 + 170);
  v32 = 0LL;
  v5 = 0LL;
  if ( (v2 & 0x40000) != 0 )
  {
    v6 = 1;
  }
  else
  {
    v6 = 0;
    if ( (v2 & 0x10000000) == 0 || (int)CTransitionVisualController::GetClonableOwnedWindowCount(a2) <= 0 )
    {
      v7 = 0;
      goto LABEL_4;
    }
  }
  v7 = 1;
LABEL_4:
  v33 = 0LL;
  v8 = CTransitionVisualController::_EnsureStagingVisualRoot(this);
  v9 = v8;
  if ( v8 < 0 )
  {
    v29 = 2664;
LABEL_41:
    v21 = v8;
LABEL_43:
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      v21,
      v29,
      0LL);
    return v9;
  }
  if ( !*((_QWORD *)a2 + 5) )
  {
    v9 = -2147024809;
    v21 = -2147024809;
    v29 = 2668;
    goto LABEL_43;
  }
  v8 = CTransitionVisualController::_SetDesktopId(this, *((_QWORD *)a2 + 17));
  v9 = v8;
  if ( v8 < 0 )
  {
    v29 = 2672;
    goto LABEL_41;
  }
  if ( (int)CTransitionVisualController::_GetSnapshotIndex(this, *((HWND *)a2 + 5)) >= 0 )
    return v9;
  v10 = (struct tagRECT *)(((unsigned __int64)a2 + 684) & -(__int64)((*((_DWORD *)a2 + 170) & 0x1000000) != 0));
  v34 = v10;
  v31 = 0LL;
  if ( CTransitionWindowSnapshot::CanUseCVIFromSnapshot(a2) )
  {
    v22 = CTransitionWindowSnapshot::Create(*((struct CTopLevelWindow **)a2 + 55), 0LL, v10, &v32);
    v5 = (volatile signed __int32 *)v32;
    if ( v22 >= 0 )
    {
LABEL_19:
      *(_QWORD *)&v31 = *((_QWORD *)a2 + 5);
      *((_QWORD *)&v31 + 1) = v5;
      goto LABEL_20;
    }
  }
  if ( (*((_BYTE *)a2 + 676) & 0x10) != 0 )
  {
    v9 = -2147483638;
  }
  else
  {
    Clone = CTransitionVisualController::_FindClone(this, a2, 0);
    if ( Clone >= *((_DWORD *)this + 12) )
    {
      inserted = CVisual::Create(&v33);
      v9 = inserted;
      if ( inserted < 0 )
      {
        v30 = 2693;
        goto LABEL_67;
      }
      inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 18) + 32LL), v33, 0LL, 0, v28);
      v9 = inserted;
      if ( inserted < 0 )
      {
        v30 = 2694;
        goto LABEL_67;
      }
      v13 = (struct CTopLevelWindow *)*((_QWORD *)a2 + 55);
      if ( v7 )
      {
        inserted = CTransitionVisualController::_StageCloneWithOwnedWindows(this, v13, v33, 0xFFFFFFFFLL, v6);
        v9 = inserted;
        if ( inserted < 0 )
        {
          v30 = 2699;
          goto LABEL_67;
        }
        Clone = CTransitionVisualController::_FindClone(this, a2, 0);
      }
      else
      {
        inserted = CTransitionVisualController::_StageCloneRelative(this, v13, v33, 0, 0LL, 1, 1, 0LL);
        v9 = inserted;
        if ( inserted < 0 )
        {
          v30 = 2706;
          goto LABEL_67;
        }
      }
    }
    if ( Clone < *((_DWORD *)this + 12) )
    {
      _mm_lfence();
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL * Clone) + 752LL) + 40LL) == *((_QWORD *)a2 + 5) )
      {
        _mm_lfence();
        v14 = CTransitionWindowSnapshot::Create(
                *((struct CTopLevelWindow **)a2 + 55),
                *(struct CVisual **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL * Clone + 8) + 24LL),
                v34,
                &v32);
        v9 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
            2u,
            v14,
            0xA9Eu,
            0LL);
          v5 = (volatile signed __int32 *)v32;
          goto LABEL_31;
        }
        v5 = (volatile signed __int32 *)v32;
        *((_BYTE *)v32 + 364) = *(_BYTE *)(*((_QWORD *)this + 3) + 24LL * Clone + 18);
        goto LABEL_19;
      }
      v5 = (volatile signed __int32 *)v32;
    }
    v9 = -2147467259;
  }
LABEL_20:
  if ( v5 )
  {
    if ( (v9 & 0x80000000) != 0 )
      goto LABEL_31;
    v15 = *((_DWORD *)this + 20);
    v16 = v15 + 1;
    if ( v15 + 1 < v15 )
    {
      v9 = -2147024362;
      v23 = 181;
      v17 = -2147024362;
    }
    else
    {
      if ( v16 <= *((_DWORD *)this + 19) )
      {
        *(_OWORD *)(*((_QWORD *)this + 7) + 16LL * *((unsigned int *)this + 20)) = v31;
        *((_DWORD *)this + 20) = v16;
LABEL_25:
        _InterlockedIncrement(v5 + 2);
        if ( (*((_DWORD *)a2 + 170) & 0x100000) != 0 )
        {
          RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                                   *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                                   *((_QWORD *)a2 + 17));
          v25 = RootVisualForDesktop;
          v26 = (struct CVisual *)*((_QWORD *)a2 + 55);
          if ( (*((_BYTE *)a2 + 678) & 0x10) != 0 )
            v26 = *(struct CVisual **)(*((_QWORD *)a2 + 75) + 440LL);
          v5 = (volatile signed __int32 *)v32;
          inserted = VisualCollection::InsertRelative(
                       (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32),
                       v32,
                       v26,
                       1,
                       v28);
          v9 = inserted;
          if ( inserted >= 0 )
          {
            CTransitionVisualController::_MoveOwnedWindowTreeOffscreen((struct CTopLevelWindow **)a2);
            CDesktopManager::UpdateSceneImpl(v27, v25);
            goto LABEL_28;
          }
          v30 = 2755;
        }
        else
        {
          v5 = (volatile signed __int32 *)v32;
          v18 = v32;
          *(__m128i *)((char *)v32 + 344) = _mm_load_si128((const __m128i *)&_xmm);
          inserted = VisualCollection::InsertRelative(
                       (VisualCollection *)(*((_QWORD *)this + 18) + 32LL),
                       v18,
                       0LL,
                       0,
                       v28);
          v9 = inserted;
          if ( inserted >= 0 )
          {
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 18) + 64LL))(*((_QWORD *)this + 18));
LABEL_28:
            if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
              McTemplateU0p_EtwEventWriteTransfer(v19, (int)&CommitChannel_Transition_Snapshot, (__int64)v5);
            inserted = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                         + 6)
                                                                       + 24LL)
                                                         + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                              + 6)
                                                                            + 24LL));
            v9 = inserted;
            if ( inserted >= 0 )
              goto LABEL_31;
            v30 = 2776;
            goto LABEL_67;
          }
          v30 = 2770;
        }
LABEL_67:
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2u,
          inserted,
          v30,
          0LL);
LABEL_31:
        if ( v5 )
          CBaseObject::Release((CBaseObject *)v5);
        goto LABEL_33;
      }
      v17 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 56, 16LL, 1LL, &v31);
      v9 = v17;
      if ( v17 >= 0 )
        goto LABEL_25;
      v23 = 192;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, v23, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      v17,
      0xAB1u,
      0LL);
    goto LABEL_31;
  }
LABEL_33:
  if ( v33 )
    CBaseObject::Release(v33);
  return v9;
}
