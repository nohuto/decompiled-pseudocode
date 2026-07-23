/*
 * XREFs of MiZeroAllPageFiles @ 0x140B6443C
 * Callers:
 *     MiShutdownSystem @ 0x140B64244 (MiShutdownSystem.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     KeWaitForMultipleObjects @ 0x14031CC00 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     MiZeroPageFile @ 0x14066D090 (MiZeroPageFile.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 MiZeroAllPageFiles()
{
  struct _KTHREAD *CurrentThread; // rbx
  char *v1; // rax
  signed __int8 v2; // cf
  char *v3; // rdi
  __int64 v4; // rsi
  ULONG v5; // edi
  bool v6; // zf
  ULONG v7; // esi
  __int64 v8; // r15
  struct _KEVENT *v9; // rbp
  struct _WORK_QUEUE_ITEM *Pool; // rbx
  PVOID Object[64]; // [rsp+40h] [rbp-528h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+240h] [rbp-328h] BYREF

  memset_0(Object, 0, 0x80uLL);
  VfZeroAllPagesRunning = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v1 = (char *)KeAbPreAcquire((__int64)qword_140E39180, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)qword_140E39180, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(qword_140E39180, v1, (__int64)qword_140E39180);
  if ( v3 )
    v3[10] = 1;
  v4 = qword_140E38DF0;
  v5 = Count;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140E39180, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)qword_140E39180);
  KeAbPostRelease((ULONG_PTR)qword_140E39180);
  v6 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v6 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( v4 && v5 )
  {
    KeWaitForSingleObject(&unk_140E39068, WrKernel, 0, 0, 0LL);
    v7 = v5;
    do
    {
      v8 = v7 - 1;
      v9 = (struct _KEVENT *)&Object[3 * v8 + 16];
      KeInitializeEvent(v9, NotificationEvent, 0);
      Object[v8] = v9;
      if ( (*(_BYTE *)(*((_QWORD *)&MiSystemPartition + v8 + 2316) + 172LL) & 0x40) != 0
        || (Pool = (struct _WORK_QUEUE_ITEM *)MiAllocatePool(0x40uLL, 0x30uLL, 2002414925)) == 0LL )
      {
        KeSetEvent((PRKEVENT)&Object[3 * v8 + 16], 0, 0);
      }
      else
      {
        Pool[1].List.Flink = (struct _LIST_ENTRY *)*((_QWORD *)&MiSystemPartition + v8 + 2316);
        Pool[1].List.Blink = (struct _LIST_ENTRY *)v9;
        if ( v7 == 1 )
        {
          KeSetEvent((PRKEVENT)&Object[3 * v8 + 16], 0, 0);
          MiZeroPageFile(Pool);
        }
        else
        {
          Pool->List.Flink = 0LL;
          Pool->WorkerRoutine = (void (__fastcall *)(void *))MiZeroPageFile;
          Pool->Parameter = Pool;
          ExQueueWorkItem(Pool, CriticalWorkQueue);
        }
      }
      --v7;
    }
    while ( (_DWORD)v8 );
    if ( v5 > 1 )
      KeWaitForMultipleObjects(v5, Object, WaitAll, Executive, 0, 0, 0LL, &WaitBlockArray);
  }
  VfZeroAllPagesRunning = 0;
  return 1LL;
}
