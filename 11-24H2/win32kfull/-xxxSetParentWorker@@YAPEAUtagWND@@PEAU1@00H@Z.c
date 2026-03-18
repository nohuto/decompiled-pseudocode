/*
 * XREFs of ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140088950
 * Callers:
 *     NtUserSetParent @ 0x140088820 (NtUserSetParent.c)
 *     xxxSetModernAppWindow @ 0x14024CD58 (xxxSetModernAppWindow.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1402AB0C4 (-xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetBridgeWindowChild @ 0x1402AB1C0 (xxxSetBridgeWindowChild.c)
 *     xxxSetWindowData @ 0x1402DD148 (xxxSetWindowData.c)
 * Callees:
 *     ChangeRedirectionParentInDCEs @ 0x14002D8C0 (ChangeRedirectionParentInDCEs.c)
 *     CalcWindowFullScreen @ 0x14002DB70 (CalcWindowFullScreen.c)
 *     UnredirectDCEs @ 0x14002DEE0 (UnredirectDCEs.c)
 *     RedirectDCEs @ 0x14002F358 (RedirectDCEs.c)
 *     GetStyleWindow @ 0x14002F5E0 (GetStyleWindow.c)
 *     ?DecomposeWindowIfNeeded@@YAJPEAUtagWND@@@Z @ 0x140031868 (-DecomposeWindowIfNeeded@@YAJPEAUtagWND@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x14003E6B0 (PopAndFreeW32ThreadLock.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140040808 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x1400408B0 (xxxWindowEvent.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     _GetDesktopWindow @ 0x140046470 (_GetDesktopWindow.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x140049338 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x140061FD0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140063510 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z @ 0x14006E488 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z.c)
 *     UnlinkWindow @ 0x140075240 (UnlinkWindow.c)
 *     xxxSetWindowPos @ 0x140076C44 (xxxSetWindowPos.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x140087B20 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x14008854C (SetWindowSubtreeCoreWindowStatus.c)
 *     IsImmersiveAppIORestricted @ 0x140088640 (IsImmersiveAppIORestricted.c)
 *     ??0CDwmWindowNotifyBatch@@QEAA@PEAUtagWND@@@Z @ 0x140088668 (--0CDwmWindowNotifyBatch@@QEAA@PEAUtagWND@@@Z.c)
 *     ValidateNewParent @ 0x1400893F4 (ValidateNewParent.c)
 *     GetMessageWindow @ 0x14008A42C (GetMessageWindow.c)
 *     xxxInheritWindowMonitor @ 0x14008C114 (xxxInheritWindowMonitor.c)
 *     ?BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z @ 0x14008C5F8 (-BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z.c)
 *     ?FreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x14008D5F0 (-FreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x140092FE8 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     ?_GetWindowCloakState@@YA?AW4CloakState@@PEBUtagWND@@@Z @ 0x1400938F0 (-_GetWindowCloakState@@YA-AW4CloakState@@PEBUtagWND@@@Z.c)
 *     ?IsWindowShellCloakedComponentUIAware@@YA_NPEBUtagWND@@_N@Z @ 0x14009A45C (-IsWindowShellCloakedComponentUIAware@@YA_NPEBUtagWND@@_N@Z.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x14009A4C4 (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     CalcForegroundInsertAfter @ 0x1400F6C44 (CalcForegroundInsertAfter.c)
 *     ?Get@CHECKPOINT@@SAPEAU1@PEBUtagWND@@@Z @ 0x1400F8754 (-Get@CHECKPOINT@@SAPEAU1@PEBUtagWND@@@Z.c)
 *     ResetWindowTransform @ 0x14019BB70 (ResetWindowTransform.c)
 *     ??1CDwmNotifyBatch@@IEAA@XZ @ 0x1401A51F8 (--1CDwmNotifyBatch@@IEAA@XZ.c)
 *     ?IsChildWindowDpiIsolationEnabled@@YA_NPEAUtagWND@@0@Z @ 0x1401BC7BC (-IsChildWindowDpiIsolationEnabled@@YA_NPEAUtagWND@@0@Z.c)
 *     ?s_OnWindowBecomingChild@CRecalcProp@@SAXPEAUtagWND@@@Z @ 0x1401BF258 (-s_OnWindowBecomingChild@CRecalcProp@@SAXPEAUtagWND@@@Z.c)
 *     zzzAttachThreadInput @ 0x1401E1E5C (zzzAttachThreadInput.c)
 *     ?TraceChildWindowDpiTelemetry@@YAXPEAUtagWND@@0W4_CHILD_WINDOW_DPI_TELEMETRY@@@Z @ 0x1401F4C58 (-TraceChildWindowDpiTelemetry@@YAXPEAUtagWND@@0W4_CHILD_WINDOW_DPI_TELEMETRY@@@Z.c)
 *     xxxTurnOffCompositing @ 0x1401FFA68 (xxxTurnOffCompositing.c)
 *     RemoveWindowFullScreen @ 0x14020EDBC (RemoveWindowFullScreen.c)
 *     ?xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z @ 0x1402524E0 (-xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z.c)
 *     ?SendNormalToDwm@CHECKPOINT@@QEAAXPEBUtagWND@@@Z @ 0x140255500 (-SendNormalToDwm@CHECKPOINT@@QEAAXPEBUtagWND@@@Z.c)
 *     ?IsInterceptWindow@WindowActions@@YA_NPEBUtagWND@@@Z @ 0x14026C524 (-IsInterceptWindow@WindowActions@@YA_NPEBUtagWND@@@Z.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x140281DB8 (_SetDeferredDpiStateForWindowAndChildren.c)
 *     HasMessageRootWindow @ 0x1402AB144 (HasMessageRootWindow.c)
 *     LinkWindow @ 0x1402B47A8 (LinkWindow.c)
 *     ?xxxUpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x1402C8244 (-xxxUpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 *     ?zzzUpdateWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakingOperation@@W4CloakState@@@Z @ 0x1402D226C (-zzzUpdateWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakingOperation@@W4CloakState@@@Z.c)
 */

