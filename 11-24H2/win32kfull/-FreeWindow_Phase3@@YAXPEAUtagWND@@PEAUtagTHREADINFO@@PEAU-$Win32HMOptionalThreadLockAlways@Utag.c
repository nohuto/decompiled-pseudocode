/*
 * XREFs of ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x14002E8AC
 * Callers:
 *     ?xxxFreeWindow@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x14002E024 (-xxxFreeWindow@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAU-$Win32HMOptionalThreadLockAlways@UtagWND@.c)
 * Callees:
 *     CleanupWindowRedirection @ 0x14002FEE4 (CleanupWindowRedirection.c)
 *     ?ClearClipRgnOrMaxClip@tagWND@@QEAAXXZ @ 0x140031194 (-ClearClipRgnOrMaxClip@tagWND@@QEAAXXZ.c)
 *     InternalRemoveProp @ 0x140031360 (InternalRemoveProp.c)
 *     DecPaintCount @ 0x140035D9C (DecPaintCount.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z @ 0x14003E060 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x14003E6B0 (PopAndFreeW32ThreadLock.c)
 *     ?UpdateWindowMonitorAndDpiInfoHelper@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x140045FEC (-UpdateWindowMonitorAndDpiInfoHelper@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     GetClassPtr @ 0x1400469F0 (GetClassPtr.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14006DDEC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14006F280 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     _DestroyMenu @ 0x140070FA0 (_DestroyMenu.c)
 *     FindQMsg @ 0x14008E400 (FindQMsg.c)
 *     DwmAsyncOwnerChange @ 0x14009188C (DwmAsyncOwnerChange.c)
 *     FreeSpb @ 0x1400979B0 (FreeSpb.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     DereferenceClass @ 0x1400B4660 (DereferenceClass.c)
 *     GreDeleteSpriteOverlapPresent @ 0x1400D4DAC (GreDeleteSpriteOverlapPresent.c)
 *     _GetProcessWindowStation @ 0x1401038C0 (_GetProcessWindowStation.c)
 *     ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x140103E88 (-_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z.c)
 *     ClearSendMessages @ 0x14011B918 (ClearSendMessages.c)
 *     DestroyWindowsHotKeys @ 0x140159234 (DestroyWindowsHotKeys.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ @ 0x140183234 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ.c)
 *     DwmAsyncChildDestroy @ 0x14018A918 (DwmAsyncChildDestroy.c)
 *     ??4?$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z @ 0x14019A644 (--4-$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z.c)
 *     ResetWindowTransform @ 0x14019BB70 (ResetWindowTransform.c)
 *     ClearPwndDceLists @ 0x14019CEF8 (ClearPwndDceLists.c)
 *     FreeClientOnWindowDestruction @ 0x1401A26D0 (FreeClientOnWindowDestruction.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@PEAU_HEAD@@@Z @ 0x1401A6A48 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@.c)
 *     MagpDestroyLensContext @ 0x1401ABD28 (MagpDestroyLensContext.c)
 *     ?UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z @ 0x1401B9A28 (-UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z.c)
 *     _PostQuitMessage @ 0x1401BC740 (_PostQuitMessage.c)
 *     ?UnlockNotifyWindow@@YAXPEAUtagMENU@@@Z @ 0x140229618 (-UnlockNotifyWindow@@YAXPEAUtagMENU@@@Z.c)
 *     DestroyWindowsTimers @ 0x14023E90C (DestroyWindowsTimers.c)
 *     ??$FreeIsolatedTypeAndClearStackReferences@UtagPOPUPMENU@@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAUtagPOPUPMENU@@@Z @ 0x140264D88 (--$FreeIsolatedTypeAndClearStackReferences@UtagPOPUPMENU@@V-$CTypeIsolation@$0GAAA@$0GA@@NSInstr.c)
 *     NullifyLookasideRef @ 0x140264DB0 (NullifyLookasideRef.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x14026F748 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline @ 0x14027F280 (Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x140282D2C (safe_cast_fnid_to_PMENUWND.c)
 *     _NotifyOverlayWindow @ 0x14029030C (_NotifyOverlayWindow.c)
 *     FindSpb @ 0x1402AF418 (FindSpb.c)
 *     GreDeleteWnd @ 0x140301670 (GreDeleteWnd.c)
 */

