/*
 * XREFs of Command_HandleCommandRingStoppedEvent @ 0x1400367E8
 * Callers:
 *     Command_HandleCommandCompletionEvent @ 0x140008884 (Command_HandleCommandCompletionEvent.c)
 * Callees:
 *     Command_InternalSendCommand @ 0x1400080E4 (Command_InternalSendCommand.c)
 *     DynamicLock_Acquire @ 0x1400087C0 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x140008E60 (DynamicLock_Release.c)
 *     WPP_RECORDER_SF_ @ 0x14000CCC8 (WPP_RECORDER_SF_.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x14001103C (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x140013068 (Controller_ReportFatalError.c)
 *     Controller_LowerAndTrackIrql @ 0x140019630 (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x14001C700 (Controller_RaiseAndTrackIrql.c)
 *     XilCommand_WriteDoorbell @ 0x14002BF80 (XilCommand_WriteDoorbell.c)
 *     Command_ProcessCrbCompletion @ 0x14002F8F8 (Command_ProcessCrbCompletion.c)
 *     WPP_RECORDER_SF_ii @ 0x14003E084 (WPP_RECORDER_SF_ii.c)
 *     XilCommand_AdvanceCommandRingControlDequeuePointer @ 0x14003E6CC (XilCommand_AdvanceCommandRingControlDequeuePointer.c)
 *     Etw_CommandCompleteError @ 0x14004EFBC (Etw_CommandCompleteError.c)
 */

char __fastcall Command_HandleCommandRingStoppedEvent(__int64 a1, __int128 *a2)
{
  __int64 v2; // rdi
  char v3; // r13
  __int64 v6; // rcx
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rsi
  unsigned int *v13; // rsi
  _QWORD *v14; // rax
  __int64 v15; // rcx
  int v16; // ecx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int128 *v21; // rdx
  _OWORD ***v22; // rax
  char result; // al
  __int64 v24; // rcx
  __int128 v25; // [rsp+40h] [rbp-10h] BYREF

  v25 = 0LL;
  v2 = 0LL;
  v3 = 0;
  if ( KeGetCurrentIrql() == 2 )
  {
    v6 = *(_QWORD *)(a1 + 8);
    if ( *(_BYTE *)(v6 + 1001) )
    {
      Controller_LowerAndTrackIrql((_QWORD *)v6);
      v3 = 1;
    }
  }
  DynamicLock_Acquire(*(_QWORD *)(a1 + 112));
  *(_BYTE *)(a1 + 121) = 0;
  if ( *(_BYTE *)(a1 + 136) )
    v10 = *(_QWORD *)(a1 + 176);
  else
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 24LL);
  v11 = *(_QWORD *)a2;
  v12 = v10 + 16LL * *(unsigned int *)(a1 + 44);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ii(*(_QWORD *)(a1 + 16), v7, v8, v9);
  if ( v11 == v12
    || (v13 = (unsigned int *)(a1 + 44), v11 == *(_QWORD *)(a1 + 56))
    && (v13 = (unsigned int *)(a1 + 44), !*(_DWORD *)(a1 + 44)) )
  {
    v14 = (_QWORD *)(a1 + 80);
    v15 = *(_QWORD *)(a1 + 80);
    if ( v15 != a1 + 80 )
    {
      v2 = *(_QWORD *)(a1 + 80);
      v16 = *(_DWORD *)(v15 + 56);
      if ( v16 )
      {
        if ( v16 == 5 || v16 == 10 )
          v2 = 0LL;
      }
      else
      {
        v17 = *(_QWORD *)v2;
        if ( *(_QWORD *)(*(_QWORD *)v2 + 8LL) != v2 || (v18 = *(_QWORD **)(v2 + 8), *v18 != v2) )
LABEL_42:
          __fastfail(3u);
        *v18 = v17;
        *(_QWORD *)(v17 + 8) = v18;
        v19 = (unsigned int)(*(_DWORD *)(a1 + 44) + 1);
        *(_DWORD *)(a1 + 44) = v19;
        if ( (_DWORD)v19 == *(_DWORD *)(a1 + 48) )
        {
          *(_DWORD *)(a1 + 44) = 0;
          v19 = 0LL;
        }
        XilCommand_AdvanceCommandRingControlDequeuePointer(a1, v19);
        v14 = (_QWORD *)(a1 + 80);
      }
    }
    if ( (_QWORD *)*v14 != v14 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 4;
        WPP_RECORDER_SF_(*(_QWORD *)(a1 + 16), v7, 7, 42, (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids);
      }
      XilCommand_WriteDoorbell(a1);
    }
    v20 = *(_QWORD *)(a1 + 96);
    if ( v20 != a1 + 96 )
    {
      *((_QWORD *)&v25 + 1) = *(_QWORD *)(a1 + 104);
      *(_QWORD *)&v25 = v20;
      *(_QWORD *)(v20 + 8) = &v25;
      **((_QWORD **)&v25 + 1) = &v25;
      *(_QWORD *)(a1 + 104) = a1 + 96;
      *(_QWORD *)(a1 + 96) = a1 + 96;
      goto LABEL_32;
    }
    v21 = &v25;
    *((_QWORD *)&v25 + 1) = &v25;
    *(_QWORD *)&v25 = &v25;
    while ( v21 != &v25 )
    {
      if ( *((__int128 **)v21 + 1) != &v25 )
        goto LABEL_42;
      v22 = *(_OWORD ****)v21;
      if ( *(__int128 **)(*(_QWORD *)v21 + 8LL) != v21 )
        goto LABEL_42;
      *(_QWORD *)&v25 = *(_QWORD *)v21;
      v22[1] = (_OWORD **)&v25;
      Command_InternalSendCommand(a1, (__int64)v21, v8, v9);
LABEL_32:
      v21 = (__int128 *)v25;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 16), v7, 7, 43, (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids);
    }
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD *)(a1 + 8),
      0,
      0,
      0x8000LL,
      "After command abort completion, software and hardware dequeue pointers do not match",
      (__int128 *)(*(_QWORD *)(a1 + 72) + 16LL * *v13),
      a2);
    Controller_ReportFatalError(*(_QWORD *)(a1 + 8), 2, 4115, 0, 0LL, 0LL, 0LL);
    *(_DWORD *)(a1 + 36) = 2;
  }
  result = DynamicLock_Release(*(_QWORD *)(a1 + 112));
  if ( v3 )
    result = Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 8));
  if ( v2 )
  {
    *(_BYTE *)(v2 + 60) = 25;
    Etw_CommandCompleteError(v24, a1, v2, 2LL);
    return Command_ProcessCrbCompletion(v2);
  }
  return result;
}
