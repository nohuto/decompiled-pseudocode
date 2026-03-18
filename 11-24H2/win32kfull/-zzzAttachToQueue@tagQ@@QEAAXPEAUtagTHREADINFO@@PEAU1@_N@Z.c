/*
 * XREFs of ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x140237494
 * Callers:
 *     xxxSetThreadDesktop @ 0x1401071FC (xxxSetThreadDesktop.c)
 *     xxxSwitchDesktop @ 0x1401F69E4 (xxxSwitchDesktop.c)
 *     xxxHardErrorControl @ 0x140216A70 (xxxHardErrorControl.c)
 *     zzzReattachThreads @ 0x140237EEC (zzzReattachThreads.c)
 * Callees:
 *     LockCaptureWindow @ 0x14002BE08 (LockCaptureWindow.c)
 *     EditionUpdateRawMouseMode @ 0x14002BEB0 (EditionUpdateRawMouseMode.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x14008F1D0 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x1401532E0 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 *     IsInsideMenuLoop @ 0x1401AEB6C (IsInsideMenuLoop.c)
 *     ?CheckTransferState@tagQ@@AEAAKPEAUtagTHREADINFO@@PEQ1@PEAUtagWND@@_N@Z @ 0x1401B0CA8 (-CheckTransferState@tagQ@@AEAAKPEAUtagTHREADINFO@@PEQ1@PEAUtagWND@@_N@Z.c)
 *     UnlockCaptureWindow @ 0x1401B8730 (UnlockCaptureWindow.c)
 *     ClearDelegationCapture @ 0x1401B9AC0 (ClearDelegationCapture.c)
 *     LockQCursor @ 0x140271870 (LockQCursor.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x14027A098 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 */

void __fastcall tagQ::zzzAttachToQueue(tagQ *this, struct tagTHREADINFO *a2, struct tagQ *a3, char a4)
{
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rcx
  char v11; // r15
  int v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  int v15; // edx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  bool v20; // r12
  __int64 v21; // rsi
  unsigned __int8 v22; // al
  __int64 v23; // rdi
  char v24; // bl
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 UserSessionState; // rax
  int v28; // r8d
  int v29; // edx
  __int64 v30; // rcx
  unsigned int v31; // ecx
  struct tagQ *v32; // rax
  struct tagQ *v33; // rbx
  struct tagQMSG *v34; // rcx
  _QWORD v35[2]; // [rsp+60h] [rbp-38h] BYREF

  v8 = tagQ::CheckTransferState((__int64)this, (__int64)a2, 128, a4) - 1;
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      tagQ::SetActiveWindow(this, *(struct tagWND **)(*((_QWORD *)a2 + 59) + 128LL));
      tagQ::SetActiveWindow(*((tagQ **)a2 + 59), 0LL);
      v9 = *((_QWORD *)a2 + 59);
      v10 = *(_QWORD *)(v9 + 344);
      if ( v10 )
      {
        if ( *(struct tagTHREADINFO **)(v10 + 16) == a2 && !*((_QWORD *)this + 43) )
        {
          *(_OWORD *)((char *)this + 344) = *(_OWORD *)(v9 + 344);
          *(_OWORD *)((char *)this + 360) = *(_OWORD *)(v9 + 360);
          *(_OWORD *)((char *)this + 376) = *(_OWORD *)(v9 + 376);
          *(_OWORD *)((char *)this + 392) = *(_OWORD *)(v9 + 392);
          *(_OWORD *)((char *)this + 408) = *(_OWORD *)(v9 + 408);
          *(_QWORD *)(*((_QWORD *)a2 + 59) + 344LL) = 0LL;
        }
      }
    }
  }
  else
  {
    CancelInputState(a2, 0);
  }
  v11 = 1;
  v12 = tagQ::CheckTransferState((__int64)this, (__int64)a2, 120, a4) - 1;
  if ( v12 )
  {
    if ( v12 == 1 )
    {
      tagQ::LockFocusWnd(this, *(_QWORD *)(*((_QWORD *)a2 + 59) + 120LL), 0LL);
      tagQ::UnlockFocusWnd(*((tagQ **)a2 + 59));
    }
  }
  else
  {
    CancelInputState(a2, 1u);
  }
  ClearDelegationCapture(*((_QWORD *)a2 + 59));
  ClearDelegationCapture((__int64)this);
  v13 = tagQ::CheckTransferState((__int64)this, (__int64)a2, 112, a4) - 1;
  if ( v13 )
  {
    if ( v13 == 1 )
    {
      LockCaptureWindow(this, *(struct tagWND **)(*((_QWORD *)a2 + 59) + 112LL));
      UnlockCaptureWindow(*((_QWORD *)a2 + 59), v14);
      EditionUpdateRawMouseMode((__int64)this);
      v15 = *((_DWORD *)this + 109);
      *((_DWORD *)this + 39) = *(_DWORD *)(*((_QWORD *)a2 + 59) + 156LL);
      *((_DWORD *)this + 109) = v15 ^ (*(_DWORD *)(*((_QWORD *)a2 + 59) + 436LL) ^ v15) & 0x100000;
    }
  }
  else
  {
    CancelInputState(a2, 2u);
  }
  v16 = tagQ::CheckTransferState((__int64)this, (__int64)a2, 136, a4) - 1;
  if ( v16 )
  {
    if ( v16 != 1 )
      goto LABEL_25;
    v35[0] = (char *)this + 136;
    v18 = *(_QWORD *)(*((_QWORD *)a2 + 59) + 136LL);
    goto LABEL_24;
  }
  v17 = *((_QWORD *)this + 16);
  if ( v17 )
  {
    if ( *((_QWORD *)this + 17) )
    {
      v18 = *(_QWORD *)(*((_QWORD *)a2 + 59) + 136LL);
      if ( v18 )
      {
        if ( *(_QWORD *)(v17 + 88) == v18 )
        {
          v35[0] = (char *)this + 136;
LABEL_24:
          v35[1] = v18;
          HMAssignmentLock(v35, 0LL);
          HMAssignmentUnlock(*((_QWORD *)a2 + 59) + 136LL);
        }
      }
    }
  }
