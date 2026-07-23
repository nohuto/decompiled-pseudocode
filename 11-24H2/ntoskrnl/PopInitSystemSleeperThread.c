/*
 * XREFs of PopInitSystemSleeperThread @ 0x1408F8198
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     PsLookupThreadByThreadId @ 0x140846770 (PsLookupThreadByThreadId.c)
 *     PsLookupProcessByProcessId @ 0x1408F21F0 (PsLookupProcessByProcessId.c)
 *     PsCreateSystemThreadEx @ 0x1408F8C50 (PsCreateSystemThreadEx.c)
 *     PoDelistPowerStateTransitionBlocker @ 0x140B6BAC4 (PoDelistPowerStateTransitionBlocker.c)
 *     PopPushPowerStateTransitionRecord @ 0x140B6EA88 (PopPushPowerStateTransitionRecord.c)
 */

__int64 __fastcall PopInitSystemSleeperThread(LONG a1, struct _KEVENT *a2, _OWORD *a3)
{
  __int64 result; // rax
  int v6; // ebx
  HANDLE Handle; // [rsp+50h] [rbp-9h] BYREF
  HANDLE ProcessId[2]; // [rsp+58h] [rbp-1h] BYREF
  _QWORD v9[3]; // [rsp+68h] [rbp+Fh] BYREF
  int v10; // [rsp+80h] [rbp+27h]
  int v11; // [rsp+84h] [rbp+2Bh]
  __int128 v12; // [rsp+88h] [rbp+2Fh]
  PEPROCESS Process; // [rsp+C8h] [rbp+6Fh] BYREF
  PETHREAD Thread; // [rsp+D8h] [rbp+7Fh] BYREF

  v11 = 0;
  Handle = 0LL;
  Process = 0LL;
  Thread = 0LL;
  a2[3].Header.LockNV = a1;
  v9[0] = 48LL;
  *(_OWORD *)ProcessId = 0LL;
  KeInitializeEvent(a2, SynchronizationEvent, 0);
  KeInitializeEvent(a2 + 1, SynchronizationEvent, 0);
  KeInitializeEvent(a2 + 2, SynchronizationEvent, 0);
  v9[1] = 0LL;
  v9[2] = 0LL;
  v10 = 512;
  v12 = 0LL;
  result = PsCreateSystemThreadEx(&Handle, 0LL, v9, 0LL, ProcessId, PopTransitionToSleep, a2, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    ZwClose(Handle);
    PsLookupProcessByProcessId(ProcessId[0], &Process);
    PsLookupThreadByThreadId(ProcessId[1], &Thread);
    v6 = PopPushPowerStateTransitionRecord(Process, Thread);
    KeWaitForSingleObject(a2, Executive, 0, 0, 0LL);
    if ( v6 >= 0 )
      PoDelistPowerStateTransitionBlocker();
    if ( Process )
      ObfDereferenceObject(Process);
    if ( Thread )
      ObfDereferenceObject(Thread);
    result = 0LL;
    *a3 = *(_OWORD *)ProcessId;
  }
  return result;
}
