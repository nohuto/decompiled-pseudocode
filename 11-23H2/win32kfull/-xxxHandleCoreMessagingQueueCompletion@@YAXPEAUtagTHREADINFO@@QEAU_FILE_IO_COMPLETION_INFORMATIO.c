/*
 * XREFs of ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C011E840
 * Callers:
 *     xxxDrainQueueCompletions @ 0x1C0063EF0 (xxxDrainQueueCompletions.c)
 *     ?xxxHandleQueueCompletion@@YA?AW4QueueCompletionStatus@@PEAUtagTHREADINFO@@JQEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C011E784 (-xxxHandleQueueCompletion@@YA-AW4QueueCompletionStatus@@PEAUtagTHREADINFO@@JQEAU_FILE_IO_COMPLET.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C01266D0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxRealInternalGetMessage @ 0x1C01287E0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C011EE90 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxSendMessage @ 0x1C0127888 (xxxSendMessage.c)
 */

ULONG64 __fastcall xxxHandleCoreMessagingQueueCompletion(__int64 a1, ULONG64 *a2, __int64 a3)
{
  __int64 v5; // rdi
  __int64 *v6; // rsi
  __int64 *v7; // rcx
  ULONG64 v8; // rdx
  __int64 v9; // r14
  struct tagQMSG *v10; // rax
  ULONG64 v11; // rbx
  _QWORD *v12; // rcx
  ULONG64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int128 v17; // [rsp+50h] [rbp-38h] BYREF
  __int64 v18; // [rsp+60h] [rbp-28h]

  v17 = 0LL;
  v18 = 0LL;
  v5 = 0LL;
  v6 = (__int64 *)((char *)KeGetPcr()->NtTib.Self[45].StackLimit + 8);
  v7 = v6;
  v8 = MmUserProbeAddress;
  if ( (unsigned __int64)v6 >= MmUserProbeAddress )
    v7 = (__int64 *)MmUserProbeAddress;
  v9 = *v7;
  if ( (_DWORD)a3 && !v9 )
  {
    v10 = _PostTransformableMessageExtended(*(struct tagWND **)(a1 + 1504), 0x60u, 1uLL, 0LL, 0LL, 1);
    v7 = (__int64 *)MmSystemRangeStart;
    if ( v10 < MmSystemRangeStart )
    {
      if ( (_DWORD)v10 )
        goto LABEL_7;
    }
    else if ( v10 )
    {
      goto LABEL_7;
    }
    ThreadLock(*(_QWORD *)(a1 + 1504), &v17);
    xxxSendMessage(*(_QWORD *)(a1 + 1504), 96LL, 2LL, 0LL);
    ThreadUnlock1(v15, v14, v16);
  }
LABEL_7:
  v11 = *a2;
  if ( !PsGetCurrentProcessWow64Process(v7, v8, a3) )
    v5 = 3LL;
  if ( (v5 & *a2) != 0 )
    ExRaiseDatatypeMisalignment();
  v12 = (_QWORD *)v11;
  result = MmUserProbeAddress;
  if ( v11 >= MmUserProbeAddress )
    v12 = (_QWORD *)MmUserProbeAddress;
  *v12 = v9;
  if ( (unsigned __int64)v6 >= MmUserProbeAddress )
    v6 = (__int64 *)MmUserProbeAddress;
  *v6 = v11;
  return result;
}
