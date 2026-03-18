/*
 * XREFs of NtCancelWaitCompletionPacket @ 0x1404E5EF0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     IopCancelWaitCompletionPacket @ 0x1404285C4 (IopCancelWaitCompletionPacket.c)
 *     Feature_1806129466__private_IsEnabledDeviceUsageNoInline @ 0x1405970A0 (Feature_1806129466__private_IsEnabledDeviceUsageNoInline.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtCancelWaitCompletionPacket(void *a1, char a2)
{
  NTSTATUS v3; // eax
  PVOID v4; // rbx
  unsigned int v5; // edi
  KSPIN_LOCK *v6; // rsi
  KIRQL v7; // al
  KSPIN_LOCK *v8; // r15
  KIRQL v9; // r14
  KIRQL v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  bool v14; // zf
  char v15; // al
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF
  PVOID Object; // [rsp+90h] [rbp+40h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Object = 0LL;
  v3 = ObReferenceObjectByHandle(
         a1,
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
      goto LABEL_18;
    }
    KeAcquireInStackQueuedSpinLock(v8 + 8, &LockHandle);
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v4 + 12);
    v14 = (unsigned int)Feature_1806129466__private_IsEnabledDeviceUsageNoInline(v12, v11, v13) == 0;
    v15 = *((_BYTE *)v4 + 104);
    if ( v14 )
    {
      if ( !v15 )
        goto LABEL_8;
      v4 = Object;
    }
    else
    {
      if ( !v15 )
      {
LABEL_8:
        v5 = -1073741536;
LABEL_16:
        KeReleaseSpinLock(v6, v10);
        v4 = Object;
        goto LABEL_17;
      }
      v4 = Object;
      if ( *((KSPIN_LOCK **)Object + 11) != v8 )
      {
        v5 = -1073700861;
        KeReleaseSpinLock(v6, v10);
        goto LABEL_17;
      }
    }
    if ( !IopCancelWaitCompletionPacket((struct _KWAIT_BLOCK *)v4, a2, v10) )
    {
      if ( *((_BYTE *)v4 + 104) )
        v5 = 259;
      goto LABEL_16;
    }
LABEL_17:
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    ObfDereferenceObjectWithTag(v8, 0x746C6644u);
  }
LABEL_18:
  if ( v4 )
    ObfDereferenceObjectWithTag(v4, 0x746C6644u);
  return v5;
}
