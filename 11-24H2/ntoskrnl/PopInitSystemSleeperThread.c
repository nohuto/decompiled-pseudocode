/*
 * XREFs of PopInitSystemSleeperThread @ 0x140A219E8
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     PsLookupThreadByThreadId @ 0x14084A4B0 (PsLookupThreadByThreadId.c)
 *     PsLookupProcessByProcessId @ 0x14094DC80 (PsLookupProcessByProcessId.c)
 *     PsCreateSystemThreadEx @ 0x140A224A0 (PsCreateSystemThreadEx.c)
 *     PoDelistPowerStateTransitionBlocker @ 0x140B6A3B4 (PoDelistPowerStateTransitionBlocker.c)
 *     PopPushPowerStateTransitionRecord @ 0x140B6D1E8 (PopPushPowerStateTransitionRecord.c)
 */

__int64 __fastcall PopInitSystemSleeperThread(LONG a1, struct _KEVENT *a2, _OWORD *a3)
{
  __int64 result; // rax
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  HANDLE Handle; // [rsp+50h] [rbp-9h] BYREF
  HANDLE ProcessId[2]; // [rsp+58h] [rbp-1h] BYREF
  _QWORD v13[3]; // [rsp+68h] [rbp+Fh] BYREF
  int v14; // [rsp+80h] [rbp+27h]
  int v15; // [rsp+84h] [rbp+2Bh]
  __int128 v16; // [rsp+88h] [rbp+2Fh]
  PEPROCESS Process; // [rsp+C8h] [rbp+6Fh] BYREF
  PETHREAD Thread; // [rsp+D8h] [rbp+7Fh] BYREF

  v15 = 0;
  Handle = 0LL;
  Process = 0LL;
  Thread = 0LL;
  a2[3].Header.LockNV = a1;
  v13[0] = 48LL;
  *(_OWORD *)ProcessId = 0LL;
  KeInitializeEvent(a2, SynchronizationEvent, 0);
  KeInitializeEvent(a2 + 1, SynchronizationEvent, 0);
  KeInitializeEvent(a2 + 2, SynchronizationEvent, 0);
  v13[1] = 0LL;
  v13[2] = 0LL;
  v14 = 512;
  v16 = 0LL;
  result = PsCreateSystemThreadEx(&Handle, 0LL, v13, 0LL, ProcessId, PopTransitionToSleep, a2, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    ZwClose(Handle);
    PsLookupProcessByProcessId(ProcessId[0], &Process);
    PsLookupThreadByThreadId(ProcessId[1], &Thread);
    v6 = PopPushPowerStateTransitionRecord(Process, Thread);
    KeWaitForSingleObject(a2, Executive, 0, 0, 0LL);
    if ( v6 >= 0 )
      PoDelistPowerStateTransitionBlocker(v8, v7, v9, v10);
    if ( Process )
      ObfDereferenceObject(Process);
    if ( Thread )
      ObfDereferenceObject(Thread);
    result = 0LL;
    *a3 = *(_OWORD *)ProcessId;
  }
  return result;
}
