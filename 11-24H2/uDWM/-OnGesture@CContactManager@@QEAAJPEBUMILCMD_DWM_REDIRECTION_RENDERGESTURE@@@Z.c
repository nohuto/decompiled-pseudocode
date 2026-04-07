/*
 * XREFs of ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18000B658
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800915A0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?StopRemoveFromRootNodeAndReleaseNoNULL@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18000D9D0 (-StopRemoveFromRootNodeAndReleaseNoNULL@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18000DA00 (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?CleanupFinishedAnimations@CContactManager@@AEAAXXZ @ 0x18000DB14 (-CleanupFinishedAnimations@CContactManager@@AEAAXXZ.c)
 *     ?StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z @ 0x18000DF78 (-StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z.c)
 *     ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x18000F500 (-RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800123F8 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180012590 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z @ 0x1800125FC (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180025C28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x18006F840 (-CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationary.c)
 *     ?FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x18006F890 (-FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVi.c)
 *     ?RemoveAt@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x18007DBF8 (-RemoveAt@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 *     ?StartStationaryAnimation@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@PEBUtagRECT@@_K@Z @ 0x18008C780 (-StartStationaryAnimation@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryV.c)
 *     ??$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJ_KPEAPEAVCIndirectTouchVisual@@@Z @ 0x180097258 (--$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJ_KPEAPEAVCIndirectTouchVisual@@@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ??$CreateTouchVisual@VCPenPressHoldVisual@@@@YAJ_KPEAPEAVCPenPressHoldVisual@@@Z @ 0x1800B6378 (--$CreateTouchVisual@VCPenPressHoldVisual@@@@YAJ_KPEAPEAVCPenPressHoldVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCPressTapVisual@@@@YAJ_KPEAPEAVCPressTapVisual@@@Z @ 0x1800B6440 (--$CreateTouchVisual@VCPressTapVisual@@@@YAJ_KPEAPEAVCPressTapVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJ_KPEAPEAVCTouchPressHoldVisual@@@Z @ 0x1800B65D0 (--$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJ_KPEAPEAVCTouchPressHoldVisual@@@Z.c)
 *     ?CancelStationaryAnimationsInRadius@CContactManager@@AEAAXW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@M@Z @ 0x1800B6940 (-CancelStationaryAnimationsInRadius@CContactManager@@AEAAXW4STATIONARY_ANIMATION_TYPE@CContactSt.c)
 *     ?EnsureTouchPressHoldForContact@CContactManager@@AEAAJH_K@Z @ 0x1800B69FC (-EnsureTouchPressHoldForContact@CContactManager@@AEAAJH_K@Z.c)
 *     ?IsCurrentSessionRemotable@CDesktopManager@@SA_NXZ @ 0x1800B6D80 (-IsCurrentSessionRemotable@CDesktopManager@@SA_NXZ.c)
 *     ?_RemoveForcedPressHold@CContactManager@@AEAAXI@Z @ 0x1800B76D0 (-_RemoveForcedPressHold@CContactManager@@AEAAXI@Z.c)
 *     ?StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800C715C (-StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800C72C0 (-StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800CA06C (-Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z @ 0x1800CA5F4 (-Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z.c)
 *     ?StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800DBE14 (-StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800DBF7C (-StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800DC0D8 (-StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?DismissCurrentTouchResizeHighlight@CWindowList@@QEAAXXZ @ 0x1800EF430 (-DismissCurrentTouchResizeHighlight@CWindowList@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CContactManager::OnGesture(
        CContactManager *this,
        const struct MILCMD_DWM_REDIRECTION_RENDERGESTURE *a2)
{
  int started; // ebx
  unsigned int v5; // r12d
  int v6; // esi
  unsigned int i; // r8d
  unsigned int j; // r8d
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  __int64 v12; // r8
  int v13; // ecx
  CContactManager *v14; // rcx
  CContactManager *v15; // rcx
  CContactManager *v16; // rcx
  int Touch; // eax
  CContactManager *v18; // rcx
  CContactManager *v19; // rcx
  CContactManager *v20; // rcx
  CBaseObject *v21; // rcx
  int v22; // r9d
  CContactManager *v23; // rcx
  __int64 v24; // rdx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  CContactManager *v29; // rcx
  __int64 v30; // rbx
  CContactManager *v31; // rcx
  CContactManager *v32; // rcx
  CContactManager *v33; // rcx
  CContactManager *v34; // rcx
  CContactManager *v35; // rcx
  CPressTapVisual *v36; // r15
  struct tagRECT *v37; // r8
  CContactManager *v38; // rcx
  __int64 v39; // rdx
  CMILRefCountBase *v40; // rcx
  unsigned int v41; // eax
  unsigned int v42; // edx
  int v43; // esi
  unsigned int v44; // eax
  CBaseObject *v45; // rcx
  CContactManager *v46; // rcx
  CContactManager *v47; // rcx
  __int64 v48; // r15
  struct CTouchVisual *v49; // rdx
  __int64 v50; // rax
  CContactManager *v51; // rcx
  __int64 v52; // r9
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // r9
  __int64 v56; // rax
  CContactManager *v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  CMILRefCountBase *v62; // rsi
  int v63; // ebx
  _QWORD *v64; // r12
  __int64 v65; // r15
  CContactManager *v66; // rcx
  CContactManager *v67; // rcx
  __int64 v68; // r15
  CContactManager *v69; // rcx
  CBaseObject *v70; // rcx
  CContactManager *v71; // rcx
  CContactManager *v72; // rcx
  __int64 v73; // rax
  unsigned int v74; // edx
  int v75; // eax
  CContactManager *v76; // rcx
  __int64 v77; // r15
  struct CTouchVisual *v78; // rdx
  __int64 v79; // rax
  CContactManager *v80; // rcx
  __int64 v81; // r9
  __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v84; // r9
  __int64 v85; // rax
  CContactManager *v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  CMILRefCountBase *v91; // rsi
  int v92; // ebx
  _QWORD *v93; // r12
  __int64 v94; // r15
  CContactManager *v95; // rcx
  CContactManager *v96; // rcx
  unsigned int v98; // [rsp+20h] [rbp-50h]
  struct tagRECT *v99; // [rsp+20h] [rbp-50h]
  void *v100; // [rsp+28h] [rbp-48h]
  unsigned __int64 v101; // [rsp+30h] [rbp-40h] BYREF
  CMILRefCountBase *v102[2]; // [rsp+38h] [rbp-38h] BYREF
  struct _RTL_CRITICAL_SECTION *v103; // [rsp+48h] [rbp-28h]
  struct tagRECT v104; // [rsp+50h] [rbp-20h] BYREF

  v103 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  started = 0;
  v5 = -1;
  v6 = -1;
  for ( i = 0; i < *((_DWORD *)this + 20); ++i )
  {
    if ( *(_DWORD *)(104LL * i + *((_QWORD *)this + 7)) == *((_DWORD *)a2 + 2) )
    {
      v6 = i;
      break;
    }
  }
  for ( j = 0; j < *((_DWORD *)this + 28); ++j )
  {
    if ( *(_DWORD *)(*((_QWORD *)this + 11) + 40LL * j) == *((_DWORD *)a2 + 2) )
    {
      v5 = j;
      break;
    }
  }
  v9 = *((_DWORD *)a2 + 4);
  v104.top = v9 - 25;
  v104.bottom = v9 + 25;
  v10 = *((_DWORD *)a2 + 3);
  v104.left = v10 - 25;
  v104.right = v10 + 25;
  v101 = 0LL;
  GetDesktopID(1LL, &v101);
  v11 = *((_DWORD *)a2 + 1);
  v12 = 5LL;
  if ( v11 > 5 )
  {
    v25 = v11 - 6;
    if ( !v25 )
    {
      CContactManager::CancelStationaryAnimationsInRadius(this, 2LL, (char *)a2 + 12);
      CContactManager::CancelStationaryAnimationsInRadius(this, 1LL, (char *)a2 + 12);
      v100 = (void *)v101;
      v99 = &v104;
      v12 = 3LL;
      goto LABEL_168;
    }
    v26 = v25 - 1;
    if ( v26 )
    {
      v27 = v26 - 1;
      if ( v27 )
      {
        v28 = v27 - 1;
        if ( v28 )
        {
          if ( v28 != 1 )
            goto LABEL_47;
          v102[0] = 0LL;
          CContactManager::CancelStationaryAnimation(this, *((unsigned int *)a2 + 2));
          CContactManager::CancelStationaryAnimation(this, *((unsigned int *)a2 + 5));
          if ( v6 >= 0 )
          {
            v30 = 104LL * (unsigned int)v6;
            CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(
              v29,
              *(struct CTouchVisual **)(*((_QWORD *)this + 7) + v30 + 48));
            CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(
              v31,
              *(struct CTouchVisual **)(*((_QWORD *)this + 7) + v30 + 56));
            CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(
              v32,
              *(struct CTouchVisual **)(*((_QWORD *)this + 7) + v30 + 80));
            CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(
              v33,
              *(struct CTouchVisual **)(*((_QWORD *)this + 7) + v30 + 88));
            CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(
              v34,
              *(struct CTouchVisual **)(*((_QWORD *)this + 7) + v30 + 64));
            *(_QWORD *)(*((_QWORD *)this + 7) + v30 + 48) = 0LL;
            *(_QWORD *)(*((_QWORD *)this + 7) + v30 + 56) = 0LL;
            *(_QWORD *)(*((_QWORD *)this + 7) + v30 + 80) = 0LL;
            *(_QWORD *)(*((_QWORD *)this + 7) + v30 + 88) = 0LL;
            *(_QWORD *)(*((_QWORD *)this + 7) + v30 + 64) = 0LL;
            *(_BYTE *)(*((_QWORD *)this + 7) + v30 + 96) = 0;
          }
          Touch = CreateTouchVisual<CPressTapVisual>(v101);
          started = Touch;
          if ( Touch < 0 )
          {
            v98 = 759;
            goto LABEL_33;
          }
          v36 = v102[0];
          CContactManager::AddToTouchNode(v35, v101, v102[0]);
          if ( v6 < 0 )
            v37 = &v104;
          else
            v37 = (struct tagRECT *)(104LL * (unsigned int)v6 + *((_QWORD *)this + 7) + 24LL);
          started = CPressTapVisual::Start(
                      v36,
                      (const struct tagPOINT *)((char *)a2 + 12),
                      v37,
                      (const struct tagPOINT *)a2 + 3);
          if ( started < 0 )
          {
            CContactManager::RemoveFromTouchNode(v38, v101, v36);
            if ( v36 )
              CBaseObject::Release(v36);
            v98 = 775;
            goto LABEL_28;
          }
          if ( v6 >= 0 )
          {
            v39 = 104LL * (unsigned int)v6;
            *(_QWORD *)(*((_QWORD *)this + 7) + v39 + 88) = v36;
            v40 = *(CMILRefCountBase **)(*((_QWORD *)this + 7) + v39 + 88);
LABEL_65:
            CMILRefCountBase::AddRef(v40);
LABEL_66:
            if ( !v36 )
              goto LABEL_169;
            v45 = v36;
            goto LABEL_128;
          }
          v102[0] = v36;
          v41 = *((_DWORD *)this + 44);
          v42 = v41 + 1;
          if ( v41 + 1 < v41 )
          {
            v43 = -2147024362;
            v44 = 179;
LABEL_70:
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v43, v44, 0LL);
            CContactManager::StopAndRemoveFromRootNode(v46, v36);
            goto LABEL_66;
          }
          if ( v42 > *((_DWORD *)this + 43) )
          {
            v43 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 152, 8LL, 1LL, v102);
            if ( v43 < 0 )
            {
              v44 = 190;
              goto LABEL_70;
            }
          }
          else
          {
            *(_QWORD *)(*((_QWORD *)this + 19) + 8LL * *((unsigned int *)this + 44)) = v36;
            *((_DWORD *)this + 44) = v42;
          }
          v40 = v36;
          goto LABEL_65;
        }
        if ( CDesktopManager::IsCurrentSessionRemotable() || *((_BYTE *)this + 325) )
        {
          CContactManager::_RemoveForcedPressHold(this, *((_DWORD *)a2 + 2));
        }
        else if ( v6 >= 0 )
        {
          v48 = 104LL * (unsigned int)v6;
          v49 = *(struct CTouchVisual **)(*((_QWORD *)this + 7) + v48 + 64);
          if ( v49 )
          {
            CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(v47, v49);
            *(_QWORD *)(*((_QWORD *)this + 7) + v48 + 64) = 0LL;
            v50 = *((_QWORD *)this + 7);
            if ( !*(_QWORD *)(v50 + v48 + 88) )
            {
              if ( *(_BYTE *)(v50 + v48 + 97) )
              {
                if ( *((_BYTE *)this + 324) || *(_DWORD *)(v50 + v48 + 40) )
                {
                  if ( !*(_QWORD *)(v48 + v50 + 48) )
                  {
                    Touch = CreateTouchVisual<CDirectTouchVisual>(v101);
                    started = Touch;
                    if ( Touch < 0 )
                    {
                      v98 = 678;
                      goto LABEL_33;
                    }
                    CContactManager::AddToTouchNode(
                      v51,
                      v101,
                      *(struct CVisual **)(104LL * (unsigned int)v6 + *((_QWORD *)this + 7) + 48));
                  }
                  v52 = 104LL * (unsigned int)v6;
                  v53 = *((_QWORD *)this + 7);
                  v54 = *(_QWORD *)(v52 + v53 + 48);
                  if ( *((_BYTE *)this + 324) )
                    v55 = 4294967291LL;
                  else
                    v55 = *(unsigned int *)(v52 + v53 + 40);
                  CDirectTouchVisual::StartDown(v54, (char *)a2 + 12, &v104, v55);
                }
              }
              else
              {
                if ( !*(_QWORD *)(v48 + v50 + 56) )
                {
                  Touch = CreateTouchVisual<CIndirectTouchVisual>(v101);
                  started = Touch;
                  if ( Touch < 0 )
                  {
                    v98 = 688;
                    goto LABEL_33;
                  }
                  v56 = *((_QWORD *)this + 7);
                  v57 = *(CContactManager **)(v56 + v48 + 56);
                  *((_DWORD *)v57 + 94) = *(_DWORD *)(v56 + 104LL * (unsigned int)v6);
                  CContactManager::AddToTouchNode(v57, v101, *(struct CVisual **)(*((_QWORD *)this + 7) + v48 + 56));
                }
                v58 = *((_QWORD *)this + 7);
                v59 = v48 + v58 + 8;
                v60 = *(_QWORD *)(v58 + v48 + 56);
                v61 = *(unsigned int *)(v58 + v48 + 40);
                if ( *(_DWORD *)(v58 + v48 + 4) )
                  CIndirectTouchVisual::StartEngage(v60, v59, v61);
                else
                  CIndirectTouchVisual::StartHover(v60, v59, v61);
              }
            }
          }
        }
        v62 = 0LL;
        v102[0] = 0LL;
        v63 = *((_DWORD *)this + 76) - 1;
        if ( v63 < 0 )
          goto LABEL_102;
        v64 = (_QWORD *)((char *)this + 280);
        v65 = 16LL * v63;
        do
        {
          if ( *(_DWORD *)(v65 + *v64) == *((_DWORD *)a2 + 2) )
          {
            v62 = *(CMILRefCountBase **)(v65 + *v64 + 8);
            DynArray<CIconicBitmapPending,0>::RemoveAt((char *)this + 280, (unsigned int)v63);
          }
          v65 -= 16LL;
          --v63;
        }
        while ( v63 >= 0 );
        v102[0] = v62;
        if ( !v62 )
        {
LABEL_102:
          Touch = CreateTouchVisual<CTouchPressHoldVisual>(v101);
          started = Touch;
          if ( Touch < 0 )
          {
            v98 = 718;
            goto LABEL_33;
          }
          v62 = v102[0];
          CContactManager::AddToTouchNode(v66, v101, v102[0]);
        }
        started = CTouchPressHoldVisual::StartAbort(v62, (const struct tagPOINT *)((char *)a2 + 12));
        if ( started >= 0 )
          goto LABEL_169;
        CContactManager::RemoveFromTouchNode(v67, v101, v62);
        if ( v62 )
          CBaseObject::Release(v62);
        v98 = 726;
      }
      else
      {
        CWindowList::DismissCurrentTouchResizeHighlight(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53));
        if ( CDesktopManager::IsCurrentSessionRemotable() || *((_BYTE *)this + 325) )
        {
          CContactManager::_RemoveForcedPressHold(this, *((_DWORD *)a2 + 2));
          v102[0] = (CMILRefCountBase *)*((unsigned int *)a2 + 2);
          v102[1] = 0LL;
          Touch = CreateTouchVisual<CTouchPressHoldVisual>(v101);
          started = Touch;
          if ( Touch < 0 )
          {
            v98 = 620;
            goto LABEL_33;
          }
          CContactManager::AddToTouchNode(v71, v101, v102[1]);
          started = CTouchPressHoldVisual::StartHold(v102[1], (const struct tagPOINT *)((char *)a2 + 12));
          if ( started >= 0 )
          {
            v73 = *((unsigned int *)this + 68);
            v74 = v73 + 1;
            if ( (int)v73 + 1 >= (unsigned int)v73 )
            {
              started = 0;
              if ( v74 <= *((_DWORD *)this + 67) )
              {
                *(_OWORD *)(*((_QWORD *)this + 31) + 16 * v73) = *(_OWORD *)v102;
                *((_DWORD *)this + 68) = v74;
                goto LABEL_169;
              }
              v75 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 248, 16LL, 1LL, v102);
              started = v75;
              if ( v75 >= 0 )
                goto LABEL_169;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v75, 0xBEu, 0LL);
            }
            else
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB3u, 0LL);
              started = -2147024362;
            }
          }
          CContactManager::RemoveFromTouchNode(v72, v101, v102[1]);
          v45 = v102[1];
          if ( !v102[1] )
            goto LABEL_169;
LABEL_128:
          CBaseObject::Release(v45);
          goto LABEL_169;
        }
        if ( v6 < 0 )
          goto LABEL_47;
        v68 = 104LL * (unsigned int)v6;
        if ( *(_DWORD *)(*((_QWORD *)this + 7) + v68 + 4) != 1 )
          goto LABEL_47;
        Touch = CContactManager::EnsureTouchPressHoldForContact(this, v6, v101);
        started = Touch;
        if ( Touch < 0 )
        {
          v98 = 644;
          goto LABEL_33;
        }
        started = CTouchPressHoldVisual::StartHold(
                    *(CTouchPressHoldVisual **)(v68 + *((_QWORD *)this + 7) + 64),
                    (const struct tagPOINT *)((char *)a2 + 12));
        if ( started >= 0 )
          goto LABEL_169;
        CContactManager::RemoveFromTouchNode(v69, v101, *(struct CVisual **)(v68 + *((_QWORD *)this + 7) + 64));
        v70 = *(CBaseObject **)(v68 + *((_QWORD *)this + 7) + 64);
        if ( v70 )
        {
          CBaseObject::Release(v70);
          *(_QWORD *)(v68 + *((_QWORD *)this + 7) + 64) = 0LL;
        }
        v98 = 650;
      }
    }
    else
    {
      if ( CDesktopManager::IsCurrentSessionRemotable() || *((_BYTE *)this + 325) )
      {
        CContactManager::_RemoveForcedPressHold(this, *((_DWORD *)a2 + 2));
      }
      else if ( v6 >= 0 )
      {
        v77 = 104LL * (unsigned int)v6;
        v78 = *(struct CTouchVisual **)(*((_QWORD *)this + 7) + v77 + 64);
        if ( v78 )
        {
          CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(v76, v78);
          *(_QWORD *)(v77 + *((_QWORD *)this + 7) + 64) = 0LL;
          v79 = *((_QWORD *)this + 7);
          if ( !*(_QWORD *)(v77 + v79 + 88) )
          {
            if ( *(_BYTE *)(v77 + v79 + 97) )
            {
              if ( *((_BYTE *)this + 324) || *(_DWORD *)(v77 + v79 + 40) )
              {
                if ( !*(_QWORD *)(v77 + v79 + 48) )
                {
                  Touch = CreateTouchVisual<CDirectTouchVisual>(v101);
                  started = Touch;
                  if ( Touch < 0 )
                  {
                    v98 = 550;
                    goto LABEL_33;
                  }
                  CContactManager::AddToTouchNode(
                    v80,
                    v101,
                    *(struct CVisual **)(104LL * (unsigned int)v6 + *((_QWORD *)this + 7) + 48));
                }
                v81 = 104LL * (unsigned int)v6;
                v82 = *((_QWORD *)this + 7);
                v83 = *(_QWORD *)(v81 + v82 + 48);
                if ( *((_BYTE *)this + 324) )
                  v84 = 4294967291LL;
                else
                  v84 = *(unsigned int *)(v81 + v82 + 40);
                CDirectTouchVisual::StartDown(v83, (char *)a2 + 12, &v104, v84);
              }
            }
            else
            {
              if ( !*(_QWORD *)(v77 + v79 + 56) )
              {
                Touch = CreateTouchVisual<CIndirectTouchVisual>(v101);
                started = Touch;
                if ( Touch < 0 )
                {
                  v98 = 560;
                  goto LABEL_33;
                }
                v85 = *((_QWORD *)this + 7);
                v86 = *(CContactManager **)(v77 + v85 + 56);
                *((_DWORD *)v86 + 94) = *(_DWORD *)(v77 + v85);
                CContactManager::AddToTouchNode(v86, v101, *(struct CVisual **)(v77 + *((_QWORD *)this + 7) + 56));
              }
              v87 = *((_QWORD *)this + 7);
              v88 = v77 + v87 + 8;
              v89 = *(_QWORD *)(v77 + v87 + 56);
              v90 = *(unsigned int *)(v77 + v87 + 40);
              if ( *(_DWORD *)(v77 + v87 + 4) )
                CIndirectTouchVisual::StartEngage(v89, v88, v90);
              else
                CIndirectTouchVisual::StartHover(v89, v88, v90);
            }
          }
        }
      }
      v91 = 0LL;
      v102[0] = 0LL;
      v92 = *((_DWORD *)this + 76) - 1;
      if ( v92 < 0 )
        goto LABEL_160;
      v93 = (_QWORD *)((char *)this + 280);
      v94 = 16LL * v92;
      do
      {
        if ( *(_DWORD *)(v94 + *v93) == *((_DWORD *)a2 + 2) )
        {
          v91 = *(CMILRefCountBase **)(v94 + *v93 + 8);
          DynArray<CIconicBitmapPending,0>::RemoveAt((char *)this + 280, (unsigned int)v92);
        }
        v94 -= 16LL;
        --v92;
      }
      while ( v92 >= 0 );
      v102[0] = v91;
      if ( !v91 )
      {
LABEL_160:
        Touch = CreateTouchVisual<CTouchPressHoldVisual>(v101);
        started = Touch;
        if ( Touch < 0 )
        {
          v98 = 590;
          goto LABEL_33;
        }
        v91 = v102[0];
        CContactManager::AddToTouchNode(v95, v101, v102[0]);
      }
      started = CTouchPressHoldVisual::StartRightTap(v91, (const struct tagPOINT *)((char *)a2 + 12));
      if ( started >= 0 )
        goto LABEL_169;
      CContactManager::RemoveFromTouchNode(v96, v101, v91);
      if ( v91 )
        CBaseObject::Release(v91);
      v98 = 598;
    }
LABEL_28:
    v22 = started;
LABEL_34:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, v98, 0LL);
    goto LABEL_169;
  }
  if ( v11 == 5 )
  {
    if ( (v6 < 0 || *(_BYTE *)(104LL * (unsigned int)v6 + *((_QWORD *)this + 7) + 97))
      && (int)CContactManager::FindStationaryAnimation(this, *((unsigned int *)a2 + 2), 1LL) < 0 )
    {
      CContactManager::StartStationaryAnimation(this, v24, 2LL, (char *)a2 + 12, &v104, v101);
    }
  }
  else
  {
    if ( !v11 )
    {
      v100 = (void *)v101;
      v99 = 0LL;
      v12 = 4LL;
      goto LABEL_168;
    }
    v13 = v11 - 1;
    if ( !v13 )
    {
      v100 = (void *)v101;
      v99 = 0LL;
      goto LABEL_168;
    }
    v14 = (CContactManager *)(unsigned int)(v13 - 1);
    if ( !(_DWORD)v14 )
    {
      if ( (v5 & 0x80000000) == 0 )
      {
        CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(
          v14,
          *(struct CTouchVisual **)(*((_QWORD *)this + 11) + 40LL * v5 + 16));
        *(_QWORD *)(*((_QWORD *)this + 11) + 40LL * v5 + 16) = 0LL;
        Touch = CContactManager::StartPenBarrelVisual(
                  v23,
                  (struct CPenContact *)(*((_QWORD *)this + 11) + 40LL * v5),
                  v101);
        started = Touch;
        if ( Touch < 0 )
        {
          v98 = 460;
          goto LABEL_33;
        }
      }
      v100 = (void *)v101;
      v99 = 0LL;
      v12 = 6LL;
      goto LABEL_168;
    }
    v15 = (CContactManager *)(unsigned int)((_DWORD)v14 - 1);
    if ( (_DWORD)v15 )
    {
      if ( (_DWORD)v15 == 1 )
      {
        if ( (v5 & 0x80000000) == 0 )
        {
          CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(
            v15,
            *(struct CTouchVisual **)(*((_QWORD *)this + 11) + 40LL * v5 + 16));
          *(_QWORD *)(*((_QWORD *)this + 11) + 40LL * v5 + 16) = 0LL;
          Touch = CContactManager::StartPenBarrelVisual(
                    v16,
                    (struct CPenContact *)(*((_QWORD *)this + 11) + 40LL * v5),
                    v101);
          started = Touch;
          if ( Touch < 0 )
          {
            v98 = 503;
LABEL_33:
            v22 = Touch;
            goto LABEL_34;
          }
        }
        v100 = (void *)v101;
        v99 = 0LL;
        v12 = 7LL;
LABEL_168:
        CContactManager::StartStationaryAnimation(this, *((unsigned int *)a2 + 2), v12, (char *)a2 + 12, v99, v100);
        goto LABEL_169;
      }
LABEL_47:
      started = -2147024809;
      goto LABEL_169;
    }
    if ( (v5 & 0x80000000) != 0 )
      goto LABEL_47;
    CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(
      v15,
      *(struct CTouchVisual **)(*((_QWORD *)this + 11) + 40LL * v5 + 8));
    *(_QWORD *)(*((_QWORD *)this + 11) + 40LL * v5 + 8) = 0LL;
    CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(
      v18,
      *(struct CTouchVisual **)(*((_QWORD *)this + 11) + 40LL * v5 + 16));
    *(_QWORD *)(*((_QWORD *)this + 11) + 40LL * v5 + 16) = 0LL;
    Touch = CreateTouchVisual<CPenPressHoldVisual>(v101);
    started = Touch;
    if ( Touch < 0 )
    {
      v98 = 483;
      goto LABEL_33;
    }
    CContactManager::AddToTouchNode(v19, v101, *(struct CVisual **)(*((_QWORD *)this + 11) + 40LL * v5 + 16));
    started = CPenPressHoldVisual::Start(
                *(CPenPressHoldVisual **)(*((_QWORD *)this + 11) + 40LL * v5 + 16),
                (const struct tagPOINT *)((char *)a2 + 12));
    if ( started < 0 )
    {
      CContactManager::RemoveFromTouchNode(v20, v101, *(struct CVisual **)(*((_QWORD *)this + 11) + 40LL * v5 + 16));
      v21 = *(CBaseObject **)(*((_QWORD *)this + 11) + 40LL * v5 + 16);
      if ( v21 )
      {
        CBaseObject::Release(v21);
        *(_QWORD *)(*((_QWORD *)this + 11) + 40LL * v5 + 16) = 0LL;
      }
      v98 = 490;
      goto LABEL_28;
    }
  }
LABEL_169:
  CContactManager::CleanupFinishedAnimations(this);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)started;
}
