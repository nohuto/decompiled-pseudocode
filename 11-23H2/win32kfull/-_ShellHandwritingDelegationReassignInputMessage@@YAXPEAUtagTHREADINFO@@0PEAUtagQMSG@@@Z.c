/*
 * XREFs of ?_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01B5CC4
 * Callers:
 *     ?_HandleShellHandwritingDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01B5B50 (-_HandleShellHandwritingDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C0044C94 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     IsPointerInputMessage @ 0x1C0118DA8 (IsPointerInputMessage.c)
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1C0118E18 (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 *     DelQEntry @ 0x1C011923C (DelQEntry.c)
 *     WPP_RECORDER_AND_TRACE_SF_qiqdd @ 0x1C012B930 (WPP_RECORDER_AND_TRACE_SF_qiqdd.c)
 *     ?FindMsgInsertionPoint@@YAPEAUtagQMSG@@QEAUtagQ@@QEAU1@_N@Z @ 0x1C0139C50 (-FindMsgInsertionPoint@@YAPEAUtagQMSG@@QEAUtagQ@@QEAU1@_N@Z.c)
 *     DelegateCoalescePointerMessage @ 0x1C0152B52 (DelegateCoalescePointerMessage.c)
 *     ?ShellHandwritingDelegationReassignMessage@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C01B5370 (-ShellHandwritingDelegationReassignMessage@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     DelegateChainingResetAndCoalescePointerMessage @ 0x1C01C6008 (DelegateChainingResetAndCoalescePointerMessage.c)
 */

void __fastcall _ShellHandwritingDelegationReassignInputMessage(
        struct tagTHREADINFO *a1,
        struct tagTHREADINFO *a2,
        struct tagQMSG *a3)
{
  char v4; // si
  int v5; // r15d
  __int64 v8; // rdi
  __int64 v9; // r9
  char v10; // dl
  char v11; // r8
  struct tagQMSG *MsgInsertionPoint; // rax
  struct tagQMSG *v13; // rcx
  _QWORD *v14; // rax
  BOOL v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // [rsp+20h] [rbp-68h]
  __int64 v19; // [rsp+28h] [rbp-60h]

  v4 = 1;
  v5 = (*((_DWORD *)a2 + 318) >> 13) & 1;
  InputTraceLogging::DManip::ShellHandwritingDelegationReassignMessage(a3);
  v8 = *((_QWORD *)a2 + 54);
  DelQEntry(*((_QWORD *)a1 + 54) + 24LL, (__int64)a3, 0);
  v9 = *((_QWORD *)a1 + 54);
  if ( *(struct tagQMSG **)(v9 + 88) == a3 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) == 0
      || (v10 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      v10 = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (v11 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      v11 = 0;
    }
    if ( v10 || v11 )
      WPP_RECORDER_AND_TRACE_SF_qq(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v10,
        v11,
        (__int64)gFullLog,
        5u,
        0x12u,
        0xCu,
        (__int64)&WPP_0bd01f6e78ca3341e624bb2278b12953_Traceguids,
        v9,
        *(_QWORD *)(v9 + 88));
    *(_QWORD *)(*((_QWORD *)a1 + 54) + 88LL) = 0LL;
  }
  *((_DWORD *)a3 + 25) &= 0xF7FFFFEF;
  *((_QWORD *)a3 + 1) = 0LL;
  *(_QWORD *)a3 = 0LL;
  *((_QWORD *)a3 + 13) = a2;
  MsgInsertionPoint = FindMsgInsertionPoint((struct tagQ *const)v8, a3, v5);
  v13 = MsgInsertionPoint;
  if ( MsgInsertionPoint )
  {
    v14 = (_QWORD *)*((_QWORD *)MsgInsertionPoint + 1);
    if ( v14 )
      *v14 = a3;
    else
      *(_QWORD *)(v8 + 24) = a3;
    *(_QWORD *)a3 = v13;
    *((_QWORD *)a3 + 1) = *((_QWORD *)v13 + 1);
    *((_QWORD *)v13 + 1) = a3;
  }
  else
  {
    if ( *(_QWORD *)(v8 + 24) )
    {
      **(_QWORD **)(v8 + 32) = a3;
      *((_QWORD *)a3 + 1) = *(_QWORD *)(v8 + 32);
    }
    else
    {
      *(_QWORD *)(v8 + 24) = a3;
    }
    *(_QWORD *)(v8 + 32) = a3;
  }
  ++*(_DWORD *)(v8 + 40);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v4 = 0;
  }
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qiqdd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v4,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      v8 + 24,
      v18,
      v19,
      0xDu,
      (__int64)&WPP_0bd01f6e78ca3341e624bb2278b12953_Traceguids);
  v15 = IsPointerInputMessage(*((_DWORD *)a3 + 6));
  if ( v5 )
  {
    if ( !v15 || !(unsigned int)DelegateChainingResetAndCoalescePointerMessage(v17, v16, a3) )
    {
      *((_DWORD *)a3 + 25) = *((_DWORD *)a3 + 25) & 0xFFFFFF9F | 0x20;
LABEL_36:
      WakeSomeone(v8, (__int64)a2, *((_DWORD *)a3 + 6), a3);
    }
  }
  else if ( !v15 || !(unsigned int)DelegateCoalescePointerMessage((__int64)a2, 0, (__int64)a3) )
  {
    goto LABEL_36;
  }
}