void __fastcall FreeWindow_Phase3(struct tagWND *a1, struct tagTHREADINFO *a2, ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v4; // r15
  __int64 UserSessionState; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 QMsg; // rax
  struct _HEAD *v11; // rbx
  struct _HEAD *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  struct EWNDOBJ *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 Spb; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  char v26; // r15
  bool v27; // r12
  __int64 v28; // rbx
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  void *v32; // r8
  __int64 v33; // rax
  void *v34; // rax
  __int64 v35; // rax
  __int64 ProcessWindowStation; // rax
  __int64 v37; // rbx
  _DWORD *v38; // rax
  _DWORD *v39; // rcx
  _DWORD *v40; // rax
  _DWORD *v41; // rcx
  __int64 v42; // rax
  __int64 v43; // r15
  __int64 v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rax
  void *v47; // rcx
  void *v48; // rax
  __int64 v49; // rax
  __int64 v50; // rsi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v52; // rax
  _QWORD *ClassPtr; // rax
  __int64 v54; // rcx
  __int128 v55; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v56[8]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v57; // [rsp+68h] [rbp-1h]
  _BYTE v58[16]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v59; // [rsp+80h] [rbp+17h]

  v56[0] = 0;
  v57 = 0LL;
  v4 = BugCheckParameter3;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v56);
  HandleFullWindowDestruction(a1);
  if ( a1 == *(struct tagWND **)(W32GetUserSessionState() + 36312) )
  {
    UserSessionState = W32GetUserSessionState();
    HMAssignmentUnlock(UserSessionState + 36312);
  }
  if ( a1 == *(struct tagWND **)(W32GetUserSessionState() + 36320) )
  {
    v7 = W32GetUserSessionState();
    HMAssignmentUnlock(v7 + 36320);
  }
  v8 = W32GetUserSessionState();
  MagpDestroyLensContext(v8 + 66080, a2, a1);
  DestroyWindowsTimers(a1);
  DestroyWindowsHotKeys(a1);
  if ( !*(_DWORD *)(W32GetUserSessionState() + 69332) )
    ClearSendMessages(a1);
  CleanupWindowRedirection(a1);
  v9 = *((_QWORD *)a1 + 5);
  if ( *(_QWORD *)(v9 + 136) || (*(_BYTE *)(v9 + 17) & 0x10) != 0 )
  {
    DecPaintCount(a1);
    DeleteMaybeSpecialRgn(*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL));
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = 0LL;
    SetOrClrWF(0LL, a1, 272LL, 1LL);
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 17LL) & 0xA) != 0 )
  {
    SetOrClrWF(0LL, a1, 264LL, 1LL);
    SetOrClrWF(0LL, a1, 258LL, 1LL);
  }
  if ( *((_QWORD *)a2 + 106) )
  {
    QMsg = FindQMsg(a2, (struct tagTHREADINFO *)((char *)a2 + 848), 18, 1);
    if ( QMsg )
      PostQuitMessage(*(unsigned int *)(QMsg + 32));
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 && *((_QWORD *)a1 + 21) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5153LL);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
  {
    v11 = (struct _HEAD *)*((_QWORD *)a1 + 21);
    if ( v11 )
    {
      if ( UnlockWndMenuWorker(a1, 0) )
        DestroyMenu(v11);
    }
  }
  v12 = (struct _HEAD *)*((_QWORD *)a1 + 20);
  if ( v12 )
  {
    if ( v12 == *(struct _HEAD **)(*((_QWORD *)a1 + 3) + 64LL) )
    {
      UnlockWndMenuWorker(a1, 1);
    }
    else if ( UnlockWndMenuWorker(a1, 1) )
    {
      DestroyMenu(v12);
    }
  }
  v13 = *((_QWORD *)a1 + 3);
  if ( v13 )
  {
    if ( (v14 = *(_QWORD *)(v13 + 56)) != 0 && a1 == *(struct tagWND **)(v14 + 80)
      || (v14 = *(_QWORD *)(v13 + 64)) != 0 && a1 == *(struct tagWND **)(v14 + 80) )
    {
      UnlockNotifyWindow((struct tagMENU *)v14);
    }
  }
  if ( *(_DWORD *)(W32GetUserSessionState() + 43312) )
  {
    v15 = W32GetUserSessionState();
    v16 = (struct EWNDOBJ *)InternalRemoveProp(a1, *(unsigned __int16 *)(v15 + 41406), 1LL);
    if ( v16 )
    {
      v17 = W32GetUserSessionState();
      GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(v17 + 57008) + 48LL));
      GreDeleteWnd(v16);
      v18 = W32GetUserSessionState();
      --*(_DWORD *)(v18 + 43312);
      v19 = W32GetUserSessionState();
      GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v19 + 57008) + 48LL));
    }
  }
  v20 = W32GetUserSessionState();
  GreLockSprite(*(_QWORD *)(*(_QWORD *)(v20 + 57008) + 48LL));
  v21 = W32GetUserSessionState();
  GreDeleteSpriteOverlapPresent(*(HDEV *)(*(_QWORD *)(v21 + 57008) + 48LL));
  v22 = W32GetUserSessionState();
  GreUnlockSprite(*(_QWORD *)(*(_QWORD *)(v22 + 57008) + 48LL));
  ClearPwndDceLists(a1);
  if ( a1 == *(struct tagWND **)(W32GetUserSessionState() + 57016) )
  {
    Spb = FindSpb(a1);
    FreeSpb(Spb);
    v24 = W32GetUserSessionState();
    HMAssignmentUnlock(v24 + 57016);
    *(_QWORD *)(W32GetUserSessionState() + 63280) = 0LL;
  }
  if ( *(char *)(*((_QWORD *)a1 + 5) + 16LL) < 0 )
  {
    v25 = FindSpb(a1);
    FreeSpb(v25);
  }
  if ( (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) != 0x29D )
    tagWND::ClearClipRgnOrMaxClip(a1);
  if ( !(unsigned int)Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline()
    && *((_QWORD *)a1 + 19) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
      || (v26 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v26 = 0;
    }
    v27 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v26 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v28 = *(_QWORD *)a1;
      v29 = W32GetUserSessionState();
      LOBYTE(v30) = v27;
      LOBYTE(v31) = v26;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v31,
        v30,
        *(_QWORD *)(v29 + 69416),
        4,
        9,
        11,
        (__int64)&WPP_5331ead6fd5234e2c2bf5da035c22fc9_Traceguids,
        v28);
    }
    RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 136LL), 0, *((PVOID *)a1 + 19));
    v4 = BugCheckParameter3;
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 144LL) = 0LL;
    *((_QWORD *)a1 + 19) = 0LL;
  }
  if ( (*((_DWORD *)a1 + 95) & 0x10000) != 0 )
    NotifyOverlayWindow(a1);
  v32 = (void *)*((_QWORD *)a1 + 23);
  if ( v32 )
  {
    RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 136LL), 0, v32);
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 192LL) = 0LL;
    *((_QWORD *)a1 + 23) = 0LL;
    *(_DWORD *)(*((_QWORD *)a1 + 5) + 184LL) = 0;
  }
  ResetWindowTransform(a1);
  v33 = *((_QWORD *)a1 + 3);
  if ( !v33 || a1 == *(struct tagWND **)(*(_QWORD *)(v33 + 8) + 24LL) )
  {
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 48LL) = 0LL;
    HMAssignmentUnlock((char *)a1 + 104);
  }
  else
  {
    v55 = *(_OWORD *)LockPointer(v58, (char *)a1 + 104);
    HMAssignmentLock(&v55, 1LL);
  }
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 56LL) = 0LL;
  HMAssignmentUnlock((char *)a1 + 112);
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 64LL) = 0LL;
  HMAssignmentUnlock((char *)a1 + 120);
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 176LL) = 0LL;
  HMAssignmentUnlock((char *)a1 + 200);
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v34 = (void *)ReferenceDwmApiPort();
    DwmAsyncOwnerChange(v34);
  }
  DereferenceClass(*((_QWORD *)a2 + 58), a1);
  HMMarkObjectDestroy(a1);
  v35 = _HMPheFromObject(a1);
  *(_BYTE *)(v35 + 25) |= 2u;
  tagWND::ComputeDominantState(a1);
  if ( (*((_DWORD *)a1 + 95) & 0x8000000) != 0 )
    tagWND::DwsUnlinkAllProcesses(a1, 3LL);
  ProcessWindowStation = GetProcessWindowStation(0LL);
  v37 = ProcessWindowStation;
  if ( ProcessWindowStation )
  {
    if ( *(struct tagWND **)(ProcessWindowStation + 96) == a1 )
    {
      HMAssignmentUnlock(ProcessWindowStation + 96);
      *(_QWORD *)(v37 + 80) = 0LL;
    }
    if ( *(struct tagWND **)(v37 + 112) == a1 )
      HMAssignmentUnlock(v37 + 112);
    if ( *(struct tagWND **)(v37 + 104) == a1 )
      HMAssignmentUnlock(v37 + 104);
  }
  if ( (*((_DWORD *)a1 + 95) & 0x800000) != 0 )
    _RemoveClipboardFormatListener(a1);
  if ( Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>(v4) )
  {
    FreeClientOnWindowDestruction(a1);
    if ( (unsigned int)HMMarkObjectDestroy(a1) )
    {
      v38 = (_DWORD *)*((_QWORD *)a1 + 36);
      if ( v38 )
      {
        --*v38;
        v39 = (_DWORD *)*((_QWORD *)a1 + 36);
        if ( !*v39 )
          Win32FreePool(v39);
        *((_QWORD *)a1 + 36) = 0LL;
      }
      v40 = (_DWORD *)*((_QWORD *)a1 + 37);
      if ( v40 )
      {
        --*v40;
        v41 = (_DWORD *)*((_QWORD *)a1 + 37);
        if ( !*v41 )
          Win32FreePool(v41);
        *((_QWORD *)a1 + 37) = 0LL;
      }
      UpdateWindowMonitorAndDpiInfoHelper(a1, 0LL);
      Win32FreePool(*((void **)a1 + 46));
      *((_QWORD *)a1 + 46) = 0LL;
      if ( *((_QWORD *)a1 + 18) )
      {
        DeleteProperties(a1);
        Win32FreePool(*((void **)a1 + 18));
        *((_QWORD *)a1 + 18) = 0LL;
      }
      if ( (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) == 0x2A0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5417LL);
      v42 = safe_cast_fnid_to_PMENUWND(a1);
      v43 = v42;
      if ( v42 && *(_QWORD *)(v42 + 16) )
      {
        SmartObjStackRefBase<tagPOPUPMENU>::Init(&v55);
        if ( (**(_DWORD **)v55 & 0x20000000) != 0 )
        {
          **(_DWORD **)v55 &= ~0x40000000u;
        }
        else
        {
          v44 = *(_QWORD *)v55;
          if ( v44 == W32GetUserSessionState() + 65832 )
          {
            v45 = W32GetUserSessionState();
            *(_DWORD *)(v45 + 67056) &= ~0x800000u;
            v46 = W32GetUserSessionState();
            NullifyLookasideRef(*(_QWORD *)(v46 + 65920));
          }
          else
          {
            FreeIsolatedTypeAndClearStackReferences<tagPOPUPMENU,NSInstrumentation::CTypeIsolation<24576,96>>(*(_QWORD *)v55);
            *(_QWORD *)(v43 + 16) = 0LL;
          }
        }
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v55);
      }
      v47 = (void *)*((_QWORD *)a1 + 35);
      if ( v47 )
      {
        Win32FreePool(v47);
        *((_QWORD *)a1 + 35) = 0LL;
      }
      *(_DWORD *)(*((_QWORD *)a1 + 5) + 248LL) = 0;
      --*((_DWORD *)a2 + 236);
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
      {
        v48 = (void *)ReferenceDwmApiPort();
        DwmAsyncChildDestroy(v48);
      }
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 48LL) = 0LL;
      HMAssignmentUnlock((char *)a1 + 104);
      Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v58, *((_QWORD *)a1 + 3));
      tagObjLock::LockUnInitializeThreadCreator((struct tagWND *)((char *)a1 + 56));
      HMFreeObject(a1);
      if ( v59 != -1 )
      {
        PopAndFreeW32ThreadLock(v58);
        v59 = -1LL;
      }
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 120LL) = 0LL;
      v49 = *((_QWORD *)a1 + 3);
      if ( v49 )
      {
        v50 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v49 + 40) + 56LL) + 16LL) + 464LL);
      }
      else
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
        v50 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process )
          v50 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      }
      v52 = W32GetUserSessionState();
      ClassPtr = (_QWORD *)GetClassPtr(*(unsigned __int16 *)(*(_QWORD *)(v52 + 19928) + 910LL), v50, hModuleWin);
      tagWND::SharedMixedObjectPointerFieldpcls<tagCLS>::operator=((char *)a1 + 136, *ClassPtr);
      ++*(_DWORD *)(*(_QWORD *)v54 + 72LL);
      SetOrClrWF(1LL, a1, 516LL, 1LL);
      SetOrClrWF(0LL, a1, 544LL, 1LL);
      SetOrClrWF(0LL, a1, 4032LL, 1LL);
      SetOrClrWF(1LL, a1, 3840LL, 1LL);
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 152LL) = 0LL;
      *((_QWORD *)a1 + 21) = 0LL;
    }
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v56);
}
