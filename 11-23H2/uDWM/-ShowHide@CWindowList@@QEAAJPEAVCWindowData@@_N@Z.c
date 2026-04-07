/*
 * XREFs of ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800482A0
 * Callers:
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180043580 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x180048060 (-CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18004D89C (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ShowHide@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18004EFB0 (-ShowHide@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800EBC10 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x180003BA4 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x180007C08 (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800182E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x180018FB4 (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z @ 0x18001C89C (-UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18001DCB4 (-InternalRelease@-$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetActiveStoryboardCount@CAnimationScheduler@@QEAAHXZ @ 0x18001E410 (-GetActiveStoryboardCount@CAnimationScheduler@@QEAAHXZ.c)
 *     ?Hide@CVisual@@QEAAXXZ @ 0x18001FE8C (-Hide@CVisual@@QEAAXXZ.c)
 *     ?Unhide@CVisual@@QEAAXXZ @ 0x180020664 (-Unhide@CVisual@@QEAAXXZ.c)
 *     ?SetHolographic@CTopLevelWindow@@QEAAJ_N@Z @ 0x180021578 (-SetHolographic@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180036300 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180036F9C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180037010 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x18003EF90 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180041E40 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?InsertIntoVisualTree@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180044F48 (-InsertIntoVisualTree@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180045E04 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180047634 (-UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?SetPassiveUpdateMode@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x180047710 (-SetPassiveUpdateMode@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z.c)
 *     ?SetExcludeFromDDA@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x1800477D0 (-SetExcludeFromDDA@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z.c)
 *     ?ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800478B4 (-ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ @ 0x180047940 (-UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x180049AF0 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x18004BD84 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18004E40C (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18004E4AC (-EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ @ 0x18004EDF0 (-ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?PropertiesAllowAutoParenting@CWindowData@@QEBA_NXZ @ 0x18004FAD8 (-PropertiesAllowAutoParenting@CWindowData@@QEBA_NXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180050D7C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_ItemClosedEventOnVisibility@@@details@wil@@QEAA_NXZ @ 0x1800656F8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_ItemClosedEventOnVisibili.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180106C50 (-OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?ToggleAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18010CC54 (-ToggleAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::ShowHide(CWindowList *this, struct CWindowData *a2, char a3)
{
  char v3; // r15
  char v6; // al
  __int64 v7; // rdx
  __int64 v8; // r12
  int v9; // eax
  CWindowList *v10; // rcx
  unsigned int v11; // ebx
  int inserted; // eax
  unsigned int v14; // esi
  __int64 v15; // rdx
  __int64 v16; // rax
  char *v17; // rax
  char *v18; // r14
  struct CWindowData *v19; // rbx
  char v20; // si
  CWindowList *v21; // rcx
  __int64 v22; // rdx
  __int64 i; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbx
  int v27; // eax
  __int64 j; // rbx
  __int64 v29; // rsi
  int v30; // eax
  __int64 k; // rbx
  int updated; // eax
  unsigned int v33; // ebx
  __int64 v34; // rbx
  int v35; // eax
  __int64 m; // rbx
  __int64 v37; // rbx
  int v38; // eax
  __int64 n; // rbx
  __int64 v40; // rbx
  double v41; // xmm6_8
  float v42; // xmm0_4
  __int64 v43; // rsi
  int v44; // eax
  __int64 ii; // rbx
  int v46; // eax
  __int64 jj; // rbx
  __int64 v48; // rbx
  int v49; // eax
  __int64 kk; // rbx
  CWindowIconic *v51; // rcx
  __int64 v52; // rbx
  CRenderDataVisual *v53; // rcx
  int v54; // eax
  __int64 mm; // rbx
  __int64 v56; // rbx
  int v57; // eax
  __int64 nn; // rbx
  __int64 v59; // rcx
  __int64 v60; // rax
  char v61; // dl
  __int64 v62; // rbx
  int v63; // eax
  int v64; // eax
  struct CVisual *v65; // rdx
  __int64 v66; // rcx
  char v67; // al
  __int64 v68; // rcx
  char v69; // al
  int v70; // eax
  unsigned int v71; // ebx
  __int64 v72; // r9
  int v73; // eax
  unsigned int v74; // ebx
  CVisual *v75; // rcx
  int v76; // eax
  CVisual *v77; // rcx
  int v78; // eax
  int v79; // eax
  unsigned int v80; // ebx
  int v81; // eax
  unsigned int v82; // ebx
  int v83; // eax
  unsigned int v84; // ebx
  int v85; // eax
  unsigned int v86; // ebx
  CTopLevelWindow3D *v87; // rcx
  int v88; // eax
  unsigned int v89; // ebx
  __int64 v90; // rax
  bool v91; // al
  int v92; // esi
  __int64 v93; // rdx
  __int64 v94; // r8
  __int64 v95; // r9
  unsigned int v96; // ebx
  unsigned int v97; // r14d
  __int64 v98; // r15
  int v99; // eax
  int v100; // ebx
  CWindowData *v101; // rcx
  int v102; // eax
  CTransitionVisualController *v103; // r10
  int v104; // eax
  _QWORD *v105; // rax
  int v106; // eax
  unsigned int v107; // ebx
  int v108; // [rsp+28h] [rbp-79h]
  int v109; // [rsp+28h] [rbp-79h]
  int v110; // [rsp+28h] [rbp-79h]
  __int128 v111; // [rsp+38h] [rbp-69h] BYREF
  __int64 v112; // [rsp+48h] [rbp-59h]
  unsigned int v113; // [rsp+50h] [rbp-51h]
  __int64 Buffer; // [rsp+58h] [rbp-49h] BYREF
  __int64 v115; // [rsp+60h] [rbp-41h]
  __int128 v116; // [rsp+68h] [rbp-39h]
  __int128 v117; // [rsp+78h] [rbp-29h]
  __int128 v118; // [rsp+88h] [rbp-19h]
  __int64 v119; // [rsp+98h] [rbp-9h]
  char v120; // [rsp+A0h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]
  bool v122; // [rsp+110h] [rbp+6Fh] BYREF
  char v123; // [rsp+118h] [rbp+77h]

  v123 = a3;
  v3 = a3;
  v6 = *((_BYTE *)a2 + 672) & 1;
  v122 = 0;
  v7 = *((_QWORD *)a2 + 5);
  v8 = 0LL;
  if ( v7 && v7 == *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 77) || !v6 )
  {
    v85 = CLivePreview::OnWindowShowHide(
            *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 57),
            a2,
            &v122,
            0);
    v86 = v85;
    if ( v85 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB95,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v85,
        v108);
      return v86;
    }
    if ( !v122 )
    {
      v87 = (CTopLevelWindow3D *)*((_QWORD *)a2 + 56);
      if ( v87 )
      {
        v88 = CTopLevelWindow3D::ShowWindow(v87, 0, 0);
        v89 = v88;
        if ( v88 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xB9B,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
            (const char *)(unsigned int)v88,
            v108);
          return v89;
        }
      }
    }
  }
  else
  {
    v9 = CWindowList::EnsureTopLevelWindow(this, a2);
    v11 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB59,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v9,
        v108);
      return v11;
    }
    if ( *(struct CWindowData **)a2 == a2 )
    {
      if ( (*((_BYTE *)a2 + 678) & 0x10) != 0 )
      {
        inserted = CWindowList::ToggleAutoParenting(v10, a2);
        v14 = inserted;
        if ( inserted < 0 )
        {
          v15 = 8168LL;
LABEL_46:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v15,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
            (const char *)(unsigned int)inserted,
            v108);
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xB5C,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
            (const char *)v14,
            v109);
          return v14;
        }
      }
    }
    else
    {
      v16 = *((_QWORD *)a2 + 17);
      v115 = 0LL;
      v116 = 0LL;
      v119 = -1LL;
      v120 = 0;
      v117 = 0LL;
      v118 = 0LL;
      Buffer = v16;
      v17 = (char *)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), &Buffer);
      v18 = v17 + 80;
      if ( !v17 )
        v18 = 0LL;
      v19 = a2;
      v20 = 1;
LABEL_13:
      v21 = (CWindowList *)*((_QWORD *)v19 + 3);
      if ( v21 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(CWindowList *))(*(_QWORD *)v21 + 440LL))(v21) )
        {
          if ( CWindowData::PropertiesAllowAutoParenting(v19)
            && (*((_BYTE *)v19 + 677) & 0x10) == 0
            && !*((_QWORD *)v19 + 58)
            && (*((_BYTE *)v19 + 676) & 2) == 0 )
          {
            v22 = *((_QWORD *)v19 + 75);
            if ( (*(_BYTE *)(v22 + 672) & 1) != 0 && *(_QWORD *)(v22 + 440) && (*(_BYTE *)(v22 + 678) & 0x10) == 0 )
            {
              for ( i = *((_QWORD *)v19 + 1); (char *)i != v18; i = *(_QWORD *)(i + 8) )
              {
                if ( i == v22 )
                  goto LABEL_31;
                if ( (*(_BYTE *)(i + 672) & 1) != 0 )
                {
                  v21 = *(CWindowList **)(i + 440);
                  if ( v21 )
                  {
                    if ( *((_QWORD *)v21 + 3) )
                    {
                      if ( *(_QWORD *)(i + 600) == v22 && (*(_BYTE *)(i + 678) & 0x10) != 0 )
                      {
LABEL_31:
                        LOBYTE(v21) = 1;
                        goto LABEL_33;
                      }
                      break;
                    }
                  }
                }
              }
            }
          }
        }
      }
      LOBYTE(v21) = 0;
LABEL_33:
      if ( (_BYTE)v21 == ((*((_BYTE *)v19 + 678) & 0x10) != 0) )
      {
        if ( v20 )
        {
          inserted = CWindowList::InsertIntoVisualTree(this, (struct _LIST_ENTRY *)v19);
          v14 = inserted;
          if ( inserted >= 0 )
            goto LABEL_38;
          v15 = 0x1FFFLL;
          goto LABEL_46;
        }
      }
      else
      {
        inserted = CWindowList::ToggleAutoParenting(v21, v19);
        v14 = inserted;
        if ( inserted < 0 )
        {
          v15 = 8184LL;
          goto LABEL_46;
        }
LABEL_38:
        while ( 1 )
        {
          v20 = 0;
          v24 = *(_QWORD *)v19;
          v19 = (struct CWindowData *)v24;
          if ( !v24 || (char *)v24 == v18 || (struct CWindowData *)v24 == a2 )
            break;
          if ( (*(_BYTE *)(v24 + 672) & 1) != 0 )
          {
            v25 = *(_QWORD *)(v24 + 440);
            if ( v25 )
            {
              if ( *(_QWORD *)(v25 + 24) )
                goto LABEL_13;
            }
          }
        }
      }
    }
    v26 = *((_QWORD *)a2 + 55);
    v27 = *(_DWORD *)(v26 + 88);
    if ( (v27 & 0x400000) == 0 )
    {
      *(_DWORD *)(v26 + 88) = v27 | 0x400000;
      for ( j = *(_QWORD *)(v26 + 24); j; j = *(_QWORD *)(j + 24) )
      {
        if ( (*(_BYTE *)(j + 88) & 1) != 0 )
          break;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)j + 32LL))(j);
      }
    }
    v29 = *((_QWORD *)a2 + 55);
    v30 = *(_DWORD *)(v29 + 88);
    if ( (v30 & 0x8000) == 0 )
    {
      *(_DWORD *)(v29 + 88) = v30 | 0x8000;
      for ( k = *(_QWORD *)(v29 + 24); k; k = *(_QWORD *)(k + 24) )
      {
        if ( (*(_BYTE *)(k + 88) & 1) != 0 )
          break;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)k + 32LL))(k);
      }
    }
    updated = CTopLevelWindow::UpdateRemoteAppRenderTargetOpacity((CTopLevelWindow *)v29);
    v33 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x64Fu, 0LL);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB60,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)v33,
        v110);
      return v33;
    }
    v34 = *((_QWORD *)a2 + 55);
    v35 = *(_DWORD *)(v34 + 88);
    if ( (v35 & 0x10000) == 0 )
    {
      *(_DWORD *)(v34 + 88) = v35 | 0x10000;
      for ( m = *(_QWORD *)(v34 + 24); m; m = *(_QWORD *)(m + 24) )
      {
        if ( (*(_BYTE *)(m + 88) & 1) != 0 )
          break;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)m + 32LL))(m);
      }
    }
    v37 = *((_QWORD *)a2 + 55);
    v38 = *(_DWORD *)(v37 + 88);
    if ( (v38 & 0x20000) == 0 )
    {
      *(_DWORD *)(v37 + 88) = v38 | 0x20000;
      for ( n = *(_QWORD *)(v37 + 24); n; n = *(_QWORD *)(n + 24) )
      {
        if ( (*(_BYTE *)(n + 88) & 1) != 0 )
          break;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)n + 32LL))(n);
      }
    }
    v40 = *((_QWORD *)a2 + 55);
    v41 = (double)*(unsigned __int8 *)(*(_QWORD *)(v40 + 752) + 408LL) / 255.0;
    if ( (*(_BYTE *)(*(_QWORD *)(v40 + 752) + 676LL) & 2) != 0 )
    {
      if ( v41 <= 0.0 )
      {
        CVisual::SetOpacity(*((CVisual **)a2 + 55), 1.0);
        CVisual::Hide((CVisual *)v40);
        *(_BYTE *)(v40 + 249) |= 0x40u;
      }
      else
      {
        if ( (*(_BYTE *)(v40 + 249) & 0x40) != 0 )
        {
          CVisual::Unhide(*((CVisual **)a2 + 55));
          *(_BYTE *)(v40 + 249) &= ~0x40u;
        }
        CVisual::SetOpacity((CVisual *)v40, v41);
      }
    }
    else
    {
      v42 = v41;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*(double *)(v40 + 192) - v42) & _xmm) > 0.0000011920929 )
      {
        *(double *)(v40 + 192) = v41;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v40 + 24LL))(v40, 32LL);
      }
    }
    v43 = *((_QWORD *)a2 + 55);
    v44 = *(_DWORD *)(v43 + 88);
    if ( (v44 & 0x40000) == 0 )
    {
      *(_DWORD *)(v43 + 88) = v44 | 0x40000;
      for ( ii = *(_QWORD *)(v43 + 24); ii; ii = *(_QWORD *)(ii + 24) )
      {
        if ( (*(_BYTE *)(ii + 88) & 1) != 0 )
          break;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)ii + 32LL))(ii);
      }
    }
    v46 = *(_DWORD *)(v43 + 88);
    if ( (v46 & 0x4000000) == 0 )
    {
      *(_DWORD *)(v43 + 88) = v46 | 0x4000000;
      for ( jj = *(_QWORD *)(v43 + 24); jj; jj = *(_QWORD *)(jj + 24) )
      {
        if ( (*(_BYTE *)(jj + 88) & 1) != 0 )
          break;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)jj + 32LL))(jj);
      }
    }
    v48 = *((_QWORD *)a2 + 55);
    if ( v48 )
    {
      v49 = *(_DWORD *)(v48 + 88);
      if ( (v49 & 0x100000) == 0 )
      {
        *(_DWORD *)(v48 + 88) = v49 | 0x100000;
        for ( kk = *(_QWORD *)(v48 + 24); kk; kk = *(_QWORD *)(kk + 24) )
        {
          if ( (*(_BYTE *)(kk + 88) & 1) != 0 )
            break;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)kk + 32LL))(kk);
        }
      }
    }
    v51 = (CWindowIconic *)*((_QWORD *)a2 + 61);
    if ( v51 )
      CWindowIconic::OnColorizationUpdated(v51, 1);
    v52 = *((_QWORD *)a2 + 55);
    v53 = *(CRenderDataVisual **)(v52 + 336);
    if ( v53 )
      CRenderDataVisual::ClearInstructions(v53);
    v54 = *(_DWORD *)(v52 + 88);
    if ( (v54 & 0x80000) == 0 )
    {
      *(_DWORD *)(v52 + 88) = v54 | 0x80000;
      for ( mm = *(_QWORD *)(v52 + 24); mm; mm = *(_QWORD *)(mm + 24) )
      {
        if ( (*(_BYTE *)(mm + 88) & 1) != 0 )
          break;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)mm + 32LL))(mm);
      }
    }
    v56 = *((_QWORD *)a2 + 55);
    v57 = *(_DWORD *)(v56 + 88);
    if ( (v57 & 0x4000) == 0 )
    {
      *(_DWORD *)(v56 + 88) = v57 | 0x4000;
      for ( nn = *(_QWORD *)(v56 + 24); nn; nn = *(_QWORD *)(nn + 24) )
      {
        if ( (*(_BYTE *)(nn + 88) & 1) != 0 )
          break;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)nn + 32LL))(nn);
      }
    }
    v59 = *((_QWORD *)a2 + 55);
    v60 = *(_QWORD *)(v59 + 752);
    v61 = v60 && (*(_BYTE *)(v60 + 672) & 1) != 0 && (*(_BYTE *)(v60 + 676) & 1) == 0;
    CTopLevelWindow::UpdateAccent((CWindowBackgroundTreatmentVisual **)v59, v61);
    v62 = *((_QWORD *)a2 + 55);
    v63 = *(_DWORD *)(v62 + 88);
    if ( (v63 & 0x4000) == 0 )
    {
      *(_DWORD *)(v62 + 88) = v63 | 0x4000;
      CVisual::PropagateDirtyChildren((CVisual *)v62);
    }
    v64 = *(_DWORD *)(v62 + 88);
    if ( (v64 & 0x100000) == 0 )
    {
      *(_DWORD *)(v62 + 88) = v64 | 0x100000;
      CVisual::PropagateDirtyChildren((CVisual *)v62);
    }
    v65 = *(struct CVisual **)(v62 + 320);
    if ( v65 )
    {
      VisualCollection::Remove((VisualCollection *)(*(_QWORD *)(v62 + 288) + 32LL), v65);
      Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease((CBaseObject **)(v62 + 320));
    }
    v66 = *((_QWORD *)a2 + 3);
    if ( v66 )
    {
      v67 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v66 + 296LL))(v66);
      CWindowList::SetExcludeFromDDA(this, *((struct IDwmWindow **)a2 + 3), v67);
    }
    v68 = *((_QWORD *)a2 + 3);
    if ( v68 )
    {
      v69 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v68 + 304LL))(v68);
      CWindowList::SetPassiveUpdateMode(this, *((struct IDwmWindow **)a2 + 3), v69);
    }
    if ( (*((_BYTE *)a2 + 677) & 2) != 0 )
    {
      v70 = CTopLevelWindow::SetHolographic(*((CTopLevelWindow **)a2 + 55), (*((_BYTE *)a2 + 677) & 2) != 0);
      v71 = v70;
      if ( v70 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB77,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
          (const char *)(unsigned int)v70,
          v108);
        return v71;
      }
    }
    CWindowList::OnPositionChange(this, a2, 0);
    v73 = CWindowList::UpdateWindowScale((struct CWindowData **)this, a2, 0LL, v72);
    v74 = v73;
    if ( v73 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB7D,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v73,
        v108);
      return v74;
    }
    v75 = (CVisual *)*((_QWORD *)a2 + 55);
    if ( v75 )
    {
      v76 = *((_DWORD *)v75 + 22);
      if ( (v76 & 0x4000000) == 0 )
      {
        *((_DWORD *)v75 + 22) = v76 | 0x4000000;
        CVisual::PropagateDirtyChildren(v75);
      }
    }
    v77 = (CVisual *)*((_QWORD *)a2 + 55);
    if ( v77 )
    {
      v78 = *((_DWORD *)v77 + 22);
      if ( (*((_BYTE *)a2 + 673) & 0x20) != 0 )
      {
        if ( (v78 & 0x2000000) == 0 )
        {
          *((_DWORD *)v77 + 22) = v78 | 0x2000000;
          CVisual::PropagateDirtyChildren(v77);
        }
      }
      else
      {
        *((_DWORD *)v77 + 22) = v78 & 0xFDFFFFFF;
      }
    }
    v79 = CWindowList::UpdateThumbnailsForNewWindow(v77, a2);
    v80 = v79;
    if ( v79 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB81,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v79,
        v108);
      return v80;
    }
    v81 = CLivePreview::OnWindowShowHide(
            *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 57),
            a2,
            &v122,
            0);
    v82 = v81;
    if ( v81 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB85,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v81,
        v108);
      return v82;
    }
    CWindowList::ShowProjectionBorder(this, a2, *((_QWORD *)a2 + 58) != 0LL);
    if ( !v122 )
    {
      v83 = CTopLevelWindow3D::ShowWindow(
              *((CTopLevelWindow3D **)a2 + 56),
              1,
              *(_BYTE *)(*((_QWORD *)a2 + 55) + 844LL) == 0);
      v84 = v83;
      if ( v83 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB8E,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
          (const char *)(unsigned int)v83,
          v108);
        return v84;
      }
    }
  }
  v90 = *((_QWORD *)a2 + 75);
  v91 = v90 && *(char *)(v90 + 673) < 0 && CWindowData::ShouldBeIncludedInOwnerSWR(a2);
  if ( (*((_BYTE *)a2 + 674) & 1) != v91 )
    CWindowData::UpdateOwnerLists(a2, !(*((_BYTE *)a2 + 674) & 1));
  v92 = 0;
  if ( *((_DWORD *)a2 + 130) )
  {
    v111 = 0LL;
    v112 = 0LL;
    v113 = 0;
    if ( (int)DynArrayImpl<0>::AddMultipleAndSet((__int64)&v111, 8, *((_DWORD *)a2 + 130), *((_QWORD *)a2 + 62)) >= 0 )
    {
      v96 = 0;
      v97 = v113;
      if ( v113 )
      {
        v98 = v111;
        while ( 1 )
        {
          v99 = CSecondaryWindowRepresentation::OnRepresentationUpdated(
                  *(CSecondaryWindowRepresentation **)(v98 + 8LL * v96),
                  v93,
                  v94,
                  v95);
          v92 = v99;
          if ( v99 < 0 )
            break;
          if ( ++v96 >= v97 )
          {
            v3 = v123;
            goto LABEL_153;
          }
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v99, 0x535u, 0LL);
        DynArrayImpl<0>::~DynArrayImpl<0>(&v111);
        v100 = v92;
        goto LABEL_155;
      }
    }
LABEL_153:
    DynArrayImpl<0>::~DynArrayImpl<0>(&v111);
  }
  v100 = v92;
  if ( v92 < 0 )
  {
LABEL_155:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v92, 0x2EFu, 0LL);
LABEL_168:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBA0,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)v100,
      v108);
    return (unsigned int)v100;
  }
  v101 = (CWindowData *)*((_QWORD *)a2 + 75);
  if ( v101 )
  {
    v102 = CWindowData::NotifyRepresentationChanged(v101);
    v100 = v102;
    if ( v102 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v102, 0x2F2u, 0LL);
      goto LABEL_168;
    }
  }
  if ( *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24)
    && *((_DWORD *)a2 + 33) != 1
    && (int)CAnimationScheduler::GetActiveStoryboardCount(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance
                                                          + 23)) > 0 )
  {
    CTransitionVisualController::_SetupHighZOrderStaticWindows(v103);
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_ItemClosedEventOnVisibility>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_ItemClosedEventOnVisibility>::GetImpl'::`2'::impl) )
  {
    v104 = (*(__int64 (__fastcall **)(_QWORD, struct CWindowData *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                      + 58)
                                                                   + 152LL))(
             *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58),
             a2);
    v100 = v104;
    if ( v104 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v104, 0x2FDu, 0LL);
      goto LABEL_168;
    }
  }
  if ( v100 < 0 )
    goto LABEL_168;
  if ( !v3 )
    return 0LL;
  v115 = 0LL;
  v116 = 0LL;
  v119 = -1LL;
  v120 = 0;
  v117 = 0LL;
  v118 = 0LL;
  Buffer = *((_QWORD *)a2 + 17);
  v105 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), &Buffer);
  if ( v105 )
    v8 = v105[8];
  if ( *((_QWORD *)a2 + 5) != v8 )
    return 0LL;
  v106 = CWindowList::UpdateDesktopWindowReplacement(this, *((_QWORD *)a2 + 17));
  v107 = v106;
  if ( v106 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xBAA,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)v106,
    v108);
  return v107;
}
