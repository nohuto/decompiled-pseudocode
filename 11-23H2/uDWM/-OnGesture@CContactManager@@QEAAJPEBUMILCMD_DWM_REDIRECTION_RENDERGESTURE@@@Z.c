/*
 * XREFs of ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x1800B032C
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18001AF70 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18002D838 (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180036F9C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180053BD8 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180053C4C (-RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z @ 0x180053DF8 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJ_KPEAPEAVCIndirectTouchVisual@@@Z @ 0x1800AE6A0 (--$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJ_KPEAPEAVCIndirectTouchVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCPenPressHoldVisual@@@@YAJ_KPEAPEAVCPenPressHoldVisual@@@Z @ 0x1800AE8DC (--$CreateTouchVisual@VCPenPressHoldVisual@@@@YAJ_KPEAPEAVCPenPressHoldVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCPressTapVisual@@@@YAJ_KPEAPEAVCPressTapVisual@@@Z @ 0x1800AEA08 (--$CreateTouchVisual@VCPressTapVisual@@@@YAJ_KPEAPEAVCPressTapVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJ_KPEAPEAVCTouchPressHoldVisual@@@Z @ 0x1800AECEC (--$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJ_KPEAPEAVCTouchPressHoldVisual@@@Z.c)
 *     ?CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x1800AF358 (-CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationary.c)
 *     ?CancelStationaryAnimationsInRadius@CContactManager@@AEAAXW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@M@Z @ 0x1800AF3C0 (-CancelStationaryAnimationsInRadius@CContactManager@@AEAAXW4STATIONARY_ANIMATION_TYPE@CContactSt.c)
 *     ?CleanupFinishedAnimations@CContactManager@@AEAAXXZ @ 0x1800AF484 (-CleanupFinishedAnimations@CContactManager@@AEAAXXZ.c)
 *     ?EnsureTouchPressHoldForContact@CContactManager@@AEAAJH_K@Z @ 0x1800AF650 (-EnsureTouchPressHoldForContact@CContactManager@@AEAAJH_K@Z.c)
 *     ?FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x1800AF7B8 (-FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVi.c)
 *     ?IsCurrentSessionRemotable@CDesktopManager@@SA_NXZ @ 0x1800AFCF4 (-IsCurrentSessionRemotable@CDesktopManager@@SA_NXZ.c)
 *     ?RemoveAt@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x1800B21C8 (-RemoveAt@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 *     ?StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z @ 0x1800B2250 (-StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z.c)
 *     ?StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@PEBUtagRECT@@_K_N@Z @ 0x1800B2300 (-StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactSt.c)
 *     ?_RemoveForcedPressHold@CContactManager@@AEAAXI@Z @ 0x1800B2478 (-_RemoveForcedPressHold@CContactManager@@AEAAXI@Z.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800B68E8 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800C52CC (-StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800C547C (-StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800CCFF4 (-Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z @ 0x1800CD598 (-Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z.c)
 *     ?StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800E87F4 (-StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800E89B0 (-StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800E8B54 (-StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?DismissCurrentTouchResizeHighlight@CWindowList@@QEAAXXZ @ 0x180109E58 (-DismissCurrentTouchResizeHighlight@CWindowList@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CContactManager::OnGesture(
        CContactManager *this,
        const struct MILCMD_DWM_REDIRECTION_RENDERGESTURE *a2)
{
  int started; // ebx
  int v5; // esi
  signed int v6; // r14d
  unsigned int v7; // edx
  unsigned int v8; // edx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  CContactManager *v13; // rcx
  CContactManager *v14; // rcx
  __int64 v15; // rsi
  struct CTouchVisual *v16; // rbx
  CContactManager *v17; // rcx
  int Touch; // eax
  __int64 v19; // rsi
  struct CTouchVisual *v20; // rbx
  CContactManager *v21; // rcx
  struct CTouchVisual *v22; // rbx
  CContactManager *v23; // rcx
  CContactManager *v24; // rcx
  CBaseObject *v25; // rcx
  int v26; // r9d
  __int64 v27; // rsi
  struct CTouchVisual *v28; // rbx
  CContactManager *v29; // rcx
  __int64 v30; // rdx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  CContactManager *v35; // rcx
  __int64 v36; // rbx
  struct CTouchVisual *v37; // rsi
  CContactManager *v38; // rcx
  struct CTouchVisual *v39; // rsi
  CContactManager *v40; // rcx
  struct CTouchVisual *v41; // rsi
  CContactManager *v42; // rcx
  struct CTouchVisual *v43; // rsi
  CContactManager *v44; // rcx
  struct CTouchVisual *v45; // rsi
  CContactManager *v46; // rcx
  volatile signed __int32 *v47; // rsi
  __int64 v48; // r12
  struct tagRECT *v49; // r8
  CContactManager *v50; // rcx
  unsigned int v51; // eax
  unsigned int v52; // edx
  unsigned int v53; // eax
  int v54; // r14d
  CBaseObject *v55; // rcx
  CContactManager *v56; // rcx
  CContactManager *v57; // rcx
  __int64 v58; // rsi
  __int64 v59; // rax
  CBaseObject *v60; // rbx
  __int64 v61; // rax
  CDirectTouchVisual **v62; // rdx
  CContactManager *v63; // rcx
  __int64 v64; // rax
  __int64 v65; // r9
  CTouchVisual **v66; // rdx
  __int64 v67; // rax
  CContactManager *v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  CBaseObject *v73; // rsi
  int v74; // ebx
  _QWORD *v75; // r12
  __int64 v76; // r14
  CContactManager *v77; // rcx
  CContactManager *v78; // rcx
  __int64 v79; // rsi
  CContactManager *v80; // rcx
  CBaseObject *v81; // rcx
  CContactManager *v82; // rcx
  CContactManager *v83; // rcx
  __int64 v84; // rax
  unsigned int v85; // edx
  CContactManager *v86; // rcx
  __int64 v87; // rsi
  __int64 v88; // rax
  CBaseObject *v89; // rbx
  __int64 v90; // rax
  CDirectTouchVisual **v91; // rdx
  CContactManager *v92; // rcx
  __int64 v93; // rax
  __int64 v94; // r9
  CTouchVisual **v95; // rdx
  __int64 v96; // rax
  CContactManager *v97; // rcx
  __int64 v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  CBaseObject *v102; // rsi
  int v103; // ebx
  _QWORD *v104; // r12
  __int64 v105; // r14
  CContactManager *v106; // rcx
  CContactManager *v107; // rcx
  unsigned int v109; // [rsp+20h] [rbp-60h]
  unsigned __int64 v110; // [rsp+40h] [rbp-40h] BYREF
  CBaseObject *v111; // [rsp+48h] [rbp-38h] BYREF
  CBaseObject *v112[2]; // [rsp+50h] [rbp-30h] BYREF
  struct _RTL_CRITICAL_SECTION *v113; // [rsp+60h] [rbp-20h] BYREF
  struct tagRECT v114; // [rsp+68h] [rbp-18h] BYREF

  v113 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  started = 0;
  v5 = -1;
  v6 = -1;
  v7 = 0;
  if ( *((_DWORD *)this + 20) )
  {
    while ( *(_DWORD *)(104LL * v7 + *((_QWORD *)this + 7)) != *((_DWORD *)a2 + 2) )
    {
      if ( ++v7 >= *((_DWORD *)this + 20) )
        goto LABEL_6;
    }
    v6 = v7;
  }
LABEL_6:
  v8 = 0;
  if ( *((_DWORD *)this + 28) )
  {
    while ( *(_DWORD *)(*((_QWORD *)this + 11) + 40LL * v8) != *((_DWORD *)a2 + 2) )
    {
      if ( ++v8 >= *((_DWORD *)this + 28) )
        goto LABEL_11;
    }
    v5 = v8;
  }
LABEL_11:
  v9 = *((_DWORD *)a2 + 4);
  v114.top = v9 - 25;
  v114.bottom = v9 + 25;
  v10 = *((_DWORD *)a2 + 3);
  v114.left = v10 - 25;
  v114.right = v10 + 25;
  GetDesktopID(1LL, &v110);
  v11 = *((_DWORD *)a2 + 1);
  if ( v11 > 5 )
  {
    v31 = v11 - 6;
    if ( !v31 )
    {
      CContactManager::CancelStationaryAnimationsInRadius((__int64)this, 2, (_DWORD *)a2 + 3, 75.0);
      CContactManager::CancelStationaryAnimationsInRadius((__int64)this, 1, (_DWORD *)a2 + 3, 75.0);
      CContactManager::StartStationaryAnimationWithDelay(
        this,
        *((unsigned int *)a2 + 2),
        3LL,
        (char *)a2 + 12,
        &v114,
        v110,
        0);
      goto LABEL_185;
    }
    v32 = v31 - 1;
    if ( v32 )
    {
      v33 = v32 - 1;
      if ( v33 )
      {
        v34 = v33 - 1;
        if ( v34 )
        {
          if ( v34 != 1 )
            goto LABEL_55;
          CContactManager::CancelStationaryAnimation((__int64)this, *((unsigned int *)a2 + 2));
          CContactManager::CancelStationaryAnimation((__int64)this, *((unsigned int *)a2 + 5));
          if ( v6 >= 0 )
          {
            v36 = 104LL * (unsigned int)v6;
            v37 = *(struct CTouchVisual **)(*((_QWORD *)this + 7) + v36 + 48);
            CContactManager::StopAndRemoveFromRootNode(v35, v37);
            if ( v37 )
              CBaseObject::Release(v37);
            v39 = *(struct CTouchVisual **)(v36 + *((_QWORD *)this + 7) + 56);
            CContactManager::StopAndRemoveFromRootNode(v38, v39);
            if ( v39 )
              CBaseObject::Release(v39);
            v41 = *(struct CTouchVisual **)(v36 + *((_QWORD *)this + 7) + 80);
            CContactManager::StopAndRemoveFromRootNode(v40, v41);
            if ( v41 )
              CBaseObject::Release(v41);
            v43 = *(struct CTouchVisual **)(v36 + *((_QWORD *)this + 7) + 88);
            CContactManager::StopAndRemoveFromRootNode(v42, v43);
            if ( v43 )
              CBaseObject::Release(v43);
            v45 = *(struct CTouchVisual **)(v36 + *((_QWORD *)this + 7) + 64);
            CContactManager::StopAndRemoveFromRootNode(v44, v45);
            if ( v45 )
              CBaseObject::Release(v45);
            *(_QWORD *)(v36 + *((_QWORD *)this + 7) + 48) = 0LL;
            *(_QWORD *)(v36 + *((_QWORD *)this + 7) + 56) = 0LL;
            *(_QWORD *)(v36 + *((_QWORD *)this + 7) + 80) = 0LL;
            *(_QWORD *)(v36 + *((_QWORD *)this + 7) + 88) = 0LL;
            *(_QWORD *)(v36 + *((_QWORD *)this + 7) + 64) = 0LL;
            *(_BYTE *)(v36 + *((_QWORD *)this + 7) + 96) = 0;
          }
          Touch = CreateTouchVisual<CPressTapVisual>(v110, &v111);
          started = Touch;
          if ( Touch < 0 )
          {
            v109 = 760;
            goto LABEL_41;
          }
          v47 = (volatile signed __int32 *)v111;
          CContactManager::AddToTouchNode(v46, v110, v111);
          v48 = 104LL * (unsigned int)v6;
          if ( v6 < 0 )
            v49 = &v114;
          else
            v49 = (struct tagRECT *)(v48 + *((_QWORD *)this + 7) + 24LL);
          started = CPressTapVisual::Start(
                      (CPressTapVisual *)v47,
                      (const struct tagPOINT *)((char *)a2 + 12),
                      v49,
                      (const struct tagPOINT *)a2 + 3);
          if ( started < 0 )
          {
            CContactManager::RemoveFromTouchNode(v50, v110, (struct CVisual *)v47);
            if ( v47 )
              CBaseObject::Release((CBaseObject *)v47);
            v109 = 776;
            goto LABEL_35;
          }
          if ( v6 >= 0 )
          {
            *(_QWORD *)(v48 + *((_QWORD *)this + 7) + 88) = v47;
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v48 + *((_QWORD *)this + 7) + 88) + 8LL));
LABEL_84:
            v47 = (volatile signed __int32 *)v111;
LABEL_85:
            if ( !v47 )
              goto LABEL_185;
            v55 = (CBaseObject *)v47;
            goto LABEL_146;
          }
          v112[0] = (CBaseObject *)v47;
          v51 = *((_DWORD *)this + 44);
          v52 = v51 + 1;
          if ( v51 + 1 < v51 )
          {
            v53 = 181;
            v54 = -2147024362;
LABEL_89:
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v54, v53);
            CContactManager::StopAndRemoveFromRootNode(v56, (struct CTouchVisual *)v47);
            goto LABEL_85;
          }
          if ( v52 > *((_DWORD *)this + 43) )
          {
            v54 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 152, 8, 1, v112);
            if ( v54 < 0 )
            {
              v53 = 192;
              goto LABEL_89;
            }
          }
          else
          {
            *(_QWORD *)(*((_QWORD *)this + 19) + 8LL * *((unsigned int *)this + 44)) = v47;
            *((_DWORD *)this + 44) = v52;
          }
          _InterlockedIncrement(v47 + 2);
          goto LABEL_84;
        }
        if ( CDesktopManager::IsCurrentSessionRemotable() || *((_BYTE *)this + 325) )
        {
          CContactManager::_RemoveForcedPressHold(this, *((_DWORD *)a2 + 2));
        }
        else if ( v6 >= 0 )
        {
          v58 = 104LL * (unsigned int)v6;
          v59 = *((_QWORD *)this + 7);
          v60 = *(CBaseObject **)(v59 + v58 + 64);
          if ( v60 )
          {
            CContactManager::StopAndRemoveFromRootNode(v57, *(struct CTouchVisual **)(v59 + v58 + 64));
            CBaseObject::Release(v60);
            *(_QWORD *)(v58 + *((_QWORD *)this + 7) + 64) = 0LL;
            v61 = *((_QWORD *)this + 7);
            if ( !*(_QWORD *)(v58 + v61 + 88) )
            {
              if ( *(_BYTE *)(v58 + v61 + 97) )
              {
                if ( *((_BYTE *)this + 324) || *(_DWORD *)(v58 + v61 + 40) )
                {
                  v62 = (CDirectTouchVisual **)(v58 + v61 + 48);
                  if ( !*v62 )
                  {
                    Touch = CreateTouchVisual<CDirectTouchVisual>(v110, v62);
                    started = Touch;
                    if ( Touch < 0 )
                    {
                      v109 = 679;
                      goto LABEL_41;
                    }
                    CContactManager::AddToTouchNode(v63, v110, *(struct CVisual **)(v58 + *((_QWORD *)this + 7) + 48));
                  }
                  v64 = *((_QWORD *)this + 7);
                  v65 = 4294967291LL;
                  if ( !*((_BYTE *)this + 324) )
                    v65 = *(unsigned int *)(v58 + v64 + 40);
                  CDirectTouchVisual::StartDown(*(_QWORD *)(v58 + v64 + 48), (char *)a2 + 12, &v114, v65);
                }
              }
              else
              {
                v66 = (CTouchVisual **)(v58 + v61 + 56);
                if ( !*v66 )
                {
                  Touch = CreateTouchVisual<CIndirectTouchVisual>(v110, v66);
                  started = Touch;
                  if ( Touch < 0 )
                  {
                    v109 = 689;
                    goto LABEL_41;
                  }
                  v67 = *((_QWORD *)this + 7);
                  v68 = *(CContactManager **)(v58 + v67 + 56);
                  *((_DWORD *)v68 + 106) = *(_DWORD *)(v58 + v67);
                  CContactManager::AddToTouchNode(v68, v110, *(struct CVisual **)(v58 + *((_QWORD *)this + 7) + 56));
                }
                v69 = *((_QWORD *)this + 7);
                v70 = v58 + v69 + 8;
                v71 = *(_QWORD *)(v58 + v69 + 56);
                v72 = *(unsigned int *)(v58 + v69 + 40);
                if ( *(_DWORD *)(v58 + v69 + 4) )
                  CIndirectTouchVisual::StartEngage(v71, v70, v72);
                else
                  CIndirectTouchVisual::StartHover(v71, v70, v72);
              }
            }
          }
        }
        v73 = 0LL;
        v111 = 0LL;
        v74 = *((_DWORD *)this + 76) - 1;
        if ( v74 < 0 )
          goto LABEL_119;
        v75 = (_QWORD *)((char *)this + 280);
        v76 = 16LL * v74;
        do
        {
          if ( *(_DWORD *)(v76 + *v75) == *((_DWORD *)a2 + 2) )
          {
            v73 = *(CBaseObject **)(v76 + *v75 + 8);
            DynArray<CIconicBitmapPending,0>::RemoveAt((char *)this + 280, (unsigned int)v74);
          }
          v76 -= 16LL;
          --v74;
        }
        while ( v74 >= 0 );
        v111 = v73;
        if ( !v73 )
        {
LABEL_119:
          Touch = CreateTouchVisual<CTouchPressHoldVisual>(v110, &v111);
          started = Touch;
          if ( Touch < 0 )
          {
            v109 = 719;
            goto LABEL_41;
          }
          v73 = v111;
          CContactManager::AddToTouchNode(v77, v110, v111);
        }
        started = CTouchPressHoldVisual::StartAbort(v73, (const struct tagPOINT *)((char *)a2 + 12));
        if ( started >= 0 )
          goto LABEL_185;
        CContactManager::RemoveFromTouchNode(v78, v110, v73);
        if ( v73 )
          CBaseObject::Release(v73);
        v109 = 727;
      }
      else
      {
        CWindowList::DismissCurrentTouchResizeHighlight(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54));
        if ( CDesktopManager::IsCurrentSessionRemotable() || *((_BYTE *)this + 325) )
        {
          CContactManager::_RemoveForcedPressHold(this, *((_DWORD *)a2 + 2));
          LODWORD(v112[0]) = *((_DWORD *)a2 + 2);
          v112[1] = 0LL;
          Touch = CreateTouchVisual<CTouchPressHoldVisual>(v110, &v112[1]);
          started = Touch;
          if ( Touch < 0 )
          {
            v109 = 621;
            goto LABEL_41;
          }
          CContactManager::AddToTouchNode(v82, v110, v112[1]);
          started = CTouchPressHoldVisual::StartHold(v112[1], (const struct tagPOINT *)((char *)a2 + 12));
          if ( started >= 0 )
          {
            v84 = *((unsigned int *)this + 68);
            v85 = v84 + 1;
            if ( (int)v84 + 1 >= (unsigned int)v84 )
            {
              started = 0;
              if ( v85 <= *((_DWORD *)this + 67) )
              {
                *(_OWORD *)(*((_QWORD *)this + 31) + 16 * v84) = *(_OWORD *)v112;
                *((_DWORD *)this + 68) = v85;
                goto LABEL_185;
              }
              started = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 248, 16, 1, v112);
              if ( started >= 0 )
                goto LABEL_185;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0xC0u);
            }
            else
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
              started = -2147024362;
            }
          }
          CContactManager::RemoveFromTouchNode(v83, v110, v112[1]);
          v55 = v112[1];
          if ( !v112[1] )
            goto LABEL_185;
LABEL_146:
          CBaseObject::Release(v55);
          goto LABEL_185;
        }
        if ( v6 < 0 )
          goto LABEL_55;
        v79 = 104LL * (unsigned int)v6;
        if ( *(_DWORD *)(*((_QWORD *)this + 7) + v79 + 4) != 1 )
          goto LABEL_55;
        Touch = CContactManager::EnsureTouchPressHoldForContact(this, v6, v110);
        started = Touch;
        if ( Touch < 0 )
        {
          v109 = 645;
          goto LABEL_41;
        }
        started = CTouchPressHoldVisual::StartHold(
                    *(CTouchPressHoldVisual **)(*((_QWORD *)this + 7) + v79 + 64),
                    (const struct tagPOINT *)((char *)a2 + 12));
        if ( started >= 0 )
          goto LABEL_185;
        CContactManager::RemoveFromTouchNode(v80, v110, *(struct CVisual **)(v79 + *((_QWORD *)this + 7) + 64));
        v81 = *(CBaseObject **)(v79 + *((_QWORD *)this + 7) + 64);
        if ( v81 )
        {
          CBaseObject::Release(v81);
          *(_QWORD *)(v79 + *((_QWORD *)this + 7) + 64) = 0LL;
        }
        v109 = 651;
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
        v87 = 104LL * (unsigned int)v6;
        v88 = *((_QWORD *)this + 7);
        v89 = *(CBaseObject **)(v88 + v87 + 64);
        if ( v89 )
        {
          CContactManager::StopAndRemoveFromRootNode(v86, *(struct CTouchVisual **)(v88 + v87 + 64));
          CBaseObject::Release(v89);
          *(_QWORD *)(*((_QWORD *)this + 7) + v87 + 64) = 0LL;
          v90 = *((_QWORD *)this + 7);
          if ( !*(_QWORD *)(v90 + v87 + 88) )
          {
            if ( *(_BYTE *)(v90 + v87 + 97) )
            {
              if ( *((_BYTE *)this + 324) || *(_DWORD *)(v90 + v87 + 40) )
              {
                v91 = (CDirectTouchVisual **)(v87 + v90 + 48);
                if ( !*v91 )
                {
                  Touch = CreateTouchVisual<CDirectTouchVisual>(v110, v91);
                  started = Touch;
                  if ( Touch < 0 )
                  {
                    v109 = 551;
                    goto LABEL_41;
                  }
                  CContactManager::AddToTouchNode(v92, v110, *(struct CVisual **)(*((_QWORD *)this + 7) + v87 + 48));
                }
                v93 = *((_QWORD *)this + 7);
                v94 = 4294967291LL;
                if ( !*((_BYTE *)this + 324) )
                  v94 = *(unsigned int *)(v93 + v87 + 40);
                CDirectTouchVisual::StartDown(*(_QWORD *)(v93 + v87 + 48), (char *)a2 + 12, &v114, v94);
              }
            }
            else
            {
              v95 = (CTouchVisual **)(v87 + v90 + 56);
              if ( !*v95 )
              {
                Touch = CreateTouchVisual<CIndirectTouchVisual>(v110, v95);
                started = Touch;
                if ( Touch < 0 )
                {
                  v109 = 561;
                  goto LABEL_41;
                }
                v96 = *((_QWORD *)this + 7);
                v97 = *(CContactManager **)(v96 + v87 + 56);
                *((_DWORD *)v97 + 106) = *(_DWORD *)(v96 + 104LL * (unsigned int)v6);
                CContactManager::AddToTouchNode(v97, v110, *(struct CVisual **)(*((_QWORD *)this + 7) + v87 + 56));
              }
              v98 = *((_QWORD *)this + 7);
              v99 = v87 + v98 + 8;
              v100 = *(_QWORD *)(v98 + v87 + 56);
              v101 = *(unsigned int *)(v98 + v87 + 40);
              if ( *(_DWORD *)(v98 + v87 + 4) )
                CIndirectTouchVisual::StartEngage(v100, v99, v101);
              else
                CIndirectTouchVisual::StartHover(v100, v99, v101);
            }
          }
        }
      }
      v102 = 0LL;
      v111 = 0LL;
      v103 = *((_DWORD *)this + 76) - 1;
      if ( v103 < 0 )
        goto LABEL_176;
      v104 = (_QWORD *)((char *)this + 280);
      v105 = 16LL * v103;
      do
      {
        if ( *(_DWORD *)(v105 + *v104) == *((_DWORD *)a2 + 2) )
        {
          v102 = *(CBaseObject **)(v105 + *v104 + 8);
          DynArray<CIconicBitmapPending,0>::RemoveAt((char *)this + 280, (unsigned int)v103);
        }
        v105 -= 16LL;
        --v103;
      }
      while ( v103 >= 0 );
      v111 = v102;
      if ( !v102 )
      {
LABEL_176:
        Touch = CreateTouchVisual<CTouchPressHoldVisual>(v110, &v111);
        started = Touch;
        if ( Touch < 0 )
        {
          v109 = 591;
          goto LABEL_41;
        }
        v102 = v111;
        CContactManager::AddToTouchNode(v106, v110, v111);
      }
      started = CTouchPressHoldVisual::StartRightTap(v102, (const struct tagPOINT *)((char *)a2 + 12));
      if ( started >= 0 )
        goto LABEL_185;
      CContactManager::RemoveFromTouchNode(v107, v110, v102);
      if ( v102 )
        CBaseObject::Release(v102);
      v109 = 599;
    }
LABEL_35:
    v26 = started;
LABEL_42:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v26, v109);
    goto LABEL_185;
  }
  if ( v11 == 5 )
  {
    if ( (v6 < 0 || *(_BYTE *)(104LL * (unsigned int)v6 + *((_QWORD *)this + 7) + 97))
      && (int)CContactManager::FindStationaryAnimation((__int64)this, *((_DWORD *)a2 + 2), 1) < 0 )
    {
      CContactManager::StartStationaryAnimationWithDelay(this, v30, 2LL, (char *)a2 + 12, &v114, v110, 0);
    }
    goto LABEL_185;
  }
  if ( !v11 )
  {
    CContactManager::StartStationaryAnimationWithDelay(
      this,
      *((unsigned int *)a2 + 2),
      4LL,
      (char *)a2 + 12,
      0LL,
      v110,
      0);
    goto LABEL_185;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    CContactManager::StartStationaryAnimationWithDelay(
      this,
      *((unsigned int *)a2 + 2),
      5LL,
      (char *)a2 + 12,
      0LL,
      v110,
      0);
    goto LABEL_185;
  }
  v13 = (CContactManager *)(unsigned int)(v12 - 1);
  if ( !(_DWORD)v13 )
  {
    if ( v5 < 0 )
      goto LABEL_43;
    v27 = 5LL * (unsigned int)v5;
    v28 = *(struct CTouchVisual **)(*((_QWORD *)this + 11) + 8 * v27 + 16);
    CContactManager::StopAndRemoveFromRootNode(v13, v28);
    if ( v28 )
      CBaseObject::Release(v28);
    *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v27 + 16) = 0LL;
    Touch = CContactManager::StartPenBarrelVisual(v29, (struct CPenContact *)(*((_QWORD *)this + 11) + 8 * v27), v110);
    started = Touch;
    if ( Touch >= 0 )
    {
LABEL_43:
      CContactManager::StartStationaryAnimationWithDelay(
        this,
        *((unsigned int *)a2 + 2),
        6LL,
        (char *)a2 + 12,
        0LL,
        v110,
        0);
      goto LABEL_185;
    }
    v109 = 461;
    goto LABEL_41;
  }
  v14 = (CContactManager *)(unsigned int)((_DWORD)v13 - 1);
  if ( (_DWORD)v14 )
  {
    if ( (_DWORD)v14 == 1 )
    {
      if ( v5 >= 0 )
      {
        v15 = 5LL * (unsigned int)v5;
        v16 = *(struct CTouchVisual **)(*((_QWORD *)this + 11) + 8 * v15 + 16);
        CContactManager::StopAndRemoveFromRootNode(v14, v16);
        if ( v16 )
          CBaseObject::Release(v16);
        *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v15 + 16) = 0LL;
        Touch = CContactManager::StartPenBarrelVisual(
                  v17,
                  (struct CPenContact *)(*((_QWORD *)this + 11) + 8 * v15),
                  v110);
        started = Touch;
        if ( Touch < 0 )
        {
          v109 = 504;
LABEL_41:
          v26 = Touch;
          goto LABEL_42;
        }
      }
      CContactManager::StartStationaryAnimationWithDelay(
        this,
        *((unsigned int *)a2 + 2),
        7LL,
        (char *)a2 + 12,
        0LL,
        v110,
        0);
      goto LABEL_185;
    }
LABEL_55:
    started = -2147024809;
    goto LABEL_185;
  }
  if ( v5 < 0 )
    goto LABEL_55;
  v19 = 5LL * (unsigned int)v5;
  v20 = *(struct CTouchVisual **)(*((_QWORD *)this + 11) + 8 * v19 + 8);
  CContactManager::StopAndRemoveFromRootNode(v14, v20);
  if ( v20 )
    CBaseObject::Release(v20);
  *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v19 + 8) = 0LL;
  v22 = *(struct CTouchVisual **)(*((_QWORD *)this + 11) + 8 * v19 + 16);
  CContactManager::StopAndRemoveFromRootNode(v21, v22);
  if ( v22 )
    CBaseObject::Release(v22);
  *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v19 + 16) = 0LL;
  Touch = CreateTouchVisual<CPenPressHoldVisual>(v110, (CTouchVisual **)(*((_QWORD *)this + 11) + 16LL + 8 * v19));
  started = Touch;
  if ( Touch < 0 )
  {
    v109 = 484;
    goto LABEL_41;
  }
  CContactManager::AddToTouchNode(v23, v110, *(struct CVisual **)(*((_QWORD *)this + 11) + 8 * v19 + 16));
  started = CPenPressHoldVisual::Start(
              *(CPenPressHoldVisual **)(*((_QWORD *)this + 11) + 8 * v19 + 16),
              (const struct tagPOINT *)((char *)a2 + 12));
  if ( started < 0 )
  {
    CContactManager::RemoveFromTouchNode(v24, v110, *(struct CVisual **)(*((_QWORD *)this + 11) + 8 * v19 + 16));
    v25 = *(CBaseObject **)(*((_QWORD *)this + 11) + 8 * v19 + 16);
    if ( v25 )
    {
      CBaseObject::Release(v25);
      *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v19 + 16) = 0LL;
    }
    v109 = 491;
    goto LABEL_35;
  }
LABEL_185:
  CContactManager::CleanupFinishedAnimations(this);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v113);
  return (unsigned int)started;
}
