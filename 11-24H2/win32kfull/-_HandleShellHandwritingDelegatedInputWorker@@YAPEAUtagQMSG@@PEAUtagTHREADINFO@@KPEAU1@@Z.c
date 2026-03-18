/*
 * XREFs of ?_HandleShellHandwritingDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x14008B0C0
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140107DFC (xxxRealInternalGetMessage.c)
 *     ?_HandleShellHandwritingDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1401EACDC (-_HandleShellHandwritingDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?ShellHandwritingDelegationHandleDelegatedInput@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@K@Z @ 0x14008B250 (-ShellHandwritingDelegationHandleDelegatedInput@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@K@Z.c)
 *     ?_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x14008B318 (-_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1400A4BAC (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     ?_AttemptToCoalesceOrDestroyMessage@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z @ 0x14021D768 (-_AttemptToCoalesceOrDestroyMessage@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z.c)
 */

struct tagQMSG *__fastcall _HandleShellHandwritingDelegatedInputWorker(
        struct tagTHREADINFO *a1,
        unsigned int a2,
        struct tagQMSG *a3)
{
  __int64 v3; // r15
  __int64 v7; // rdx
  char v8; // si
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  struct tagTHREADINFO *v14; // rdx
  bool v16; // r14
  __int64 v17; // rbx
  __int64 UserSessionState; // rax
  int v19; // r8d
  int v20; // edx
  _BYTE v21[16]; // [rsp+50h] [rbp-28h] BYREF

  v3 = *(_QWORD *)a3;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v21);
  if ( (*((_DWORD *)a3 + 25) & 0x100) != 0 )
    goto LABEL_10;
  InputTraceLogging::DManip::ShellHandwritingDelegationHandleDelegatedInput(a3, a2);
  v8 = 1;
  if ( a2 != 1 )
  {
    if ( a2 != 2 )
    {
      *((_DWORD *)a3 + 25) |= 0x10u;
      goto LABEL_10;
    }
LABEL_20:
    _AttemptToCoalesceOrDestroyMessage(a1, a3);
    goto LABEL_10;
  }
  v9 = *((_DWORD *)a3 + 25);
  if ( (v9 & 0x20) == 0 )
    goto LABEL_10;
  v10 = *((_QWORD *)a3 + 2);
  LOBYTE(v7) = 1;
  *((_DWORD *)a3 + 25) = v9 & 0xFFFFFF9F | 0x40;
  v12 = HMValidateHandleNoSecure(v10, v7);
  if ( !v12 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
    {
      v8 = 0;
    }
    v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v17 = *((_QWORD *)a3 + 2);
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v11);
      LOBYTE(v19) = v16;
      LOBYTE(v20) = v8;
      WPP_RECORDER_AND_TRACE_SF_qq(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v20,
        v19,
        *(_QWORD *)(UserSessionState + 69416),
        3,
        18,
        16,
        (__int64)&WPP_da3158d35553345ce8aff0ab01fc816b_Traceguids,
        v17,
        (char)a3);
    }
    goto LABEL_20;
  }
  v13 = *((_DWORD *)a3 + 25);
  if ( (v13 & 0x200) != 0 )
  {
    *((_QWORD *)a3 + 2) = 0LL;
    *((_DWORD *)a3 + 25) = v13 & 0xFFFFFDFF;
  }
  v14 = *(struct tagTHREADINFO **)(v12 + 264);
  if ( !v14 )
    v14 = *(struct tagTHREADINFO **)(v12 + 16);
  _ShellHandwritingDelegationReassignInputMessage(a1, v14, a3);
LABEL_10:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v21);
  return (struct tagQMSG *)v3;
}
