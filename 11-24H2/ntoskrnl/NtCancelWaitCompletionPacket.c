/*
 * XREFs of NtCancelWaitCompletionPacket @ 0x1404DC5F0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     IopCancelWaitCompletionPacket @ 0x14041B244 (IopCancelWaitCompletionPacket.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtCancelWaitCompletionPacket(HANDLE WaitCompletionPacketHandle, BOOLEAN RemoveSignaledPacket)
{
  NTSTATUS v3; // eax
  PVOID v4; // rbx
  NTSTATUS v5; // edi
  KSPIN_LOCK *v6; // rbp
  KIRQL v7; // al
  KSPIN_LOCK *v8; // rsi
  KIRQL v9; // r14
  KIRQL v10; // r14
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Object = 0LL;
  v3 = ObReferenceObjectByHandle(
         WaitCompletionPacketHandle,
         1u,
         IopWaitCompletionPacketObjectType,
         KeGetCurrentThread()->PreviousMode,
         &Object,
         0LL);
  v4 = Object;
  v5 = v3;
  if ( v3 >= 0 )
  {
    v6 = (KSPIN_LOCK *)((char *)Object + 96);
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Object + 12);
    v8 = (KSPIN_LOCK *)*((_QWORD *)v4 + 11);
    v9 = v7;
    if ( v8 )
      ObfReferenceObjectWithTag(*((PVOID *)v4 + 11), 0x746C6644u);
    KeReleaseSpinLock((PKSPIN_LOCK)v4 + 12, v9);
    if ( !v8 )
    {
      v5 = -1073741536;
      goto LABEL_15;
    }
    KeAcquireInStackQueuedSpinLock(v8 + 8, &LockHandle);
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v4 + 12);
    if ( !*((_BYTE *)v4 + 104) )
    {
      v5 = -1073741536;
LABEL_13:
      KeReleaseSpinLock(v6, v10);
      v4 = Object;
      goto LABEL_14;
    }
    v4 = Object;
    if ( *((KSPIN_LOCK **)Object + 11) == v8 )
    {
      if ( !IopCancelWaitCompletionPacket((struct _KWAIT_BLOCK *)Object, RemoveSignaledPacket, v10) )
      {
        if ( *((_BYTE *)v4 + 104) )
          v5 = 259;
        goto LABEL_13;
      }
    }
    else
    {
      v5 = -1073700861;
      KeReleaseSpinLock(v6, v10);
    }
LABEL_14:
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    ObfDereferenceObjectWithTag(v8, 0x746C6644u);
  }
LABEL_15:
  if ( v4 )
    ObfDereferenceObjectWithTag(v4, 0x746C6644u);
  return v5;
}