LABEL_25:
  v19 = *((_QWORD *)a2 + 59);
  if ( a2 == *(struct tagTHREADINFO **)(v19 + 72) )
  {
    *((_DWORD *)this + 109) ^= (*(_DWORD *)(v19 + 436) ^ *((_DWORD *)this + 109)) & 0xFFEFFFFF;
    if ( !(unsigned int)IsInsideMenuLoop((__int64)a2) )
    {
      v17 = (unsigned int)v17 & 0xFFFFFFBF;
      *((_DWORD *)this + 109) = v17;
    }
    v19 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
    {
      v11 = 0;
    }
    v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v21 = *(_QWORD *)(*((_QWORD *)a2 + 59) + 72LL);
      v22 = (unsigned __int8)PtiCurrent(*(__int64 *)&WPP_GLOBAL_Control, v17);
      v23 = *((_QWORD *)a2 + 59);
      v24 = v22;
      UserSessionState = W32GetUserSessionState(v26, v25);
      LOBYTE(v28) = v20;
      LOBYTE(v29) = v11;
      WPP_RECORDER_AND_TRACE_SF_qqq(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v29,
        v28,
        *(_QWORD *)(UserSessionState + 69416),
        4,
        18,
        43,
        (__int64)&WPP_da3158d35553345ce8aff0ab01fc816b_Traceguids,
        v23,
        v24,
        v21);
    }
    *(_QWORD *)(*((_QWORD *)a2 + 59) + 72LL) = 0LL;
  }
  v30 = *(_QWORD *)(W32GetUserSessionState(v19, v17) + 36312);
  if ( v30 && a2 == *(struct tagTHREADINFO **)(v30 + 16) )
    LockQCursor(this, *(struct tagCURSOR **)(*((_QWORD *)a2 + 59) + 424LL));
  *((_DWORD *)this + 108) += *((_DWORD *)a2 + 198);
  *((_QWORD *)this + 12) = a2;
  *((_QWORD *)this + 13) = a2;
  v31 = *(_DWORD *)(*((_QWORD *)a2 + 58) + 872LL);
  if ( *((_DWORD *)this + 118) < v31 )
  {
    *(_QWORD *)((char *)this + 476) = 0LL;
    *((_DWORD *)this + 118) = v31;
  }
  v32 = tagTHREADINFO::AssignQueue(a2, this);
  v33 = v32;
  if ( v32 != a3 )
  {
    v34 = (struct tagQMSG *)*((_QWORD *)v32 + 3);
    *((_QWORD *)v32 + 3) = 0LL;
    *((_QWORD *)v32 + 4) = 0LL;
    *((_QWORD *)v32 + 7) = 0LL;
    *((_DWORD *)v32 + 10) = 0;
    RedistributeInput(v34, v32, 0LL);
    zzzDestroyQueue(v33, a2);
  }
}
