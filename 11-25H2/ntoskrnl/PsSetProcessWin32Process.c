/*
 * XREFs of PsSetProcessWin32Process @ 0x140A48280
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     PspUnlockProcessExclusive @ 0x1403D76DC (PspUnlockProcessExclusive.c)
 *     PspLockProcessExclusive @ 0x14045AFE0 (PspLockProcessExclusive.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PsSetProcessWin32Process(struct _LIST_ENTRY *Object, struct _LIST_ENTRY *a2, struct _LIST_ENTRY *a3)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v7; // edi
  __int64 Pool2; // rax
  struct _WORK_QUEUE_ITEM *v10; // rsi

  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  PspLockProcessExclusive((__int64)Object, (__int64)CurrentThread);
  if ( a2 )
  {
    if ( (HIDWORD(Object[31].Flink) & 8) != 0 || Object[41].Blink )
    {
      v7 = -1073741558;
    }
    else
    {
      Object[41].Blink = a2;
      if ( (((__int64)Object[111].Flink | ((unsigned __int64)Object[111].Flink >> 30)) & 0x3FFFFFFF) != 0 )
      {
        Pool2 = ExAllocatePool2(0x100uLL);
        v10 = (struct _WORK_QUEUE_ITEM *)Pool2;
        if ( Pool2 )
        {
          ObfReferenceObjectWithTag(Object, 0x624A7350u);
          v10[1].List.Flink = Object;
          v10->WorkerRoutine = (void (__fastcall *)(void *))PspTimerDelayWorkerRoutine;
          v10->Parameter = v10;
          v10->List.Flink = 0LL;
          ExQueueWorkItem(v10, NormalWorkQueue);
        }
      }
    }
  }
  else if ( Object[41].Blink == a3 )
  {
    Object[41].Blink = 0LL;
  }
  else
  {
    v7 = -1073741823;
  }
  PspUnlockProcessExclusive((__int64)Object, (__int64)CurrentThread);
  return v7;
}
