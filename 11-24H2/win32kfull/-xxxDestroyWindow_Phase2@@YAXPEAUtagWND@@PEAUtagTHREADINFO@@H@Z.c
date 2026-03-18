/*
 * XREFs of ?xxxDestroyWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14024FA00
 * Callers:
 *     xxxDestroyWindow @ 0x14015EF90 (xxxDestroyWindow.c)
 * Callees:
 *     xxxWindowEvent @ 0x1400408B0 (xxxWindowEvent.c)
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x140061700 (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxDW_SendDestroyMessages @ 0x14008A4B0 (xxxDW_SendDestroyMessages.c)
 *     zzzInternalDestroyCaret @ 0x140095744 (zzzInternalDestroyCaret.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     xxxEnableWindow @ 0x14014E5C0 (xxxEnableWindow.c)
 *     IsImmersiveBand @ 0x14014E660 (IsImmersiveBand.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ @ 0x140183234 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ.c)
 *     DWP_SetHotKey @ 0x14019DDF4 (DWP_SetHotKey.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@W4LocalActivationOptions@@@Z @ 0x1401AF538 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?xxxFocusSetInputContext@@YAXPEAUtagWND@@HH@Z @ 0x1401B92C4 (-xxxFocusSetInputContext@@YAXPEAUtagWND@@HH@Z.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PEAU_HEAD@@@Z @ 0x1401BCB74 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tag.c)
 *     zzzInputFocusLostWindowEvent @ 0x14023D6B8 (zzzInputFocusLostWindowEvent.c)
 */

void __fastcall xxxDestroyWindow_Phase2(struct tagWND *a1, struct tagTHREADINFO *a2, int a3)
{
  int v3; // esi
  char v6; // r15
  int v7; // r13d
  __int64 v8; // rax
  unsigned __int8 v9; // r14
  struct tagWND *v10; // rcx
  struct tagWND *v11; // rsi
  bool v12; // r12
  __int64 v13; // rbx
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  struct tagWND *v17; // rcx
  char v18; // bl
  struct tagWND *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rbx
  ULONG_PTR v30[2]; // [rsp+50h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+60h] [rbp-38h] BYREF

  v3 = a3;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) == 0 )
    DWP_SetHotKey(a1, 0);
  v6 = 0;
  if ( !v3 )
  {
    v30[0] = -1LL;
    v7 = 58;
    v8 = *((_QWORD *)a2 + 59);
    v9 = 0;
    v30[1] = 0LL;
    v10 = *(struct tagWND **)(v8 + 128);
    if ( a1 == v10 )
    {
      if ( *(char *)(*((_QWORD *)a1 + 5) + 31LL) < 0 )
      {
        v11 = (struct tagWND *)*((_QWORD *)a1 + 15);
        if ( v11 )
        {
          v9 = 1;
LABEL_12:
          if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
            && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
            && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u )
          {
            v6 = 1;
          }
          v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v13 = *(_QWORD *)a1;
            UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
            LOBYTE(v15) = v12;
            LOBYTE(v16) = v6;
            WPP_RECORDER_AND_TRACE_SF_q(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v16,
              v15,
              *(_QWORD *)(UserSessionState + 69416),
              4,
              2,
              10,
              (__int64)&WPP_5331ead6fd5234e2c2bf5da035c22fc9_Traceguids,
              v13);
          }
          if ( v9 )
          {
            if ( (unsigned int)IsImmersiveBand((__int64)v11) )
            {
              if ( *(char *)(*((_QWORD *)v11 + 5) + 20LL) < 0 )
              {
                v17 = (struct tagWND *)*((_QWORD *)v11 + 15);
                if ( v17 )
                {
                  while ( (*((_DWORD *)a1 + 95) & 0x100) == 0 || *(char *)(*((_QWORD *)v17 + 5) + 20LL) < 0 )
                  {
                    v17 = (struct tagWND *)*((_QWORD *)v17 + 15);
                    if ( !v17 )
                      goto LABEL_28;
                  }
                  v11 = v17;
                }
              }
            }
LABEL_28:
            Win32HM_LockIntoThread<0>((__int64)a2, (__int64)v11, v30);
            if ( (*((_DWORD *)a1 + 95) & 0x100) != 0 )
              xxxEnableWindow(v11, 1);
          }
          v18 = xxxActivateWindowWithOptions((__int64)v11, (unsigned int)v9 + 2, v7, 1, 0);
          if ( v9 )
            Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>(v30, (__int64)a2);
          if ( v18 )
          {
            if ( v9 )
              goto LABEL_45;
          }
          else if ( !v9 )
          {
            goto LABEL_37;
          }
          if ( a1 == *(struct tagWND **)(*((_QWORD *)a2 + 59) + 128LL) )
          {
LABEL_37:
            tagQ::SetActiveWindow(*((tagQ **)a2 + 59), 0LL);
            v19 = tagQ::UnlockFocusWnd(*((tagQ **)a2 + 59));
            v22 = *(unsigned int **)(W32GetUserSessionState(v21, v20) + 19928);
            v23 = *v22;
            if ( (v23 & 4) != 0 && v19 )
            {
              Win32HM_LockIntoThread<0>((__int64)a2, (__int64)v19, BugCheckParameter3);
              xxxFocusSetInputContext(v19, 0LL, 0);
              v19 = (struct tagWND *)Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>(BugCheckParameter3, v24);
              Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(
                BugCheckParameter3,
                v25);
            }
            v27 = *(_QWORD *)(W32GetUserSessionState(v22, v23) + 18944);
            if ( *((_QWORD *)a2 + 59) == v27 )
            {
              if ( v19 )
                zzzInputFocusLostWindowEvent((__int64)v19, 9LL);
              xxxWindowEvent(0x8005u, 0LL, -4, 0, 0);
              xxxWindowEvent(3u, 0LL, 0, 0, 1);
            }
            zzzInternalDestroyCaret(v27, v26);
          }
LABEL_45:
          v3 = a3;
LABEL_46:
          Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(v30, (__int64)a2);
          goto LABEL_47;
        }
      }
    }
    else
    {
      if ( v10 || *(_QWORD *)(W32GetUserSessionState(0LL, a2) + 18944) != *((_QWORD *)a2 + 59) )
        goto LABEL_46;
      v7 = 59;
    }
    v11 = a1;
    if ( !a1 )
      goto LABEL_45;
    goto LABEL_12;
  }
LABEL_47:
  v28 = *((_QWORD *)a1 + 15);
  if ( v28 )
  {
    while ( *(_QWORD *)(v28 + 120) )
      v28 = *(_QWORD *)(v28 + 120);
    v29 = v28 + 200;
    if ( a1 == *(struct tagWND **)(v28 + 200) )
    {
      if ( (*(_BYTE *)(_HMPheFromObject(v28) + 25) & 1) != 0 )
      {
        *(_QWORD *)(*(_QWORD *)(v29 - 160) + 176LL) = 0LL;
        HMAssignmentUnlock(v29);
      }
      else
      {
        *(_OWORD *)BugCheckParameter3 = *(_OWORD *)LockPointer(v30, v29, *((_QWORD *)a1 + 15));
        HMAssignmentLock(BugCheckParameter3, 0LL);
      }
    }
  }
  if ( !v3 )
  {
    if ( *(char *)(*((_QWORD *)a1 + 5) + 19LL) >= 0 )
      xxxWindowEvent(0x8001u, a1, 0, 0, 0);
    xxxDW_SendDestroyMessages(a1);
  }
}
