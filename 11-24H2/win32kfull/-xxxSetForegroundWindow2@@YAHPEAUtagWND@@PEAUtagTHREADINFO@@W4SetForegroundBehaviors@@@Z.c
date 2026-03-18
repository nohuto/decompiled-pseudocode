/*
 * XREFs of ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023413C
 * Callers:
 *     xxxSetThreadDesktop @ 0x1401071FC (xxxSetThreadDesktop.c)
 *     xxxSystemParametersInfoWorker @ 0x14018F9C8 (xxxSystemParametersInfoWorker.c)
 *     xxxSwitchDesktop @ 0x1401F69E4 (xxxSwitchDesktop.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1402337EC (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     xxxSetModernAppWindow @ 0x14024CD58 (xxxSetModernAppWindow.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x140276AB0 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x14027774C (-xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     SetWakeBit @ 0x1400456D0 (SetWakeBit.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _GetTopLevelWindow @ 0x140049F30 (_GetTopLevelWindow.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140063510 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     xxxSetWindowPos @ 0x140076C44 (xxxSetWindowPos.c)
 *     _anonymous_namespace_::xxxUpdateTray @ 0x1400883B4 (_anonymous_namespace_--xxxUpdateTray.c)
 *     zzzLockWindowUpdate2 @ 0x140097CA0 (zzzLockWindowUpdate2.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x14009A8C4 (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     IsWindowUnderActiveLockScreen @ 0x1400F86A4 (IsWindowUnderActiveLockScreen.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z @ 0x14010F3F0 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z.c)
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x14010FA90 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     xxxCancelTracking @ 0x1401195C8 (xxxCancelTracking.c)
 *     ?ProcessHungWindow@@YAXPEAUtagWND@@@Z @ 0x1401489D8 (-ProcessHungWindow@@YAXPEAUtagWND@@@Z.c)
 *     ?IsHungWindow@@YA_NPEBUtagWND@@@Z @ 0x140148A3C (-IsHungWindow@@YA_NPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x140148CA4 (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     PtiKbdFromQ @ 0x1401534FC (PtiKbdFromQ.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@U_W32THREAD@@$0A@$00$00$00@@AEAAX_N0@Z @ 0x140154180 (-UnlockWorker@-$Win32RawLockedItemBase@U_W32THREAD@@$0A@$00$00$00@@AEAAX_N0@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     _anonymous_namespace_::RemoveEventMessage @ 0x1401C89C0 (_anonymous_namespace_--RemoveEventMessage.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1401C8A38 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     ?ManualLock@Win32RawLockedW32Thread@@QEAAXPEAU_W32THREAD@@@Z @ 0x1401D3C2C (-ManualLock@Win32RawLockedW32Thread@@QEAAXPEAU_W32THREAD@@@Z.c)
 *     ?IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z @ 0x14020E3C4 (-IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x14023256C (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x140232BF0 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x140233A48 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ?xxxApplyGlobalInputSettings@@YAXH@Z @ 0x140238488 (-xxxApplyGlobalInputSettings@@YAXH@Z.c)
 *     zzzInputFocusLostWindowEvent @ 0x14023D6B8 (zzzInputFocusLostWindowEvent.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x14023D6F8 (zzzInputFocusReceivedWindowEvent.c)
 *     ?ResetForegroundQueue@@YAXW4SetFgQueueOption@@@Z @ 0x140276340 (-ResetForegroundQueue@@YAXW4SetFgQueueOption@@@Z.c)
 *     ?SetNewForegroundQueue@@YAXPEAUtagQ@@W4SetFgQueueOption@@@Z @ 0x140276480 (-SetNewForegroundQueue@@YAXPEAUtagQ@@W4SetFgQueueOption@@@Z.c)
 *     zzzActiveCursorTracking @ 0x14027F630 (zzzActiveCursorTracking.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall xxxSetForegroundWindow2(__int64 a1, PETHREAD *a2, unsigned int a3)
{
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  char v9; // bl
  bool v10; // si
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  char v14; // bl
  bool v15; // si
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  __int64 v19; // rdx
  __int64 v20; // rdx
  char v22; // al
  __int64 v23; // rdx
  PETHREAD *v24; // rcx
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  __int64 v28; // rcx
  char v29; // al
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  __int64 v33; // rdx
  __int64 v34; // rcx
  char v35; // bl
  bool v36; // r14
  __int64 v37; // rax
  int v38; // r8d
  int v39; // edx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r14
  struct tagTHREADINFO *v45; // rcx
  struct tagWND *v46; // rdx
  _QWORD *i; // rdx
  _QWORD *v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rcx
  const struct tagUIPI_INFO *v55; // r8
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax
  __m128i si128; // xmm0
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rbx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rbx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rbx
  __int64 v80; // rax
  _BOOL8 v81; // r13
  const struct tagWND *TopLevelWindow; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rdx
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rax
  HANDLE ThreadId; // rax
  struct tagQMSG *v90; // r13
  const struct tagTHREADINFO **v91; // rcx
  __int64 v92; // rbx
  __int64 v93; // r13
  int v94; // eax
  __int64 v95; // rdx
  __int64 v96; // r12
  unsigned int v97; // r13d
  unsigned __int8 v98; // dl
  unsigned __int8 v99; // r8
  LARGE_INTEGER v100; // r9
  unsigned int v101; // eax
  const struct tagTHREADINFO **v102; // rcx
  char v103; // bl
  __int64 v104; // rcx
  __int64 v105; // rax
  const struct tagWND *v106; // rax
  __int64 v107; // rdx
  const struct tagWND *v108; // rbx
  unsigned int v109; // eax
  __int16 v110; // dx
  __int16 v111; // bx
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // rdx
  __int64 v115; // rdx
  unsigned __int64 v116; // [rsp+40h] [rbp-C0h]
  char v117; // [rsp+70h] [rbp-90h]
  char v118; // [rsp+70h] [rbp-90h]
  bool v119; // [rsp+71h] [rbp-8Fh]
  bool v120; // [rsp+71h] [rbp-8Fh]
  struct tagWND *v123; // [rsp+88h] [rbp-78h]
  struct tagWND *v124; // [rsp+88h] [rbp-78h]
  unsigned int v125; // [rsp+88h] [rbp-78h]
  __int64 v126; // [rsp+90h] [rbp-70h]
  LARGE_INTEGER *v127; // [rsp+98h] [rbp-68h]
  __int64 v128; // [rsp+A0h] [rbp-60h] BYREF
  struct tagQMSG *v129; // [rsp+A8h] [rbp-58h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v131; // [rsp+C0h] [rbp-40h]
  ULONG_PTR v132[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v133; // [rsp+D8h] [rbp-28h]
  ULONG_PTR v134[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v135; // [rsp+F0h] [rbp-10h]
  __int128 v136; // [rsp+F8h] [rbp-8h]
  __int64 v137; // [rsp+108h] [rbp+8h]
  __int128 v138; // [rsp+110h] [rbp+10h]
  __int64 v139; // [rsp+120h] [rbp+20h]
  __int128 v140; // [rsp+128h] [rbp+28h]
  __int64 v141; // [rsp+138h] [rbp+38h]
  __int64 v142; // [rsp+140h] [rbp+40h] BYREF
  int v143; // [rsp+148h] [rbp+48h]
  __int64 v144; // [rsp+150h] [rbp+50h] BYREF
  int v145; // [rsp+158h] [rbp+58h]

  v136 = 0LL;
  *(_OWORD *)v134 = 0LL;
  v137 = 0LL;
  v135 = -1LL;
  v138 = 0LL;
  v139 = 0LL;
  *(_OWORD *)v132 = 0LL;
  v133 = -1LL;
  v141 = 0LL;
  v140 = 0LL;
  v131 = -1LL;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  v123 = PtiCurrent(-1LL, (__int64)a2);
  v5 = 0;
  v144 = 0LL;
  v145 = 0;
  v142 = 0LL;
  v143 = 0;
  v128 = 0LL;
  SetSystemInputSource(&v128);
  if ( !a1 )
    goto LABEL_20;
  if ( *(_QWORD *)(a1 + 24) == *(_QWORD *)(W32GetUserSessionState(v7, v6) + 19200)
    && *(char *)(*(_QWORD *)(a1 + 40) + 19LL) >= 0 )
  {
    if ( (unsigned int)IsWindowUnderActiveLockScreen(a1, v8) )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
        || (v9 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v9 = 0;
      }
      v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v6);
        LOBYTE(v12) = v10;
        LOBYTE(v13) = v9;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v13,
          v12,
          *(_QWORD *)(UserSessionState + 69416),
          4,
          2,
          88,
          (__int64)&WPP_b8408e26a60f3dbb6b5b522826abb760_Traceguids);
      }
      goto LABEL_155;
    }
LABEL_20:
    if ( a2 )
      Win32RawLockedW32Thread::ManualLock(v134, (__int64)a2);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || (v22 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v22 = 0;
    }
    v117 = v22;
    v119 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v22 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      PsGetThreadId(*(PETHREAD *)v123);
      v24 = a2;
      if ( a2 )
        PsGetThreadId(*a2);
      v25 = W32GetUserSessionState(v24, v23);
      LOBYTE(v26) = v119;
      LOBYTE(v27) = v117;
      WPP_RECORDER_AND_TRACE_SF_qDD(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v27,
        v26,
        *(_QWORD *)(v25 + 69416));
    }
    v28 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || (v29 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v29 = 0;
    }
    v118 = v29;
    LOBYTE(v28) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    v120 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v29 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v30 = W32GetUserSessionState(v28, v6);
      LOBYTE(v31) = v120;
      LOBYTE(v32) = v118;
      WPP_RECORDER_AND_TRACE_SF_d(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v32,
        v31,
        *(_QWORD *)(v30 + 69416),
        4,
        2,
        90,
        (__int64)&WPP_b8408e26a60f3dbb6b5b522826abb760_Traceguids,
        a3);
    }
    *(_QWORD *)(W32GetUserSessionState(v28, v6) + 18896) = 0LL;
    v34 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || (v35 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v35 = 0;
    }
    v36 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v35 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v37 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v33);
      LOBYTE(v38) = v36;
      LOBYTE(v39) = v35;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v39,
        v38,
        *(_QWORD *)(v37 + 69416),
        4,
        2,
        91,
        (__int64)&WPP_b8408e26a60f3dbb6b5b522826abb760_Traceguids);
    }
    if ( !*(_QWORD *)(W32GetUserSessionState(v34, v33) + 18960)
      || (v43 = *(_QWORD *)(W32GetUserSessionState(v41, v40) + 18960),
          (_InterlockedCompareExchange((volatile signed __int32 *)(v43 + 528), 0, 0) & 1) != 0) )
    {
      v44 = 0LL;
    }
    else
    {
      v44 = *(_QWORD *)(W32GetUserSessionState(v43, v42) + 18960);
      Win32RawLockedW32Thread::ManualLock(v132, v44);
    }
    if ( a1 )
    {
      v126 = *(_QWORD *)(a1 + 16);
      SetNewForegroundQueue(*(_QWORD *)(v126 + 472), (a3 & 0x200 | 0x100) >> 8);
      Win32RawLockedW32Thread::ManualLock(BugCheckParameter2, v126);
      v45 = *(struct tagTHREADINFO **)(a1 + 16);
      v46 = (struct tagWND *)a1;
    }
    else
    {
      v126 = 0LL;
      ResetForegroundQueue(1LL);
      v45 = 0LL;
      v46 = 0LL;
    }
    xxxSetForegroundThreadWithWindowHint(v45, v46);
    if ( (a3 & 0x20) == 0 )
    {
      if ( *(_QWORD *)(W32GetUserSessionState(v48, i) + 18944) )
      {
        v51 = *(_QWORD *)(W32GetUserSessionState(v50, v49) + 18944);
        LODWORD(v144) = *(_DWORD *)(v51 + 472);
        v50 = *(_QWORD *)(W32GetUserSessionState(v51, v52) + 18944);
        HIDWORD(v144) = *(_DWORD *)(v50 + 476);
      }
      if ( *(_QWORD *)(W32GetUserSessionState(v50, v49) + 18952) )
      {
        v56 = *(_QWORD *)(W32GetUserSessionState(v54, v53) + 18952);
        LODWORD(v142) = *(_DWORD *)(v56 + 472);
        HIDWORD(v142) = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v56, v57) + 18952) + 476LL);
      }
      if ( !UIPrivilegeIsolation::CheckAccess((UIPrivilegeIsolation *)&v144, (const struct tagUIPI_INFO *)&v142, v55) )
      {
        ClearKeyboardToggleStates();
        v48 = *(_QWORD **)(W32GetUserSessionState(v59, v58) + 19200);
        if ( *((_QWORD **)v123 + 62) == v48 )
        {
          v48 = (_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v48, i) + 19200) + 176LL);
          for ( i = (_QWORD *)*v48; i != v48; i = (_QWORD *)*i )
          {
            v60 = *(i - 38);
            si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
            *(__m128i *)(v60 + 248) = si128;
            *(__m128i *)(v60 + 264) = si128;
            *(_DWORD *)(v60 + 436) |= 1u;
          }
        }
      }
    }
    if ( *(_QWORD *)(W32GetUserSessionState(v48, i) + 18944) )
    {
      v64 = *(_QWORD *)(W32GetUserSessionState(v63, v62) + 18944);
      if ( v64 != *(_QWORD *)(W32GetUserSessionState(v66, v65) + 18952) )
      {
        v63 = *(_QWORD *)(W32GetUserSessionState(v63, v62) + 18944);
        if ( *(_QWORD *)(v63 + 120) )
        {
          v63 = *(unsigned int *)(W32GetUserSessionState(v63, v62) + 67064);
          if ( (v63 & 0x80u) == 0LL )
            xxxApplyGlobalInputSettings(v63);
        }
      }
    }
    v67 = *(_QWORD *)(W32GetUserSessionState(v63, v62) + 18944);
    if ( v67 != *(_QWORD *)(W32GetUserSessionState(v69, v68) + 18952) )
    {
      if ( *(_QWORD *)(W32GetUserSessionState(v70, v6) + 18952) )
      {
        v72 = *(_QWORD *)(W32GetUserSessionState(v72, v71) + 18952);
        if ( *(_QWORD *)(v72 + 120) )
        {
          v73 = W32GetUserSessionState(v72, v71);
          zzzInputFocusLostWindowEvent(*(_QWORD *)(*(_QWORD *)(v73 + 18952) + 120LL), 1LL);
        }
      }
      if ( *(_QWORD *)(W32GetUserSessionState(v72, v71) + 18944)
        && *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v75, v74) + 18944) + 120LL) )
      {
        zzzInputFocusReceivedWindowEvent(1LL);
      }
      v6 = (__int64)a2;
      if ( a2 )
      {
        xxxCancelTracking();
        v78 = W32GetUserSessionState(v77, v76);
        CCursorClip::ClearClip(*(CCursorClip **)(v78 + 36296));
        zzzLockWindowUpdate2(0LL, 1LL);
        v6 = (__int64)a2;
      }
      v79 = 0LL;
      if ( v44 && (_InterlockedCompareExchange((volatile signed __int32 *)(v44 + 528), 0, 0) & 1) == 0 )
        v79 = *(_QWORD *)(v44 + 472);
      v80 = 0LL;
      if ( v6 )
        v80 = *(_QWORD *)(v6 + 472);
      v127 = 0LL;
      if ( v79 && v79 != v80 )
      {
        v129 = (struct tagQMSG *)AllocQEntryEx(v79 + 24, 0LL, 1);
        if ( !v129 )
        {
LABEL_155:
          LOBYTE(v6) = 1;
          Win32RawLockedItemBase<_W32THREAD,0,1,1,1>::UnlockWorker((ULONG_PTR)BugCheckParameter2, v6);
          LOBYTE(v114) = 1;
          Win32RawLockedItemBase<_W32THREAD,0,1,1,1>::UnlockWorker((ULONG_PTR)v132, v114);
          LOBYTE(v115) = 1;
          Win32RawLockedItemBase<_W32THREAD,0,1,1,1>::UnlockWorker((ULONG_PTR)v134, v115);
          return v5;
        }
        v81 = 0LL;
        if ( a1 )
        {
          TopLevelWindow = (const struct tagWND *)GetTopLevelWindow(a1);
          v124 = TopLevelWindow;
          if ( TopLevelWindow )
          {
            if ( (unsigned int)CoreWindowProp::IsComponent(TopLevelWindow, v83) )
              v81 = (unsigned int)CoreWindowProp::IsHostThreadOf((const struct tagTHREADINFO *)v44, v124) != 0;
          }
        }
        v84 = *(_QWORD *)(PtiKbdFromQ(v79) + 464);
        v125 = *(_DWORD *)(v84 + 268);
        if ( *(_QWORD *)(W32GetUserSessionState(v84, v85) + 18960) )
        {
          v88 = W32GetUserSessionState(v87, v86);
          ThreadId = PsGetThreadId(**(PETHREAD **)(v88 + 18960));
        }
        else
        {
          ThreadId = 0LL;
        }
        v116 = v81;
        v90 = v129;
        StoreQMessage(
          (LARGE_INTEGER *)v129,
          0LL,
          0,
          (LARGE_INTEGER)ThreadId,
          0LL,
          0,
          0LL,
          5u,
          v116,
          0,
          (struct tagINPUT_MESSAGE_SOURCE *)&v128,
          v125,
          0LL,
          0LL);
        if ( v44 )
        {
          *((_QWORD *)v90 + 13) = v44;
          SetWakeBit(v44, 8256LL);
        }
        v91 = *(const struct tagTHREADINFO ***)(v79 + 128);
        if ( v91 && IsHungWindow(v91) )
          ProcessHungWindow(*(struct tagWND **)(v79 + 128));
        v6 = (__int64)a2;
      }
      v92 = 0LL;
      if ( v126 && (_InterlockedCompareExchange((volatile signed __int32 *)(v126 + 528), 0, 0) & 1) == 0 )
        v92 = *(_QWORD *)(v126 + 472);
      v93 = 0LL;
      if ( v6 )
        v93 = *(_QWORD *)(v6 + 472);
      if ( v92 )
      {
        if ( v92 != v93 )
        {
          v127 = (LARGE_INTEGER *)AllocQEntryEx(v92 + 24, 0LL, 1);
          if ( !v127 )
            goto LABEL_155;
        }
        v94 = anonymous_namespace_::RemoveEventMessage(v92, 5, -1);
        if ( v92 == v93 )
        {
          if ( a1 == *(_QWORD *)(v93 + 128) )
          {
            anonymous_namespace_::xxxSendNCActivateMessage((struct tagWND *)a1, 1uLL);
            anonymous_namespace_::xxxUpdateTray((struct tagWND *)a1);
            v103 = a3;
            if ( (a3 & 4) == 0 )
              xxxSetWindowPos((struct tagWND *)a1, 0LL, 0LL, 0LL, 0, 0, 3);
          }
          else
          {
            v103 = a3;
            if ( (a3 & 1) == 0 )
            {
              v110 = ~(16 * (_BYTE)a3) & 0x80 | 0x100;
              if ( (a3 & 0x100) == 0 )
                v110 = ~(16 * (_BYTE)a3) & 0x80;
              v111 = v110 | 2;
              if ( (a3 & 4) == 0 )
                v111 = v110;
              if ( v44 )
                v5 = (unsigned int)PsGetThreadId(*(PETHREAD *)v44);
              anonymous_namespace_::xxxLocalActivateWindow((struct tagWND *)a1, v5, v111);
              v6 = *(unsigned int *)(W32GetUserSessionState(v113, v112) + 67060);
              if ( (v6 & 1) != 0 )
                zzzActiveCursorTracking(a1);
              v5 = 1;
              goto LABEL_155;
            }
          }
        }
        else
        {
          if ( v93 || (a3 & 2) != 0 )
          {
            v96 = 0LL;
            if ( a1 )
              v96 = *(_QWORD *)a1;
          }
          else
          {
            v96 = 0LL;
          }
          if ( v94 )
            *(_DWORD *)(v92 + 436) |= 0x8000u;
          v97 = *(_DWORD *)(*(_QWORD *)(PtiKbdFromQ(v92) + 464) + 268LL);
          if ( (v98 & v99) != 0 )
          {
            v100.QuadPart = 0LL;
          }
          else
          {
            if ( v44 )
              v101 = (unsigned int)PsGetThreadId(*(PETHREAD *)v44);
            else
              v101 = 0;
            v100.QuadPart = v101;
          }
          StoreQMessage(
            v127,
            0LL,
            (a3 >> 2) & 1,
            v100,
            v96,
            0,
            0LL,
            6u,
            0LL,
            0,
            (struct tagINPUT_MESSAGE_SOURCE *)&v128,
            v97,
            0LL,
            0LL);
          v127[13].QuadPart = v126;
          SetWakeBit(v126, 8256LL);
          v102 = *(const struct tagTHREADINFO ***)(v92 + 128);
          if ( v102 && IsHungWindow(v102) )
            ProcessHungWindow(*(struct tagWND **)(v92 + 128));
          v103 = a3;
        }
        if ( (v103 & 0x40) == 0 )
          xxxDeliverRestoreFocusMessage((struct tagWND *)a1, v95);
        v6 = (__int64)a2;
      }
      v104 = 0LL;
      if ( v44 && (_InterlockedCompareExchange((volatile signed __int32 *)(v44 + 528), 0, 0) & 1) == 0 )
        v104 = *(_QWORD *)(v44 + 472);
      v105 = 0LL;
      if ( v6 )
        v105 = *(_QWORD *)(v6 + 472);
      if ( v104 && v104 == v105 )
      {
        if ( a1 )
        {
          v106 = (const struct tagWND *)GetTopLevelWindow(a1);
          v108 = v106;
          if ( v106
            && (unsigned int)CoreWindowProp::IsComponent(v106, v107)
            && (unsigned int)CoreWindowProp::IsHostThreadOf((const struct tagTHREADINFO *)v44, v108) )
          {
            LOBYTE(v5) = 1;
          }
          v109 = (unsigned int)PsGetThreadId(**(PETHREAD **)(a1 + 16));
        }
        else
        {
          v109 = 0;
        }
        xxxDeactivate((__int64)a2, v109, v5);
      }
    }
    v5 = 1;
    goto LABEL_155;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
    || (v14 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v14 = 0;
  }
  v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v14 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v16 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v8);
    LOBYTE(v17) = v15;
    LOBYTE(v18) = v14;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v18,
      v17,
      *(_QWORD *)(v16 + 69416),
      4,
      2,
      87,
      (__int64)&WPP_b8408e26a60f3dbb6b5b522826abb760_Traceguids);
  }
  LOBYTE(v8) = 1;
  Win32RawLockedItemBase<_W32THREAD,0,1,1,1>::UnlockWorker((ULONG_PTR)BugCheckParameter2, v8);
  LOBYTE(v19) = 1;
  Win32RawLockedItemBase<_W32THREAD,0,1,1,1>::UnlockWorker((ULONG_PTR)v132, v19);
  LOBYTE(v20) = 1;
  Win32RawLockedItemBase<_W32THREAD,0,1,1,1>::UnlockWorker((ULONG_PTR)v134, v20);
  return 0LL;
}
