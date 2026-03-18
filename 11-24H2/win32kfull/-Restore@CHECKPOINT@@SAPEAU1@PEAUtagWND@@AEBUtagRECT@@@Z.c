/*
 * XREFs of ?Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z @ 0x140269110
 * Callers:
 *     UpdateCheckpoint @ 0x140025F7C (UpdateCheckpoint.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x14014F0F0 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x14017C3F8 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxMigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x14021F87C (-xxxMigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     ?_CopyWindowCheckpoint@@YA_NPEAUtagWND@@0@Z @ 0x140228264 (-_CopyWindowCheckpoint@@YA_NPEAUtagWND@@0@Z.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x140249264 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x14024A45C (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1402A7F9C (-xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402A9B34 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1402D22E0 (-xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z.c)
 *     ?xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402D70FC (-xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 *     ?xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_NPEAUtagRECT@@3AEBU5@PEAUWindowAction@1@@Z @ 0x1402D8B48 (-xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_N.c)
 * Callees:
 *     InternalSetProp @ 0x140031458 (InternalSetProp.c)
 *     DesktopAlloc @ 0x140072EC0 (DesktopAlloc.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?Get@CHECKPOINT@@SAPEAU1@PEBUtagWND@@@Z @ 0x1400F8754 (-Get@CHECKPOINT@@SAPEAU1@PEBUtagWND@@@Z.c)
 *     ?Update@CHECKPOINT@@AEAAXPEBUtagWND@@AEBUtagRECT@@@Z @ 0x14014E9BC (-Update@CHECKPOINT@@AEAAXPEBUtagWND@@AEBUtagRECT@@@Z.c)
 *     ?Init@CHECKPOINT@@AEAAXPEBUtagWND@@AEBUtagRECT@@@Z @ 0x1402DB2B8 (-Init@CHECKPOINT@@AEAAXPEBUtagWND@@AEBUtagRECT@@@Z.c)
 */

struct CHECKPOINT *__fastcall CHECKPOINT::Restore(struct tagWND *a1, const struct tagRECT *a2)
{
  __int64 v4; // rdx
  char v5; // bp
  void *v6; // rdi
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  bool v10; // di
  __int64 v11; // rbx
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  __int64 v16; // rax
  __int64 v17; // rdx
  bool v18; // r14
  __int64 v19; // rbx
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx

  v5 = 1;
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
    return 0LL;
  v6 = CHECKPOINT::Get(a1, v4);
  if ( !v6 )
  {
    v6 = (void *)DesktopAlloc(*((_QWORD *)a1 + 3), 60LL, 1952674645LL, v7);
    if ( !v6 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
      {
        v5 = 0;
      }
      v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v11 = *(_QWORD *)a1;
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v8);
        LOBYTE(v13) = v10;
        LOBYTE(v14) = v5;
        WPP_RECORDER_AND_TRACE_SF_q(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v14,
          v13,
          *(_QWORD *)(UserSessionState + 69416),
          2,
          4,
          10,
          (__int64)&WPP_b6344e787f9c38fd67b335c61b846d12_Traceguids,
          v11);
      }
      return 0LL;
    }
    v16 = W32GetUserSessionState(v9, v8);
    if ( !(unsigned int)InternalSetProp((__int64)a1, *(unsigned __int16 *)(v16 + 41398), (__int64)v6, 9u) )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
      {
        v5 = 0;
      }
      v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v19 = *(_QWORD *)a1;
        v20 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v17);
        LOBYTE(v21) = v18;
        LOBYTE(v22) = v5;
        WPP_RECORDER_AND_TRACE_SF_q(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v22,
          v21,
          *(_QWORD *)(v20 + 69416),
          2,
          4,
          11,
          (__int64)&WPP_b6344e787f9c38fd67b335c61b846d12_Traceguids,
          v19);
      }
      RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 136LL), 0, v6);
      return 0LL;
    }
    CHECKPOINT::Init((CHECKPOINT *)v6, a1, a2);
  }
  CHECKPOINT::Update((CHECKPOINT *)v6, a1, a2);
  return (struct CHECKPOINT *)v6;
}
