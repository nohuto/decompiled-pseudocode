/*
 * XREFs of _anonymous_namespace_::xxxLocalActivateWindow @ 0x140232BF0
 * Callers:
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x140183378 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@W4LocalActivationOptions@@@Z @ 0x1401AF538 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1402337EC (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023413C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x140276AB0 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x14027774C (-xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     IsVisible @ 0x140036A48 (IsVisible.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x1400408B0 (xxxWindowEvent.c)
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     _GetDesktopWindow @ 0x140046470 (_GetDesktopWindow.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140074770 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1400749F8 (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSetWindowPos @ 0x140076C44 (xxxSetWindowPos.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x140081090 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     _anonymous_namespace_::xxxUpdateTray @ 0x1400883B4 (_anonymous_namespace_--xxxUpdateTray.c)
 *     GetNonChildAncestor @ 0x140091F0C (GetNonChildAncestor.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1400F7268 (-TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z.c)
 *     ??$ManualLock@X@?$Win32RawLockedItemBase@G$1?Win32FreePool@@YAXPEAX@Z$00$00$00@@QEAAXPEAGP6AXPEAX@Z@Z @ 0x140116D40 (--$ManualLock@X@-$Win32RawLockedItemBase@G$1-Win32FreePool@@YAXPEAX@Z$00$00$00@@QEAAXPEAGP6AXPEA.c)
 *     xxxSendNotifyMessage @ 0x140119930 (xxxSendNotifyMessage.c)
 *     ??0Win32RawLockedW32Thread@@QEAA@PEAU_W32THREAD@@@Z @ 0x140147740 (--0Win32RawLockedW32Thread@@QEAA@PEAU_W32THREAD@@@Z.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@U_W32THREAD@@$0A@$00$00$00@@AEAAX_N0@Z @ 0x140154180 (-UnlockWorker@-$Win32RawLockedItemBase@U_W32THREAD@@$0A@$00$00$00@@AEAAX_N0@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x14019AC0C (WPP_RECORDER_AND_TRACE_SF_qs.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PEAU_HEAD@@@Z @ 0x1401BCB74 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tag.c)
 *     _anonymous_namespace_::RemoveEventMessage @ 0x1401C89C0 (_anonymous_namespace_--RemoveEventMessage.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1401C8A38 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@X$0A@$0A@$00$00@@AEAAX_N0@Z @ 0x1401D50F4 (-UnlockWorker@-$Win32RawLockedItemBase@X$0A@$0A@$00$00@@AEAAX_N0@Z.c)
 *     _anonymous_namespace_::OnForegroundWindowChanged @ 0x140232410 (_anonymous_namespace_--OnForegroundWindowChanged.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x14027662C (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     ?xxxInterceptActivate@WindowActions@@YAXPEAUtagWND@@_N1@Z @ 0x1402CD388 (-xxxInterceptActivate@WindowActions@@YAXPEAUtagWND@@_N1@Z.c)
 *     DwmAsyncNotifyForegroundChange @ 0x1403238DC (DwmAsyncNotifyForegroundChange.c)
 */

