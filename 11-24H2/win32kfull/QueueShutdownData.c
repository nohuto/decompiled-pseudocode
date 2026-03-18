/*
 * XREFs of QueueShutdownData @ 0x1400A5D70
 * Callers:
 *     xxxSetInformationThread @ 0x140106AA0 (xxxSetInformationThread.c)
 *     NtUserShutdownBlockReasonCreate @ 0x14012B7F0 (NtUserShutdownBlockReasonCreate.c)
 *     ?xxxDestroyWindow_Prologue@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@PEAHPEA_N@Z @ 0x14024FDE0 (-xxxDestroyWindow_Prologue@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@PEAHPEA_N@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140118D30 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 */

unsigned int *__fastcall QueueShutdownData(__int64 a1, unsigned __int64 a2)
{
  unsigned int *result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  char v10; // si
  char v11; // di
  bool v12; // bl
  __int64 v13; // rax
  int v14; // r8d
  int v15; // edx
  __int64 UserSessionState; // rax

  result = (unsigned int *)W32GetUserSessionState(a1, a2);
  if ( *((_QWORD *)result + 7939) )
  {
    if ( a1 == *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19176)
      || a1 == 0xFFFF
      || (v9 = ValidateHwndEx(a1, 0LL, 0LL), v10 = v9, v11 = 1, v9)
      && (v8 = *(_QWORD *)(v9 + 40), *(_DWORD *)(v8 + 236) == 1)
      && (*(_BYTE *)(v8 + 232) & 0x40) == 0 )
    {
      UserSessionState = W32GetUserSessionState(v8, v7);
      return (unsigned int *)PostEventMessageEx(
                               *(struct tagTHREADINFO **)(*(_QWORD *)(UserSessionState + 63512) + 16LL),
                               *(struct tagQ **)(*(_QWORD *)(*(_QWORD *)(UserSessionState + 63512) + 16LL) + 472LL),
                               0x13u,
                               *(struct tagWND **)(UserSessionState + 63512),
                               0x4Au,
                               a2,
                               a1,
                               0LL);
    }
    else
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x400) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
      {
        v11 = 0;
      }
      result = &WPP_RECORDER_INITIALIZED;
      v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v13 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v7);
        LOBYTE(v14) = v12;
        LOBYTE(v15) = v11;
        return (unsigned int *)WPP_RECORDER_AND_TRACE_SF_q(
                                 *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                                 v15,
                                 v14,
                                 *(_QWORD *)(v13 + 69416),
                                 4,
                                 11,
                                 30,
                                 (__int64)&WPP_097ed2134af63c79f9965b85d38c414a_Traceguids,
                                 v10);
      }
    }
  }
  return result;
}
