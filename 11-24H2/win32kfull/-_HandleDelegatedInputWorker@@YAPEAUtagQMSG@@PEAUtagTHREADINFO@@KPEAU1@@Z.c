/*
 * XREFs of ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x14008E06C
 * Callers:
 *     ?_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1400A6290 (-_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z.c)
 *     xxxRealInternalGetMessage @ 0x140107DFC (xxxRealInternalGetMessage.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x14008D9B8 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?HandleDelegatedInput@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@K@Z @ 0x14008E28C (-HandleDelegatedInput@DManip@InputTraceLogging@@SAXPEBUtagQMSG@@K@Z.c)
 *     DelQEntry @ 0x14008E870 (DelQEntry.c)
 *     IsPointerInputMessage @ 0x14008EC20 (IsPointerInputMessage.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x14008EC50 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     DelegateReleasePointerMessage @ 0x14008EF5C (DelegateReleasePointerMessage.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1400A4BAC (WPP_RECORDER_AND_TRACE_SF_qq.c)
 */

struct tagQMSG *__fastcall _HandleDelegatedInputWorker(struct tagTHREADINFO *a1, unsigned int a2, struct tagQMSG *a3)
{
  __int64 v3; // r15
  __int64 v7; // rdx
  char v8; // r14
  char v9; // di
  __int64 v10; // rdx
  __int64 v11; // r13
  struct tagQMSG *v12; // r12
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // ecx
  __int64 UserSessionState; // rax
  int v19; // r8d
  int v20; // edx
  _BYTE v21[16]; // [rsp+50h] [rbp-38h] BYREF

  v3 = *(_QWORD *)a3;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v21);
  if ( (*((_DWORD *)a3 + 25) & 0x100) == 0 )
  {
    EtwTraceBeginDelegatedInputWorker(a3, a2);
    InputTraceLogging::DManip::HandleDelegatedInput(a3, a2);
    v8 = 0;
    v9 = 1;
    if ( a2 == 1 )
    {
      v14 = *((_DWORD *)a3 + 25);
      if ( (v14 & 0x20) != 0 )
      {
        v15 = *((_QWORD *)a3 + 2);
        LOBYTE(v7) = 1;
        *((_DWORD *)a3 + 25) = v14 & 0xFFFFFF9F | 0x40;
        v16 = HMValidateHandleNoSecure(v15, v7);
        if ( v16 )
        {
          v17 = *((_DWORD *)a3 + 25);
          if ( (v17 & 0x200) != 0 )
          {
            *((_QWORD *)a3 + 2) = 0LL;
            *((_DWORD *)a3 + 25) = v17 & 0xFFFFFDFF;
          }
          ReassignInputMessage(a1, *(struct tagTHREADINFO **)(v16 + 16), a3);
          goto LABEL_16;
        }
        goto LABEL_4;
      }
    }
    else
    {
      if ( a2 == 2 )
      {
LABEL_4:
        if ( !(unsigned int)IsPointerInputMessage(*((unsigned int *)a3 + 6))
          || !(unsigned int)DelegateReleasePointerMessage(a1, a3) )
        {
          CleanEventMessage(a3);
          DelQEntry(*((_QWORD *)a1 + 59) + 24LL, a3, 1LL);
        }
        v11 = *((_QWORD *)a1 + 59);
        v12 = *(struct tagQMSG **)(v11 + 88);
        if ( v12 == a3 )
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
            && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) != 0
            && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u )
          {
            v8 = 1;
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
            || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
          {
            v9 = 0;
          }
          if ( v8 || v9 )
          {
            UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v10);
            LOBYTE(v19) = v9;
            LOBYTE(v20) = v8;
            WPP_RECORDER_AND_TRACE_SF_qq(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v20,
              v19,
              *(_QWORD *)(UserSessionState + 69416),
              5,
              18,
              14,
              (__int64)&WPP_da3158d35553345ce8aff0ab01fc816b_Traceguids,
              v11,
              (char)v12);
          }
          *(_QWORD *)(*((_QWORD *)a1 + 59) + 88LL) = 0LL;
        }
        goto LABEL_16;
      }
      *((_DWORD *)a3 + 25) |= 0x10u;
    }
LABEL_16:
    EtwTraceEndDelegatedInputWorker(a3, a2);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v21);
  return (struct tagQMSG *)v3;
}
