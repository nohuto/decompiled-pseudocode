/*
 * XREFs of NtCancelWaitCompletionPacket @ 0x14042EAC0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     IopCancelWaitCompletionPacket @ 0x14042EC20 (IopCancelWaitCompletionPacket.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtCancelWaitCompletionPacket(HANDLE WaitCompletionPacketHandle, BOOLEAN RemoveSignaledPacket)
{
  NTSTATUS v2; // eax
  PVOID v3; // rbx
  NTSTATUS v4; // edi
  KSPIN_LOCK *v6; // rbp
  KIRQL v7; // al
  KSPIN_LOCK *v8; // rsi
  KIRQL v9; // r14
  KIRQL v10; // r14
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Object = 0LL;
  v2 = ObReferenceObjectByHandle(
         WaitCompletionPacketHandle,
         1u,
         IopWaitCompletionPacketObjectType,
         KeGetCurrentThread()->PreviousMode,
         &Object,
         0LL);
  v3 = Object;
  v4 = v2;
  if ( v2 >= 0 )
  {
    v6 = (KSPIN_LOCK *)((char *)Object + 96);
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Object + 12);
    v8 = (KSPIN_LOCK *)*((_QWORD *)v3 + 11);
    v9 = v7;
    if ( v8 )
      ObfReferenceObjectWithTag(*((PVOID *)v3 + 11), 0x746C6644u);
    KeReleaseSpinLock((PKSPIN_LOCK)v3 + 12, v9);
    if ( !v8 )
    {
      v4 = -1073741536;
      goto LABEL_2;
    }
    KeAcquireInStackQueuedSpinLock(v8 + 8, &LockHandle);
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v3 + 12);
    if ( *((_BYTE *)v3 + 104) )
    {
      v3 = Object;
      if ( (unsigned __int8)IopCancelWaitCompletionPacket((struct _KWAIT_BLOCK *)Object) )
      {
LABEL_10:
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        ObfDereferenceObjectWithTag(v8, 0x746C6644u);
        goto LABEL_2;
      }
      if ( *((_BYTE *)v3 + 104) )
        v4 = 259;
    }
    else
    {
      v4 = -1073741536;
    }
    KeReleaseSpinLock(v6, v10);
    v3 = Object;
    goto LABEL_10;
  }
LABEL_2:
  if ( v3 )
    ObfDereferenceObjectWithTag(v3, 0x746C6644u);
  return v4;
}
