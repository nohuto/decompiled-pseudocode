/*
 * XREFs of ?xxxEnterMoveSizeLoopOnThread@MoveSizeApi@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVESIZE_OPERATION@@@Z @ 0x1402A8928
 * Callers:
 *     NtUserEnterMoveSizeLoop @ 0x1402948F0 (NtUserEnterMoveSizeLoop.c)
 *     ?xxxProcessEnterMoveSizeRequest@MoveSizeApi@@YAXPEAUtagWND@@_K@Z @ 0x1402A9390 (-xxxProcessEnterMoveSizeRequest@MoveSizeApi@@YAXPEAUtagWND@@_K@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qddd @ 0x140165FF4 (WPP_RECORDER_AND_TRACE_SF_qddd.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14024AF80 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxCheckForMoveSizeTouchCapture@MoveSizeApi@@YA_NPEAUtagTHREADINFO@@@Z @ 0x1402A7A5C (-xxxCheckForMoveSizeTouchCapture@MoveSizeApi@@YA_NPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxMoveSizeWithoutCapture@MoveSizeApi@@YAXPEAUtagWND@@UtagPOINT@@1W4_MOVESIZE_OPERATION@@@Z @ 0x1402A905C (-xxxMoveSizeWithoutCapture@MoveSizeApi@@YAXPEAUtagWND@@UtagPOINT@@1W4_MOVESIZE_OPERATION@@@Z.c)
 *     ?zzzSetMoveSizeCursor@MoveSizeApi@@YAXW4_MOVESIZE_OPERATION@@@Z @ 0x1402AA7D8 (-zzzSetMoveSizeCursor@MoveSizeApi@@YAXW4_MOVESIZE_OPERATION@@@Z.c)
 */

void __fastcall MoveSizeApi::xxxEnterMoveSizeLoopOnThread(
        MoveSizeApi *a1,
        struct tagWND *a2,
        __int64 a3,
        unsigned int a4)
{
  bool v7; // si
  unsigned __int16 v8; // r12
  bool v9; // r15
  __int64 v10; // rdi
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  struct tagTHREADINFO *v14; // rdx
  MoveSizeApi *v15; // [rsp+90h] [rbp+8h] BYREF
  __int64 v16; // [rsp+A0h] [rbp+18h]

  v16 = a3;
  v15 = a1;
  v7 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v8 = WORD2(v16);
  v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v10 = *(_QWORD *)a2;
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    LOBYTE(v12) = v9;
    LOBYTE(v13) = v7;
    WPP_RECORDER_AND_TRACE_SF_qddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v13,
      v12,
      *(_QWORD *)(UserSessionState + 69416),
      4,
      1,
      123,
      (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids,
      v10,
      a3,
      v8,
      a4);
  }
  if ( (unsigned __int8)IsCapturedByThread(&v15) || MoveSizeApi::xxxCheckForMoveSizeTouchCapture(v15, v14) )
  {
    MoveSizeApi::zzzSetMoveSizeCursor(a4);
    xxxMoveSize(a2, a4, (unsigned __int16)a3 | (v8 << 16));
  }
  else
  {
    MoveSizeApi::xxxMoveSizeWithoutCapture(a2, a3, *((_QWORD *)v15 + 102), a4);
  }
}