struct tagWND *__fastcall xxxSetParentWorker(struct tagWND **a1, struct tagWND *a2, struct tagWND **a3, int a4)
{
  struct tagWND *v7; // rdi
  struct tagWND *DesktopWindow; // r13
  __int64 v9; // rcx
  struct tagWND *MessageWindow; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct tagWND *v13; // rsi
  struct tagTHREADINFO *v14; // rax
  struct tagWND *v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  struct tagWND *v19; // rcx
  int v20; // esi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 UserSessionState; // rax
  __int64 StyleWindow; // rax
  __int64 v25; // r15
  __int64 v26; // rsi
  __int64 v27; // rcx
  struct tagWND *v28; // rdx
  char v29; // r8
  unsigned int v30; // r9d
  unsigned int v31; // r10d
  int v32; // eax
  __int64 v33; // rcx
  int v34; // edx
  __int64 v35; // rdx
  struct tagWND *v36; // rcx
  __int64 v37; // rax
  struct tagWND *v38; // rsi
  int v39; // r12d
  unsigned int v40; // r9d
  unsigned __int16 v41; // r10
  struct tagWND *i; // rdx
  struct tagFREELIST *v43; // rdi
  struct tagWND *v44; // rax
  struct tagWND *v45; // rcx
  __int64 v46; // rax
  struct tagWND *v47; // rcx
  struct tagWND *v48; // rdx
  struct tagWND *v49; // rax
  struct tagWND *v50; // rcx
  __int64 v51; // rax
  struct tagWND *v52; // rcx
  struct tagWND *v53; // rdx
  struct tagWND *v54; // rax
  struct tagWND *v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rdx
  struct tagTHREADINFO *v59; // rax
  __int64 v60; // rax
  __int64 v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // rcx
  struct tagTHREADINFO *v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  struct tagTHREADINFO *v67; // rax
  int v69; // ecx
  struct tagWND *v70; // rsi
  __int64 v71; // rdx
  __int64 v72; // rcx
  const struct tagWND *v73; // rcx
  struct tagWND *v74; // rdx
  int v75; // ecx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v77; // rdx
  CHECKPOINT *v78; // rax
  struct tagTHREADINFO *v79; // rax
  __int64 v80; // rdx
  struct tagWND *TopLevelHostForComponent; // rsi
  __int64 v82; // rdx
  ULONG_PTR BugCheckParameter3; // [rsp+48h] [rbp-69h] BYREF
  __int64 v84; // [rsp+50h] [rbp-61h]
  int v85; // [rsp+58h] [rbp-59h] BYREF
  unsigned int v86; // [rsp+5Ch] [rbp-55h]
  struct tagFREELIST *v87; // [rsp+60h] [rbp-51h]
  int v88; // [rsp+68h] [rbp-49h]
  _QWORD v89[2]; // [rsp+78h] [rbp-39h] BYREF
  struct tagWND *v90; // [rsp+88h] [rbp-29h]
  char v91[8]; // [rsp+90h] [rbp-21h] BYREF
  _BYTE v92[16]; // [rsp+98h] [rbp-19h] BYREF
  __int64 v93; // [rsp+A8h] [rbp-9h]
  ULONG_PTR v94[2]; // [rsp+B8h] [rbp+7h] BYREF
  _BYTE v95[64]; // [rsp+C8h] [rbp+17h] BYREF
  unsigned int v96; // [rsp+118h] [rbp+67h]

