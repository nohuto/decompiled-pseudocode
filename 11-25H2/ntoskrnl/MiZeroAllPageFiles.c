/*
 * XREFs of MiZeroAllPageFiles @ 0x140B5223C
 * Callers:
 *     MiShutdownSystem @ 0x140B52044 (MiShutdownSystem.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x14027C240 (KeWaitForMultipleObjects.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     MiZeroPageFile @ 0x140660380 (MiZeroPageFile.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 MiZeroAllPageFiles()
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 *v1; // rax
  signed __int8 v2; // cf
  __int64 *v3; // rdi
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
  v1 = KeAbPreAcquire((__int64)qword_140E38E00, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)qword_140E38E00, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(qword_140E38E00, v1, (__int64)qword_140E38E00);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  v4 = qword_140E38A70;
  v5 = Count;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140E38E00, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)qword_140E38E00);
  KeAbPostRelease((ULONG_PTR)qword_140E38E00);
  v6 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v6 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( v4 && v5 )
  {
    KeWaitForSingleObject(&unk_140E38CE8, WrKernel, 0, 0, 0LL);
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
