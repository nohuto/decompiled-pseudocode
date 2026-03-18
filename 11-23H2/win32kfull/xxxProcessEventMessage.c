/*
 * XREFs of xxxProcessEventMessage @ 0x1C0125980
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012BAE0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?xxxProcessShowWindowEvent@@YAXPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@_K_J@Z @ 0x1C00159D4 (-xxxProcessShowWindowEvent@@YAXPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@_K_J@Z.c)
 *     xxxResetTooltip @ 0x1C0016C70 (xxxResetTooltip.c)
 *     ?xxxApplyGlobalInputSettings@@YAXH@Z @ 0x1C00319D8 (-xxxApplyGlobalInputSettings@@YAXH@Z.c)
 *     _PostTransformableMessage @ 0x1C003539C (_PostTransformableMessage.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00374DC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?xxxProcessRecalcForThread@DesktopRecalc@@YAXXZ @ 0x1C005D5F4 (-xxxProcessRecalcForThread@DesktopRecalc@@YAXXZ.c)
 *     ?xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z @ 0x1C005E948 (-xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00794C0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1C007A890 (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C0082F44 (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     xxxProcessSetWindowPosEvent @ 0x1C008BDD8 (xxxProcessSetWindowPosEvent.c)
 *     xxxClientBroadcastThemeChange @ 0x1C00929A4 (xxxClientBroadcastThemeChange.c)
 *     ?xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z @ 0x1C0093210 (-xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z.c)
 *     xxxCancelMouseMoveTracking @ 0x1C0098298 (xxxCancelMouseMoveTracking.c)
 *     _PostThreadMessage @ 0x1C00A3554 (_PostThreadMessage.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C00A5054 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C00A53AC (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00B02D0 (HMValidateHandleNoSecure.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00B29B8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     PostShellHookMessagesEx @ 0x1C00B2C00 (PostShellHookMessagesEx.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C00D80F8 (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     RtlInitLargeUnicodeString @ 0x1C00E34E8 (RtlInitLargeUnicodeString.c)
 *     SetVisible @ 0x1C00EDEE8 (SetVisible.c)
 *     xxxProcessNotifyWinEvent @ 0x1C00F16EC (xxxProcessNotifyWinEvent.c)
 *     xxxDestroyWindow @ 0x1C00F2000 (xxxDestroyWindow.c)
 *     xxxFreeWindow @ 0x1C00F2D20 (xxxFreeWindow.c)
 *     SetWakeBit @ 0x1C01190C0 (SetWakeBit.c)
 *     xxxSendMessage @ 0x1C0127888 (xxxSendMessage.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage @ 0x1C0139A10 (Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage.c)
 *     Feature_HShellAppComandInputMessageSourceCleanup__private_IsEnabledDeviceUsage @ 0x1C0139A64 (Feature_HShellAppComandInputMessageSourceCleanup__private_IsEnabledDeviceUsage.c)
 *     ?xxxTooltipQeventHandler@@YAXPEAUtagMSG@@@Z @ 0x1C013CEF4 (-xxxTooltipQeventHandler@@YAXPEAUtagMSG@@@Z.c)
 *     PostMousePointerLeaveAndCleanup @ 0x1C01B6170 (PostMousePointerLeaveAndCleanup.c)
 *     xxxProcessTSFEvent @ 0x1C01BF7F8 (xxxProcessTSFEvent.c)
 *     xxxDoDeferredPointerActivate @ 0x1C01C68C8 (xxxDoDeferredPointerActivate.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C01EB2A4 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     xxxSoundSentry @ 0x1C01F5958 (xxxSoundSentry.c)
 *     xxxClientUpdateDpi @ 0x1C0212E74 (xxxClientUpdateDpi.c)
 *     xxxSendShutdownData @ 0x1C0212F48 (xxxSendShutdownData.c)
 *     ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1C021E33C (-xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 *     ?xxxProcessRecalcForWindow@DesktopRecalc@@YAXPEAUHWND__@@@Z @ 0x1C0226574 (-xxxProcessRecalcForWindow@DesktopRecalc@@YAXPEAUHWND__@@@Z.c)
 */

