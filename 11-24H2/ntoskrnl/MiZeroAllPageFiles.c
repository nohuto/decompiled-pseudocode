/*
 * XREFs of MiZeroAllPageFiles @ 0x140B6236C
 * Callers:
 *     MiShutdownSystem @ 0x140B62174 (MiShutdownSystem.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     KeWaitForMultipleObjects @ 0x14033D720 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     MiZeroPageFile @ 0x14066BEC0 (MiZeroPageFile.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 MiZeroAllPageFiles()
{
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *v1; // rax
  signed __int8 v2; // cf
  _QWORD *v3; // rdi
  __int64 v4; // rsi
  ULONG v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  bool v8; // zf
  ULONG v9; // esi
  __int64 v10; // r15
  struct _KEVENT *v11; // rbp
  struct _WORK_QUEUE_ITEM *Pool; // rbx
  PVOID Object[64]; // [rsp+40h] [rbp-528h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+240h] [rbp-328h] BYREF

  memset_0(Object, 0, 0x80uLL);
  VfZeroAllPagesRunning = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v1 = KeAbPreAcquire((__int64)qword_140E39040, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)qword_140E39040, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(qword_140E39040, (__int64)v1, (__int64)qword_140E39040);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  v4 = qword_140E38CB0;
  v5 = Count;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140E39040, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)qword_140E39040);
  KeAbPostRelease((ULONG_PTR)qword_140E39040);
  v8 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v8 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v7, v6);
  if ( v4 && v5 )
  {
    KeWaitForSingleObject(&unk_140E38F28, WrKernel, 0, 0, 0LL);
    v9 = v5;
    do
    {
      v10 = v9 - 1;
      v11 = (struct _KEVENT *)&Object[3 * v10 + 16];
      KeInitializeEvent(v11, NotificationEvent, 0);
      Object[v10] = v11;
      if ( (*(_BYTE *)(*((_QWORD *)&MiSystemPartition + v10 + 2316) + 172LL) & 0x40) != 0
        || (Pool = (struct _WORK_QUEUE_ITEM *)MiAllocatePool(0x40uLL, 0x30uLL, 2002414925)) == 0LL )
      {
        KeSetEvent((PRKEVENT)&Object[3 * v10 + 16], 0, 0);
      }
      else
      {
        Pool[1].List.Flink = (struct _LIST_ENTRY *)*((_QWORD *)&MiSystemPartition + v10 + 2316);
        Pool[1].List.Blink = (struct _LIST_ENTRY *)v11;
        if ( v9 == 1 )
        {
          KeSetEvent((PRKEVENT)&Object[3 * v10 + 16], 0, 0);
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
      --v9;
    }
    while ( (_DWORD)v10 );
    if ( v5 > 1 )
      KeWaitForMultipleObjects(v5, Object, WaitAll, Executive, 0, 0, 0LL, &WaitBlockArray);
  }
  VfZeroAllPagesRunning = 0;
  return 1LL;
}
