/*
 * XREFs of IopDeleteIoCompletionInternal @ 0x14041B6F8
 * Callers:
 *     IopCloseIoCompletion @ 0x140A3C450 (IopCloseIoCompletion.c)
 *     IopDeleteIoCompletion @ 0x140A4ADE0 (IopDeleteIoCompletion.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     KeRundownQueueEx @ 0x14041B7C8 (KeRundownQueueEx.c)
 *     IopFreeWaitCompletionPacket @ 0x14041BD10 (IopFreeWaitCompletionPacket.c)
 *     IopFreeCompletionListPackets @ 0x1409A7128 (IopFreeCompletionListPackets.c)
 */

void __fastcall IopDeleteIoCompletionInternal(ULONG_PTR a1, char a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rdi
  ULONG_PTR v7; // rcx
  __int64 v8; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a2 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 64), &LockHandle);
    *(_BYTE *)(a1 + 72) = 1;
  }
  v4 = KeRundownQueueEx((PVOID)a1);
  v5 = (_QWORD *)v4;
  if ( v4 )
  {
    v6 = (_QWORD *)v4;
    **(_QWORD **)(v4 + 8) = 0LL;
    do
    {
      v7 = (ULONG_PTR)v6;
      v6 = (_QWORD *)*v6;
      *(_QWORD *)v7 = 0LL;
      if ( *(_BYTE *)(v7 + 16) == 2 )
      {
        v8 = *(_QWORD *)(v7 + 8);
        if ( v6 )
          v6[1] = v8;
        else
          v5[1] = v8;
        if ( v5 == (_QWORD *)v7 )
          v5 = v6;
        IopFreeWaitCompletionPacket(v7, a1);
      }
    }
    while ( v6 );
  }
  if ( a2 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v5 )
    IopFreeCompletionListPackets(v5);
}