bool __fastcall anonymous_namespace_::xxxLocalActivateWindow(struct tagWND *a1, __int64 a2, __int16 a3)
{
  struct tagTHREADINFO *v5; // rax
  struct tagDRAWITEMSTRUCT *v6; // r13
  __int64 v7; // r14
  int v8; // ebx
  __int64 v9; // rdx
  unsigned __int8 v10; // r8
  BOOL v11; // r9d
  __int64 v13; // rcx
  bool v14; // di
  struct tagWND *v15; // rdx
  unsigned int *v16; // rdx
  __int64 v17; // rax
  tagQ *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct tagWND *v22; // r15
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbx
  unsigned __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  struct tagDRAWITEMSTRUCT **v35; // r15
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  struct tagWND *i; // rbx
  int v42; // eax
  int v43; // ebx
  volatile signed __int32 *v44; // rbx
  struct _KTHREAD *v45; // rcx
  __int64 v46; // rdx
  char v47; // r12
  struct tagWND *j; // rdx
  struct tagDRAWITEMSTRUCT *v49; // rbx
  unsigned __int64 v50; // rdx
  __int64 v51; // rax
  unsigned __int64 v52; // r8
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 NonChildAncestor; // rax
  __int64 v58; // r9
  __int64 v59; // rbx
  __int64 v60; // rdx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // rdx
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rax
  __int64 v78; // rcx
  char v79; // r15
  bool v80; // r12
  __int64 UserSessionState; // rax
  int v82; // edx
  int v83; // r8d
  struct tagWND *v84; // r12
  __int64 v85; // rcx
  char v86; // r15
  bool v87; // r13
  struct tagDRAWITEMSTRUCT *v88; // rbx
  __int64 v89; // rax
  int v90; // r8d
  int v91; // edx
  __int64 v92; // r9
  const char *v93; // rax
  __int64 v94; // rcx
  __int64 v95; // rcx
  void *v96; // rax
  __int16 v97; // [rsp+30h] [rbp-D0h]
  char v98; // [rsp+40h] [rbp-C0h]
  struct tagWND *v99; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int ThreadId; // [rsp+58h] [rbp-A8h]
  unsigned int v101; // [rsp+5Ch] [rbp-A4h]
  int v102; // [rsp+60h] [rbp-A0h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v104; // [rsp+78h] [rbp-88h]
  __int64 v105[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v106[2]; // [rsp+90h] [rbp-70h] BYREF
  ULONG_PTR v107[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v108; // [rsp+B0h] [rbp-50h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+C0h] [rbp-40h] BYREF
  ULONG_PTR v110[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v111; // [rsp+E0h] [rbp-20h]
  __int64 v112; // [rsp+F0h] [rbp-10h]
  ULONG_PTR v113[3]; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v114[10]; // [rsp+110h] [rbp+10h] BYREF
  unsigned int v115; // [rsp+178h] [rbp+78h]
  unsigned int v116; // [rsp+188h] [rbp+88h]

  v115 = a2;
  v111 = 0LL;
  v112 = 0LL;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  v104 = -1LL;
  v5 = PtiCurrent((__int64)a1, a2);
  v6 = *(struct tagDRAWITEMSTRUCT **)a1;
  v7 = (__int64)v5;
  v102 = a3 & 0x80;
  v116 = a3 & 1;
  v8 = a3 & 2;
  if ( a1 == (struct tagWND *)GetDesktopWindow((__int64)a1)
    || (v13 = *((_QWORD *)a1 + 5), v14 = 0, *(char *)(v13 + 19) < 0) )
  {
    LOBYTE(v9) = 1;
    Win32RawLockedItemBase<void,0,0,1,1>::UnlockWorker(BugCheckParameter2, v9);
    return 0;
  }
  v15 = *(struct tagWND **)(v7 + 472);
  if ( *(struct tagWND **)(*((_QWORD *)a1 + 2) + 472LL) == v15 )
  {
    if ( (a3 & 0x100) == 0 && (*((_DWORD *)a1 + 96) & 0x10) != 0 )
    {
      LOBYTE(v15) = v11;
      WindowActions::xxxInterceptActivate(a1, v15, v8 == 0, v11);
      v14 = 1;
      goto LABEL_123;
    }
    v99 = (struct tagWND *)*((_QWORD *)v15 + 16);
    v16 = &WPP_GLOBAL_Control;
    if ( a1 == v99 )
    {
      if ( (*(_BYTE *)(v13 + 18) & 0x10) == 0 )
      {
        v78 = *(_QWORD *)&WPP_GLOBAL_Control;
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || ((unsigned __int8)*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & v10) == 0
          || (v79 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
        {
          v79 = 0;
        }
        v80 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v79 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_103;
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
        v98 = (char)v6;
        v97 = 14;
        goto LABEL_102;
      }
    }
    else if ( (*(_BYTE *)(v13 + 18) & 0x10) == 0 )
    {
      v17 = *(_QWORD *)(v7 + 504);
      v105[0] = v11;
      v105[1] = (__int64)v6;
      if ( ((*(_BYTE *)(v7 + 720) | *(_BYTE *)(*(_QWORD *)v17 + 16LL)) & 0x40) != 0
        && (unsigned int)xxxCallHook(5LL, (__int64)v6, (__int64)v105, 5) )
      {
        goto LABEL_123;
      }
      *(_DWORD *)(*(_QWORD *)(v7 + 472) + 436LL) &= ~0x8000u;
      v18 = *(tagQ **)(v7 + 472);
      v19 = *((_QWORD *)v18 + 16);
      if ( v19 && *(char *)(*(_QWORD *)(v19 + 40) + 19LL) < 0 )
      {
        tagQ::SetActiveWindow(v18, 0LL);
      }
      else
      {
        v106[1] = *((_QWORD *)v18 + 16);
        v106[0] = (char *)v18 + 136;
        HMAssignmentLock(v106, 0LL);
      }
      v22 = *(struct tagWND **)(*(_QWORD *)(v7 + 472) + 128LL);
      if ( v22 )
      {
        v23 = W32GetUserSessionState(v21, v20);
        v26 = *(_QWORD *)(v7 + 472);
        if ( v26 == *(_QWORD *)(v23 + 18944) )
          *(_QWORD *)(W32GetUserSessionState(v25, v24) + 18952) = v26;
        Win32HM_LockIntoThread<0>(v7, (__int64)v22, v107);
        v27 = (unsigned __int64)(*(_BYTE *)(*((_QWORD *)v22 + 5) + 31LL) & 0x20) << 16;
        if ( !anonymous_namespace_::xxxSendNCActivateMessage(v22, v27) )
        {
          Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v107, v28);
          goto LABEL_123;
        }
        SetOrClrWF(1, a1, 0x210u, 1);
        Win32RawLockedItemBase<unsigned short,&void Win32FreePool(void *),1,1,1>::ManualLock<void>(
          BugCheckParameter2,
          (ULONG_PTR)v6,
          (__int64)lambda_74fc1e22101fb496760f58e758191252_::_lambda_invoker_cdecl_);
        xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)v22, 6LL, v27, v6, 0, 0, 0LL, 1, 1);
        SetOrClrWF(0, a1, 0x210u, 1);
        Win32RawLockedItemBase<void,0,0,1,1>::UnlockWorker(BugCheckParameter2, 0LL);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v107, v29);
        v8 = a3 & 2;
      }
      v30 = *(_QWORD *)(v7 + 472);
      v15 = *(struct tagWND **)(v30 + 128);
      if ( *(struct tagWND **)(v30 + 136) != v15
        || v99 != v15
        || *(char *)(*((_QWORD *)a1 + 5) + 19LL) < 0
        || *(_QWORD *)(*((_QWORD *)a1 + 2) + 472LL) != v30 )
      {
        goto LABEL_123;
      }
      if ( !v15 )
        *(_DWORD *)(v30 + 436) &= ~0x800u;
      tagQ::SetActiveWindow(*(tagQ **)(v7 + 472), a1);
      v33 = W32GetUserSessionState(v32, v31);
      v34 = *(_QWORD *)(v7 + 472);
      if ( v34 == *(_QWORD *)(v33 + 18944) )
        anonymous_namespace_::OnForegroundWindowChanged(*(GroupedProcessForegroundBoost **)(v34 + 136), a1);
      SetOrClrWF(1, a1, 0x210u, 1);
      Win32RawLockedItemBase<unsigned short,&void Win32FreePool(void *),1,1,1>::ManualLock<void>(
        BugCheckParameter2,
        (ULONG_PTR)v6,
        (__int64)lambda_74fc1e22101fb496760f58e758191252_::_lambda_invoker_cdecl_);
      xxxWindowEvent(3u, a1, 0, 0, 1);
      anonymous_namespace_::RemoveEventMessage(*(_QWORD *)(v7 + 472), 6, 5);
      v35 = *(struct tagDRAWITEMSTRUCT ***)(*(_QWORD *)(v7 + 472) + 136LL);
      Win32HM_LockIntoThread<1>(v7, (__int64)v35, (__int64 *)BugCheckParameter3);
      v38 = W32GetUserSessionState(v37, v36);
      v40 = 1LL;
      if ( (*(_DWORD *)(*(_QWORD *)(v38 + 19928) + 7004LL) & 1) != 0
        && xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)a1, 783LL, 0LL, 0LL, 0, 0, 0LL, 1, 1) )
      {
        xxxSendNotifyMessage((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, 0x310u, (unsigned __int64)v6, 0LL, 1);
      }
      if ( !v8 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) == 0 )
      {
        for ( i = *(struct tagWND **)(GetDesktopWindow((__int64)a1) + 112);
              i && (*(_BYTE *)(*((_QWORD *)i + 5) + 31LL) & 0x10) == 0;
              i = (struct tagWND *)*((_QWORD *)i + 11) )
        {
          ;
        }
        if ( a1 != i || v35 && !(unsigned int)IsVisible((__int64)v35) )
        {
          if ( (a3 & 4) == 0
            || (v40 = *(_QWORD *)(W32GetUserSessionState(v40, v39) + 18944), v40 == *(_QWORD *)(v7 + 472)) )
          {
            v42 = 19;
            if ( a1 != i )
              v42 = 3;
            v43 = v42 | 0x1000000;
            if ( (a3 & 0x100) == 0 )
              v43 = v42;
            xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, v43);
            if ( (v43 & 0x10) == 0 )
              TraceLoggingProcessUsageDataAggregationHelper(a1, v39);
          }
        }
      }
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v7 + 528), 0, 0) & 0x200) != 0
        || v35 && v35[2] == *((struct tagDRAWITEMSTRUCT **)a1 + 2) )
      {
        v47 = 0;
      }
      else
      {
        v101 = 0;
        if ( v35 )
        {
          v44 = (volatile signed __int32 *)v35[2];
          _InterlockedOr(v44 + 132, 0x200u);
          v45 = *(struct _KTHREAD **)v7;
          v99 = (struct tagWND *)v44;
          v101 &= 0xFFFFFFFC;
          ThreadId = (unsigned int)PsGetThreadId(v45);
          Win32RawLockedW32Thread::Win32RawLockedW32Thread((Win32RawLockedW32Thread *)v113, (struct _W32THREAD *)v44);
          xxxSendActivateAppMessage((const struct tagAAS *)&v99);
          _InterlockedAnd(v44 + 132, 0xFFFFFDFF);
          LOBYTE(v46) = 1;
          Win32RawLockedItemBase<_W32THREAD,0,1,1,1>::UnlockWorker((ULONG_PTR)v113, v46);
        }
        _InterlockedOr((volatile signed __int32 *)(v7 + 528), 0x200u);
        v99 = (struct tagWND *)*((_QWORD *)a1 + 2);
        v47 = 1;
        ThreadId = v115;
        v101 = v101 & 0xFFFFFFFC | 1;
        xxxSendActivateAppMessage((const struct tagAAS *)&v99);
      }
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x40) != 0 )
        SetOrClrWF(1, a1, 0x101u, 1);
      if ( *(char *)(*((_QWORD *)a1 + 5) + 19LL) >= 0 )
      {
        for ( j = a1; *((_QWORD *)j + 15); j = (struct tagWND *)*((_QWORD *)j + 15) )
          ;
        v108 = *(_OWORD *)LockPointer(v114, (__int64)j + 200, (__int64)a1);
        HMAssignmentLock(&v108, 0LL);
      }
      v49 = 0LL;
      if ( v35 )
        v49 = *v35;
      v50 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 472LL) == *(_QWORD *)(W32GetUserSessionState(v40, v39) + 18944);
      v51 = *(_QWORD *)(*(_QWORD *)(v7 + 472) + 128LL);
      if ( v51 )
        v50 |= (unsigned __int64)(*(_BYTE *)(*(_QWORD *)(v51 + 40) + 31LL) & 0x20) << 16;
      anonymous_namespace_::xxxSendNCActivateMessage(a1, v50);
      v52 = v116 + 1LL;
      v53 = *(_QWORD *)(*(_QWORD *)(v7 + 472) + 128LL);
      if ( v53 )
        v52 |= (unsigned __int64)(*(_BYTE *)(*(_QWORD *)(v53 + 40) + 31LL) & 0x20) << 16;
      xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)a1, 6LL, v52, v49, 0, 0, 0LL, 1, 1);
      anonymous_namespace_::xxxUpdateTray(a1);
      Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v54);
      SetOrClrWF(0, a1, 0x101u, 1);
      if ( v102 )
      {
        v56 = *(_QWORD *)(v7 + 472);
        if ( (*(_DWORD *)(v56 + 436) & 0x800) == 0 )
        {
          NonChildAncestor = GetNonChildAncestor(*(_QWORD *)(v56 + 120));
          if ( v58 != NonChildAncestor )
          {
            v59 = 0LL;
            if ( v58 && (*(_BYTE *)(*(_QWORD *)(v58 + 40) + 31LL) & 0x20) == 0 )
              v59 = v58;
            Win32HM_LockIntoThread<1>(v7, v58, (__int64 *)v110);
            anonymous_namespace_::xxxSendFocusMessages(v7, v59);
            Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v110, v60);
          }
        }
      }
      *(_DWORD *)(*(_QWORD *)(v7 + 472) + 436LL) |= 0x40u;
      if ( *(_QWORD *)(W32GetUserSessionState(v56, v55) + 62864) )
      {
        v69 = *(_QWORD *)(W32GetUserSessionState(v62, v61) + 62864);
        if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) != v69 )
        {
          v70 = W32GetUserSessionState(v69, v68);
          CInputGlobals::UpdateLastInputTime(
            *(_QWORD *)(v70 + 3064),
            (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
            8LL);
          v73 = *(_QWORD *)(W32GetUserSessionState(v72, v71) + 62864);
          *(_DWORD *)(v73 + 12) &= ~0x400000u;
          v76 = *(_QWORD *)(W32GetUserSessionState(v73, v74) + 62864);
          if ( *(_QWORD *)(v76 + 336) )
          {
            v77 = W32GetUserSessionState(v76, v75);
            ForegroundBoost::SetForegroundPriority(*(_QWORD *)(*(_QWORD *)(v77 + 62864) + 336LL), 1LL, 8LL);
          }
        }
      }
      else
      {
        v64 = *(_QWORD *)(W32GetUserSessionState(v62, v61) + 19200);
        if ( *(_QWORD *)(v7 + 496) == v64 && !*(_DWORD *)(W32GetUserSessionState(v64, v63) + 19128) )
        {
          v67 = W32GetUserSessionState(v66, v65);
          CInputGlobals::UpdateLastInputTime(
            *(_QWORD *)(v67 + 3064),
            (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
            8LL);
        }
      }
      if ( v47 )
        _InterlockedAnd((volatile signed __int32 *)(v7 + 528), 0xFFFFFDFF);
      SetOrClrWF(0, a1, 0x210u, 1);
      Win32RawLockedItemBase<void,0,0,1,1>::UnlockWorker(BugCheckParameter2, 0LL);
LABEL_108:
      v84 = *(struct tagWND **)(*(_QWORD *)(v7 + 472) + 128LL);
      v85 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
        || (v86 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v86 = 0;
      }
      v87 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v86 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v88 = *(struct tagDRAWITEMSTRUCT **)a1;
        v89 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v15);
        LOBYTE(v90) = v87;
        LOBYTE(v91) = v86;
        v92 = *(_QWORD *)(v89 + 69416);
        v93 = "Activated";
        if ( v84 != a1 )
          v93 = "Not Active";
        WPP_RECORDER_AND_TRACE_SF_qs(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v91,
          v90,
          v92,
          4,
          2,
          15,
          (__int64)&WPP_b8408e26a60f3dbb6b5b522826abb760_Traceguids,
          (char)v88,
          (__int64)v93);
      }
      if ( v84 == a1 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 0x10) == 0 )
      {
        v94 = *(_QWORD *)(W32GetUserSessionState(v85, v15) + 19200);
        if ( (*(_DWORD *)(v94 + 48) & 0x400) != 0 )
        {
          v95 = *(_QWORD *)(W32GetUserSessionState(v94, v15) + 18944);
          if ( *(_QWORD *)(v7 + 472) == v95 )
          {
            v96 = (void *)ReferenceDwmApiPort(v95, v15);
            DwmAsyncNotifyForegroundChange(v96);
          }
        }
      }
      v14 = v84 == a1;
      goto LABEL_123;
    }
    v78 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || ((unsigned __int8)*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & v10) == 0
      || (v79 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v79 = 0;
    }
    v80 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v79 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_103;
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
    v98 = (char)v6;
    v97 = 13;
LABEL_102:
    LOBYTE(v83) = v80;
    LOBYTE(v82) = v79;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v82,
      v83,
      *(_QWORD *)(UserSessionState + 69416),
      4,
      2,
      v97,
      (__int64)&WPP_b8408e26a60f3dbb6b5b522826abb760_Traceguids,
      v98);
LABEL_103:
    *(_DWORD *)(*(_QWORD *)(v7 + 472) + 436LL) &= ~0x8000u;
    if ( (*(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v78, v16) + 19928) + 7004LL) & 1) != 0
      && xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)a1, 783LL, 0LL, 0LL, 0, 0, 0LL, 1, 1) )
    {
      if ( !v6 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 910LL);
      xxxSendNotifyMessage((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, 0x310u, (unsigned __int64)v6, 0LL, 1);
    }
    goto LABEL_108;
  }
LABEL_123:
  LOBYTE(v15) = 1;
  Win32RawLockedItemBase<void,0,0,1,1>::UnlockWorker(BugCheckParameter2, (__int64)v15);
  return v14;
}
