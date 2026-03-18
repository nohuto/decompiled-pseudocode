/*
 * XREFs of ExpReleaseDisownedFastResourceExclusive @ 0x1404074C0
 * Callers:
 *     ExReleaseDisownedFastResource @ 0x140407280 (ExReleaseDisownedFastResource.c)
 *     ExReleaseDisownedFastResourceExclusive @ 0x14064A830 (ExReleaseDisownedFastResourceExclusive.c)
 *     ExReleaseDisownedFastResourceShared @ 0x14064A920 (ExReleaseDisownedFastResourceShared.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExpCommitWakeFastResource @ 0x14027F2E0 (ExpCommitWakeFastResource.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140300F20 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     ExpRemoveFastOwnerEntryFromThreadList @ 0x1404077B0 (ExpRemoveFastOwnerEntryFromThreadList.c)
 *     KeAbCrossThreadRelease @ 0x1404077E4 (KeAbCrossThreadRelease.c)
 *     ExpPrepareToWakeFastResourceExclusive @ 0x14041EE50 (ExpPrepareToWakeFastResourceExclusive.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

LONG_PTR __fastcall ExpReleaseDisownedFastResourceExclusive(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v4; // r13
  int v5; // eax
  LONG_PTR result; // rax
  unsigned __int8 CurrentIrql; // si
  KSPIN_LOCK *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // [rsp+30h] [rbp-20h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v14; // [rsp+98h] [rbp+48h] BYREF
  int v15; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+58h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 36);
  v16 = 0LL;
  v12 = 0LL;
  v15 = 0;
  v4 = a1;
  v14 = 0;
  v5 = *(_DWORD *)(a2 + 32);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v5 < 2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1);
    }
    v8 = (KSPIN_LOCK *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFEuLL);
    KxAcquireSpinLock(v8 + 217);
    ExpRemoveFastOwnerEntryFromThreadList(a2);
    KxReleaseSpinLock((volatile signed __int64 *)v8 + 217);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 48), &LockHandle);
    *(_QWORD *)(a2 + 16) = 0LL;
    --*(_DWORD *)(a2 + 32);
    *(_BYTE *)(a2 + 36) = 0;
    ExpPrepareToWakeFastResourceExclusive(v4, (unsigned int)&v16, (unsigned int)&v12, (unsigned int)&v15, (__int64)&v14);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    ExpCommitWakeFastResource(&v16, v9, v10, v14);
    if ( KiIrqlFlags )
    {
      LOBYTE(v11) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
    }
    __writecr8(CurrentIrql);
    if ( (_BYTE)v2 )
      KeAbCrossThreadRelease(v4, v2, v8);
    return ObfDereferenceObjectWithTag(v8, 0x746C6644u);
  }
  else
  {
    result = (unsigned int)(v5 - 1);
    *(_DWORD *)(a2 + 32) = result;
  }
  return result;
}