  BugCheckParameter3 = -1LL;
  v84 = 0LL;
  v87 = 0LL;
  v85 = 0;
  CDwmWindowNotifyBatch::CDwmWindowNotifyBatch((CDwmWindowNotifyBatch *)v91, (struct tagWND *)a1);
  v7 = 0LL;
  if ( a2 != (struct tagWND *)-3LL )
    v7 = a2;
  DesktopWindow = (struct tagWND *)GetDesktopWindow((__int64)a1);
  MessageWindow = (struct tagWND *)GetMessageWindow(v9);
  v90 = MessageWindow;
  v13 = MessageWindow;
  if ( a1 == (struct tagWND **)DesktopWindow || a1 == (struct tagWND **)MessageWindow )
    goto LABEL_140;
  if ( !v7 )
    v7 = DesktopWindow;
  if ( a3 && (a3[13] != v7 || a3 == a1) )
    goto LABEL_142;
  v14 = PtiCurrent(v12, v11);
  if ( IsImmersiveAppIORestricted(*((_QWORD *)v14 + 58))
    && (unsigned int)HasMessageRootWindow(a1)
    && !(unsigned int)HasMessageRootWindow(v7) )
  {
LABEL_140:
    v69 = 5;
    goto LABEL_141;
  }
  if ( v7 != DesktopWindow && v7 != v13 )
  {
    v15 = a1[2];
    if ( *((_QWORD *)v15 + 58) == *(_QWORD *)(*((_QWORD *)v7 + 2) + 464LL) )
    {
      v15 = a1[5];
      if ( (((unsigned __int8)*(_DWORD *)(*((_QWORD *)v7 + 5) + 288LL) ^ *((_BYTE *)v15 + 288)) & 0xF) != 0
        && !IsChildWindowDpiIsolationEnabled((struct tagWND *)a1, v7) )
      {
        TraceChildWindowDpiTelemetry(a1, v7, 1LL);
        goto LABEL_95;
      }
    }
  }
  if ( WindowActions::IsInterceptWindow((WindowActions *)a1, v15) )
  {
LABEL_95:
    v69 = 5023;
LABEL_141:
    UserSetLastError(v69);
LABEL_142:
    CDwmNotifyBatch::~CDwmNotifyBatch((CDwmNotifyBatch *)v91);
    Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(&BugCheckParameter3, v82);
    return 0LL;
  }
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(v94, (__int64)v7);
  if ( !(unsigned int)ValidateNewParent(a1, v7, 0LL)
    || (W32GetUserSessionState(v17, v16),
        v18 = xxxShowWindowEx((const struct tagWND *)a1, 0LL, 0),
        v19 = a1[5],
        v20 = v18,
        v88 = v18,
        (*((_BYTE *)v19 + 31) & 0x10) != 0) )
  {
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v94, v16);
    goto LABEL_142;
  }
  if ( (*((_DWORD *)v19 + 58) & 2) != 0 )
    DecomposeWindowIfNeeded((struct tagWND *)a1);
  if ( !(unsigned int)ValidateNewParent(a1, v7, 0LL) )
  {
    if ( v20 && *((char *)a1[5] + 19) >= 0 )
    {
      W32GetUserSessionState(v22, v21);
      xxxShowWindowEx((const struct tagWND *)a1, 1LL, 0);
    }
    v79 = PtiCurrent(v22, v21);
    Win32HM_UnlockFromThread<1>((ULONG_PTR)v79, v94);
    if ( v91[0] && v93 )
      PopAndFreeW32ThreadLock((__int64)v92, v80);
    return 0LL;
  }
  UserSessionState = W32GetUserSessionState(v22, v21);
  ++*(_DWORD *)(UserSessionState + 70856);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v95);
  StyleWindow = GetStyleWindow((__int64)a1, 2848);
  v25 = (__int64)a1[13];
  v89[0] = StyleWindow;
  v26 = StyleWindow;
  Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>((__int64 *)&BugCheckParameter3, v25);
  v27 = *(_QWORD *)(v25 + 40);
  v28 = a1[5];
  v29 = *(_BYTE *)(v27 + 26) & 0x40;
  if ( v29 )
    v30 = *((_DWORD *)v28 + 24);
  else
    v30 = *((_DWORD *)v28 + 22);
  v31 = *((_DWORD *)v28 + 23);
  v32 = *(_WORD *)(v27 + 42) & 0x2FFF;
  v96 = v30;
  v86 = v31;
  if ( v32 != 669 )
  {
    if ( v29 )
      v96 = *(_DWORD *)(v27 + 112) - v30;
    else
      v96 = v30 - *(_DWORD *)(v27 + 104);
    v86 = v31 - *(_DWORD *)(v27 + 108);
  }
  if ( *((_DWORD *)v28 + 59) != 1 )
  {
    if ( v7 != DesktopWindow && v7 != v90 )
      goto LABEL_24;
    SetOrClrWF(1, (struct tagWND *)a1, 0x808u, 1);
  }
  if ( v7 != DesktopWindow )
  {
LABEL_24:
    if ( (struct tagWND *)v25 != DesktopWindow )
      goto LABEL_25;
    TopLevelHostForComponent = (struct tagWND *)a1;
    if ( (unsigned int)CoreWindowProp::IsComponent((const struct tagWND *)a1, (__int64)v28) )
      TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent((const struct tagWND *)a1);
    if ( TopLevelHostForComponent && (*(_BYTE *)(*((_QWORD *)TopLevelHostForComponent + 5) + 233LL) & 0x20) != 0 )
      zzzUpdateWindowCompositionCloak(a1, 1LL, 2LL);
    ResetWindowTransform(a1);
    CRecalcProp::s_OnWindowBecomingChild((struct tagWND *)a1);
    WindowMargins::CheckForChanges((struct tagWND *)a1, 4LL);
    goto LABEL_118;
  }
  if ( (struct tagWND *)v25 == DesktopWindow )
    goto LABEL_25;
  v70 = (struct tagWND *)v25;
  if ( !(unsigned int)CoreWindowProp::IsComponent((const struct tagWND *)v25, (__int64)v28) )
    goto LABEL_102;
  v73 = (const struct tagWND *)v25;
