/*
 * XREFs of ACPIWorkerThreadWorker @ 0x14006A890
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dqqq @ 0x14006AA28 (WPP_RECORDER_SF_dqqq.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

bool __fastcall ACPIWorkerThreadWorker(__int64 a1, int a2)
{
  KPRIORITY v2; // ebp
  KIRQL v3; // al
  _QWORD *v4; // rbx
  KIRQL v5; // di
  __int64 v6; // rax
  void (__fastcall *v7)(__int64); // rdi
  __int64 v8; // rsi
  KIRQL CurrentIrql; // al
  int v10; // edx
  int v11; // r8d
  int v13; // [rsp+20h] [rbp-38h]

  if ( a2 )
    return a2 == 1;
  ACPIThread = KeGetCurrentThread();
  v2 = KeSetPriorityThread(KeGetCurrentThread(), 16);
  while ( 1 )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&ACPIWorkerQueueSpinLock);
    v4 = (_QWORD *)ACPIWorkQueue;
    v5 = v3;
    if ( (__int64 *)ACPIWorkQueue == &ACPIWorkQueue )
    {
      KeClearEvent(&ACPIProcessWorkQueueEvent);
      v4 = 0LL;
    }
    else
    {
      if ( *(__int64 **)(ACPIWorkQueue + 8) != &ACPIWorkQueue
        || (v6 = *(_QWORD *)ACPIWorkQueue, *(_QWORD *)(*(_QWORD *)ACPIWorkQueue + 8LL) != ACPIWorkQueue) )
      {
        __fastfail(3u);
      }
      ACPIWorkQueue = *(_QWORD *)ACPIWorkQueue;
      *(_QWORD *)(v6 + 8) = &ACPIWorkQueue;
      v4[1] = 0LL;
      *v4 = 0LL;
    }
    KeReleaseSpinLock(&ACPIWorkerQueueSpinLock, v5);
    if ( !v4 )
      break;
    v7 = (void (__fastcall *)(__int64))v4[2];
    v8 = v4[3];
    v7(v8);
    if ( KeGetCurrentIrql() )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        CurrentIrql = KeGetCurrentIrql();
        WPP_RECORDER_SF_dqqq(
          WPP_GLOBAL_Control->DeviceExtension,
          v10,
          v11,
          11,
          v13,
          CurrentIrql,
          (char)v7,
          v8,
          (char)v4);
      }
    }
  }
  KeSetPriorityThread(KeGetCurrentThread(), v2);
  return 0;
}
