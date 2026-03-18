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

__int64 __fastcall NtCancelWaitCompletionPacket(void *a1)
{
  NTSTATUS v1; // eax
  PVOID v2; // rbx
  unsigned int v3; // edi
  KSPIN_LOCK *v5; // rbp
  KIRQL v6; // al
  KSPIN_LOCK *v7; // rsi
  KIRQL v8; // r14
  KIRQL v9; // r14
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Object = 0LL;
  v1 = ObReferenceObjectByHandle(
         a1,
         1u,
         IopWaitCompletionPacketObjectType,
         KeGetCurrentThread()->PreviousMode,
         &Object,
         0LL);
  v2 = Object;
  v3 = v1;
  if ( v1 >= 0 )
  {
    v5 = (KSPIN_LOCK *)((char *)Object + 96);
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Object + 12);
    v7 = (KSPIN_LOCK *)*((_QWORD *)v2 + 11);
    v8 = v6;
    if ( v7 )
      ObfReferenceObjectWithTag(*((PVOID *)v2 + 11), 0x746C6644u);
    KeReleaseSpinLock((PKSPIN_LOCK)v2 + 12, v8);
    if ( !v7 )
    {
      v3 = -1073741536;
      goto LABEL_2;
    }
    KeAcquireInStackQueuedSpinLock(v7 + 8, &LockHandle);
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v2 + 12);
    if ( *((_BYTE *)v2 + 104) )
    {
      v2 = Object;
      if ( (unsigned __int8)IopCancelWaitCompletionPacket((struct _KWAIT_BLOCK *)Object) )
      {
LABEL_10:
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        ObfDereferenceObjectWithTag(v7, 0x746C6644u);
        goto LABEL_2;
      }
      if ( *((_BYTE *)v2 + 104) )
        v3 = 259;
    }
    else
    {
      v3 = -1073741536;
    }
    KeReleaseSpinLock(v5, v9);
    v2 = Object;
    goto LABEL_10;
  }
LABEL_2:
  if ( v2 )
    ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  return v3;
}
