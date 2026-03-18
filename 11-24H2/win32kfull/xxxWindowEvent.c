/*
 * XREFs of xxxWindowEvent @ 0x1400408B0
 * Callers:
 *     xxxSetScrollBar @ 0x140032F08 (xxxSetScrollBar.c)
 *     zzzInternalHideCaret @ 0x1400357EC (zzzInternalHideCaret.c)
 *     zzzInternalShowCaret @ 0x140035B94 (zzzInternalShowCaret.c)
 *     zzzUpdateLayeredWindow @ 0x140035DCC (zzzUpdateLayeredWindow.c)
 *     NtUserNotifyWinEvent @ 0x14003F1C0 (NtUserNotifyWinEvent.c)
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     xxxCalcClientRect @ 0x1400712A8 (xxxCalcClientRect.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140088950 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x140089FBC (-xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     xxxCreateCaret @ 0x140091710 (xxxCreateCaret.c)
 *     ?zzzUpdateWindowCloak@@YAXPEAUtagWND@@W4CloakState@@1@Z @ 0x1400943FC (-zzzUpdateWindowCloak@@YAXPEAUtagWND@@W4CloakState@@1@Z.c)
 *     zzzSetCaretPos @ 0x1400950F8 (zzzSetCaretPos.c)
 *     zzzInternalDestroyCaret @ 0x140095744 (zzzInternalDestroyCaret.c)
 *     xxxTrackPopupMenuEx @ 0x140099644 (xxxTrackPopupMenuEx.c)
 *     xxxMNStartMenu @ 0x14009A980 (xxxMNStartMenu.c)
 *     xxxMNOpenHierarchy @ 0x14009BE5C (xxxMNOpenHierarchy.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x14009D684 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     xxxMNCancel @ 0x14009D784 (xxxMNCancel.c)
 *     xxxMNSelectItem @ 0x14009DA30 (xxxMNSelectItem.c)
 *     xxxMNCloseHierarchy @ 0x14009E0A0 (xxxMNCloseHierarchy.c)
 *     xxxSendMenuSelect @ 0x14009E36C (xxxSendMenuSelect.c)
 *     xxxDCETrackCaptionButton @ 0x140109CAC (xxxDCETrackCaptionButton.c)
 *     xxxTrackCaptionButton @ 0x14010B9EC (xxxTrackCaptionButton.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x14014E68C (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x14014F0F0 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x14017C3F8 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x14018F9C8 (xxxSystemParametersInfoWorker.c)
 *     xxxEnableWndSBArrows @ 0x1401E1A30 (xxxEnableWndSBArrows.c)
 *     ?xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z @ 0x1401EFBD8 (-xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z.c)
 *     xxxSwitchDesktop @ 0x1401F69E4 (xxxSwitchDesktop.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x14022C22C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x14022D690 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x140232BF0 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14024AF80 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x14024E024 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxDestroyWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14024FA00 (-xxxDestroyWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 *     xxxMNSetCapture @ 0x14026533C (xxxMNSetCapture.c)
 *     xxxMNReleaseCapture @ 0x1402688C4 (xxxMNReleaseCapture.c)
 *     ?zzzSendCursorChangeWinEvent@@YAXPEAUtagCURSOR@@0@Z @ 0x1402715E0 (-zzzSendCursorChangeWinEvent@@YAXPEAUtagCURSOR@@0@Z.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x14027662C (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?zzzInputFocusLostWindowEventImpl@@YAXPEAUtagWND@@PEAUtagQ@@W4INPUTFOCUSEVENTSOURCE@@@Z @ 0x140287884 (-zzzInputFocusLostWindowEventImpl@@YAXPEAUtagWND@@PEAUtagQ@@W4INPUTFOCUSEVENTSOURCE@@@Z.c)
 *     ?zzzInputFocusReceivedWindowEventImpl@@YAXPEAUtagWND@@W4INPUTFOCUSEVENTSOURCE@@@Z @ 0x140287920 (-zzzInputFocusReceivedWindowEventImpl@@YAXPEAUtagWND@@W4INPUTFOCUSEVENTSOURCE@@@Z.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1402BEC74 (xxxMNSwitchToAlternateMenu.c)
 *     xxxDragObject @ 0x1402DF924 (xxxDragObject.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1402E1AD0 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1402E2314 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1402E2D6C (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     xxxEndScroll @ 0x1402E6AC0 (xxxEndScroll.c)
 *     xxxHelpLoop @ 0x1402E98E4 (xxxHelpLoop.c)
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxProcessNotifyWinEvent @ 0x140041720 (xxxProcessNotifyWinEvent.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HOOK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400840AC (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HOOK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     xxxProcessTSFEvent @ 0x140085E5C (xxxProcessTSFEvent.c)
 *     ?xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z @ 0x140224020 (-xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z.c)
 *     ?CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z @ 0x140266EBC (-CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

void __fastcall xxxWindowEvent(unsigned int a1, struct tagWND *a2, int a3, unsigned int a4, int a5)
{
  unsigned int DLT; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  char *v9; // rbx
  __int64 v10; // rdx
  ULONG_PTR v11; // r12
  int v12; // edi
  tagDomLock *v13; // rcx
  int v14; // r14d
  unsigned int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *CurrentThreadNonPaged; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 *v21; // rax
  __int64 v22; // rbx
  int v23; // ecx
  struct tagTHREADINFO *v24; // rsi
  HANDLE ThreadId; // rax
  struct _KTHREAD *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  __int64 v31; // rsi
  __int64 *v32; // rax
  __int64 v33; // rcx
  struct tagTHREADINFO *v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 UserSessionState; // rax
  unsigned int CurrentThreadId; // edi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 *v41; // rbx
  int v42; // edx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rbx
  __int64 v46; // r13
  __int64 v47; // rdi
  HANDLE v48; // rax
  int v49; // eax
  unsigned int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rax
  char *v54; // rsi
  int v55; // r14d
  tagDomLock *v56; // rcx
  __int64 v57; // rdx
  tagDomLock *v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // r14
  __int64 v65; // rsi
  __int64 v66; // rax
  __int64 v67; // r14
  __int64 *v68; // rax
  __int64 *v69; // rax
  __int64 v70; // rcx
  ULONG_PTR *v71; // rax
  tagDomLock *v72; // rcx
  __int64 *v73; // rax
  __int64 v74; // rcx
  ULONG_PTR *v75; // rax
  struct tagWND *v76; // rax
  int v77; // eax
  __int64 v78; // rbx
  struct tagTHREADINFO *v79; // rdi
  unsigned int v80; // [rsp+40h] [rbp-C0h]
  int v81; // [rsp+44h] [rbp-BCh]
  struct tagTHREADINFO *v82; // [rsp+48h] [rbp-B8h]
  int v86; // [rsp+60h] [rbp-A0h]
  __int64 v87; // [rsp+60h] [rbp-A0h]
  unsigned int v88; // [rsp+68h] [rbp-98h]
  __int64 v89; // [rsp+70h] [rbp-90h] BYREF
  struct tagTHREADINFO *v90; // [rsp+78h] [rbp-88h]
  __int64 v91; // [rsp+80h] [rbp-80h]
  _QWORD v92[2]; // [rsp+90h] [rbp-70h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v94; // [rsp+B0h] [rbp-50h]
  HANDLE ThreadProcessId; // [rsp+B8h] [rbp-48h]
  __int64 v96; // [rsp+C0h] [rbp-40h]
  HANDLE v97; // [rsp+C8h] [rbp-38h]
  __int64 DomainLockRef; // [rsp+D0h] [rbp-30h] BYREF
  char v99; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v100; // [rsp+E0h] [rbp-20h]
  char v101; // [rsp+E8h] [rbp-18h]
  __int64 v102; // [rsp+F0h] [rbp-10h]
  char v103; // [rsp+F8h] [rbp-8h]
  tagDomLock *v104; // [rsp+100h] [rbp+0h] BYREF
  char v105; // [rsp+108h] [rbp+8h] BYREF
  __int64 v106; // [rsp+110h] [rbp+10h]
  char v107; // [rsp+118h] [rbp+18h]
  __int64 v108; // [rsp+120h] [rbp+20h]
  char v109; // [rsp+128h] [rbp+28h]

  DLT = DLT_WINEVENT::getDLT();
  DomainLockRef = GetDomainLockRef(DLT);
  v99 = 1;
  v101 = 0;
  v9 = &v99;
  v100 = W32GetUserSessionState(v8, v7) + 42424;
  v11 = 0LL;
  v102 = 0LL;
  v12 = 0;
  v103 = 0;
  do
  {
    v13 = (tagDomLock *)*((_QWORD *)v9 - 1);
    if ( v13 )
    {
      if ( *v9 )
        tagDomLock::LockExclusive(v13);
      else
        tagDomLock::LockShared(v13);
    }
    ++v12;
    v9 += 16;
  }
  while ( !v12 );
  v103 = 1;
  if ( a1 == 2147483408 )
  {
    v14 = 1;
    goto LABEL_15;
  }
  if ( a1 - 2147483409 < 2 )
    v14 = 2;
  else
    v14 = 0;
  if ( a1 <= 0x80000002 )
  {
    if ( a1 != -2147483646 )
    {
      if ( a1 != 2147483393 )
      {
        if ( a1 == -2147483647 )
        {
LABEL_222:
          v15 = 256;
          v86 = 1;
          v81 = 256;
          goto LABEL_16;
        }
        if ( a1 != 2147483392 )
        {
          if ( a1 != 0x80000000 )
          {
LABEL_15:
            v15 = 0;
            v81 = 0;
            v86 = 0;
            goto LABEL_16;
          }
          goto LABEL_222;
        }
      }
      v15 = 1024;
LABEL_181:
      v81 = v15;
      v86 = 1;
      goto LABEL_16;
    }
LABEL_217:
    v15 = 512;
    goto LABEL_181;
  }
  if ( a1 == -2147483645 )
    goto LABEL_217;
  if ( a1 != -2147483643 && a1 != -2147483644 )
    goto LABEL_15;
  v15 = 4096;
  v86 = 1;
  v81 = 4096;
LABEL_16:
  v16 = *(_QWORD *)(W32GetUserSessionState(1LL, v10) + 19928);
  if ( a1 != 32779 )
  {
    if ( a1 <= 0x800A )
    {
      if ( a1 == 32778 )
      {
        v17 = 32LL;
        goto LABEL_18;
      }
      if ( a1 > 0x4001 )
      {
        if ( a1 == 32773 )
        {
          v17 = 4LL;
          goto LABEL_18;
        }
        if ( a1 <= 0x8005 )
        {
          switch ( a1 )
          {
            case 0x4002u:
            case 0x4003u:
            case 0x4004u:
            case 0x4005u:
            case 0x4006u:
            case 0x4007u:
              goto LABEL_185;
            default:
              break;
          }
        }
      }
      else
      {
        if ( a1 == 16385 )
        {
LABEL_185:
          v17 = 2LL;
          goto LABEL_18;
        }
        if ( a1 == 4 || a1 == 5 || a1 - 6 <= 1 )
        {
          v17 = 1LL;
          goto LABEL_18;
        }
      }
LABEL_117:
      v17 = 0x8000LL;
      goto LABEL_18;
    }
    if ( a1 <= 0x7FFFFF10 )
    {
      if ( a1 != 2147483408 )
      {
        if ( a1 == 32780 )
        {
          v17 = 8LL;
          goto LABEL_18;
        }
        if ( a1 == 32782 )
        {
          v17 = 16LL;
          goto LABEL_18;
        }
        goto LABEL_117;
      }
    }
    else if ( a1 <= 0x80000002 )
    {
      if ( a1 != -2147483646 )
      {
        if ( a1 > 0x7FFFFF30 )
        {
          if ( a1 != 0x80000000 && a1 != -2147483647 )
            goto LABEL_117;
        }
        else if ( a1 != 2147483440 && a1 != 2147483409 && a1 != 2147483410 && a1 != 2147483424 )
        {
          goto LABEL_117;
        }
      }
    }
    else if ( a1 != -2147483645 )
    {
      if ( a1 == -2147483643 || a1 == -2147483644 )
      {
        v17 = 512LL;
        goto LABEL_18;
      }
      if ( a1 != -2147483642 && a1 != -2147483641 )
        goto LABEL_117;
    }
    v17 = 256LL;
    goto LABEL_18;
  }
  v17 = 64LL;
LABEL_18:
  if ( ((unsigned int)v17 & *(_DWORD *)(v16 + 1892)) == 0 && !v14 && !v86 )
  {
    DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>(&DomainLockRef, v16, 0x140000000uLL);
    return;
  }
  CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged(v17, v16);
  if ( CurrentThreadNonPaged && *CurrentThreadNonPaged )
  {
    v21 = (__int64 *)W32GetCurrentThreadNonPaged(v20, v19);
    if ( v21 )
      v22 = *v21;
    else
      v22 = 0LL;
    v92[0] = v22;
    if ( (a5 & 0x11) != 0x11 && a2 && *(char *)(*((_QWORD *)a2 + 5) + 19LL) < 0 )
    {
      if ( v103 )
      {
        v72 = (tagDomLock *)DomainLockRef;
        if ( DomainLockRef )
        {
          if ( v99 )
            goto LABEL_91;
LABEL_93:
          tagDomLock::UnLockShared(v72);
          return;
        }
      }
      return;
    }
    v23 = a5 | 2;
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v22 + 528), 0, 0) & 0x10000001) == 0 )
      v23 = a5;
    v80 = v23;
    if ( (v23 & 1) != 0 && a2 )
    {
      v24 = (struct tagTHREADINFO *)*((_QWORD *)a2 + 2);
      v76 = 0LL;
      if ( (v23 & 0x10) == 0 )
        v76 = a2;
      a2 = v76;
    }
    else
    {
      v24 = (struct tagTHREADINFO *)v22;
    }
    v82 = v24;
    ThreadId = PsGetThreadId(*(PETHREAD *)v24);
    v26 = *(struct _KTHREAD **)v24;
    v97 = ThreadId;
    v96 = *((_QWORD *)v24 + 58);
    ThreadProcessId = PsGetThreadProcessId(v26);
    v31 = W32GetUserSessionState(v28, v27) + 70840;
    v94 = v31;
    if ( (v80 & 0x20) != 0 )
    {
      v88 = _InterlockedIncrement((volatile signed __int32 *)v31);
    }
    else
    {
      v30 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v88 = v30;
    }
    BugCheckParameter3[0] = *(_QWORD *)(v22 + 456);
    *(_QWORD *)(v22 + 456) = BugCheckParameter3;
    BugCheckParameter3[1] = (ULONG_PTR)a2;
    if ( a2 )
      HMLockObject(a2);
    v32 = (__int64 *)W32GetCurrentThreadNonPaged(v30, v29);
    if ( v32 )
      v33 = *v32;
    else
      v33 = 0LL;
    v34 = v82;
    v89 = *(_QWORD *)(v33 + 384);
    *(_QWORD *)(v33 + 384) = &v89;
    v91 = (__int64)Win32RawLockedW32Thread::Deref;
    v90 = v82;
    ReferenceW32Thread(v82);
    v36 = v80;
    if ( (v80 & 2) == 0 )
    {
      UserSessionState = W32GetUserSessionState(v35, v80);
      if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(UserSessionState + 42384)) != 1 )
        __int2c();
      CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
      v41 = (__int64 *)(W32GetUserSessionState(v40, v39) + 70864);
      v35 = *v41;
      while ( (__int64 *)v35 != v41 )
      {
        v42 = *(_DWORD *)(v35 + 56);
        if ( (v42 & 2) != 0 && *(_DWORD *)(v35 + 48) == CurrentThreadId )
        {
          *(_DWORD *)(v35 + 56) = v42 & 0xFFFFFFFD;
          if ( *(_DWORD *)(v35 + 24) )
            xxxProcessTSFEvent((struct tagNOTIFY *)v35);
          else
            xxxProcessNotifyWinEvent(v35);
          v35 = *v41;
        }
        else
        {
          v35 = *(_QWORD *)v35;
        }
      }
      v34 = v82;
      v36 = v80;
      v15 = v81;
    }
    if ( v86 )
    {
      v35 = *(unsigned int *)(*((_QWORD *)v34 + 58) + 816LL);
      if ( (v35 & 0x1000000) != 0 )
        xxxDoLocalTSFWork(a1, a2, a3, a4, v36, v15, v34, v88);
    }
    if ( v14 )
    {
      v78 = *(_QWORD *)(W32GetUserSessionState(v35, v36) + 36424);
      v87 = v78;
      if ( v78 )
      {
        do
        {
          if ( (*(_DWORD *)(v78 + 816) & 0x1000000) != 0 )
          {
            v79 = *(struct tagTHREADINFO **)(v78 + 328);
            if ( v79 )
            {
              do
              {
                if ( (v14 & *(_DWORD *)(*((_QWORD *)v79 + 61) + 24LL)) != 0 )
                  CreateAndPostTSFNotify(a1, a2, a3, a4, v79, v82, v88);
                v79 = (struct tagTHREADINFO *)*((_QWORD *)v79 + 88);
              }
              while ( v79 );
              v78 = v87;
            }
          }
          v78 = *(_QWORD *)(v78 + 368);
          v87 = v78;
        }
        while ( v78 );
        v31 = v94;
        v11 = 0LL;
      }
    }
    v43 = *(_QWORD *)(W32GetUserSessionState(v35, v36) + 19928);
    if ( a1 == 32779 )
    {
      v44 = 64LL;
      goto LABEL_48;
    }
    if ( a1 <= 0x800A )
    {
      if ( a1 == 32778 )
      {
        v44 = 32LL;
        goto LABEL_48;
      }
      if ( a1 <= 0x4001 )
      {
        if ( a1 != 16385 )
        {
          if ( a1 == 4 || a1 == 5 || a1 - 6 <= 1 )
          {
            v44 = 1LL;
            goto LABEL_48;
          }
          goto LABEL_125;
        }
LABEL_189:
        v44 = 2LL;
LABEL_48:
        if ( ((unsigned int)v44 & *(_DWORD *)(v43 + 1892)) != 0 )
        {
          v45 = *(_QWORD *)(v31 + 8);
          v46 = v92[0];
          while ( v45 )
          {
            v44 = *(unsigned int *)(v45 + 40);
            v47 = *(_QWORD *)(v45 + 24);
            if ( (v44 & 1) == 0 && *(_DWORD *)(v45 + 32) <= a1 && a1 <= *(_DWORD *)(v45 + 36) )
            {
              v48 = *(HANDLE *)(v45 + 48);
              if ( !v48 || v48 == ThreadProcessId )
              {
                if ( (v44 & 4) == 0 || (v43 = v96, v96 != *(_QWORD *)(*(_QWORD *)(v45 + 16) + 464LL)) )
                {
                  v49 = *(_DWORD *)(v45 + 56);
                  if ( (!v49 || v49 == (_DWORD)v97) && ((v44 & 2) == 0 || v82 != *(struct tagTHREADINFO **)(v45 + 16)) )
                  {
                    v44 = *(_QWORD *)(*(_QWORD *)(v45 + 16) + 496LL);
                    if ( v44 == *(_QWORD *)(v46 + 496)
                      || a1 == 32
                      || v44 == *((_QWORD *)v82 + 62) && a1 + 2147483646 <= 1 )
                    {
                      v50 = DLT_HANDLEMANAGER::getDLT();
                      v104 = (tagDomLock *)GetDomainLockRef(v50);
                      v105 = 0;
                      v53 = W32GetUserSessionState(v52, v51);
                      v107 = 0;
                      v54 = &v105;
                      v55 = 0;
                      v106 = v53 + 42424;
                      v108 = 0LL;
                      v109 = 0;
                      do
                      {
                        v56 = (tagDomLock *)*((_QWORD *)v54 - 1);
                        if ( v56 )
                        {
                          if ( *v54 )
                            tagDomLock::LockExclusive(v56);
                          else
                            tagDomLock::LockShared(v56);
                        }
                        ++v55;
                        v54 += 16;
                      }
                      while ( !v55 );
                      v109 = 1;
                      if ( (*(_BYTE *)(_HMPheFromObject(v45) + 25) & 1) != 0 )
                      {
                        DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>(&v104, v57, v59);
                        break;
                      }
                      if ( v109 )
                      {
                        v58 = v104;
                        if ( v104 )
                        {
                          if ( v105 )
                            tagDomLock::UnLockExclusive(v104);
                          else
                            tagDomLock::UnLockShared(v104);
                        }
                      }
                      v60 = W32GetUserSessionState(v58, v57);
                      if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v60 + 42384)) != 1 )
                        __int2c();
                      v63 = W32GetUserSessionState(v62, v61);
                      v64 = v63;
                      if ( *(_DWORD *)(v63 + 70952) )
                      {
                        v65 = Win32AllocPoolZInit(72LL, 2037281621LL);
                        if ( !v65 )
                          break;
                      }
                      else
                      {
                        *(_DWORD *)(v63 + 70952) = 1;
                        v65 = v63 + 70880;
                      }
                      *(_QWORD *)(v65 + 16) = 0LL;
                      v92[0] = v65 + 16;
                      v92[1] = v45;
                      HMAssignmentLock(v92, 0LL);
                      if ( a2 )
                        v66 = *(_QWORD *)a2;
                      else
                        v66 = 0LL;
                      *(_QWORD *)(v65 + 32) = v66;
                      *(_DWORD *)(v65 + 40) = a3;
                      *(_DWORD *)(v65 + 44) = a4;
                      *(_DWORD *)(v65 + 28) = a1;
                      *(_DWORD *)(v65 + 48) = (unsigned int)PsGetThreadId(*(PETHREAD *)v82);
                      *(_DWORD *)(v65 + 52) = v88;
                      *(_DWORD *)(v65 + 24) = 0;
                      *(_DWORD *)(v65 + 56) = 0;
                      *(_DWORD *)(v65 + 56) = ~(unsigned __int8)(*(_DWORD *)(v45 + 40) >> 1) & 4;
                      *(_QWORD *)(v65 + 8) = v65;
                      *(_QWORD *)v65 = v65;
                      *(_QWORD *)(v65 + 64) = 0LL;
                      if ( (*(_DWORD *)(v45 + 40) & 8) != 0
                        && a1 + 2147483646 <= 3
                        && *(struct tagTHREADINFO **)(v45 + 16) != PtiCurrent() )
                      {
                        *(_DWORD *)(v65 + 56) |= 4u;
                      }
                      v67 = v64 + 70864;
                      v68 = *(__int64 **)(v67 + 8);
                      if ( *v68 != v67 )
                        __fastfail(3u);
                      *(_QWORD *)(v65 + 8) = v68;
                      *(_QWORD *)v65 = v67;
                      *v68 = v65;
                      *(_QWORD *)(v67 + 8) = v65;
                      v77 = *(_DWORD *)(v65 + 56) | v80;
                      *(_DWORD *)(v65 + 56) = v77;
                      if ( (v77 & 4) != 0 )
                      {
                        v77 &= ~2u;
                        *(_DWORD *)(v65 + 56) = v77;
                      }
                      if ( (v77 & 2) == 0 )
                        v47 = xxxProcessNotifyWinEvent(v65);
                    }
                  }
                }
              }
            }
            v45 = v47;
          }
          if ( v91 != -1 )
          {
            v73 = (__int64 *)W32GetCurrentThreadNonPaged(v44, v43);
            if ( v73 )
              v74 = *v73;
            else
              v74 = 0LL;
            *(_QWORD *)(v74 + 384) = v89;
            v44 = (__int64)v90;
            if ( v90 )
              ((void (*)(void))v91)();
            v91 = -1LL;
          }
          v75 = (ULONG_PTR *)W32GetCurrentThreadNonPaged(v44, v43);
          if ( v75 )
            v11 = *v75;
          Win32HM_UnlockFromThread<1>(v11, (ULONG_PTR)BugCheckParameter3);
          if ( !v103 )
            return;
          v72 = (tagDomLock *)DomainLockRef;
          if ( !DomainLockRef )
            return;
          if ( !v99 )
            goto LABEL_93;
        }
        else
        {
          if ( v91 != -1 )
          {
            v69 = (__int64 *)W32GetCurrentThreadNonPaged(v44, v43);
            if ( v69 )
              v70 = *v69;
            else
              v70 = 0LL;
            *(_QWORD *)(v70 + 384) = v89;
            v44 = (__int64)v90;
            if ( v90 )
              ((void (*)(void))v91)();
            v91 = -1LL;
          }
          v71 = (ULONG_PTR *)W32GetCurrentThreadNonPaged(v44, v43);
          if ( v71 )
            v11 = *v71;
          Win32HM_UnlockFromThread<1>(v11, (ULONG_PTR)BugCheckParameter3);
          if ( !v103 )
            return;
          v72 = (tagDomLock *)DomainLockRef;
          if ( !DomainLockRef )
            return;
          if ( !v99 )
            goto LABEL_93;
        }
LABEL_91:
        tagDomLock::UnLockExclusive(v72);
        return;
      }
      if ( a1 == 32773 )
      {
        v44 = 4LL;
        goto LABEL_48;
      }
      if ( a1 <= 0x8005 )
      {
        switch ( a1 )
        {
          case 0x4002u:
          case 0x4003u:
          case 0x4004u:
          case 0x4005u:
          case 0x4006u:
          case 0x4007u:
            goto LABEL_189;
          default:
            goto LABEL_125;
        }
      }
      goto LABEL_125;
    }
    if ( a1 <= 0x7FFFFF10 )
    {
      if ( a1 != 2147483408 )
      {
        if ( a1 == 32780 )
        {
          v44 = 8LL;
          goto LABEL_48;
        }
        if ( a1 == 32782 )
        {
          v44 = 16LL;
          goto LABEL_48;
        }
        goto LABEL_125;
      }
    }
    else if ( a1 <= 0x80000002 )
    {
      if ( a1 != -2147483646 )
      {
        if ( a1 > 0x7FFFFF30 )
        {
          if ( a1 != 0x80000000 && a1 != -2147483647 )
            goto LABEL_125;
        }
        else if ( a1 != 2147483440 && a1 != 2147483409 && a1 != 2147483410 && a1 != 2147483424 )
        {
          goto LABEL_125;
        }
      }
    }
    else if ( a1 != -2147483645 )
    {
      if ( a1 == -2147483643 || a1 == -2147483644 )
      {
        v44 = 512LL;
        goto LABEL_48;
      }
      if ( a1 != -2147483642 && a1 != -2147483641 )
      {
LABEL_125:
        v44 = 0x8000LL;
        goto LABEL_48;
      }
    }
    v44 = 256LL;
    goto LABEL_48;
  }
  if ( v103 )
  {
    v72 = (tagDomLock *)DomainLockRef;
    if ( DomainLockRef )
    {
      if ( v99 )
        goto LABEL_91;
      goto LABEL_93;
    }
  }
}
