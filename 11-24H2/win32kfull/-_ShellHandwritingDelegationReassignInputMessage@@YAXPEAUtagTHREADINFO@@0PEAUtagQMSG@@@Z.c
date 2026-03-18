/*
 * XREFs of ?_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x14008B318
 * Callers:
 *     ?_HandleShellHandwritingDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x14008B0C0 (-_HandleShellHandwritingDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 * Callees:
 *     DelQEntry @ 0x14008E870 (DelQEntry.c)
 *     WPP_RECORDER_AND_TRACE_SF_qiqdd @ 0x14008EA90 (WPP_RECORDER_AND_TRACE_SF_qiqdd.c)
 *     IsPointerInputMessage @ 0x14008EC20 (IsPointerInputMessage.c)
 *     DelegateCoalescePointerMessage @ 0x14008EFBC (DelegateCoalescePointerMessage.c)
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x14008FB9C (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1400A4BAC (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     ?ShellHandwritingDelegationReassignMessage@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1401D8468 (-ShellHandwritingDelegationReassignMessage@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     DelegateChainingResetAndCoalescePointerMessage @ 0x1401F64DC (DelegateChainingResetAndCoalescePointerMessage.c)
 *     ?FindMsgInsertionPoint@@YAPEAUtagQMSG@@QEAUtagQ@@QEAU1@_N@Z @ 0x14027A394 (-FindMsgInsertionPoint@@YAPEAUtagQMSG@@QEAUtagQ@@QEAU1@_N@Z.c)
 */

void __fastcall _ShellHandwritingDelegationReassignInputMessage(
        struct tagTHREADINFO *a1,
        struct tagTHREADINFO *a2,
        struct tagQMSG *a3)
{
  char v4; // r15
  BOOL v5; // r12d
  __int64 v8; // rbp
  char v9; // bl
  char v10; // di
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  struct tagQMSG *MsgInsertionPoint; // rax
  __int64 v15; // rdx
  struct tagQMSG *v16; // rcx
  _QWORD **v17; // rcx
  _QWORD *v18; // rax
  int v19; // r12d
  bool v20; // r14
  int v21; // ebx
  __int64 v22; // rdi
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // [rsp+20h] [rbp-88h]
  int v30; // [rsp+28h] [rbp-80h]
  struct tagQMSG *v31; // [rsp+B0h] [rbp+8h]
  __int64 v32; // [rsp+B8h] [rbp+10h]
  BOOL v33; // [rsp+C0h] [rbp+18h]

  v4 = 1;
  v5 = (*((_DWORD *)a2 + 340) >> 13) & 1;
  v33 = v5;
  InputTraceLogging::DManip::ShellHandwritingDelegationReassignMessage(a3);
  v8 = *((_QWORD *)a2 + 59);
  DelQEntry(*((_QWORD *)a1 + 59) + 24LL, a3, 0LL);
  v32 = *((_QWORD *)a1 + 59);
  v9 = 0;
  v31 = *(struct tagQMSG **)(v32 + 88);
  if ( v31 == a3 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) == 0
      || (v10 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v10 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
      && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
    {
      v9 = 1;
    }
    if ( v10 || v9 )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v12) = v9;
      LOBYTE(v13) = v10;
      WPP_RECORDER_AND_TRACE_SF_qq(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v13,
        v12,
        *(_QWORD *)(UserSessionState + 69416),
        5,
        18,
        12,
        (__int64)&WPP_da3158d35553345ce8aff0ab01fc816b_Traceguids,
        v32,
        (char)v31);
    }
    *(_QWORD *)(*((_QWORD *)a1 + 59) + 88LL) = 0LL;
  }
  *((_DWORD *)a3 + 25) &= 0xF7FFFFEF;
  *((_QWORD *)a3 + 1) = 0LL;
  *(_QWORD *)a3 = 0LL;
  *((_QWORD *)a3 + 13) = a2;
  MsgInsertionPoint = FindMsgInsertionPoint((struct tagQ *const)v8, a3, v5);
  v16 = MsgInsertionPoint;
  if ( MsgInsertionPoint )
  {
    v18 = (_QWORD *)*((_QWORD *)MsgInsertionPoint + 1);
    if ( v18 )
      *v18 = a3;
    else
      *(_QWORD *)(v8 + 24) = a3;
    *(_QWORD *)a3 = v16;
    *((_QWORD *)a3 + 1) = *((_QWORD *)v16 + 1);
    *((_QWORD *)v16 + 1) = a3;
  }
  else
  {
    v17 = (_QWORD **)(v8 + 32);
    if ( *(_QWORD *)(v8 + 24) )
    {
      **v17 = a3;
      *((_QWORD *)a3 + 1) = *v17;
    }
    else
    {
      *(_QWORD *)(v8 + 24) = a3;
    }
    *v17 = a3;
  }
  v19 = *(_DWORD *)(v8 + 40) + 1;
  *(_DWORD *)(v8 + 40) = v19;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
  {
    v4 = 0;
  }
  v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v21 = *(_DWORD *)(v8 + 44);
    v22 = *((_QWORD *)a3 + 18);
    v23 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v15);
    LOBYTE(v24) = v20;
    LOBYTE(v25) = v4;
    WPP_RECORDER_AND_TRACE_SF_qiqdd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v25,
      v24,
      *(_QWORD *)(v23 + 69416),
      v29,
      v30,
      13,
      (__int64)&WPP_da3158d35553345ce8aff0ab01fc816b_Traceguids,
      (char)a3,
      v22,
      v8 + 24,
      v21,
      v19);
  }
  v26 = IsPointerInputMessage(*((unsigned int *)a3 + 6));
  if ( v33 )
  {
    if ( !v26 || !(unsigned int)DelegateChainingResetAndCoalescePointerMessage(v28, v27, a3) )
    {
      *((_DWORD *)a3 + 25) = *((_DWORD *)a3 + 25) & 0xFFFFFF9F | 0x20;
LABEL_36:
      WakeSomeone((struct tagQ *)v8, a2, *((_DWORD *)a3 + 6), a3);
    }
  }
  else if ( !v26 || !(unsigned int)DelegateCoalescePointerMessage(a2, 0LL, a3) )
  {
    goto LABEL_36;
  }
}
