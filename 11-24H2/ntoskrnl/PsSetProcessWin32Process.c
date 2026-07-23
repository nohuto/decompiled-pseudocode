/*
 * XREFs of PsSetProcessWin32Process @ 0x140A414D0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     PspLockProcessExclusive @ 0x14044FF38 (PspLockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x140458484 (PspUnlockProcessExclusive.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PsSetProcessWin32Process(struct _LIST_ENTRY *Object, struct _LIST_ENTRY *a2, struct _LIST_ENTRY *a3)
{
  unsigned int v6; // edi
  __int64 Pool2; // rax
  struct _WORK_QUEUE_ITEM *v9; // rsi

  v6 = 0;
  PspLockProcessExclusive((__int64)Object, (__int64)KeGetCurrentThread());
  if ( a2 )
  {
    if ( (HIDWORD(Object[31].Flink) & 8) != 0 || Object[41].Blink )
    {
      v6 = -1073741558;
    }
    else
    {
      Object[41].Blink = a2;
      if ( (((__int64)Object[111].Flink | ((unsigned __int64)Object[111].Flink >> 30)) & 0x3FFFFFFF) != 0 )
      {
        Pool2 = ExAllocatePool2(0x100uLL, 0x28uLL, 0x65446954u);
        v9 = (struct _WORK_QUEUE_ITEM *)Pool2;
        if ( Pool2 )
        {
          ObfReferenceObjectWithTag(Object, 0x624A7350u);
          v9[1].List.Flink = Object;
          v9->WorkerRoutine = (void (__fastcall *)(void *))PspTimerDelayWorkerRoutine;
          v9->Parameter = v9;
          v9->List.Flink = 0LL;
          ExQueueWorkItem(v9, NormalWorkQueue);
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
    v6 = -1073741823;
  }
  PspUnlockProcessExclusive((__int64)Object);
  return v6;
}
