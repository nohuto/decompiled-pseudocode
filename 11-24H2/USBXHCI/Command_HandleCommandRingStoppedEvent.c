/*
 * XREFs of Command_HandleCommandRingStoppedEvent @ 0x14000A09C
 * Callers:
 *     Command_HandleCommandCompletionEvent @ 0x14000B740 (Command_HandleCommandCompletionEvent.c)
 * Callees:
 *     Controller_HwVerifierBreakIfEnabled @ 0x1400049B4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x140006A08 (Controller_ReportFatalError.c)
 *     DynamicLock_Acquire @ 0x14000BF40 (DynamicLock_Acquire.c)
 *     Command_InternalSendCommand @ 0x14000C004 (Command_InternalSendCommand.c)
 *     DynamicLock_Release @ 0x14000C970 (DynamicLock_Release.c)
 *     Controller_RaiseAndTrackIrql @ 0x14000DA20 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x14000DC30 (Controller_LowerAndTrackIrql.c)
 *     WPP_RECORDER_SF_ @ 0x14001A724 (WPP_RECORDER_SF_.c)
 *     XilCommand_WriteDoorbell @ 0x14002C2D0 (XilCommand_WriteDoorbell.c)
 *     Command_ProcessCrbCompletion @ 0x14002EC48 (Command_ProcessCrbCompletion.c)
 *     WPP_RECORDER_SF_ii @ 0x14003DF74 (WPP_RECORDER_SF_ii.c)
 *     XilCommand_AdvanceCommandRingControlDequeuePointer @ 0x14003E5BC (XilCommand_AdvanceCommandRingControlDequeuePointer.c)
 *     Etw_CommandCompleteError @ 0x14004E65C (Etw_CommandCompleteError.c)
 */

__int64 __fastcall Command_HandleCommandRingStoppedEvent(__int64 a1, __int128 *a2)
{
  __int64 *v2; // rdi
  char v3; // r13
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rsi
  unsigned int *v12; // rsi
  _QWORD *v13; // rax
  __int64 v14; // rcx
  int v15; // ecx
  __int64 *v16; // rcx
  __int64 **v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int128 *v20; // rdx
  _OWORD ***v21; // rax
  __int64 result; // rax
  __int64 v23; // rcx
  __int128 v24; // [rsp+40h] [rbp-10h] BYREF

  v24 = 0LL;
  v2 = 0LL;
  v3 = 0;
  if ( KeGetCurrentIrql() == 2 && *(_BYTE *)(*(_QWORD *)(a1 + 8) + 1001LL) )
  {
    Controller_LowerAndTrackIrql();
    v3 = 1;
  }
  DynamicLock_Acquire(*(_QWORD *)(a1 + 112));
  *(_BYTE *)(a1 + 121) = 0;
  if ( *(_BYTE *)(a1 + 136) )
    v9 = *(_QWORD *)(a1 + 176);
  else
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 24LL);
  v10 = *(_QWORD *)a2;
  v11 = v9 + 16LL * *(unsigned int *)(a1 + 44);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ii(*(_QWORD *)(a1 + 16), v6, v7, v8);
  if ( v10 == v11
    || (v12 = (unsigned int *)(a1 + 44), v10 == *(_QWORD *)(a1 + 56))
    && (v12 = (unsigned int *)(a1 + 44), !*(_DWORD *)(a1 + 44)) )
  {
    v13 = (_QWORD *)(a1 + 80);
    v14 = *(_QWORD *)(a1 + 80);
    if ( v14 != a1 + 80 )
    {
      v2 = *(__int64 **)(a1 + 80);
      v15 = *(_DWORD *)(v14 + 56);
      if ( v15 )
      {
        if ( v15 == 5 || v15 == 10 )
          v2 = 0LL;
      }
      else
      {
        v16 = (__int64 *)*v2;
        if ( *(__int64 **)(*v2 + 8) != v2 || (v17 = (__int64 **)v2[1], *v17 != v2) )
LABEL_42:
          __fastfail(3u);
        *v17 = v16;
        v16[1] = (__int64)v17;
        v18 = (unsigned int)(*(_DWORD *)(a1 + 44) + 1);
        *(_DWORD *)(a1 + 44) = v18;
        if ( (_DWORD)v18 == *(_DWORD *)(a1 + 48) )
        {
          *(_DWORD *)(a1 + 44) = 0;
          v18 = 0LL;
        }
        XilCommand_AdvanceCommandRingControlDequeuePointer(a1, v18);
        v13 = (_QWORD *)(a1 + 80);
      }
    }
    if ( (_QWORD *)*v13 != v13 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 4;
        WPP_RECORDER_SF_(*(_QWORD *)(a1 + 16), v6, 7, 42, (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids);
      }
      XilCommand_WriteDoorbell(a1);
    }
    v19 = *(_QWORD *)(a1 + 96);
    if ( v19 != a1 + 96 )
    {
      *((_QWORD *)&v24 + 1) = *(_QWORD *)(a1 + 104);
      *(_QWORD *)&v24 = v19;
      *(_QWORD *)(v19 + 8) = &v24;
      **((_QWORD **)&v24 + 1) = &v24;
      *(_QWORD *)(a1 + 104) = a1 + 96;
      *(_QWORD *)(a1 + 96) = a1 + 96;
      goto LABEL_32;
    }
    v20 = &v24;
    *((_QWORD *)&v24 + 1) = &v24;
    *(_QWORD *)&v24 = &v24;
    while ( v20 != &v24 )
    {
      if ( *((__int128 **)v20 + 1) != &v24 )
        goto LABEL_42;
      v21 = *(_OWORD ****)v20;
      if ( *(__int128 **)(*(_QWORD *)v20 + 8LL) != v20 )
        goto LABEL_42;
      *(_QWORD *)&v24 = *(_QWORD *)v20;
      v21[1] = (_OWORD **)&v24;
      Command_InternalSendCommand(a1);
LABEL_32:
      v20 = (__int128 *)v24;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 16), v6, 7, 43, (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids);
    }
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD *)(a1 + 8),
      0,
      0,
      0x8000LL,
      "After command abort completion, software and hardware dequeue pointers do not match",
      (__int128 *)(*(_QWORD *)(a1 + 72) + 16LL * *v12),
      a2);
    Controller_ReportFatalError(*(_QWORD *)(a1 + 8), 2, 4115, 0, 0LL, 0LL, 0LL);
    *(_DWORD *)(a1 + 36) = 2;
  }
  result = DynamicLock_Release(*(_QWORD *)(a1 + 112));
  if ( v3 )
    result = Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 8));
  if ( v2 )
  {
    *((_BYTE *)v2 + 60) = 25;
    Etw_CommandCompleteError(v23, a1, v2, 2LL);
    return Command_ProcessCrbCompletion(v2, 2LL, 0LL);
  }
  return result;
}
