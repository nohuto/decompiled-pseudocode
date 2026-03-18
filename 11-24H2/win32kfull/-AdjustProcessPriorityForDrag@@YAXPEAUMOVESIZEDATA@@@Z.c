/*
 * XREFs of ?AdjustProcessPriorityForDrag@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402A52F8
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14024AF80 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?ShouldAdjustModernAppFramePriority@@YA_NPEBUtagWND@@@Z @ 0x14021E260 (-ShouldAdjustModernAppFramePriority@@YA_NPEBUtagWND@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall AdjustProcessPriorityForDrag(struct MOVESIZEDATA *a1)
{
  const struct tagWND *v1; // rdi
  __int64 v2; // rdx
  __int64 v4; // r15
  __int64 v5; // rdx
  char v6; // si
  bool v7; // r14
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  __int64 v11; // rdx
  __int64 v12; // rcx
  char v13; // si
  bool v14; // bp
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx

  v1 = (const struct tagWND *)*((_QWORD *)a1 + 2);
  v2 = *((_DWORD *)a1 + 50) & 0x400000;
  v4 = *((_QWORD *)v1 + 2);
  if ( (*((_DWORD *)a1 + 50) & 0x8000) != 0 )
  {
    if ( (_DWORD)v2 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 6183);
    if ( ShouldAdjustModernAppFramePriority(v1, v2) )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
        || (v6 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v6 = 0;
      }
      v7 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v5);
        LOBYTE(v9) = v7;
        LOBYTE(v10) = v6;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v10,
          v9,
          *(_QWORD *)(UserSessionState + 69416),
          4,
          1,
          93,
          (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids);
      }
      ForegroundBoost::SetForegroundPriority(v4, 1LL, 8LL);
      *((_DWORD *)a1 + 50) |= 0x400000u;
    }
  }
  else if ( (_DWORD)v2
         && (!*(_QWORD *)(W32GetUserSessionState(a1, v2) + 18960)
          || *(_QWORD *)(*((_QWORD *)v1 + 2) + 464LL) != *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v12, v11) + 18960)
                                                                   + 464LL)) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
      || (v13 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v13 = 0;
    }
    v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v13 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v15 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v11);
      LOBYTE(v16) = v14;
      LOBYTE(v17) = v13;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v17,
        v16,
        *(_QWORD *)(v15 + 69416),
        4,
        1,
        94,
        (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids);
    }
    ForegroundBoost::SetForegroundPriority(v4, 0LL, 8LL);
  }
}
