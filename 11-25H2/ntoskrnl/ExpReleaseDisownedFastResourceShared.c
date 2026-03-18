/*
 * XREFs of ExpReleaseDisownedFastResourceShared @ 0x140407388
 * Callers:
 *     ExReleaseDisownedFastResource @ 0x140407280 (ExReleaseDisownedFastResource.c)
 *     ExReleaseDisownedFastResourceShared @ 0x14064A920 (ExReleaseDisownedFastResourceShared.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExpCommitWakeFastResource @ 0x14027F2E0 (ExpCommitWakeFastResource.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140300F20 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     ExpPrepareToWakeFastResourceShared @ 0x1404075F0 (ExpPrepareToWakeFastResourceShared.c)
 *     ExpRemoveFastOwnerEntryFromThreadList @ 0x1404077B0 (ExpRemoveFastOwnerEntryFromThreadList.c)
 *     KeAbCrossThreadRelease @ 0x1404077E4 (KeAbCrossThreadRelease.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

LONG_PTR __fastcall ExpReleaseDisownedFastResourceShared(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  LONG_PTR result; // rax
  KSPIN_LOCK *v5; // rsi
  __int64 v6; // r15
  unsigned __int8 CurrentIrql; // r14
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v12; // [rsp+30h] [rbp-20h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v14; // [rsp+88h] [rbp+38h] BYREF
  int v15; // [rsp+90h] [rbp+40h] BYREF
  __int64 v16; // [rsp+98h] [rbp+48h] BYREF

  v2 = *(_QWORD *)(a2 + 16);
  result = 0LL;
  v16 = 0LL;
  v12 = 0LL;
  v5 = (KSPIN_LOCK *)(v2 & 0xFFFFFFFFFFFFFFFEuLL);
  v15 = 0;
  v14 = 0;
  v6 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *(int *)(a2 + 32) < 2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1);
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 48), &LockHandle);
    ExpPrepareToWakeFastResourceShared(v6, (unsigned int)&v16, (unsigned int)&v12, (unsigned int)&v15, (__int64)&v14);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    KxAcquireSpinLock(v5 + 217);
    ExpRemoveFastOwnerEntryFromThreadList(a2);
    *(_QWORD *)(a2 + 24) = 0LL;
    KxReleaseSpinLock((volatile signed __int64 *)v5 + 217);
    ExpCommitWakeFastResource(&v16, v8, v9, v14);
    if ( KiIrqlFlags )
    {
      LOBYTE(v10) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
    }
    __writecr8(CurrentIrql);
    if ( *(_BYTE *)(a2 + 36) )
    {
      KeAbCrossThreadRelease(v6, *(unsigned __int8 *)(a2 + 36), v5);
      *(_BYTE *)(a2 + 36) = 0;
    }
    result = ObfDereferenceObjectWithTag(v5, 0x746C6644u);
  }
  if ( (*(_DWORD *)(a2 + 32))-- == 1 )
    *(_QWORD *)(a2 + 16) = v5;
  return result;
}
