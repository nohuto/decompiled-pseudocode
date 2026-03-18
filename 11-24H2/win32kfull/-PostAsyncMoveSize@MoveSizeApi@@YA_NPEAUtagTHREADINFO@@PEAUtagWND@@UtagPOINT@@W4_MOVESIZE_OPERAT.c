/*
 * XREFs of ?PostAsyncMoveSize@MoveSizeApi@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVESIZE_OPERATION@@@Z @ 0x1402A6280
 * Callers:
 *     NtUserEnterMoveSizeLoop @ 0x1402948F0 (NtUserEnterMoveSizeLoop.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140118D30 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     WPP_RECORDER_AND_TRACE_SF_qddd @ 0x140165FF4 (WPP_RECORDER_AND_TRACE_SF_qddd.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x140276AB0 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?xxxCheckForMoveSizeTouchCapture@MoveSizeApi@@YA_NPEAUtagTHREADINFO@@@Z @ 0x1402A7A5C (-xxxCheckForMoveSizeTouchCapture@MoveSizeApi@@YA_NPEAUtagTHREADINFO@@@Z.c)
 */

char __fastcall MoveSizeApi::PostAsyncMoveSize(MoveSizeApi *a1, LARGE_INTEGER *a2, __int64 a3, int a4)
{
  struct tagQ **QuadPart; // r13
  bool v8; // si
  bool v9; // bp
  LARGE_INTEGER v10; // rdi
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  __int64 v14; // rdx
  char *v15; // rdi
  bool v16; // bl
  bool v17; // di
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  char result; // al
  unsigned int ThreadId; // eax
  struct tagTHREADINFO *v23; // rdx
  __int64 v24; // rdx
  bool v25; // si
  bool v26; // bp
  LONGLONG v27; // rbx
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  __int64 v31; // rdx
  bool v32; // si
  bool v33; // bp
  LONGLONG v34; // rbx
  __int64 v35; // rax
  int v36; // r8d
  int v37; // edx
  MoveSizeApi *v38; // [rsp+90h] [rbp+8h] BYREF
  __int64 v39; // [rsp+A0h] [rbp+18h]

  v39 = a3;
  v38 = a1;
  QuadPart = (struct tagQ **)a2[2].QuadPart;
  v8 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v10 = *a2;
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    LOBYTE(v12) = v9;
    LOBYTE(v13) = v8;
    WPP_RECORDER_AND_TRACE_SF_qddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v13,
      v12,
      *(_QWORD *)(UserSessionState + 69416),
      4,
      1,
      124,
      (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids,
      v10.QuadPart,
      a3,
      SBYTE4(v39),
      a4);
  }
  v15 = (char *)Win32AllocPoolZInit(16LL, 1936549205LL);
  if ( !v15 )
  {
    v16 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u;
    v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v16 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v18 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v14);
      LOBYTE(v19) = v17;
      LOBYTE(v20) = v16;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v20,
        v19,
        *(_QWORD *)(v18 + 69416),
        2,
        1,
        125,
        (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids);
    }
    return 0;
  }
  ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)v38);
  *(_QWORD *)(v15 + 4) = a3;
  *(_DWORD *)v15 = ThreadId;
  *((_DWORD *)v15 + 3) = a4;
  if ( !(unsigned __int8)IsCapturedByThread(&v38) )
    MoveSizeApi::xxxCheckForMoveSizeTouchCapture(v38, v23);
  if ( !xxxSetForegroundWindowWithOptions((__int64)a2, 2LL, 0, 0) )
  {
    v25 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
    v26 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v25 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v27 = a2->QuadPart;
      v28 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v24);
      LOBYTE(v29) = v26;
      LOBYTE(v30) = v25;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v30,
        v29,
        *(_QWORD *)(v28 + 69416),
        3,
        1,
        126,
        (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids,
        v27);
    }
  }
  if ( !(unsigned int)PostEventMessageEx(
                        (struct tagTHREADINFO *)QuadPart,
                        QuadPart[59],
                        0x20u,
                        a2,
                        0,
                        (LARGE_INTEGER)v15,
                        0LL,
                        0LL) )
  {
    v32 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u;
    v33 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v32 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v34 = a2->QuadPart;
      v35 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v31);
      LOBYTE(v36) = v33;
      LOBYTE(v37) = v32;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v37,
        v36,
        *(_QWORD *)(v35 + 69416),
        2,
        1,
        127,
        (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids,
        v34);
    }
    Win32FreePool(v15);
    return 0;
  }
  result = 1;
  *((_QWORD *)v38 + 170) |= 0x8000000000uLL;
  return result;
}
