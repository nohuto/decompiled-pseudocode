/*
 * XREFs of ?xxxCommitMoveSize@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402A7BD4
 * Callers:
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x14024A45C (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     _MonitorFromRect @ 0x140026BB0 (_MonitorFromRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ??1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x140210C38 (--1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 *     ??0CWindowAction@AdvancedWindowPos@@QEAA@W4ActionOptions@1@@Z @ 0x1402A505C (--0CWindowAction@AdvancedWindowPos@@QEAA@W4ActionOptions@1@@Z.c)
 *     ?KeepCheckpointLeftRightAligned@@YA_NPEBUMOVESIZEDATA@@@Z @ 0x1402A6100 (-KeepCheckpointLeftRightAligned@@YA_NPEBUMOVESIZEDATA@@@Z.c)
 *     ?MarkActionForMoveSizeShellNotifications@@YAXPEAUMOVESIZEDATA@@PEAVCWindowAction@AdvancedWindowPos@@@Z @ 0x1402A61FC (-MarkActionForMoveSizeShellNotifications@@YAXPEAUMOVESIZEDATA@@PEAVCWindowAction@AdvancedWindowP.c)
 *     ?SetMonitor@CWindowAction@AdvancedWindowPos@@QEAAXPEAUtagMONITOR@@_NPEBUtagWND@@@Z @ 0x1402A68DC (-SetMonitor@CWindowAction@AdvancedWindowPos@@QEAAXPEAUtagMONITOR@@_NPEBUtagWND@@@Z.c)
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D5DB4 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall xxxCommitMoveSize(struct MOVESIZEDATA *a1)
{
  __int64 v1; // rdx
  const struct tagWND *v3; // r14
  char v4; // r13
  char v5; // bl
  bool v6; // si
  __int64 v7; // rax
  int v8; // r8d
  int v9; // edx
  __int64 v10; // rbx
  __int64 UserSessionState; // rax
  int v12; // edx
  int v13; // r8d
  int v14; // r8d
  __m128i v15; // xmm1
  int v16; // r9d
  __int32 v17; // r13d
  int v18; // ebx
  int v19; // r9d
  struct tagMONITOR *v20; // rdx
  __int64 v21; // rdx
  char v22; // r15
  char v23; // bl
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  __int64 v27; // rdx
  bool v28; // [rsp+50h] [rbp-B0h]
  __m128i v29; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v30[10]; // [rsp+70h] [rbp-90h] BYREF
  int v31; // [rsp+98h] [rbp-68h]
  __m128i v32; // [rsp+9Ch] [rbp-64h]
  char v33[40]; // [rsp+128h] [rbp+28h] BYREF

  v1 = *((unsigned int *)a1 + 50);
  v3 = (const struct tagWND *)*((_QWORD *)a1 + 2);
  v4 = 1;
  if ( (v1 & 0x80u) == 0LL || (*(_BYTE *)(*((_QWORD *)v3 + 5) + 31LL) & 1) == 0 )
  {
    LODWORD(v1) = v1 | 0x1000000;
    *((_DWORD *)a1 + 50) = v1;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
    {
      v4 = 0;
    }
    v28 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v10 = *(_QWORD *)v3;
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v1);
      LOBYTE(v12) = v4;
      LOBYTE(v13) = v28;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v12,
        v13,
        *(_QWORD *)(UserSessionState + 69416),
        4,
        1,
        57,
        (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids,
        v10);
    }
    AdvancedWindowPos::CWindowAction::CWindowAction((__int64)v30, 1);
    v14 = v30[0];
    v15 = *(__m128i *)((char *)a1 + 24);
    v16 = *((_DWORD *)a1 + 50);
    v17 = *((_DWORD *)a1 + 8);
    v30[0] |= 0x10u;
    v18 = _mm_cvtsi128_si32(v15);
    v29 = v15;
    v19 = v16 & 0x10000000;
    if ( v19 )
    {
      v31 = 3;
    }
    else
    {
      if ( !*((_DWORD *)a1 + 62) && (*(_BYTE *)(*((_QWORD *)v3 + 5) + 30LL) & 1) != 0 )
      {
        v20 = (struct tagMONITOR *)*((_QWORD *)a1 + 30);
        v31 = 1;
        v30[0] = v14 | 0x30;
        AdvancedWindowPos::CWindowAction::SetMonitor((AdvancedWindowPos::CWindowAction *)v30, v20, 1, v3);
        goto LABEL_21;
      }
      v31 = 0;
    }
    v30[3] = v18;
    v30[4] = v29.m128i_i32[1];
    v30[0] = v14 | 0x36;
    v30[5] = v17 - v18;
    v30[6] = v29.m128i_i32[3] - v29.m128i_i32[1];
    if ( !v19 )
    {
      AdvancedWindowPos::CWindowAction::SetMonitor(
        (AdvancedWindowPos::CWindowAction *)v30,
        *((struct tagMONITOR **)a1 + 27),
        0,
        v3);
LABEL_39:
      MarkActionForMoveSizeShellNotifications(a1, (struct AdvancedWindowPos::CWindowAction *)v30);
      AdvancedWindowPos::xxxApplyWindowAction(v3, v30, 9LL);
      CThreadLockedCurrentMonitorTopologyPtr::~CThreadLockedCurrentMonitorTopologyPtr(
        (CThreadLockedCurrentMonitorTopologyPtr *)v33,
        v27);
      return;
    }
LABEL_21:
    v29 = *(__m128i *)((char *)a1 + 152);
    if ( KeepCheckpointLeftRightAligned(a1) )
    {
      v29.m128i_i32[0] = v18;
      v29.m128i_i32[2] = v17;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
        || (v22 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v22 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v23 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v23 = 0;
      }
      if ( v22 || v23 )
      {
        v24 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v21);
        LOBYTE(v25) = v23;
        LOBYTE(v26) = v22;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v26,
          v25,
          *(_QWORD *)(v24 + 69416),
          5,
          1,
          58,
          (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids);
      }
    }
    else if ( MonitorFromRect(v29.m128i_i32, 2u, *(_DWORD *)(*((_QWORD *)v3 + 5) + 288LL)) != *((_QWORD *)a1 + 27) )
    {
      v30[0] |= 0x80u;
    }
    v30[0] |= 0x40u;
    v32 = v29;
    goto LABEL_39;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
    || (v5 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v5 = 0;
  }
  v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v7 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v1);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v9,
      v8,
      *(_QWORD *)(v7 + 69416),
      4,
      1,
      56,
      (__int64)&WPP_9d843df1cd7c396fd9785948f6505ea0_Traceguids);
  }
}
