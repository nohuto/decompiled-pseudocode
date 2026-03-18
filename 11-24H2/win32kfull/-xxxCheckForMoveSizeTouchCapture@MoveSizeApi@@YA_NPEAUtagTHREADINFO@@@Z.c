/*
 * XREFs of ?xxxCheckForMoveSizeTouchCapture@MoveSizeApi@@YA_NPEAUtagTHREADINFO@@@Z @ 0x1402A7A5C
 * Callers:
 *     ?PostAsyncMoveSize@MoveSizeApi@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVESIZE_OPERATION@@@Z @ 0x1402A6280 (-PostAsyncMoveSize@MoveSizeApi@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVESIZE_OPERAT.c)
 *     ?xxxEnterMoveSizeLoopOnThread@MoveSizeApi@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVESIZE_OPERATION@@@Z @ 0x1402A8928 (-xxxEnterMoveSizeLoopOnThread@MoveSizeApi@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVES.c)
 * Callees:
 *     xxxPromotePointerToMouse @ 0x1400A7304 (xxxPromotePointerToMouse.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     GetPromotablePointerIdForThread @ 0x14028C608 (GetPromotablePointerIdForThread.c)
 */

char __fastcall MoveSizeApi::xxxCheckForMoveSizeTouchCapture(MoveSizeApi *this, struct tagTHREADINFO *a2)
{
  __int64 v2; // rcx
  unsigned __int16 PromotablePointerIdForThread; // di
  char v4; // bl
  bool v5; // si
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  __int64 v9; // rdx
  char v10; // bl
  bool v11; // si
  __int64 v12; // rax
  int v13; // r8d
  int v14; // edx

  PromotablePointerIdForThread = GetPromotablePointerIdForThread((__int64)this, (__int64)a2);
  if ( !PromotablePointerIdForThread )
    return 0;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (v2 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), (v2 & 1) == 0)
    || (v4 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v4 = 0;
  }
  v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(v2, *(_QWORD *)&WPP_GLOBAL_Control);
    LOBYTE(v7) = v5;
    LOBYTE(v8) = v4;
    WPP_RECORDER_AND_TRACE_SF_d(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v8,
      v7,
      *(_QWORD *)(UserSessionState + 69416),
      4,
      1,
      121,
      (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids,
      PromotablePointerIdForThread);
  }
  if ( !xxxPromotePointerToMouse(PromotablePointerIdForThread, 65537LL) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
      || (v10 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u) )
    {
      v10 = 0;
    }
    v11 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v12 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v9);
      LOBYTE(v13) = v11;
      LOBYTE(v14) = v10;
      WPP_RECORDER_AND_TRACE_SF_d(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v14,
        v13,
        *(_QWORD *)(v12 + 69416),
        2,
        1,
        122,
        (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids,
        PromotablePointerIdForThread);
    }
    return 0;
  }
  return 1;
}