LABEL_101:
  v70 = CoreWindowProp::GetTopLevelHostForComponent(v73);
LABEL_102:
  while ( v70 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)v70 + 5) + 233LL) & 0x20) != 0 )
    {
      zzzUpdateWindowCompositionCloak(a1, 0LL, 2LL);
      break;
    }
    v70 = (struct tagWND *)*((_QWORD *)v70 + 13);
    if ( (unsigned int)CoreWindowProp::IsComponent(v70, v71) )
    {
      v73 = v70;
      goto LABEL_101;
    }
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v72);
  v77 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v77 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( (*(_BYTE *)(v77 + 816) & 0x30) == 0x10 && (_GetWindowCloakState(a1) & 1) != 0 )
    zzzUpdateWindowCompositionCloak(a1, 1LL, 1LL);
  if ( (*((_DWORD *)a1 + 95) & 0x400) != 0 )
    RemoveWindowFullScreen(a1);
  WindowMargins::CheckForChanges((struct tagWND *)a1, 3LL);
  v78 = CHECKPOINT::Get((const struct tagWND *)a1);
  if ( v78 )
    CHECKPOINT::SendNormalToDwm(v78, (const struct tagWND *)a1);
LABEL_118:
  v26 = v89[0];
LABEL_25:
  UnlinkWindow((struct tagWND *)a1, (__int64 *)v25);
  v33 = 0LL;
  if ( v7 )
    v33 = *((_QWORD *)v7 + 6);
  *((_QWORD *)a1[5] + 6) = v33;
  v89[0] = a1 + 13;
  v89[1] = v7;
  HMAssignmentLock(v89, 0LL);
  if ( !v7 || (v34 = 1, (*((_DWORD *)v7 + 95) & 0x1000) == 0) )
    v34 = 0;
  SetWindowSubtreeCoreWindowStatus((__int64)a1, v34);
  if ( (*((_BYTE *)a1[5] + 31) & 0x40) != 0 )
  {
    v54 = a1[15];
    if ( v54 )
    {
      if ( (*(_BYTE *)(*((_QWORD *)v54 + 5) + 24LL) & 8) != 0 )
        SetOrClrWF(1, (struct tagWND *)a1, 0x808u, 1);
    }
  }
  if ( v7 == (struct tagWND *)GetDesktopWindow((__int64)a1) && (*(_BYTE *)(v35 + 24) & 8) == 0 )
  {
    CalcWindowFullScreen(v36);
    CalcForegroundInsertAfter(a1);
  }
  LinkWindow((struct tagWND *)a1);
  if ( a2 == (struct tagWND *)-3LL && !IsWindowShellCloakedComponentUIAware((const struct tagWND *)a1, 1) )
    zzzUpdateWindowCompositionCloak(a1, 0LL, 2LL);
  v37 = GetStyleWindow((__int64)a1, 2848);
  if ( v26 )
  {
    if ( v37 )
    {
      if ( v26 != v37 )
        ChangeRedirectionParentInDCEs((__int64)a1);
    }
    else
    {
      UnredirectDCEs((__int64)a1);
    }
  }
  else if ( v37 )
  {
    RedirectDCEs((__int64)a1);
  }
  if ( v7 == (struct tagWND *)GetDesktopWindow((__int64)a1) && (*((_BYTE *)a1[5] + 31) & 4) == 0 )
  {
    SetOrClrWF(1, (struct tagWND *)a1, 0xF04u, 1);
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 1LL, 0LL);
  }
  if ( (*((_BYTE *)a1[5] + 31) & 0xC0) == 0x40 )
  {
    v44 = a1[3];
    v45 = 0LL;
    if ( v44 )
    {
      v46 = *((_QWORD *)v44 + 1);
      if ( v46 )
        v45 = *(struct tagWND **)(v46 + 24);
    }
    if ( a1[13] != v45 )
    {
      v47 = a1[2];
      v48 = *(struct tagWND **)(v25 + 16);
      if ( v47 != v48 )
        zzzAttachThreadInput(v47, v48, 0LL);
    }
    v49 = a1[3];
    v50 = 0LL;
    if ( v49 )
    {
      v51 = *((_QWORD *)v49 + 1);
      if ( v51 )
        v50 = *(struct tagWND **)(v51 + 24);
    }
    if ( v7 != v50 )
    {
      v52 = a1[2];
      v53 = (struct tagWND *)*((_QWORD *)v7 + 2);
      if ( v52 != v53 )
        zzzAttachThreadInput(v52, v53, a4 != 0 ? 32769 : 1);
    }
  }
  v38 = v90;
  if ( v7 == v90 || (struct tagWND *)v25 == v90 )
    v39 = 21;
  else
    v39 = 5;
  if ( _bittest((const signed __int32 *)(v25 + 380), 0x13u) || _bittest((const signed __int32 *)a1 + 95, 0x13u) )
  {
    v74 = a1[5];
    v75 = *((_DWORD *)v74 + 72);
    if ( (v75 & 0xF) == 2 && (v75 & 0xF0) == 0x10 )
      *((_DWORD *)a1 + 95) &= ~0x80000u;
    *((_DWORD *)v74 + 58) &= ~0x400u;
    v39 |= 0x20u;
  }
  if ( !IsTopLevelWindow((__int64)a1) && v7 )
    LOBYTE(v40) = *(_WORD *)(*((_QWORD *)v7 + 5) + 286LL) != v41;
  SetDeferredDpiStateForWindowAndChildren(a1, v40, 0LL);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v95);
  zzzEndDeferWinEventNotify();
  for ( i = a1[13]; i && (*(_BYTE *)(*((_QWORD *)i + 5) + 27LL) & 2) == 0; i = (struct tagWND *)*((_QWORD *)i + 13) )
    ;
  if ( i )
    xxxTurnOffCompositing(a1, 0LL);
  xxxWindowEvent(0x800Fu, (struct tagWND *)a1, 0, 0, 1);
  if ( !v7 || (struct tagWND *)v25 == DesktopWindow || v7 == DesktopWindow )
  {
    v43 = 0LL;
    goto LABEL_74;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v25 + 40) + 256LL) == *(_QWORD *)(*((_QWORD *)v7 + 5) + 256LL) )
  {
    v43 = v87;
LABEL_74:
    xxxSetWindowPos((struct tagWND *)a1, 0LL, v96, v86, 0, 0, v39);
    goto LABEL_75;
  }
  v43 = BuildWindowListWithDpiBoundaryInfo((struct tagWND *)a1, (struct tagWND *)v25, 0LL, &v85);
  if ( !v85 )
    goto LABEL_74;
