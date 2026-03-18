/*
 * XREFs of ExSwapinWorkerThreads @ 0x140A4E204
 * Callers:
 *     ExShutdownSystem @ 0x140B51018 (ExShutdownSystem.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 *     PopUnlockAfterSleepWorker @ 0x140B57D60 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     KeRemoveQueueApc @ 0x140203580 (KeRemoveQueueApc.c)
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeInsertQueueApc @ 0x1402EFFB0 (KeInsertQueueApc.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     PsGetNextPartitionUnsafe @ 0x14035E34C (PsGetNextPartitionUnsafe.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     KeInitializeApc @ 0x140429EA0 (KeInitializeApc.c)
 *     KeSetKernelStackSwapEnable @ 0x14044AF70 (KeSetKernelStackSwapEnable.c)
 *     PoPushPowerStateTransitionRecord @ 0x1405CEF04 (PoPushPowerStateTransitionRecord.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PsGetNextProcessThread @ 0x1408BD940 (PsGetNextProcessThread.c)
 *     PsReferencePartitionSystemProcess @ 0x140A4E3C0 (PsReferencePartitionSystemProcess.c)
 *     PoDelistPowerStateTransitionBlocker @ 0x140B5A8B4 (PoDelistPowerStateTransitionBlocker.c)
 */

void __fastcall ExSwapinWorkerThreads(BOOLEAN a1)
{
  struct _KTHREAD *CurrentThread; // r15
  _QWORD *i; // rcx
  _UNKNOWN **NextPartitionUnsafe; // rax
  _QWORD *v4; // r14
  _QWORD *j; // rdx
  struct _KTHREAD *NextProcessThread; // rax
  __int64 v7; // rdi
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  signed __int32 v13[8]; // [rsp+0h] [rbp-89h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-49h] BYREF
  _BYTE v15[128]; // [rsp+60h] [rbp-29h] BYREF
  BOOLEAN Enable; // [rsp+F0h] [rbp+67h] BYREF
  PVOID Object; // [rsp+F8h] [rbp+6Fh] BYREF
  LARGE_INTEGER Timeout; // [rsp+100h] [rbp+77h] BYREF

  Enable = a1;
  memset_0(v15, 0, 0x58uLL);
  Object = 0LL;
  Timeout.QuadPart = -100000000LL;
  memset(&Event, 0, sizeof(Event));
  CurrentThread = KeGetCurrentThread();
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  ExAcquireFastMutex(&ExpWorkerSwapinMutex);
  ExpWorkersCanSwap = Enable;
  _InterlockedOr(v13, 0);
  for ( i = 0LL; ; i = v4 )
  {
    NextPartitionUnsafe = PsGetNextPartitionUnsafe(i);
    v4 = NextPartitionUnsafe;
    if ( !NextPartitionUnsafe )
      break;
    if ( (int)PsReferencePartitionSystemProcess(NextPartitionUnsafe, &Object) >= 0 )
    {
      for ( j = 0LL; ; j = (_QWORD *)v7 )
      {
        NextProcessThread = (struct _KTHREAD *)PsGetNextProcessThread((__int64)Object, j);
        v7 = (__int64)NextProcessThread;
        if ( !NextProcessThread )
          break;
        if ( (*((_DWORD *)&NextProcessThread[1].SwapListEntry + 3) & 1) != 0 )
        {
          if ( NextProcessThread == CurrentThread )
          {
            KeSetKernelStackSwapEnable(Enable);
          }
          else
          {
            KeInitializeApc(
              (__int64)v15,
              (__int64)NextProcessThread,
              0,
              (__int64)ExpSetSwappingKernelApc,
              0LL,
              0LL,
              0,
              (__int64)&Enable);
            if ( (unsigned __int8)KeInsertQueueApc((__int64)v15, (__int64)&Event, 0LL, 3u) )
            {
              if ( KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout) == 258 && !KeRemoveQueueApc((__int64)v15) )
              {
                v8 = PoPushPowerStateTransitionRecord((__int64)Object, v7);
                KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
                if ( v8 >= 0 )
                  PoDelistPowerStateTransitionBlocker(v10, v9, v11, v12);
              }
            }
          }
        }
      }
      ObfDereferenceObject(Object);
    }
  }
  KeReleaseGuardedMutex(&ExpWorkerSwapinMutex);
}
