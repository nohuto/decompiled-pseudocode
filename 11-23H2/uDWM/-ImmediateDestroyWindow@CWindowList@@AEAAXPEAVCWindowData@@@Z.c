/*
 * XREFs of ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180049060
 * Callers:
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180048EE0 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18004D89C (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z @ 0x180005598 (-UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z.c)
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x180007C08 (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?RemoveAt@?$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z @ 0x18000B694 (-RemoveAt@-$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18000FCB0 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x180011C20 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z @ 0x180015060 (-_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800182E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?OnWindowDataDestroyed@CDisplayAnimatedVisual@@QEAAXPEAVCWindowData@@@Z @ 0x18001EA38 (-OnWindowDataDestroyed@CDisplayAnimatedVisual@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x180049AF0 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x18004BCE0 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x18004C100 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18004E40C (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ @ 0x18004EC5C (-ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z @ 0x18004F408 (-RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z.c)
 *     ?OnHostWindowDying@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180065C70 (-OnHostWindowDying@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memmove_0 @ 0x180066224 (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A14C8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x1800ACC7C (McTemplateU0qp_EtwEventWriteTransfer.c)
 *     ?SetIconicData@CIconicAnimatedVisual@@QEAAJPEAVCWindowData@@PEBUtagRECT@@PEAU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@@Z @ 0x1800C20AC (-SetIconicData@CIconicAnimatedVisual@@QEAAJPEAVCWindowData@@PEBUtagRECT@@PEAU-$TMILFlagsEnum@W4F.c)
 *     ?SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z @ 0x1800C3648 (-SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ??_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z @ 0x1800C3900 (--_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z.c)
 *     ?Remove@?$DynArray@PEAVCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@$0A@@@QEAAHAEBQEAVCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@@Z @ 0x1800C3FF4 (-Remove@-$DynArray@PEAVCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@$0A@@@QEAAHAEBQE.c)
 *     ?SetWindowData@CTopLevelWindow3D@@QEAAXPEAVCWindowData@@@Z @ 0x1800E72A8 (-SetWindowData@CTopLevelWindow3D@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?RemoveSelfFromParent@CVisual@@QEAAJXZ @ 0x180105498 (-RemoveSelfFromParent@CVisual@@QEAAJXZ.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x180107100 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     ?ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z @ 0x18010B6B0 (-ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z @ 0x18010C02C (-ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z.c)
 *     ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x18010C78C (-SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CWindowList::ImmediateDestroyWindow(CWindowList *this, struct CWindowData *a2)
{
  __int64 v4; // rdi
  unsigned int v5; // ecx
  unsigned int v6; // r9d
  __int64 v7; // rdx
  struct CWindowData *v8; // r8
  int v9; // eax
  int v10; // eax
  struct CSecondaryWindowRepresentation **v11; // rax
  struct CSecondaryWindowRepresentation *v12; // rdi
  CWindowData *v13; // rcx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  CBaseObject *v17; // rcx
  __int64 v18; // r8
  unsigned int i; // edi
  CWindowData *v20; // rcx
  CBaseObject *v21; // rcx
  int j; // eax
  __int64 v23; // rsi
  __int64 v24; // rdi
  signed int v25; // edx
  unsigned int v26; // r8d
  __int64 v27; // rcx
  __int64 v28; // rbp
  signed int v29; // esi
  __int64 *v30; // r15
  __int64 v31; // r14
  __int64 v32; // rdi
  CBaseObject *v33; // rcx
  struct CVisual *v34; // rdx
  __int64 v35; // rax
  CBaseObject *v36; // rcx
  CDesktopManager *v37; // rsi
  unsigned int k; // edi
  __int64 v39; // rcx
  CBaseObject *v40; // rcx
  struct CVisual *v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdi
  CBaseObject *v44; // rcx
  struct CVisual *v45; // rdx
  __int64 v46; // rcx
  CBaseObject *v47; // rcx
  __int64 v48; // rax
  CVisual *v49; // rcx
  CBaseObject *v50; // rcx
  int v51; // eax
  __int64 v52; // rdi
  struct CVisual *v53; // rdx
  __int64 v54; // rcx
  CBaseObject *v55; // rcx
  CBaseObject *v56; // rcx
  __int64 v57; // rsi
  struct CWindowData *v58; // rdi
  unsigned int v59; // ecx
  unsigned int v60; // edx
  struct CWindowData ***v61; // r14
  struct CWindowData *v62; // rdi
  unsigned int v63; // ecx
  unsigned int v64; // edx
  struct CWindowData **v65; // rax
  unsigned int v66; // edx
  unsigned int v67; // edx
  unsigned int m; // edi
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rdi
  __int64 v73; // rcx
  __int64 v74; // r8
  unsigned int v75; // edx
  __int64 v76; // rcx
  CWindowIconic *v77; // rdi
  CBaseObject *v78; // rcx
  struct CWindowData **v79; // r8
  unsigned int v80; // ecx
  struct CWindowData **v81; // r9
  struct CWindowData **v82; // rax
  int v83; // edx
  struct CWindowData *v84; // rdx
  CDesktopManager *v85; // rsi
  __int64 v86; // rdi
  struct CWindowData **v87; // rcx
  struct CWindowData **v88; // rdx
  __int64 v89; // rdi
  int v90; // eax
  CDisplayAnimatedVisual *v91; // rcx
  CTopLevelWindow3D *v92; // rcx
  __int64 v93; // rdx
  __int64 v94; // rdx
  __int64 v95; // rdx
  __int64 v96; // rdx
  unsigned int v97; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct CWindowData *v99; // [rsp+78h] [rbp+10h] BYREF

  v99 = a2;
  if ( (*((_BYTE *)a2 + 674) & 2) != 0 )
    DynArray<CWindowData *,0>::Remove((__int64 *)this + 62, &v99);
  while ( *((_DWORD *)a2 + 140) )
    CWindowList::UnregisterThumbnail(this, **((struct CVisual ****)a2 + 67));
  while ( *((_DWORD *)a2 + 148) )
    CWindowList::UnregisterThumbnail(this, **((struct CVisual ****)a2 + 71));
  v99 = a2;
  v4 = *((_QWORD *)a2 + 75);
  if ( v4 )
  {
    CWindowData::UpdateOwnerLists(a2, 0);
    *((_QWORD *)v99 + 75) = 0LL;
    DynArray<CWindowData *,0>::Remove((__int64 *)(v4 + 608), &v99);
    v5 = 0;
    v6 = *(_DWORD *)(v4 + 520);
    if ( !v6 )
      goto LABEL_15;
    v7 = *(_QWORD *)(v4 + 496);
    v8 = v99;
    while ( *(struct CWindowData **)(*(_QWORD *)v7 + 64LL) != v99 )
    {
      ++v5;
      v7 += 8LL;
      if ( v5 >= v6 )
        goto LABEL_16;
    }
    v9 = CWindowData::NotifyRepresentationChanged((CWindowData *)v4);
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x1167u, 0LL);
    }
    else
    {
LABEL_15:
      v8 = v99;
LABEL_16:
      *((_QWORD *)v8 + 75) = 0LL;
      v10 = CWindowList::ReevaluateAutoParenting(this, v99, 0);
      if ( v10 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x117C,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
          (const char *)(unsigned int)v10,
          v97);
    }
  }
  while ( *((_DWORD *)a2 + 130) )
  {
    v11 = (struct CSecondaryWindowRepresentation **)*((_QWORD *)a2 + 62);
    v12 = *v11;
    v13 = (CWindowData *)*((_QWORD *)*v11 + 4);
    if ( a2 == v13 )
    {
      if ( *((_BYTE *)v12 + 160) )
      {
        CWindowData::RemoveSecondaryWindowRepresentation(v13, *v11);
        *((_BYTE *)v12 + 160) = 0;
      }
      *((_QWORD *)v12 + 4) = 0LL;
    }
    CWindowData::RemoveSecondaryWindowRepresentation(a2, v12);
  }
  v14 = *((_DWORD *)a2 + 33);
  if ( (v14 < 8 || (v15 = v14 - 8) != 0 && (v16 = v15 - 1) != 0 && (unsigned int)(v16 - 1) >= 2)
    && *((char *)a2 + 676) < 0 )
  {
    GetPropW(*((HWND *)a2 + 5), L"Microsoft.Windows.ShellManagedWindowAsNormalWindow");
  }
  v17 = (CBaseObject *)*((_QWORD *)a2 + 60);
  if ( v17 )
  {
    CBaseObject::Release(v17);
    *((_QWORD *)a2 + 60) = 0LL;
    for ( i = 0; i < *((_DWORD *)a2 + 158); ++i )
    {
      v20 = *(CWindowData **)(*((_QWORD *)a2 + 76) + 8LL * i);
      if ( (*((_DWORD *)v20 + 29) & 0x20000000) == 0 )
        CWindowData::ClearSnapshot(v20, 0, v18, 0);
    }
  }
  v21 = (CBaseObject *)*((_QWORD *)a2 + 61);
  if ( v21 )
  {
    CBaseObject::Release(v21);
    *((_QWORD *)a2 + 61) = 0LL;
  }
  for ( j = *((_DWORD *)a2 + 158); j; j = *((_DWORD *)a2 + 158) )
    CWindowList::SetOwner(this, *(struct CWindowData **)(*((_QWORD *)a2 + 76) + 8LL * (unsigned int)(j - 1)), 0LL);
  CLivePreview::OnWindowShowHide(*((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 57), a2, 0LL, 1);
  v23 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
  if ( v23 )
  {
    v24 = *((_QWORD *)a2 + 5);
    v99 = (struct CWindowData *)&CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v25 = 0;
    v26 = *(_DWORD *)(v23 + 72);
    if ( v26 )
    {
      while ( **(_QWORD **)(*(_QWORD *)(v23 + 48) + 8LL * (unsigned int)v25) != v24 )
      {
        if ( ++v25 >= v26 )
          goto LABEL_46;
      }
      if ( v25 >= 0 )
        CWindowPropertyTracker::_StopTrackingWindowByIndex((CWindowPropertyTracker *)(v23 + 48), v25);
    }
LABEL_46:
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  }
  v27 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24);
  if ( v27 )
  {
    v28 = *((_QWORD *)a2 + 55);
    if ( v28 )
    {
      v29 = *(_DWORD *)(v27 + 48) - 1;
      if ( v29 >= 0 )
      {
        v30 = (__int64 *)(v27 + 24);
        v31 = 24LL * v29;
        do
        {
          v32 = v31 + *v30;
          v33 = *(CBaseObject **)v32;
          if ( *(_QWORD *)v32 == v28 )
          {
            v34 = *(struct CVisual **)(v32 + 8);
            v35 = *((_QWORD *)v34 + 3);
            if ( v35 && *(_BYTE *)(v32 + 16) )
            {
              VisualCollection::Remove((VisualCollection *)(v35 + 32), v34);
              v33 = *(CBaseObject **)v32;
            }
            if ( v33 )
              CBaseObject::Release(v33);
            v36 = *(CBaseObject **)(v32 + 8);
            if ( v36 )
              CBaseObject::Release(v36);
            DynArray<CTransitionVisualController::TlwPair,0>::RemoveAt(v30, v29);
          }
          v31 -= 24LL;
          --v29;
        }
        while ( v29 >= 0 );
      }
    }
  }
  v37 = CDesktopManager::s_pDesktopManagerInstance;
  for ( k = 0; k < *((_DWORD *)v37 + 188); ++k )
  {
    v39 = *(_QWORD *)(*((_QWORD *)v37 + 91) + 8LL * k);
    (*(void (__fastcall **)(__int64, struct CWindowData *))(*(_QWORD *)v39 + 208LL))(v39, a2);
  }
  v40 = (CBaseObject *)*((_QWORD *)a2 + 80);
  if ( v40 )
  {
    CBaseObject::Release(v40);
    *((_QWORD *)a2 + 80) = 0LL;
  }
  v41 = (struct CVisual *)*((_QWORD *)a2 + 56);
  if ( v41 )
  {
    v42 = *((_QWORD *)v41 + 3);
    if ( v42 )
      VisualCollection::Remove((VisualCollection *)(v42 + 32), v41);
    v43 = *((_QWORD *)a2 + 56);
    if ( v43 )
    {
      if ( *(_QWORD *)(v43 + 336) )
        CTopLevelWindow3D::StopAnimation(*((CTopLevelWindow3D **)a2 + 56));
      *(_QWORD *)(v43 + 336) = 0LL;
    }
    v44 = (CBaseObject *)*((_QWORD *)a2 + 56);
    if ( v44 )
    {
      CBaseObject::Release(v44);
      *((_QWORD *)a2 + 56) = 0LL;
    }
  }
  v45 = (struct CVisual *)*((_QWORD *)a2 + 55);
  if ( v45 )
  {
    v46 = *((_QWORD *)v45 + 3);
    if ( v46 )
      VisualCollection::Remove((VisualCollection *)(v46 + 32), v45);
    v47 = (CBaseObject *)*((_QWORD *)a2 + 55);
    if ( v47 )
    {
      CBaseObject::Release(v47);
      *((_QWORD *)a2 + 55) = 0LL;
    }
  }
  v48 = *((_QWORD *)a2 + 82);
  if ( v48 )
  {
    *(_QWORD *)(v48 + 648) = 0LL;
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                              + 58)
                                                           + 80LL))(
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58),
      *(_QWORD *)(*((_QWORD *)a2 + 82) + 40LL),
      0LL,
      *((_QWORD *)a2 + 5));
  }
  if ( *((_QWORD *)a2 + 81) )
    CWindowList::OnHostWindowDying(this, a2);
  v99 = (struct CWindowData *)&CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v49 = (CVisual *)*((_QWORD *)a2 + 58);
  if ( v49 )
  {
    CVisual::RemoveSelfFromParent(v49);
    v50 = (CBaseObject *)*((_QWORD *)a2 + 58);
    if ( v50 )
    {
      CBaseObject::Release(v50);
      *((_QWORD *)a2 + 58) = 0LL;
    }
    v51 = CWindowList::ReevaluateAutoParenting(this, a2, 0);
    if ( v51 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v51, 0x1F4Eu, 0LL);
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  v52 = *((_QWORD *)a2 + 55);
  if ( v52 )
  {
    if ( (*(_BYTE *)(v52 + 249) & 2) != 0 )
      CTopLevelWindow::ReleaseHolographicSlate(*((CTopLevelWindow **)a2 + 55));
    v53 = *(struct CVisual **)(v52 + 520);
    if ( v53 )
    {
      v54 = *((_QWORD *)v53 + 3);
      if ( v54 )
        VisualCollection::Remove((VisualCollection *)(v54 + 32), v53);
      v55 = *(CBaseObject **)(v52 + 520);
      if ( v55 )
      {
        CBaseObject::Release(v55);
        *(_QWORD *)(v52 + 520) = 0LL;
      }
    }
  }
  v56 = (CBaseObject *)*((_QWORD *)a2 + 18);
  if ( v56 )
  {
    CBaseObject::Release(v56);
    *((_QWORD *)a2 + 18) = 0LL;
  }
  v57 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30);
  v58 = 0LL;
  v59 = 0;
  v60 = *(_DWORD *)(v57 + 40);
  if ( v60 )
  {
    while ( 1 )
    {
      v58 = *(struct CWindowData **)(*(_QWORD *)(v57 + 16) + 8LL * v59);
      if ( *(_QWORD *)v58 == *((_QWORD *)a2 + 5) )
        break;
      if ( ++v59 >= v60 )
        goto LABEL_101;
    }
  }
  v99 = v58;
  if ( v58 )
  {
    v61 = (struct CWindowData ***)(v57 + 16);
    DynArray<CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *,0>::Remove(v57 + 16, &v99);
    CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::`scalar deleting destructor'(v58, v66);
  }
  else
  {
LABEL_101:
    v61 = (struct CWindowData ***)(v57 + 16);
  }
  v62 = 0LL;
  v63 = 0;
  v64 = *(_DWORD *)(v57 + 40);
  if ( v64 )
  {
    v65 = *v61;
    while ( 1 )
    {
      v62 = *v65;
      if ( *(_QWORD *)*v65 == *((_QWORD *)a2 + 5) )
        break;
      ++v63;
      ++v65;
      if ( v63 >= v64 )
        goto LABEL_111;
    }
  }
  v99 = v62;
  if ( v62 )
  {
    DynArray<CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *,0>::Remove(v61, &v99);
    CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::`scalar deleting destructor'(v62, v67);
  }
LABEL_111:
  for ( m = 0; m < *(_DWORD *)(v57 + 72); ++m )
  {
    v69 = *(_QWORD *)(*(_QWORD *)(v57 + 48) + 8LL * m);
    v70 = *(_QWORD *)(v69 + 304);
    if ( v70 )
      v71 = *(_QWORD *)(v70 + 40);
    else
      v71 = 0LL;
    if ( *((_QWORD *)a2 + 5) == v71 )
      CIconicAnimatedVisual::SetIconicData(v69, 0LL, 0LL, 0LL);
  }
  v72 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 29);
  *((_BYTE *)a2 + 674) &= ~4u;
  *((_BYTE *)a2 + 674) &= 0xE7u;
  CIconicBitmapRegistry::RequestBitmap((CIconicBitmapRegistry *)v72, a2, 0);
  if ( (unsigned __int64)a2 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    *(_BYTE *)(v72 + 88) = 0;
    v77 = *(CWindowIconic **)(v72 + 96);
  }
  else
  {
    v73 = 0LL;
    v74 = *(_QWORD *)(v72 + 16);
    v75 = *(_DWORD *)(v72 + 40);
    if ( v75 )
    {
      do
      {
        if ( a2 == *(struct CWindowData **)(v74 + 8 * v73) )
          break;
        v73 = (unsigned int)(v73 + 1);
      }
      while ( (unsigned int)v73 < v75 );
    }
    if ( (unsigned int)v73 < v75 )
    {
      for ( ; (unsigned int)v73 < v75 - 1; v75 = *(_DWORD *)(v72 + 40) )
      {
        *(_QWORD *)(v74 + 8 * v73) = *(_QWORD *)(v74 + 8LL * (unsigned int)(v73 + 1));
        v73 = (unsigned int)(v73 + 1);
      }
      *(_DWORD *)(v72 + 40) = v75 - 1;
    }
    else if ( !*((_QWORD *)a2 + 54) )
    {
      goto LABEL_133;
    }
    CWindowData::SetIconicBitmap(a2, 0LL);
    v77 = (CWindowIconic *)*((_QWORD *)a2 + 61);
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0qp_EtwEventWriteTransfer(v76, &UdwmManageIconicThumbnail_Info, 2LL);
  }
  if ( v77 )
    CWindowIconic::SetBitmap(v77, 0LL, 0, 1);
LABEL_133:
  v78 = (CBaseObject *)*((_QWORD *)a2 + 53);
  if ( v78 )
  {
    CBaseObject::Release(v78);
    *((_QWORD *)a2 + 53) = 0LL;
  }
  v79 = 0LL;
  v80 = *((_DWORD *)this + 150);
  if ( v80 )
  {
    v81 = (struct CWindowData **)*((_QWORD *)this + 72);
    v82 = v81;
    while ( *v82 != a2 )
    {
      v79 = (struct CWindowData **)(unsigned int)((_DWORD)v79 + 1);
      v82 += 2;
      if ( (unsigned int)v79 >= v80 )
        goto LABEL_145;
    }
    v83 = *((_DWORD *)this + 150);
    if ( (unsigned int)v79 < v80 )
    {
      if ( (unsigned int)v79 < v80 - 1 )
      {
        do
        {
          *(_OWORD *)&v81[2 * (unsigned int)v79] = *(_OWORD *)&v81[2 * (unsigned int)((_DWORD)v79 + 1)];
          v79 = (struct CWindowData **)(unsigned int)((_DWORD)v79 + 1);
          v83 = *((_DWORD *)this + 150);
        }
        while ( (unsigned int)v79 < v83 - 1 );
      }
      *((_DWORD *)this + 150) = v83 - 1;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x194u, 0LL);
    }
  }
LABEL_145:
  v84 = (struct CWindowData *)*((_QWORD *)a2 + 2);
  if ( v84 != (struct CWindowData *)((char *)a2 + 804) )
    (*(void (__fastcall **)(WPF::HeapBase *, struct CWindowData *, struct CWindowData **))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 32LL))(
      WPF::g_pProcessHeap,
      v84,
      v79);
  v85 = CDesktopManager::s_pDesktopManagerInstance;
  if ( (*((_BYTE *)a2 + 678) & 2) != 0 )
  {
    v86 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 57);
    v79 = *(struct CWindowData ***)(v86 + 504);
    v87 = *(struct CWindowData ***)(v86 + 496);
    if ( v87 != v79 )
    {
      while ( 1 )
      {
        v88 = v87 + 1;
        if ( *v87 == a2 )
          break;
        ++v87;
        if ( v88 == v79 )
          goto LABEL_153;
      }
      memmove_0(v87, v88, (char *)v79 - (char *)v88);
      *(_QWORD *)(v86 + 504) -= 8LL;
    }
  }
LABEL_153:
  v89 = *((_QWORD *)v85 + 54);
  if ( a2 == *(struct CWindowData **)(v89 + 704) )
  {
    v90 = CWindowList::ReleaseAcrylicSheetAndOwnerIfNotUsed(*((CWindowList **)v85 + 54), 1);
    if ( v90 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC59,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v90,
        v97);
    *(_QWORD *)(v89 + 704) = 0LL;
  }
  v91 = *(CDisplayAnimatedVisual **)(v89 + 568);
  if ( v91 )
    CDisplayAnimatedVisual::OnWindowDataDestroyed(v91, a2);
  v92 = (CTopLevelWindow3D *)*((_QWORD *)a2 + 56);
  if ( v92 )
    CTopLevelWindow3D::SetWindowData(v92, 0LL);
  v93 = *((_QWORD *)a2 + 76);
  if ( v93 != *((_QWORD *)a2 + 77) )
  {
    (*(void (__fastcall **)(WPF::HeapBase *, __int64, struct CWindowData **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v93,
      v79);
    *((_QWORD *)a2 + 76) = 0LL;
  }
  v94 = *((_QWORD *)a2 + 71);
  if ( v94 != *((_QWORD *)a2 + 72) )
  {
    (*(void (__fastcall **)(WPF::HeapBase *, __int64, struct CWindowData **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v94,
      v79);
    *((_QWORD *)a2 + 71) = 0LL;
  }
  v95 = *((_QWORD *)a2 + 67);
  if ( v95 != *((_QWORD *)a2 + 68) )
  {
    (*(void (__fastcall **)(WPF::HeapBase *, __int64, struct CWindowData **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v95,
      v79);
    *((_QWORD *)a2 + 67) = 0LL;
  }
  v96 = *((_QWORD *)a2 + 62);
  if ( v96 != *((_QWORD *)a2 + 63) )
  {
    (*(void (__fastcall **)(WPF::HeapBase *, __int64, struct CWindowData **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v96,
      v79);
    *((_QWORD *)a2 + 62) = 0LL;
  }
  (*(void (__fastcall **)(WPF::HeapBase *, struct CWindowData *, struct CWindowData **))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 32LL))(
    WPF::g_pProcessHeap,
    a2,
    v79);
}