LABEL_75:
  v55 = a1[13];
  if ( !v55
    || (((unsigned __int8)*((_DWORD *)a1[5] + 72) ^ *(_BYTE *)(*((_QWORD *)v55 + 5) + 288LL)) & 0xF) == 0
    || v55 == DesktopWindow
    || v55 == v38
    || IsChildWindowDpiIsolationEnabled((struct tagWND *)a1, v55) )
  {
    xxxInheritWindowMonitor((struct tagWND *)a1);
  }
  else
  {
    xxxForceUpdateProcessDpiAwarenessContext((struct tagWND *)a1, *(_DWORD *)(*((_QWORD *)a1[13] + 5) + 288LL));
  }
  if ( v43 )
  {
    xxxUpdateWindowPositionsForDpiBoundaryChange(v43);
    FreeListFree(v43);
  }
  if ( v88 )
  {
    W32GetUserSessionState(v57, v56);
    LOBYTE(v58) = 1;
    xxxShowWindowEx((const struct tagWND *)a1, v58, 0);
  }
  v59 = PtiCurrent(v57, v56);
  v60 = Win32HM_UnlockFromThread<1>((ULONG_PTR)v59, &BugCheckParameter3);
  BugCheckParameter3 = -1LL;
  v61 = v60;
  v84 = 0LL;
  v64 = PtiCurrent(v63, v62);
  Win32HM_UnlockFromThread<1>((ULONG_PTR)v64, v94);
  if ( v91[0] && v93 )
    PopAndFreeW32ThreadLock((__int64)v92, v65);
  if ( BugCheckParameter3 != -1LL )
  {
    v67 = PtiCurrent(v66, v65);
    Win32HM_UnlockFromThread<1>((ULONG_PTR)v67, &BugCheckParameter3);
  }
  return (struct tagWND *)v61;
}
