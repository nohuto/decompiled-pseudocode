/*
 * XREFs of ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180041140
 * Callers:
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x180053DCC (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 * Callees:
 *     ?_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z @ 0x180004D14 (-_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z.c)
 *     ?GetStoredSnapshotNoRef@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAPEAVCTransitionWindowSnapshot@@@Z @ 0x180005404 (-GetStoredSnapshotNoRef@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAPEAVCTransitionWindowSn.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x180006D78 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180015CB8 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?ForceShowWindow@CTopLevelWindow@@QEAAX_N@Z @ 0x180019B64 (-ForceShowWindow@CTopLevelWindow@@QEAAX_N@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001C5C4 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180021E28 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180025C04 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180027EF8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?Create@CContainerVisual@@SAJPEAPEAV1@@Z @ 0x18003DF7C (-Create@CContainerVisual@@SAJPEAPEAV1@@Z.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x18003E04C (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?CommitDwmChannel@CCompositor@@QEAAJXZ @ 0x18003EF80 (-CommitDwmChannel@CCompositor@@QEAAJXZ.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x18003FFA0 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x180040290 (-_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180040A2C (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z @ 0x180042210 (-_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z.c)
 *     ?IsGhostWindow@CWindowData@@QEBA_NPEAPEAUHWND__@@@Z @ 0x1800422FC (-IsGhostWindow@CWindowData@@QEBA_NPEAPEAUHWND__@@@Z.c)
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x180042808 (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x180042850 (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800434E0 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x1800436E8 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?RecordWindowRect@CAnimationComponent@@QEAAXXZ @ 0x1800447DC (-RecordWindowRect@CAnimationComponent@@QEAAXXZ.c)
 *     ?SetTransitionStoryboardAndTarget@CAnimatedTransitionVisual@@QEAAXHH@Z @ 0x18004615C (-SetTransitionStoryboardAndTarget@CAnimatedTransitionVisual@@QEAAXHH@Z.c)
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x180050A28 (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x180051BE8 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?GetBrush@CTransitionWindowSnapshot@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAM@Z @ 0x18007C888 (-GetBrush@CTransitionWindowSnapshot@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisual.c)
 *     ?SetClientAreaBrush@CAnimatedTransitionVisual@@QEAAJPEAVCImageLegacyMilBrushProxy@@PEAVCCachedVisualImageProxy@@PEAUD2D_POINT_3F@@@Z @ 0x1800805A0 (-SetClientAreaBrush@CAnimatedTransitionVisual@@QEAAJPEAVCImageLegacyMilBrushProxy@@PEAVCCachedVi.c)
 *     ?_RemoveSnapshotFromVisualTreeIfExists@CTransitionVisualController@@IEAAXPEAVCTransitionWindowSnapshot@@@Z @ 0x180080FB4 (-_RemoveSnapshotFromVisualTreeIfExists@CTransitionVisualController@@IEAAXPEAVCTransitionWindowSn.c)
 *     ?GetSurfaceFromExistingAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@PEBUtagRECT@@_NPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEA_NPEAUD2D_POINT_3F@@@Z @ 0x1800829F4 (-GetSurfaceFromExistingAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationCompon.c)
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x1800852F8 (-IsRTL@CStoryboard@@SA_NXZ.c)
 *     ?GetSurfaceFromThumbnail@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@_NPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAUD2D_POINT_3F@@@Z @ 0x18008919C (-GetSurfaceFromThumbnail@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARG.c)
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual@@HW4StagedBackgroundPolicy@1@@Z @ 0x18008BAFC (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContain.c)
 *     ?SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z @ 0x18008BDF0 (-SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?_StageClone@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual@@_N2PEA_N@Z @ 0x18009A5B8 (-_StageClone@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual@@_N2PEA.c)
 *     ?_RecursivelyRenderOwnedWindows@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x18009A68C (-_RecursivelyRenderOwnedWindows@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ?SetBeginClip@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x1800A4CAC (-SetBeginClip@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetEndClip@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x1800A4E70 (-SetEndClip@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?StealStagedVisual@CAnimatedTransitionVisual@@QEAAJPEAVCContainerVisual@@@Z @ 0x1800A52C4 (-StealStagedVisual@CAnimatedTransitionVisual@@QEAAJPEAVCContainerVisual@@@Z.c)
 *     ?SetStagingVisual@CAnimationComponent@@QEAAXPEAVCVisual@@@Z @ 0x1800A702C (-SetStagingVisual@CAnimationComponent@@QEAAXPEAVCVisual@@@Z.c)
 *     McTemplateU0pp_EtwEventWriteTransfer @ 0x1800D0C64 (McTemplateU0pp_EtwEventWriteTransfer.c)
 *     ?GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z @ 0x1800DD7C8 (-GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z.c)
 *     ?GetIconicThumbnailRepresentation@CTransitionVisualController@@QEAAJPEAVCWindowData@@PEAVCAnimationComponent@@PEBUtagRECT@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAPEAVCVisual@@@Z @ 0x1800DD83C (-GetIconicThumbnailRepresentation@CTransitionVisualController@@QEAAJPEAVCWindowData@@PEAVCAnimat.c)
 *     McTemplateU0pddddddd_EtwEventWriteTransfer @ 0x1800DE0E0 (McTemplateU0pddddddd_EtwEventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTransitionVisualController::CreateAnimationComponent(
        CTransitionVisualController *a1,
        struct CWindowData *WindowDataByHwnd,
        unsigned int a3,
        char a4,
        int a5,
        struct CStoryboard *a6,
        LPRECT lprc,
        CVisual *a8,
        unsigned int a9,
        char a10,
        struct CAnimationComponent **a11)
{
  __int64 v13; // r13
  unsigned int v14; // ebx
  int v15; // edi
  struct tagRECT *v16; // r14
  unsigned __int8 v17; // r15
  unsigned int v18; // eax
  int v19; // edx
  int v20; // edi
  int v21; // ecx
  int v22; // eax
  HWND *v23; // rdx
  int v24; // ebx
  int v25; // ecx
  int v26; // eax
  bool v27; // zf
  bool v28; // di
  bool IsGhostWindow; // dl
  int v30; // ecx
  int v31; // ecx
  __int64 v32; // r12
  char v33; // bl
  CMILRefCountBase *v34; // rax
  int Brush; // eax
  CTransitionVisualController *v36; // rcx
  CVisual *v37; // rbx
  char v38; // r14
  struct CVisual *v39; // r15
  CMILRefCountBase *v40; // r12
  int v41; // r9d
  int v43; // eax
  int v44; // eax
  bool v45; // di
  bool v46; // r9
  struct tagRECT *v47; // r9
  CTransitionVisualController *v48; // rbx
  int DesktopAnimationComponent; // eax
  CTransitionVisualController *v50; // rcx
  CTransitionVisualController *v51; // rcx
  bool IsRTL; // al
  struct tagRECT v53; // xmm0
  LONG v54; // eax
  LONG v55; // ecx
  __m128i v56; // xmm0
  int v57; // ecx
  LONG v58; // r8d
  int v59; // edx
  __m128i v60; // xmm0
  int v61; // edx
  int v62; // ecx
  __int16 v63; // r14
  int *v64; // rbx
  CAnimationComponent **v65; // r10
  struct tagRECT *v66; // r9
  int v67; // r13d
  int v68; // ecx
  int v69; // eax
  struct tagRECT *v70; // r9
  CTransitionVisualController **v71; // rax
  struct CWindowData *v72; // rdx
  const struct tagRECT *v73; // r8
  int v74; // eax
  CBaseObject *v75; // rcx
  int v76; // eax
  int v77; // eax
  int v78; // eax
  CVisual *v79; // rbx
  int v80; // eax
  __int64 v81; // rcx
  char v82; // r8
  CVisual *v83; // r9
  struct CWindowData *v84; // rdx
  struct tagRECT *v85; // r9
  char v86; // r8
  struct CVisual *v87; // rdx
  int v88; // [rsp+28h] [rbp-E0h]
  unsigned int v89; // [rsp+28h] [rbp-E0h]
  bool v90; // [rsp+58h] [rbp-B0h]
  bool v91; // [rsp+59h] [rbp-AFh]
  char v92; // [rsp+5Ah] [rbp-AEh]
  char v93; // [rsp+5Bh] [rbp-ADh]
  bool v94; // [rsp+5Ch] [rbp-ACh]
  struct CVisual *v95; // [rsp+60h] [rbp-A8h] BYREF
  bool v96[4]; // [rsp+68h] [rbp-A0h] BYREF
  char v97; // [rsp+6Ch] [rbp-9Ch]
  char v98; // [rsp+6Dh] [rbp-9Bh]
  char v99; // [rsp+6Eh] [rbp-9Ah]
  int v100; // [rsp+70h] [rbp-98h]
  unsigned int v101; // [rsp+74h] [rbp-94h]
  float v102[2]; // [rsp+78h] [rbp-90h] BYREF
  CVisual *v103; // [rsp+80h] [rbp-88h] BYREF
  struct tagPOINT v104; // [rsp+88h] [rbp-80h] BYREF
  CMILRefCountBase *v105; // [rsp+90h] [rbp-78h]
  CTransitionVisualController *v106; // [rsp+98h] [rbp-70h]
  int v107; // [rsp+A0h] [rbp-68h]
  CBaseObject *v108; // [rsp+A8h] [rbp-60h] BYREF
  CBaseObject *v109; // [rsp+B0h] [rbp-58h] BYREF
  int v110; // [rsp+B8h] [rbp-50h]
  struct CAnimationComponent **v111; // [rsp+C0h] [rbp-48h] BYREF
  struct tagRECT v112; // [rsp+C8h] [rbp-40h] BYREF
  struct tagRECT v113; // [rsp+D8h] [rbp-30h] BYREF
  struct CTransitionWindowSnapshot *v114; // [rsp+E8h] [rbp-20h] BYREF
  int *v115; // [rsp+F0h] [rbp-18h]
  CBaseObject *v116; // [rsp+F8h] [rbp-10h] BYREF
  unsigned __int64 v117; // [rsp+100h] [rbp-8h] BYREF
  struct tagRECT v118; // [rsp+108h] [rbp+0h] BYREF

  v98 = a4;
  v101 = a3;
  v106 = a1;
  v107 = a5;
  v115 = (int *)a6;
  v103 = a8;
  v111 = a11;
  v95 = 0LL;
  v13 = 0LL;
  *(_QWORD *)&v113.left = 0LL;
  v105 = 0LL;
  v108 = 0LL;
  v109 = 0LL;
  v112.left = 1065353216;
  v112.top = 1065353216;
  v112.right = 1065353216;
  v14 = a3 & 0xFFF;
  v110 = (*(__int64 (__fastcall **)(struct CStoryboard *, _QWORD))(*(_QWORD *)a6 + 120LL))(a6, a3 & 0xFFF) & 0x10;
  v116 = 0LL;
  v15 = CTransitionVisualController::_SetDesktopId(a1, *((_QWORD *)WindowDataByHwnd + 17));
  if ( v15 < 0 )
  {
    v89 = 834;
    goto LABEL_60;
  }
  v16 = 0LL;
  if ( !v110 )
    v16 = lprc;
  v17 = 0;
  v117 = 0LL;
  if ( *((_DWORD *)WindowDataByHwnd + 32) == 1
    && (unsigned int)GetDesktopID(1LL, &v117)
    && *((_QWORD *)WindowDataByHwnd + 5) == CWindowList::GetShellWindowForDesktop(
                                              *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                                              v117) )
  {
    v118 = 0LL;
    CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)WindowDataByHwnd + 3, &v118);
    v47 = &v118;
    if ( v16 )
      v47 = v16;
    v48 = v106;
    DesktopAnimationComponent = CTransitionVisualController::CreateDesktopAnimationComponent(
                                  v106,
                                  WindowDataByHwnd,
                                  v107,
                                  v47,
                                  0,
                                  (*((_DWORD *)WindowDataByHwnd + 186) & 0x4000000) != 0,
                                  a6,
                                  v111);
    v15 = DesktopAnimationComponent;
    if ( DesktopAnimationComponent < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        DesktopAnimationComponent,
        0x354u,
        0LL);
      return (unsigned int)v15;
    }
    goto LABEL_105;
  }
  v100 = 0;
  v118 = 0LL;
  v114 = 0LL;
  v104 = 0LL;
  v96[1] = 0;
  v99 = 0;
  v94 = 0;
  v18 = *((_DWORD *)WindowDataByHwnd + 186);
  LODWORD(v102[0]) = (v18 >> 18) & 1;
  if ( v98
    && (v18 & 0x20000000) != 0
    && (int)CTransitionVisualController::GetStoredSnapshotNoRef(v106, *((HWND *)WindowDataByHwnd + 5), &v114) >= 0 )
  {
    v90 = 1;
LABEL_12:
    v92 = 0;
    goto LABEL_13;
  }
  v90 = 0;
  if ( (*((_DWORD *)WindowDataByHwnd + 186) & 0x2000000) != 0 )
    goto LABEL_12;
  v92 = 1;
  if ( ((*(__int64 (__fastcall **)(struct CStoryboard *, _QWORD))(*(_QWORD *)a6 + 120LL))(a6, v14) & 0x20) != 0 )
    goto LABEL_12;
LABEL_13:
  if ( v110
    || (v93 = 0, ((*(__int64 (__fastcall **)(struct CStoryboard *, _QWORD))(*(_QWORD *)a6 + 120LL))(a6, v14) & 0x40) != 0) )
  {
    v93 = 1;
  }
  v19 = *((_DWORD *)WindowDataByHwnd + 189) - *((_DWORD *)WindowDataByHwnd + 187);
  v20 = *((_DWORD *)WindowDataByHwnd + 197) - *((_DWORD *)WindowDataByHwnd + 195);
  v21 = 0;
  if ( v20 >= 0 )
    v21 = *((_DWORD *)WindowDataByHwnd + 197) - *((_DWORD *)WindowDataByHwnd + 195);
  v22 = 0;
  if ( v19 >= 0 )
    v22 = *((_DWORD *)WindowDataByHwnd + 189) - *((_DWORD *)WindowDataByHwnd + 187);
  if ( v22 > v21 )
  {
    v20 = 0;
    if ( v19 >= 0 )
      v20 = *((_DWORD *)WindowDataByHwnd + 189) - *((_DWORD *)WindowDataByHwnd + 187);
  }
  else if ( v20 < 0 )
  {
    v20 = 0;
  }
  v23 = (HWND *)(unsigned int)(*((_DWORD *)WindowDataByHwnd + 190) - *((_DWORD *)WindowDataByHwnd + 188));
  v24 = *((_DWORD *)WindowDataByHwnd + 198) - *((_DWORD *)WindowDataByHwnd + 196);
  v25 = 0;
  if ( v24 >= 0 )
    v25 = *((_DWORD *)WindowDataByHwnd + 198) - *((_DWORD *)WindowDataByHwnd + 196);
  v26 = 0;
  if ( (int)v23 >= 0 )
    v26 = *((_DWORD *)WindowDataByHwnd + 190) - *((_DWORD *)WindowDataByHwnd + 188);
  if ( v26 > v25 )
  {
    v24 = 0;
    if ( (int)v23 >= 0 )
      v24 = *((_DWORD *)WindowDataByHwnd + 190) - *((_DWORD *)WindowDataByHwnd + 188);
  }
  else if ( v24 < 0 )
  {
    v24 = 0;
  }
  if ( (*((_DWORD *)WindowDataByHwnd + 186) & 0x10000000) == 0
    || (v97 = 1, (int)CTransitionVisualController::GetClonableOwnedWindowCount(WindowDataByHwnd) <= 0) )
  {
    v97 = 0;
  }
  if ( (*((_DWORD *)WindowDataByHwnd + 29) & 0x20000000) == 0
    && !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 516)
    || (v27 = *((_QWORD *)WindowDataByHwnd + 60) == 0LL, v96[3] = 1, v27) )
  {
    v96[3] = 0;
  }
  if ( !a10 )
    goto LABEL_34;
  v43 = 0;
  if ( *((_DWORD *)WindowDataByHwnd + 14) - *((_DWORD *)WindowDataByHwnd + 12) >= 0 )
    v43 = *((_DWORD *)WindowDataByHwnd + 14) - *((_DWORD *)WindowDataByHwnd + 12);
  if ( v43 < v20 )
    goto LABEL_34;
  v44 = 0;
  if ( *((_DWORD *)WindowDataByHwnd + 15) - *((_DWORD *)WindowDataByHwnd + 13) >= 0 )
    v44 = *((_DWORD *)WindowDataByHwnd + 15) - *((_DWORD *)WindowDataByHwnd + 13);
  if ( v44 < v24
    || (*((_DWORD *)WindowDataByHwnd + 186) & 0x1000000) != 0
    && (*((_DWORD *)WindowDataByHwnd + 187) || *((_DWORD *)WindowDataByHwnd + 188)) )
  {
LABEL_34:
    v28 = 0;
  }
  else
  {
    v28 = 1;
  }
  v96[0] = v28;
  IsGhostWindow = CWindowData::IsGhostWindow(WindowDataByHwnd, v23);
  v91 = IsGhostWindow;
  v30 = *((_DWORD *)WindowDataByHwnd + 186);
  if ( (v30 & 0x200000) == 0 )
    goto LABEL_36;
  if ( (v30 & 0x10000000) != 0 )
  {
    if ( (unsigned int)CTransitionVisualController::GetClonableOwnedWindowCount(WindowDataByHwnd) )
      goto LABEL_36;
    IsGhostWindow = v91;
  }
  if ( (*((_BYTE *)WindowDataByHwnd + 736) & 4) == 0
    && !IsGhostWindow
    && ((*((_DWORD *)WindowDataByHwnd + 186) & 0x1000000) == 0
     || !*((_DWORD *)WindowDataByHwnd + 187) && !*((_DWORD *)WindowDataByHwnd + 188)) )
  {
    v96[2] = 1;
    goto LABEL_37;
  }
LABEL_36:
  v96[2] = 0;
  IsGhostWindow = v91;
LABEL_37:
  v31 = *((_DWORD *)WindowDataByHwnd + 140);
  if ( v31 == 1 && (v32 = **((_QWORD **)WindowDataByHwnd + 67), (*(_DWORD *)(v32 + 36) & 0x900000) == 0x900000) )
    v17 = 1;
  else
    v32 = 0LL;
  v33 = 0;
  if ( IsGhostWindow && !v17 && (*((_BYTE *)WindowDataByHwnd + 740) & 1) != 0 && v28 && v31 )
  {
    v66 = v16;
    if ( !v16 )
      v66 = (struct tagRECT *)((char *)WindowDataByHwnd + 48);
    if ( (int)CTransitionVisualController::GetSurfaceFromThumbnail(
                **((_QWORD **)WindowDataByHwnd + 67),
                *(_QWORD *)(**((_QWORD **)WindowDataByHwnd + 67) + 24LL),
                *((unsigned int *)WindowDataByHwnd + 186),
                v66,
                v93,
                &v108,
                &v109,
                &v112) >= 0 )
    {
      v92 = 0;
      v33 = 1;
    }
  }
  if ( !v90 && !*((_QWORD *)WindowDataByHwnd + 3) )
  {
    WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                         *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                         *((HWND *)WindowDataByHwnd + 5));
    if ( !WindowDataByHwnd )
    {
      v15 = -2147024890;
      v89 = 915;
      goto LABEL_60;
    }
  }
  v34 = (CMILRefCountBase *)DefaultHeap::AllocClear(0xA0uLL);
  v105 = v34;
  if ( !v34 )
  {
    v105 = 0LL;
    goto LABEL_59;
  }
  v105 = (CMILRefCountBase *)CAnimationComponent::CAnimationComponent(
                               v34,
                               *((_QWORD *)WindowDataByHwnd + 5),
                               v101,
                               (unsigned int)v107,
                               v115);
  if ( !v105 )
  {
LABEL_59:
    v15 = -2147024882;
    v89 = 919;
LABEL_60:
    v41 = v15;
LABEL_61:
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v41,
      v89,
      0LL);
LABEL_62:
    v39 = v95;
    goto LABEL_63;
  }
  v15 = CTransitionVisualController::_EnsureTransitionVisualRoot(v106);
  if ( v15 < 0 )
  {
    v89 = 921;
    goto LABEL_60;
  }
  Brush = CTransitionVisualController::_EnsureStagingVisualRoot(v106);
  v15 = Brush;
  if ( Brush < 0 )
  {
    v89 = 922;
    goto LABEL_88;
  }
  if ( v17
    || CWindowData::IsImmersiveWindow(WindowDataByHwnd) && (*((_BYTE *)WindowDataByHwnd + 740) & 0x10) != 0 && v92 )
  {
    v67 = 8 * v17 + 2;
    v100 = v67;
    v37 = (CVisual *)v16;
    if ( v103 && v16 )
      v37 = v103;
    if ( (v101 & 0x4000000) != 0 || v91 )
    {
      v68 = 4096;
      v69 = 12288;
    }
    else
    {
      v68 = 0;
      v69 = 0x2000;
    }
    if ( v37 )
      v69 = v68;
    v83 = v37;
    if ( !v37 )
      v83 = (struct CWindowData *)((char *)WindowDataByHwnd + 48);
    if ( v17 )
      v84 = *(struct CWindowData **)(v32 + 24);
    else
      v84 = WindowDataByHwnd;
    v40 = v105;
    v39 = v95;
    if ( (int)CTransitionVisualController::GetIconicThumbnailRepresentation(&v116, v84, v105, v83, v69, &v116) >= 0 )
    {
      v75 = v116;
      v104 = (struct tagPOINT)v116;
      v100 = v67;
      goto LABEL_110;
    }
LABEL_222:
    v75 = (CBaseObject *)v104;
    goto LABEL_110;
  }
  if ( !v96[0] )
    goto LABEL_83;
  if ( !v33 )
  {
    v70 = v16;
    if ( !v16 )
      v70 = (struct tagRECT *)((char *)WindowDataByHwnd + 48);
    if ( v91 && *((_DWORD *)WindowDataByHwnd + 140) )
    {
      v71 = (CTransitionVisualController **)*((_QWORD *)WindowDataByHwnd + 67);
      v36 = *v71;
      v72 = (struct CWindowData *)*((_QWORD *)*v71 + 3);
    }
    else
    {
      v72 = WindowDataByHwnd;
    }
    LOBYTE(v88) = v93;
    if ( (int)CTransitionVisualController::GetSurfaceFromThumbnail(
                v36,
                v72,
                *((unsigned int *)WindowDataByHwnd + 186),
                v70,
                v88,
                &v108,
                &v109,
                &v112) < 0 )
    {
LABEL_83:
      if ( a10 )
      {
        v73 = v16;
        if ( !v16 )
          v73 = (const struct tagRECT *)((char *)WindowDataByHwnd + 48);
        v45 = v90;
        v40 = v105;
        if ( CTransitionVisualController::GetSurfaceFromExistingAnimationComponent(
               v106,
               v105,
               v73,
               v90,
               &v108,
               &v109,
               &v96[1],
               (struct D2D_POINT_3F *)&v112) >= 0 )
        {
          v100 = 3;
          if ( CTransitionVisualController::HasVisibleStyle(*((HWND *)WindowDataByHwnd + 5)) )
            CTransitionVisualController::_MoveWindowOffscreen(*((struct CTopLevelWindow **)WindowDataByHwnd + 55), 1);
          if ( v96[1] )
            *((_BYTE *)v40 + 67) = 1;
          goto LABEL_51;
        }
      }
      else
      {
        v40 = v105;
        v45 = v90;
      }
      if ( v96[2] )
      {
        v100 = 6;
        Brush = CContainerVisual::Create(&v95);
        v15 = Brush;
        if ( Brush < 0 )
        {
          v89 = 1004;
          goto LABEL_88;
        }
        v39 = v95;
        v74 = CTransitionVisualController::_StageClone(
                v106,
                *((struct CTopLevelWindow **)WindowDataByHwnd + 55),
                v95,
                v46,
                1,
                0LL);
        v15 = v74;
        if ( v74 >= 0 )
        {
          v99 = 1;
          v37 = (CVisual *)v16;
          v38 = 0;
          goto LABEL_53;
        }
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2LL,
          v74,
          0x3EDu,
          0LL);
LABEL_63:
        if ( v108 )
          CBaseObject::Release(v108);
        v40 = v105;
        if ( !v105 )
          goto LABEL_66;
        goto LABEL_247;
      }
      if ( v45 )
      {
        v100 = 7;
        if ( CTransitionVisualController::HasVisibleStyle(*((HWND *)WindowDataByHwnd + 5)) )
          CTransitionVisualController::_MoveOwnedWindowTreeOffscreen((struct CTopLevelWindow **)WindowDataByHwnd);
        v102[0] = 0.0;
        Brush = CTransitionWindowSnapshot::GetBrush(v114, &v108, &v109, v102);
        v15 = Brush;
        if ( Brush >= 0 )
        {
          *(float *)&v112.top = 1.0 / v102[0];
          *(float *)&v112.left = 1.0 / v102[0];
          *((_BYTE *)v40 + 67) = 1;
          v37 = (CVisual *)v16;
          v38 = 1;
          goto LABEL_52;
        }
        v89 = 1026;
LABEL_88:
        v41 = Brush;
        goto LABEL_61;
      }
      if ( a10 && v96[3] && *(_QWORD *)(*((_QWORD *)WindowDataByHwnd + 60) + 24LL) )
      {
        v100 = 11;
        if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 516) && v16 )
        {
          OffsetRect(v16, -*((_DWORD *)WindowDataByHwnd + 16), -*((_DWORD *)WindowDataByHwnd + 18));
          OffsetRect(v16, -*((_DWORD *)WindowDataByHwnd + 24), -*((_DWORD *)WindowDataByHwnd + 26));
        }
        v75 = *(CBaseObject **)(*((_QWORD *)WindowDataByHwnd + 60) + 24LL);
        v104 = (struct tagPOINT)v75;
        v37 = (CVisual *)v16;
      }
      else
      {
        v37 = (CVisual *)v16;
        if ( v97 )
        {
          v103 = 0LL;
          v100 = 8;
          CTransitionVisualController::_RecursivelyRenderOwnedWindows(v36, WindowDataByHwnd);
          v76 = CCompositor::CommitDwmChannel(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6));
          v15 = v76;
          if ( v76 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
              2LL,
              v76,
              0x422u,
              0LL);
          }
          else
          {
            v77 = CContainerVisual::Create(&v95);
            v15 = v77;
            if ( v77 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(
                0x14u,
                &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                2LL,
                v77,
                0x426u,
                0LL);
            }
            else
            {
              v103 = 0LL;
              v78 = CContainerVisual::Create(&v103);
              v15 = v78;
              if ( v78 >= 0 )
              {
                v79 = v103;
                v39 = v95;
                v15 = CContainerVisual::AddChild(v95, v103);
                if ( v15 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(
                    0x14u,
                    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                    2LL,
                    v15,
                    0x428u,
                    0LL);
                }
                else
                {
                  v104.x = -*((_DWORD *)WindowDataByHwnd + 12);
                  v104.y = -*((_DWORD *)WindowDataByHwnd + 13);
                  CVisual::SetOffset((struct tagPOINT *)v79, &v104);
                  v80 = CTransitionVisualController::_StageCloneWithOwnedWindows(
                          v106,
                          *((_QWORD *)WindowDataByHwnd + 55),
                          v79,
                          a9,
                          LODWORD(v102[0]));
                  v15 = v80;
                  if ( v80 >= 0 )
                  {
                    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
                      McTemplateU0pp_EtwEventWriteTransfer(
                        v81,
                        &CommitChannel_Transition_OwnedWindow,
                        WindowDataByHwnd,
                        *((_QWORD *)WindowDataByHwnd + 5));
                    CAnimationComponent::SetStagingVisual(v40, v39);
                    if ( (*((_DWORD *)WindowDataByHwnd + 186) & 0x20000000) != 0 )
                    {
                      if ( v98 != v82 )
                        *((_BYTE *)v40 + 67) = 1;
                      if ( (*((_DWORD *)WindowDataByHwnd + 186) & 0x20000000) != 0 )
                        CTransitionVisualController::_MoveOwnedWindowTreeOffscreen((struct CTopLevelWindow **)WindowDataByHwnd);
                    }
                    v104 = *(struct tagPOINT *)(*((_QWORD *)v79 + 19) + 8LL * LODWORD(v102[0]));
                    v94 = (*((_DWORD *)WindowDataByHwnd + 186) & 0x80000) != 0
                       && (*((_BYTE *)WindowDataByHwnd + 737) & 0x20) != 0;
                    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v103);
                    v37 = (CVisual *)v16;
                    goto LABEL_222;
                  }
                  MilInstrumentationCheckHR_MaybeFailFast(
                    0x14u,
                    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                    2LL,
                    v80,
                    0x42Fu,
                    0LL);
                }
                wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v103);
                goto LABEL_63;
              }
              MilInstrumentationCheckHR_MaybeFailFast(
                0x14u,
                &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                2LL,
                v78,
                0x427u,
                0LL);
            }
          }
          wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v103);
          goto LABEL_62;
        }
        v75 = 0LL;
      }
      v39 = v95;
LABEL_110:
      v38 = 0;
      if ( v75 )
        goto LABEL_111;
      goto LABEL_53;
    }
  }
  v100 = 4;
  if ( CTransitionVisualController::HasVisibleStyle(*((HWND *)WindowDataByHwnd + 5)) )
    CTransitionVisualController::_MoveWindowOffscreen(*((struct CTopLevelWindow **)WindowDataByHwnd + 55), 1);
LABEL_51:
  v37 = (CVisual *)v16;
  v38 = 0;
LABEL_52:
  v39 = v95;
LABEL_53:
  if ( !v108 )
  {
    v100 = 9;
    v104 = (struct tagPOINT)*((_QWORD *)WindowDataByHwnd + 55);
    CTransitionVisualController::_MoveWindowOffscreen(*(struct CTopLevelWindow **)&v104, 1);
    CTopLevelWindow::ForceShowWindow(*((CTopLevelWindow **)WindowDataByHwnd + 55), 1);
  }
  v40 = v105;
LABEL_111:
  CAnimationComponent::RecordWindowRect(v40);
  if ( !IsRectEmpty((const RECT *)((char *)WindowDataByHwnd + 812)) )
  {
    *(_OWORD *)((char *)v40 + 104) = *(_OWORD *)((char *)WindowDataByHwnd + 812);
    *((_DWORD *)v40 + 17) = 2;
  }
  CTransitionVisualController::_StopAnimations(v51, (HWND *)WindowDataByHwnd);
  v15 = CAnimatedTransitionVisual::Create((struct CAnimatedTransitionVisual **)&v113);
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v15,
      0x466u,
      0LL);
    v13 = *(_QWORD *)&v113.left;
    goto LABEL_63;
  }
  IsRTL = CStoryboard::IsRTL();
  v13 = *(_QWORD *)&v113.left;
  *(_BYTE *)(*(_QWORD *)&v113.left + 924LL) = IsRTL;
  if ( v37 )
  {
    v53 = *(struct tagRECT *)v37;
  }
  else if ( v38 )
  {
    v53 = *(struct tagRECT *)(*(_QWORD *)(*((_QWORD *)v114 + 30) + 32LL) + 48LL);
  }
  else
  {
    v53 = *(struct tagRECT *)((char *)v40 + 88);
  }
  v118 = v53;
  v54 = v53.right - v53.left;
  if ( v53.right - v53.left < 0 )
    v54 = 0;
  v113.left = v54;
  v55 = v118.bottom - v118.top;
  if ( v118.bottom - v118.top < 0 )
    v55 = 0;
  v113.top = v55;
  *(_QWORD *)(v13 + 904) = *(_QWORD *)&v113.left;
  if ( !v37 )
  {
    v56 = *(__m128i *)((char *)v40 + 120);
    v57 = 0;
    if ( v118.right - v118.left >= 0 )
      v57 = v118.right - v118.left;
    v58 = *(_OWORD *)((char *)v40 + 120);
    v118.right = v57 - v56.m128i_i32[1];
    v59 = 0;
    if ( v118.bottom - v118.top >= 0 )
      v59 = v118.bottom - v118.top;
    v60 = _mm_srli_si128(v56, 8);
    v118.bottom = v59 - v60.m128i_i32[1];
    v118.left = v58;
    v118.top = _mm_cvtsi128_si32(v60);
  }
  if ( v108 )
  {
    v15 = CAnimatedTransitionVisual::SetClientAreaBrush(
            (CAnimatedTransitionVisual *)v13,
            v108,
            v109,
            (struct D2D_POINT_3F *)&v112);
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        v15,
        0x493u,
        0LL);
      goto LABEL_63;
    }
    goto LABEL_132;
  }
  if ( v99 )
  {
    v15 = CAnimatedTransitionVisual::StealStagedVisual((CAnimatedTransitionVisual *)v13, v39);
    if ( v15 >= 0 )
    {
LABEL_132:
      v63 = v101;
LABEL_133:
      v64 = v115;
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0pddddddd_EtwEventWriteTransfer(
          v62,
          v61,
          *((_QWORD *)WindowDataByHwnd + 5),
          v115[18],
          v63,
          v100,
          v118.left,
          v118.top,
          v118.right,
          v118.bottom);
      if ( v110 )
      {
        v112 = *(struct tagRECT *)((char *)WindowDataByHwnd + 748);
        v113 = *(struct tagRECT *)((char *)WindowDataByHwnd + 780);
        CAnimatedTransitionVisual::SetBeginClip((CAnimatedTransitionVisual *)v13, &v112);
        CAnimatedTransitionVisual::SetEndClip((CAnimatedTransitionVisual *)v13, &v113);
        *(_BYTE *)(v13 + 938) = 1;
      }
      CAnimatedTransitionVisual::SetTransitionStoryboardAndTarget((CAnimatedTransitionVisual *)v13, v64[18], v107);
      if ( (*(char (__fastcall **)(int *, _QWORD))(*(_QWORD *)v64 + 120LL))(v64, v63 & 0xFFF) < 0 )
        *(_BYTE *)(v13 + 989) = 0;
      *v111 = v40;
      CMILRefCountBase::AddRef(v40);
      CAnimationComponent::SetTransitionVisual(*v65, (struct CAnimatedTransitionVisual *)v13);
      v48 = v106;
LABEL_105:
      if ( (*((_DWORD *)WindowDataByHwnd + 186) & 0x20000000) != 0 )
      {
        v111 = 0LL;
        if ( (int)CTransitionVisualController::GetStoredSnapshotNoRef(
                    v48,
                    *((HWND *)WindowDataByHwnd + 5),
                    (struct CTransitionWindowSnapshot **)&v111) >= 0 )
          CTransitionVisualController::_RemoveSnapshotFromVisualTreeIfExists(
            v50,
            (struct CTransitionWindowSnapshot *)v111);
      }
      goto LABEL_62;
    }
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v15,
      0x49Au,
      0LL);
  }
  else
  {
    v85 = &v118;
    if ( v38 )
      v85 = 0LL;
    v63 = v101;
    if ( (v101 & 0x4000000) == 0 || (v86 = 1, v94) )
      v86 = 0;
    v87 = (struct CVisual *)v104;
    if ( v39 )
      v87 = v39;
    v15 = CAnimatedTransitionVisual::SetVisual((struct CBaseImageProxy **)v13, v87, v86, v85);
    if ( v15 >= 0 )
      goto LABEL_133;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v15,
      0x49Eu,
      0LL);
  }
LABEL_247:
  CBaseObject::Release(v40);
LABEL_66:
  if ( v39 )
    CBaseObject::Release(v39);
  if ( v13 )
    CBaseObject::Release((CBaseObject *)(v13 + 8));
  if ( v109 )
    CBaseObject::Release(v109);
  if ( v116 )
    CBaseObject::Release(v116);
  return (unsigned int)v15;
}
