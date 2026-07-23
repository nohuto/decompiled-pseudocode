/*
 * XREFs of IopDeleteIoCompletionInternal @ 0x14040F238
 * Callers:
 *     IopCloseIoCompletion @ 0x140A31C30 (IopCloseIoCompletion.c)
 *     IopDeleteIoCompletion @ 0x140A41A60 (IopDeleteIoCompletion.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeRundownQueueEx @ 0x14040F308 (KeRundownQueueEx.c)
 *     IopFreeWaitCompletionPacket @ 0x14040F850 (IopFreeWaitCompletionPacket.c)
 *     IopFreeCompletionListPackets @ 0x1409905F8 (IopFreeCompletionListPackets.c)
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