__int64 __fastcall xxxProcessEventMessage(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 *ThreadWin32Thread; // rax
  struct tagQMSG *v6; // rdx
  _QWORD *v7; // rbx
  int v8; // eax
  unsigned __int64 v9; // rcx
  __int64 *v10; // rax
  struct tagWND *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int DLT; // eax
  __int64 DomainLockRef; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  _BYTE *v22; // rbx
  int v23; // esi
  tagDomLock *v24; // rcx
  __int64 v25; // rcx
  struct tagINPUT_MESSAGE_SOURCE *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  struct tagWND *v30; // rax
  __int64 v31; // rsi
  __int128 *v32; // rbx
  unsigned int v33; // r12d
  __int64 v34; // r13
  __int64 v35; // r14
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  struct tagWND **v39; // r15
  struct tagWND *v40; // rsi
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  unsigned __int16 v44; // r14
  __int64 v45; // rax
  __int64 *v46; // rax
  __int64 v47; // rcx
  __int64 result; // rax
  struct tagINPUT_MESSAGE_SOURCE *v49; // rdi
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rbx
  _QWORD *v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  struct tagWND *v61; // r14
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  struct tagTOOLTIPWND *v69; // rax
  struct tagTOOLTIPWND *v70; // rbx
  __int64 v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  unsigned int v75; // ebx
  struct tagINPUT_MESSAGE_SOURCE *v76; // r14
  struct tagQ **v77; // rcx
  int v78; // ebx
  int IsEnabledDeviceUsage; // eax
  struct tagINPUT_MESSAGE_SOURCE *v80; // rdx
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  struct tagINPUT_MESSAGE_SOURCE *v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // rax
  __int64 v89; // rbx
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // rbx
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  DesktopRecalc *v97; // rcx
  __int64 v98; // rbx
  __int64 v99; // rax
  __int64 v100; // rbx
  struct tagWND *v101; // rbx
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  struct tagINPUT_MESSAGE_SOURCE *v105[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v106; // [rsp+58h] [rbp-B0h]
  __int128 v107; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v108[3]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v109; // [rsp+88h] [rbp-80h] BYREF
  __int64 v110; // [rsp+98h] [rbp-70h]
  char v111; // [rsp+A0h] [rbp-68h]
  __int64 v112; // [rsp+A8h] [rbp-60h]
  char v113; // [rsp+B0h] [rbp-58h]
  _WORD v114[264]; // [rsp+B8h] [rbp-50h] BYREF

  v106 = 0LL;
  *(_OWORD *)v105 = 0LL;
  v3 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v3 = *ThreadWin32Thread;
  v108[0] = *(_QWORD *)(v3 + 16);
  *(_QWORD *)(v3 + 16) = v108;
  v7 = *(_QWORD **)(a1 + 432);
  v108[2] = CleanEventMessage;
  v8 = *(_DWORD *)(a2 + 96) - 1;
  v108[1] = a2;
  v9 = 0x1C0000000uLL;
  switch ( v8 )
  {
    case 0:
      v12 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
      v13 = v12;
      if ( v12 && *(char *)(*(_QWORD *)(v12 + 40) + 20LL) >= 0 )
      {
        v105[0] = *(struct tagINPUT_MESSAGE_SOURCE **)(a1 + 416);
        *(_QWORD *)(a1 + 416) = v105;
        v105[1] = (struct tagINPUT_MESSAGE_SOURCE *)v12;
        HMLockObject(v12);
        xxxProcessShowWindowEvent(v13, *(unsigned int *)(a2 + 24), *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
        ThreadUnlock1(v15, v14, v16);
      }
      goto LABEL_60;
    case 1:
      v26 = (struct tagINPUT_MESSAGE_SOURCE *)v7[14];
      if ( v26 )
      {
        v105[0] = *(struct tagINPUT_MESSAGE_SOURCE **)(a1 + 416);
        *(_QWORD *)(a1 + 416) = v105;
        v105[1] = v26;
        HMLockObject(v26);
        xxxSendMessage(v7[14], 31LL, 0LL, 0LL);
        ThreadUnlock1(v28, v27, v29);
        SetWakeBit(a1, 2u);
      }
      goto LABEL_60;
    case 2:
      xxxProcessSetWindowPosEvent(*(_QWORD *)(a2 + 32));
      goto LABEL_60;
    case 3:
      ProcessUpdateKeyStateEvent(v7, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 32) + 64LL);
      goto LABEL_60;
    case 4:
      xxxDeactivate(a1, *(_DWORD *)(a2 + 32), *(_DWORD *)(a2 + 72));
      goto LABEL_60;
    case 5:
      xxxProcessActivationEvent((const struct tagQMSG *)a2, (__int64)v6);
      goto LABEL_60;
    case 6:
      v30 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
      if ( v30 )
        PostTransformableMessage(v30, *(_DWORD *)(a2 + 24), *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), 1);
      goto LABEL_60;
    case 7:
      v10 = (__int64 *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 32), 1);
      v11 = (struct tagWND *)v10;
      if ( v10 )
      {
        if ( *(char *)(v10[5] + 19) < 0 )
        {
          v105[0] = *(struct tagINPUT_MESSAGE_SOURCE **)(a1 + 416);
          *(_QWORD *)(a1 + 416) = v105;
          v105[1] = (struct tagINPUT_MESSAGE_SOURCE *)v10;
          HMLockObject(v10);
          xxxFreeWindow(v11, (__int64)v105);
        }
        else
        {
          xxxDestroyWindow(v10);
        }
      }
      goto LABEL_60;
    case 8:
      v31 = *(_QWORD *)(a2 + 16);
      v32 = *(__int128 **)(a2 + 40);
      v109 = 0LL;
      v110 = 0LL;
      v107 = 0LL;
      v33 = *(_DWORD *)(a2 + 24);
      v34 = *(_QWORD *)(a2 + 32);
      PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( (unsigned __int64)(unsigned __int16)v31 >= *(_QWORD *)(gpsi + 8LL) )
        goto LABEL_60;
      v35 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v31;
      v39 = (struct tagWND **)HMPkheFromPhe(v35);
      LOWORD(v31) = WORD1(v31) & 0x7FFF;
      if ( (WORD1(v31) & 0x7FFF) != *(_WORD *)(v35 + 26)
        && (_WORD)v31 != 0x7FFF
        && ((_WORD)v31 || !PsGetCurrentProcessWow64Process(v37, v36, v38)) )
      {
        goto LABEL_60;
      }
      if ( (*(_BYTE *)(v35 + 25) & 1) != 0 )
        goto LABEL_60;
      if ( *(_BYTE *)(v35 + 24) != 1 )
        goto LABEL_60;
      v40 = *v39;
      if ( !*v39 )
        goto LABEL_60;
      ThreadLockAlways(*v39, &v109);
      if ( v33 == 26 || v33 == 27 )
      {
        if ( v32 )
        {
          if ( v32 == (__int128 *)-1LL )
          {
            v114[0] = 0;
            RtlInitLargeUnicodeString((__int64)&v107, (__int64)v114);
            v32 = &v107;
          }
          else
          {
            v44 = (unsigned __int16)v32;
            if ( (unsigned int)UserGetAtomName((unsigned __int16)v32, v114, 260LL) )
            {
              *((_QWORD *)&v107 + 1) = v114;
              v45 = -1LL;
              do
                ++v45;
              while ( v114[v45] );
              v32 = &v107;
              LODWORD(v107) = 2 * v45;
              DWORD1(v107) = (2 * v45 + 2) & 0x7FFFFFFF;
            }
            else
            {
              v32 = 0LL;
            }
            UserDeleteAtom(v44);
          }
        }
        *(_QWORD *)(a2 + 40) = 0LL;
      }
      else if ( v33 == 834 )
      {
        xxxEndGetWidnowTrackInfoAsync(v40);
        goto LABEL_59;
      }
      xxxSendMessage(v40, v33, v34, v32);
LABEL_59:
      ThreadUnlock1(v42, v41, v43);
      goto LABEL_60;
    case 9:
      v49 = (struct tagINPUT_MESSAGE_SOURCE *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
      if ( v49 )
      {
        v105[0] = *(struct tagINPUT_MESSAGE_SOURCE **)(a1 + 416);
        *(_QWORD *)(a1 + 416) = v105;
        v105[1] = v49;
        HMLockObject(v49);
        v52 = *((_QWORD *)v49 + 5);
        if ( (*(_BYTE *)(v52 + 31) & 0x10) == 0 )
        {
          SetVisible(v49, 1u);
          if ( (*(_BYTE *)(*((_QWORD *)v49 + 5) + 31LL) & 0x20) == 0 )
          {
            v53 = 1LL;
            v54 = 7LL;
            v55 = (__int64)v49;
            goto LABEL_117;
          }
        }
        goto LABEL_118;
      }
      goto LABEL_60;
    case 10:
      v56 = *(_QWORD *)(a1 + 456);
      v61 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
      if ( (*(_DWORD *)(v56 + 48) & 0xDC0) == 0
        || (v57 = *(_QWORD **)(v56 + 192), v58 = *(_QWORD *)(a2 + 16), *v57 != v58)
        || (v58 = *(unsigned int *)(a2 + 32), *(_DWORD *)(v56 + 200) != (_DWORD)v58) )
      {
        if ( !(unsigned int)Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage(v58, v57, v59, v60)
          && (*(_DWORD *)(v56 + 48) & 0x100) != 0 )
        {
          *(_QWORD *)(a2 + 40) &= 0xFFFFFFFFFFFFFCFFuLL;
        }
        if ( v61 )
        {
          v105[0] = *(struct tagINPUT_MESSAGE_SOURCE **)(a1 + 416);
          *(_QWORD *)(a1 + 416) = v105;
          v105[1] = v61;
          HMLockObject(v61);
          xxxCancelMouseMoveTracking(*(_DWORD *)(a2 + 24), v61, *(_DWORD *)(a2 + 32), *(_DWORD *)(a2 + 40));
          ThreadUnlock1(v67, v66, v68);
        }
        else if ( !(unsigned int)Feature_Backport_UserModeTooltips__private_IsEnabledDeviceUsage(v63, v62, v64, v65)
               && (*(_DWORD *)(a2 + 40) & 0x300LL) != 0
               && (*(_DWORD *)(a2 + 24) & 0x200) != 0 )
        {
          v69 = (struct tagTOOLTIPWND *)safe_cast_fnid_to_PTOOLTIPWND(*(_QWORD *)(v56 + 112));
          v70 = v69;
          if ( v69 )
          {
            v71 = *(_QWORD *)v69;
            if ( *(_QWORD *)v69 )
            {
              v109 = 0LL;
              v110 = 0LL;
              ThreadLockAlways(v71, &v109);
              xxxResetTooltip(v70);
              ThreadUnlock1(v73, v72, v74);
            }
          }
        }
      }
      goto LABEL_60;
    case 11:
      DLT = DLT_WINEVENT::getDLT(0x1C0000000uLL);
      DomainLockRef = GetDomainLockRef(DLT);
      BYTE8(v109) = 1;
      v22 = (char *)&v109 + 8;
      *(_QWORD *)&v109 = DomainLockRef;
      v23 = 0;
      v110 = gDomainDummyLock;
      v112 = 0LL;
      v113 = 0;
      v111 = 0;
      do
      {
        v24 = (tagDomLock *)*((_QWORD *)v22 - 1);
        if ( v24 )
        {
          if ( *v22 )
            tagDomLock::LockExclusive(v24);
          else
            tagDomLock::LockShared(v24);
        }
        ++v23;
        v22 += 16;
      }
      while ( !v23 );
      v25 = *(_QWORD *)(a2 + 40);
      v113 = 1;
      if ( *(_DWORD *)(v25 + 24) )
        xxxProcessTSFEvent((struct tagNOTIFY *)v25);
      else
        xxxProcessNotifyWinEvent(v25, v19, v20, v21);
      if ( v113 && (_QWORD)v109 )
      {
        if ( BYTE8(v109) )
          tagDomLock::UnLockExclusive((tagDomLock *)v109);
        else
          tagDomLock::UnLockShared((tagDomLock *)v109);
      }
      goto LABEL_60;
    case 12:
      if ( ((*(_DWORD *)(a1 + 680) | *(_DWORD *)(**(_QWORD **)(a1 + 464) + 16LL)) & 0x800) != 0 )
        xxxCallHook(*(unsigned int *)(a2 + 32), *(_QWORD *)(a2 + 40), 0LL, 10LL);
      PostShellHookMessagesEx(*(_DWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), 0LL);
      goto LABEL_60;
    case 13:
      if ( *(_DWORD *)(a2 + 24) == 5 )
      {
        v75 = *(_DWORD *)(a2 + 40);
        if ( v75 <= 5 )
        {
          if ( !v75 )
            goto LABEL_90;
        }
        else
        {
          v75 = 5;
        }
      }
      else
      {
        v75 = 1;
      }
      do
      {
        CUserPlaySound::PlaySync(CUserPlaySound::s_pUserPlaySound);
        --v75;
      }
      while ( v75 );
LABEL_90:
      xxxSoundSentry(v9);
LABEL_60:
      v46 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v46 )
      {
        v47 = *v46;
        result = v108[0];
        *(_QWORD *)(v47 + 16) = v108[0];
      }
      else
      {
        result = v108[0];
        MEMORY[0x10] = v108[0];
      }
      return result;
    case 14:
      v76 = (struct tagINPUT_MESSAGE_SOURCE *)v7[15];
      if ( v76 || (v76 = (struct tagINPUT_MESSAGE_SOURCE *)v7[16]) != 0LL )
      {
        v77 = (struct tagQ **)*((_QWORD *)v76 + 2);
        if ( (struct tagQ **)a1 == v77 )
        {
          v78 = *(_DWORD *)(a2 + 40) - 165;
          *(_QWORD *)(a2 + 40) = ((unsigned __int64)(unsigned __int16)v78 << 16) | (unsigned __int16)GetMouseKeyFlags(v77[54]);
          IsEnabledDeviceUsage = Feature_HShellAppComandInputMessageSourceCleanup__private_IsEnabledDeviceUsage();
          *(_QWORD *)(a1 + 1288) = *(_QWORD *)(a2 + 120);
          if ( IsEnabledDeviceUsage )
          {
            v84 = *(struct tagINPUT_MESSAGE_SOURCE **)(a1 + 416);
            *(_QWORD *)(a1 + 416) = v105;
            v105[0] = v84;
            v105[1] = v76;
            HMLockObject(v76);
            xxxSendMessage(v76, 793LL, *(_QWORD *)v76, *(_QWORD *)(a2 + 40));
            ThreadUnlock1(v86, v85, v87);
          }
          else
          {
            v80 = *(struct tagINPUT_MESSAGE_SOURCE **)(a1 + 416);
            *(_QWORD *)(a1 + 416) = v105;
            *(_DWORD *)(a1 + 1272) |= 0x800u;
            v105[0] = v80;
            v105[1] = v76;
            HMLockObject(v76);
            xxxSendMessage(v76, 793LL, *(_QWORD *)v76, *(_QWORD *)(a2 + 40));
            ThreadUnlock1(v82, v81, v83);
            *(_DWORD *)(a1 + 1272) &= ~0x800u;
          }
        }
        else
        {
          PostEventMessageEx(
            (struct tagTHREADINFO *)v77,
            v77[54],
            0xFu,
            0LL,
            0,
            0LL,
            *(_QWORD *)(a2 + 40),
            (struct tagINPUT_MESSAGE_SOURCE *)(a2 + 120));
        }
      }
      goto LABEL_60;
    case 15:
      v88 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
      v89 = v88;
      if ( v88 && (*(_BYTE *)(*(_QWORD *)(v88 + 40) + 31LL) & 1) != 0 )
      {
        v105[0] = *(struct tagINPUT_MESSAGE_SOURCE **)(a1 + 416);
        *(_QWORD *)(a1 + 416) = v105;
        v105[1] = (struct tagINPUT_MESSAGE_SOURCE *)v88;
        HMLockObject(v88);
        xxxMinMaximize(v89, 3LL, 19LL);
        ThreadUnlock1(v91, v90, v92);
      }
      goto LABEL_60;
    case 16:
      v93 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
      if ( v93 )
      {
        v105[0] = *(struct tagINPUT_MESSAGE_SOURCE **)(a1 + 416);
        *(_QWORD *)(a1 + 416) = v105;
        v105[1] = (struct tagINPUT_MESSAGE_SOURCE *)v93;
        HMLockObject(v93);
        xxxArrangeWindow(v93, *(unsigned int *)(a2 + 32));
        ThreadUnlock1(v95, v94, v96);
      }
      goto LABEL_60;
    case 17:
      if ( v7
        && v7[15]
        && (v7 == (_QWORD *)gpqForeground || (unsigned __int8)IsKeyboardDelegationTarget(a1))
        && (HIDWORD(gpdwCPUserPreferencesMask) & 0x80u) == 0 )
      {
        xxxApplyGlobalInputSettings();
      }
      goto LABEL_60;
    case 18:
      if ( *(_DWORD *)(a2 + 24) == 809 )
        PostThreadMessage(a1, 0x329u, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
      else
        xxxSendShutdownData(*(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 32));
      goto LABEL_60;
    case 19:
      xxxDoDeferredPointerActivate(a2);
      CleanEventMessage((void **)a2);
      goto LABEL_60;
    case 20:
      v98 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 40), 1);
      v99 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
      PostMousePointerLeaveAndCleanup(v98, v99);
      goto LABEL_60;
    case 21:
      v97 = (DesktopRecalc *)*(unsigned int *)(a2 + 32);
      if ( (_DWORD)v97 )
      {
        if ( (_DWORD)v97 == 1 )
          DesktopRecalc::xxxProcessRecalcForThread(v97);
      }
      else
      {
        DesktopRecalc::xxxProcessRecalcForWindow(*(DesktopRecalc **)(a2 + 16), (HWND)v6);
      }
      goto LABEL_60;
    case 22:
      v100 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
      if ( v100 )
      {
        v105[0] = *(struct tagINPUT_MESSAGE_SOURCE **)(a1 + 416);
        *(_QWORD *)(a1 + 416) = v105;
        v105[1] = (struct tagINPUT_MESSAGE_SOURCE *)v100;
        HMLockObject(v100);
        v53 = *(unsigned int *)(a2 + 40);
        v55 = v100;
        v54 = *(unsigned int *)(a2 + 32);
LABEL_117:
        xxxMinMaximize(v55, v54, v53);
LABEL_118:
        ThreadUnlock1(v52, v50, v51);
      }
      goto LABEL_60;
    case 23:
      xxxClientUpdateDpi(*(unsigned int *)(a2 + 32));
      goto LABEL_60;
    case 24:
      xxxClientBroadcastThemeChange(*(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
      goto LABEL_60;
    case 25:
      xxxTooltipQeventHandler((struct tagMSG *)(a2 + 16));
      goto LABEL_60;
    case 26:
      ShellWindowPos::xxxProcessPositionEvent((ShellWindowPos *)a2, v6);
      goto LABEL_60;
    case 28:
      v101 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
      if ( v101 )
      {
        v105[0] = *(struct tagINPUT_MESSAGE_SOURCE **)(a1 + 416);
        *(_QWORD *)(a1 + 416) = v105;
        v105[1] = v101;
        HMLockObject(v101);
        xxxDeliverRestoreFocusMessage(v101);
        ThreadUnlock1(v103, v102, v104);
      }
      goto LABEL_60;
    default:
      goto LABEL_60;
  }
}
