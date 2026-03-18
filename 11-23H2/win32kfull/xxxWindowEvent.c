/*
 * XREFs of xxxWindowEvent @ 0x1C00F0BC0
 * Callers:
 *     zzzSetCaretPos @ 0x1C0005FC8 (zzzSetCaretPos.c)
 *     zzzInternalShowCaret @ 0x1C00062D4 (zzzInternalShowCaret.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C000BB08 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     xxxCreateCaret @ 0x1C000FD54 (xxxCreateCaret.c)
 *     xxxCapture @ 0x1C00117EC (xxxCapture.c)
 *     xxxSwitchDesktop @ 0x1C002C52C (xxxSwitchDesktop.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C0031520 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     ?xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z @ 0x1C003FD4C (-xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C0051ED0 (xxxCreateWindowEx.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C005E99C (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     zzzInternalDestroyCaret @ 0x1C0062BBC (zzzInternalDestroyCaret.c)
 *     zzzInternalHideCaret @ 0x1C0062CA4 (zzzInternalHideCaret.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C007B730 (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C00A57E8 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00ACC1C (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C00B5610 (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00D9A30 (xxxSystemParametersInfoWorker.c)
 *     xxxSetScrollBar @ 0x1C00E2528 (xxxSetScrollBar.c)
 *     NtUserNotifyWinEvent @ 0x1C00EEF70 (NtUserNotifyWinEvent.c)
 *     zzzUpdateCursorImage @ 0x1C00F0570 (zzzUpdateCursorImage.c)
 *     xxxDestroyWindow @ 0x1C00F2000 (xxxDestroyWindow.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00F6650 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0109880 (xxxRealDefWindowProc.c)
 *     xxxCalcClientRect @ 0x1C010BA30 (xxxCalcClientRect.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C01232A4 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012BAE0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?zzzInputFocusLostWindowEventImpl@@YAXPEAUtagWND@@PEAUtagQ@@W4INPUTFOCUSEVENTSOURCE@@@Z @ 0x1C013A640 (-zzzInputFocusLostWindowEventImpl@@YAXPEAUtagWND@@PEAUtagQ@@W4INPUTFOCUSEVENTSOURCE@@@Z.c)
 *     ?zzzInputFocusReceivedWindowEventImpl@@YAXPEAUtagWND@@W4INPUTFOCUSEVENTSOURCE@@@Z @ 0x1C013A6A8 (-zzzInputFocusReceivedWindowEventImpl@@YAXPEAUtagWND@@W4INPUTFOCUSEVENTSOURCE@@@Z.c)
 *     xxxCancelCoolSwitch @ 0x1C0152EF2 (xxxCancelCoolSwitch.c)
 *     xxxDCETrackCaptionButton @ 0x1C01BA07C (xxxDCETrackCaptionButton.c)
 *     zzzUpdateLayeredWindow @ 0x1C01BCF20 (zzzUpdateLayeredWindow.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01C8D6C (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01C966C (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01EF350 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F410C (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F4E00 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxMNStartMenu @ 0x1C01FF3DC (xxxMNStartMenu.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C02155BC (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     xxxMNCancel @ 0x1C0216554 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C0216C60 (xxxMNCloseHierarchy.c)
 *     xxxMNOpenHierarchy @ 0x1C0218340 (xxxMNOpenHierarchy.c)
 *     xxxMNReleaseCapture @ 0x1C0219170 (xxxMNReleaseCapture.c)
 *     xxxMNSelectItem @ 0x1C02191F0 (xxxMNSelectItem.c)
 *     xxxMNSetCapture @ 0x1C0219854 (xxxMNSetCapture.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C0219C44 (xxxMNSwitchToAlternateMenu.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C0228B10 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C0228CD0 (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C022907C (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C022926C (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     xxxEndScroll @ 0x1C02298C0 (xxxEndScroll.c)
 *     xxxSBWndProc @ 0x1C022A1A0 (xxxSBWndProc.c)
 *     xxxTrackCaptionButton @ 0x1C022BE68 (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C022EFB8 (xxxDragObject.c)
 *     xxxTrackPopupMenuEx @ 0x1C0231EEC (xxxTrackPopupMenuEx.c)
 *     xxxHelpLoop @ 0x1C0238C64 (xxxHelpLoop.c)
 *     xxxSendMenuSelect @ 0x1C023F51C (xxxSendMenuSelect.c)
 * Callees:
 *     ?DoGlobalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z @ 0x1C0095584 (-DoGlobalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00AD580 (PopAndFreeW32ThreadLock.c)
 *     CategoryMaskFromEvent @ 0x1C00F15D8 (CategoryMaskFromEvent.c)
 *     xxxProcessNotifyWinEvent @ 0x1C00F16EC (xxxProcessNotifyWinEvent.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C01389C0 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     ??1?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_HOOK@@@?$DomainSharedRecursive@$$V@@QEAA@XZ @ 0x1C01399C8 (--1-$ObjectLockRecursive@$$V@-$DomainExclusiveRecursive@VDLT_HOOK@@@-$DomainSharedRecursive@$$V@.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 *     ?xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z @ 0x1C01BF628 (-xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z.c)
 *     xxxProcessTSFEvent @ 0x1C01BF7F8 (xxxProcessTSFEvent.c)
 */

