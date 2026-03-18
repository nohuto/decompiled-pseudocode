/*
 * XREFs of RestartContext @ 0x14001384C
 * Callers:
 *     RunContext @ 0x140005EA0 (RunContext.c)
 *     AsyncEvalObject @ 0x1400120D0 (AsyncEvalObject.c)
 *     RestartCtxtCallback @ 0x140014060 (RestartCtxtCallback.c)
 *     SyncEvalObject @ 0x1400143C8 (SyncEvalObject.c)
 *     AsyncCallBack @ 0x1400348D4 (AsyncCallBack.c)
 *     SleepQueueDpc @ 0x14003E980 (SleepQueueDpc.c)
 *     AMLIRestartContext @ 0x14004B0FC (AMLIRestartContext.c)
 *     TimeoutCallback @ 0x14004C730 (TimeoutCallback.c)
 *     SyncLoadDDB @ 0x1400C90F8 (SyncLoadDDB.c)
 * Callees:
 *     InsertReadyQueue @ 0x140013A60 (InsertReadyQueue.c)
 *     OSQueueWorkItem @ 0x140013FD4 (OSQueueWorkItem.c)
 */

__int64 __fastcall RestartContext(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 v5; // r8
  struct _KTHREAD *CurrentThread; // r11
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rdx
  unsigned int inserted; // ebx

  v2 = *(_QWORD *)(a1 + 104);
  if ( v2 )
    v5 = *(_QWORD *)(v2 + 32);
  else
    v5 = *(_QWORD *)(a1 + 72);
  CurrentThread = KeGetCurrentThread();
  v7 = *(_QWORD *)(a1 + 120);
  v8 = *(_QWORD *)(a1 + 408);
  v9 = (unsigned int)gReadyQueue;
  if ( (gDebugger & 0x8000) != 0 && qword_140089110 )
  {
    v10 = 9LL * (_InterlockedExchangeAdd((_DWORD *)&qword_140089108 + 1, 1u) % (unsigned int)qword_140089108);
    *((_QWORD *)qword_140089110 + v10 + 1) = MEMORY[0xFFFFF78000000008];
    *((_DWORD *)qword_140089110 + 2 * v10) = 1380275028;
    *((_QWORD *)qword_140089110 + v10 + 2) = CurrentThread;
    *((_QWORD *)qword_140089110 + v10 + 3) = v8;
    *((_QWORD *)qword_140089110 + v10 + 4) = a1;
    *((_QWORD *)qword_140089110 + v10 + 5) = v9;
    *((_QWORD *)qword_140089110 + v10 + 6) = a1;
    *((_QWORD *)qword_140089110 + v10 + 7) = v5;
    *((_QWORD *)qword_140089110 + v10 + 8) = v7;
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
    NewIrql = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    if ( !*(_QWORD *)(a1 + 432) )
      *(_QWORD *)(a1 + 432) = ++gAmliMethodCounter;
    *(_DWORD *)(a1 + 64) |= 0x20u;
    KeReleaseSpinLock(&SpinLock, NewIrql);
    if ( (gdwfAMLI & 4) == 0 || !(unsigned __int8)ExTryQueueWorkItem(a1 + 360, 1LL) )
      OSQueueWorkItem(a1 + 360);
    return 32772;
  }
  else
  {
    NewIrql = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    if ( !*(_QWORD *)(a1 + 432) )
      *(_QWORD *)(a1 + 432) = ++gAmliMethodCounter;
    LOBYTE(v11) = a2;
    inserted = InsertReadyQueue(a1, v11);
    KeReleaseSpinLock(&SpinLock, NewIrql);
  }
  return inserted;
}
