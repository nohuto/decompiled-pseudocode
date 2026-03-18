/*
 * XREFs of ?SetRestoreToArrangeRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@@Z @ 0x14014EB1C
 * Callers:
 *     ?Update@CHECKPOINT@@AEAAXPEBUtagWND@@AEBUtagRECT@@@Z @ 0x14014E9BC (-Update@CHECKPOINT@@AEAAXPEBUtagWND@@AEBUtagRECT@@@Z.c)
 *     _anonymous_namespace_::xxxMigrateWindowCheckpoint @ 0x14021FA10 (_anonymous_namespace_--xxxMigrateWindowCheckpoint.c)
 *     ?UpdateCheckpointForAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUCHECKPOINT@@AEBUtagRECT@@W4ActionModifier@1@@Z @ 0x1402D50AC (-UpdateCheckpointForAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUCHECKPOINT@@AEBUtagRECT@@W4Acti.c)
 *     ?Init@CHECKPOINT@@AEAAXPEBUtagWND@@AEBUtagRECT@@@Z @ 0x1402DB2B8 (-Init@CHECKPOINT@@AEAAXPEBUtagWND@@AEBUtagRECT@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qdddddd @ 0x1402BFB0C (WPP_RECORDER_AND_TRACE_SF_qdddddd.c)
 */

void __fastcall CHECKPOINT::SetRestoreToArrangeRect(
        CHECKPOINT *this,
        const struct tagWND *a2,
        const struct tagRECT *a3)
{
  __int64 v3; // r9
  char v4; // r15
  char v5; // r12
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx

  v3 = *(_QWORD *)((char *)this + 36) - *(_QWORD *)&a3->left;
  if ( !v3 )
    v3 = *(_QWORD *)((char *)this + 44) - *(_QWORD *)&a3->right;
  if ( v3 )
  {
    *(struct tagRECT *)((char *)this + 36) = *a3;
    v4 = 1;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v5 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v5 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
    {
      v4 = 0;
    }
    if ( v5 || v4 )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      LOBYTE(v7) = v4;
      LOBYTE(v8) = v5;
      WPP_RECORDER_AND_TRACE_SF_qdddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v8,
        v7,
        *(_QWORD *)(UserSessionState + 69416));
    }
  }
}