void __fastcall xxxWindowEvent(unsigned int a1, struct tagWND *a2, int a3, unsigned int a4, int a5)
{
  int v5; // r13d
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  char *v9; // rbx
  int v10; // edi
  tagDomLock *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // ebx
  int v15; // r15d
  bool v16; // zf
  _QWORD *ThreadWin32Thread; // rax
  __int64 v18; // rcx
  __int64 v19; // r9
  PERESOURCE *v20; // rax
  __int64 v21; // rdi
  __int64 *v22; // rax
  int v23; // ecx
  struct tagTHREADINFO *v24; // rsi
  struct tagWND *v25; // rax
  HANDLE ThreadId; // rax
  struct _KTHREAD *v27; // rcx
  unsigned __int64 v28; // rcx
  __int64 *v29; // rax
  unsigned int v30; // edx
  int v31; // r15d
  __int64 v32; // rsi
  int v33; // ecx
  __int64 v34; // r15
  HANDLE v35; // rax
  int v36; // eax
  __int64 v37; // rcx
  unsigned int v38; // eax
  tagDomLock *v39; // rax
  char *v40; // rbx
  int v41; // edi
  tagDomLock *v42; // rcx
  __int64 *v43; // rbx
  __int64 v44; // rax
  char v45; // al
  int v46; // edx
  __int64 **v47; // rcx
  int v48; // eax
  __int64 *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // rcx
  struct tagTHREADINFO *v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  unsigned int v57; // [rsp+20h] [rbp-E0h]
  unsigned int v58; // [rsp+28h] [rbp-D8h]
  unsigned int v59; // [rsp+40h] [rbp-C0h]
  unsigned int v63; // [rsp+58h] [rbp-A8h]
  struct tagTHREADINFO *v64; // [rsp+60h] [rbp-A0h]
  __int64 v65; // [rsp+68h] [rbp-98h]
  __int64 v66; // [rsp+70h] [rbp-90h] BYREF
  struct tagTHREADINFO *v67; // [rsp+78h] [rbp-88h]
  void (*v68)(void); // [rsp+80h] [rbp-80h]
  HANDLE ThreadProcessId; // [rsp+88h] [rbp-78h]
  __int64 v70; // [rsp+90h] [rbp-70h]
  HANDLE v71; // [rsp+98h] [rbp-68h]
  _QWORD v72[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v73[3]; // [rsp+B0h] [rbp-50h] BYREF
  tagDomLock *v74; // [rsp+C8h] [rbp-38h]
  char v75; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v76; // [rsp+D8h] [rbp-28h]
  char v77; // [rsp+E0h] [rbp-20h]
  __int64 v78; // [rsp+E8h] [rbp-18h]
  char v79; // [rsp+F0h] [rbp-10h]
  tagDomLock *v80; // [rsp+F8h] [rbp-8h] BYREF
  char v81; // [rsp+100h] [rbp+0h] BYREF
  __int64 v82; // [rsp+108h] [rbp+8h]
  char v83; // [rsp+110h] [rbp+10h]
  __int64 v84; // [rsp+118h] [rbp+18h]
  char v85; // [rsp+120h] [rbp+20h]

  v5 = 0;
  v73[2] = 0LL;
  DLT = DLT_WINEVENT::getDLT();
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  v81 = 1;
  v9 = &v81;
  v80 = DomainLockRef;
  v10 = 0;
  v82 = gDomainDummyLock;
  v84 = 0LL;
  v85 = 0;
  v83 = 0;
  do
  {
    v11 = (tagDomLock *)*((_QWORD *)v9 - 1);
    if ( v11 )
    {
      if ( *v9 )
        tagDomLock::LockExclusive(v11);
      else
        tagDomLock::LockShared(v11);
    }
    ++v10;
    v9 += 16;
  }
  while ( !v10 );
  v12 = 256LL;
  v85 = 1;
  v13 = 2LL;
  if ( a1 < 0x7FFFFF10 )
    goto LABEL_24;
  if ( a1 == 2147483408 )
  {
    v14 = 1;
    goto LABEL_12;
  }
  if ( a1 - 2147483409 > 1 )
  {
LABEL_24:
    v14 = 0;
    if ( a1 < 0x7FFFFF00 )
      goto LABEL_12;
  }
  else
  {
    v14 = 2;
  }
  if ( a1 > 0x80000002 )
  {
    if ( a1 != -2147483645 )
    {
      if ( a1 + 2147483644 > 1 )
        goto LABEL_12;
      v15 = 4096;
      v5 = 1;
      goto LABEL_13;
    }
LABEL_36:
    v15 = 512;
    v5 = 1;
    goto LABEL_13;
  }
  if ( a1 == -2147483646 )
    goto LABEL_36;
  if ( a1 != 2147483392 && a1 != 2147483393 )
  {
    if ( a1 == 0x80000000 || a1 == -2147483647 )
    {
      v15 = 256;
      v5 = 1;
      goto LABEL_13;
    }
LABEL_12:
    v15 = 0;
    goto LABEL_13;
  }
  v15 = 1024;
  v5 = 1;
LABEL_13:
  if ( a1 - 16392 <= 0x3FFC )
    goto LABEL_53;
  if ( a1 == 32780 )
  {
    v12 = 8LL;
    goto LABEL_54;
  }
  if ( a1 == 32779 )
  {
    v12 = 64LL;
    goto LABEL_54;
  }
  if ( a1 > 0x800E )
  {
    if ( a1 <= 0x80000001 )
    {
      if ( a1 == -2147483647 )
        goto LABEL_54;
      if ( a1 > 0x7FFFFF20 )
      {
        if ( a1 == 2147483440 )
          goto LABEL_54;
        v16 = a1 == 0x80000000;
      }
      else
      {
        if ( a1 == 2147483424 || a1 == 2147483408 || a1 == 2147483409 )
          goto LABEL_54;
        v16 = a1 == 2147483410;
      }
      if ( v16 )
        goto LABEL_54;
      goto LABEL_53;
    }
    switch ( a1 )
    {
      case 0x80000002:
      case 0x80000003:
      case 0x80000006:
      case 0x80000007:
        break;
      case 0x80000004:
      case 0x80000005:
        v12 = 512LL;
        break;
      default:
        goto LABEL_53;
    }
  }
  else
  {
    if ( a1 == 32782 )
    {
      v12 = 16LL;
      goto LABEL_54;
    }
    if ( a1 <= 0x4001 )
    {
      if ( a1 == 16385 )
      {
LABEL_40:
        v12 = 2LL;
        goto LABEL_54;
      }
      if ( a1 == 4 || a1 == 5 || a1 - 6 <= 1 )
      {
        v12 = 1LL;
        goto LABEL_54;
      }
LABEL_53:
      v12 = 0x8000LL;
      goto LABEL_54;
    }
    if ( a1 > 0x8005 )
    {
      if ( a1 == 32778 )
      {
        v12 = 32LL;
        goto LABEL_54;
      }
      goto LABEL_53;
    }
    if ( a1 != 32773 )
    {
      switch ( a1 )
      {
        case 0x4002u:
        case 0x4003u:
        case 0x4004u:
        case 0x4005u:
        case 0x4006u:
        case 0x4007u:
          goto LABEL_40;
        default:
          goto LABEL_53;
      }
    }
    v12 = 4LL;
  }
LABEL_54:
  if ( ((unsigned int)v12 & *(_DWORD *)(gpsi + 1892LL)) == 0 && !v14 && !v5 )
    goto LABEL_164;
  ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( !ThreadWin32Thread || !*ThreadWin32Thread )
    goto LABEL_164;
  v20 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v18, v12, v13, v19);
  v21 = 0LL;
  if ( !ExIsResourceAcquiredSharedLite(*v20) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
  v65 = 0LL;
  v22 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v22 )
  {
    v13 = *v22;
    v65 = *v22;
  }
  else
  {
    v13 = 0LL;
  }
  v12 = (__int64)a2;
  if ( (a5 & 0x11) != 0x11 && a2 && *(char *)(*((_QWORD *)a2 + 5) + 19LL) < 0 )
    goto LABEL_164;
  v23 = a5 | 2;
  if ( (*(_DWORD *)(v13 + 488) & 0x10000001) == 0 )
    v23 = a5;
  v59 = v23;
  if ( (v23 & 1) != 0 && a2 )
  {
    v24 = (struct tagTHREADINFO *)*((_QWORD *)a2 + 2);
    v25 = 0LL;
    if ( (v23 & 0x10) == 0 )
      v25 = a2;
    a2 = v25;
  }
  else
  {
    v24 = (struct tagTHREADINFO *)v13;
  }
  v64 = v24;
  ThreadId = PsGetThreadId(*(PETHREAD *)v24);
  v27 = *(struct _KTHREAD **)v24;
  v71 = ThreadId;
  v70 = *((_QWORD *)v24 + 53);
  ThreadProcessId = PsGetThreadProcessId(v27);
  if ( (v59 & 0x20) != 0 )
    LODWORD(v28) = _InterlockedIncrement(&gcWinEvents);
  else
    v28 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v63 = v28;
  v73[0] = *(_QWORD *)(v65 + 416);
  *(_QWORD *)(v65 + 416) = v73;
  v73[1] = a2;
  if ( a2 )
    HMLockObject(a2);
  v29 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v29 )
    v21 = *v29;
  v66 = *(_QWORD *)(v21 + 16);
  *(_QWORD *)(v21 + 16) = &v66;
  v68 = (void (*)(void))DereferenceW32Thread;
  v67 = v24;
  ReferenceW32Thread(v24);
  v30 = v59;
  if ( (v59 & 2) == 0 )
  {
    if ( ExIsResourceAcquiredExclusiveLite((PERESOURCE)gDomainWinEventLock) != 1 )
      __int2c();
    PsGetCurrentThreadId();
    v30 = v59;
  }
  if ( v5 && (*(_DWORD *)(*((_QWORD *)v24 + 53) + 824LL) & 0x1000000) != 0 )
  {
    v58 = v15;
    v31 = a3;
    xxxDoLocalTSFWork(a1, a2, a3, a4, v30, v58, v24, v63);
  }
  else
  {
    v31 = a3;
  }
  if ( v14 )
    DoGlobalTSFWork(a1, a2, v31, a4, v57, v14, v24, v63);
  if ( ((unsigned int)CategoryMaskFromEvent(a1) & *(_DWORD *)(gpsi + 1892LL)) == 0 )
  {
    PopAndFreeW32ThreadLock((__int64)&v66);
    ThreadUnlock1(v55, v54, v56);
LABEL_164:
    DomainSharedRecursive<>::DomainExclusiveRecursive<DLT_HOOK>::ObjectLockRecursive<>::~ObjectLockRecursive<>(
      &v80,
      v12,
      v13);
    return;
  }
  v32 = gpWinEventHooks;
  if ( !gpWinEventHooks )
    goto LABEL_153;
  while ( 1 )
  {
    v33 = *(_DWORD *)(v32 + 40);
    v34 = *(_QWORD *)(v32 + 24);
    if ( (v33 & 1) == 0 && *(_DWORD *)(v32 + 32) <= a1 && a1 <= *(_DWORD *)(v32 + 36) )
    {
      v35 = *(HANDLE *)(v32 + 48);
      if ( (!v35 || v35 == ThreadProcessId) && ((v33 & 4) == 0 || v70 != *(_QWORD *)(*(_QWORD *)(v32 + 16) + 424LL)) )
      {
        v36 = *(_DWORD *)(v32 + 56);
        if ( (!v36 || v36 == (_DWORD)v71) && ((v33 & 2) == 0 || v64 != *(struct tagTHREADINFO **)(v32 + 16)) )
        {
          v37 = *(_QWORD *)(*(_QWORD *)(v32 + 16) + 456LL);
          if ( v37 == *(_QWORD *)(v65 + 456) || a1 == 32 || v37 == *((_QWORD *)v64 + 57) && a1 + 2147483646 <= 1 )
            break;
        }
      }
    }
LABEL_145:
    v32 = v34;
    if ( !v34 )
      goto LABEL_153;
  }
  v38 = DLT_HANDLEMANAGER::getDLT();
  v39 = (tagDomLock *)GetDomainLockRef(v38);
  v75 = 0;
  v40 = &v75;
  v74 = v39;
  v76 = gDomainDummyLock;
  v77 = 0;
  v41 = 0;
  v78 = 0LL;
  v79 = 0;
  do
  {
    v42 = (tagDomLock *)*((_QWORD *)v40 - 1);
    if ( v42 )
    {
      if ( *v40 )
        tagDomLock::LockExclusive(v42);
      else
        tagDomLock::LockShared(v42);
    }
    ++v41;
    v40 += 16;
  }
  while ( !v41 );
  v79 = 1;
  if ( (*(_BYTE *)(_HMPheFromObject(v32) + 25) & 1) == 0 )
  {
    if ( v79 && v74 )
    {
      if ( v75 )
        tagDomLock::UnLockExclusive(v74);
      else
        tagDomLock::UnLockShared(v74);
    }
    if ( ExIsResourceAcquiredExclusiveLite((PERESOURCE)gDomainWinEventLock) != 1 )
      __int2c();
    if ( dword_1C035E130 )
    {
      v43 = (__int64 *)Win32AllocPoolZInit(72LL, 2037281621LL);
      if ( !v43 )
        goto LABEL_153;
    }
    else
    {
      dword_1C035E130 = 1;
      v43 = &qword_1C035F120;
    }
    v43[2] = 0LL;
    v72[0] = v43 + 2;
    v72[1] = v32;
    HMAssignmentLock(v72, 0LL);
    if ( a2 )
      v44 = *(_QWORD *)a2;
    else
      v44 = 0LL;
    v43[4] = v44;
    *((_DWORD *)v43 + 10) = a3;
    *((_DWORD *)v43 + 11) = a4;
    *((_DWORD *)v43 + 7) = a1;
    *((_DWORD *)v43 + 12) = (unsigned int)PsGetThreadId(*(PETHREAD *)v64);
    *(__int64 *)((char *)v43 + 52) = v63;
    *((_DWORD *)v43 + 6) = 0;
    v45 = ~(unsigned __int8)(*(_DWORD *)(v32 + 40) >> 1);
    v43[8] = 0LL;
    *((_DWORD *)v43 + 14) = v45 & 4;
    v43[1] = (__int64)v43;
    *v43 = (__int64)v43;
    if ( (*(_DWORD *)(v32 + 40) & 8) != 0 && a1 + 2147483646 <= 3 )
    {
      v46 = *((_DWORD *)v43 + 14);
      if ( *(_QWORD *)(v32 + 16) != gptiCurrent )
        v46 = 4;
      *((_DWORD *)v43 + 14) = v46;
    }
    v47 = (__int64 **)gPendingNotifiesList[1];
    if ( *v47 != (__int64 *)gPendingNotifiesList[0] )
      __fastfail(3u);
    *v43 = gPendingNotifiesList[0];
    v43[1] = (__int64)v47;
    *v47 = v43;
    gPendingNotifiesList[1] = v43;
    v48 = *((_DWORD *)v43 + 14) | v59;
    *((_DWORD *)v43 + 14) = v48;
    if ( (v48 & 4) != 0 )
    {
      v48 &= ~2u;
      *((_DWORD *)v43 + 14) = v48;
    }
    if ( (v48 & 2) == 0 )
      v34 = xxxProcessNotifyWinEvent((__int64)v43);
    goto LABEL_145;
  }
  if ( v79 && v74 )
  {
    if ( v75 )
      tagDomLock::UnLockExclusive(v74);
    else
      tagDomLock::UnLockShared(v74);
  }
LABEL_153:
  v49 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v49 )
    v52 = *v49;
  else
    v52 = 0LL;
  *(_QWORD *)(v52 + 16) = v66;
  v53 = v67;
  if ( v67 )
    v68();
  ThreadUnlock1(v53, v50, v51);
  if ( v85 && v80 )
  {
    if ( v81 )
      tagDomLock::UnLockExclusive(v80);
    else
      tagDomLock::UnLockShared(v80);
  }
}
