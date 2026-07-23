/*
 * XREFs of ExpReleaseDisownedFastResourceShared @ 0x1402F1AC8
 * Callers:
 *     ExReleaseDisownedFastResource @ 0x1402F19C0 (ExReleaseDisownedFastResource.c)
 *     ExReleaseDisownedFastResourceShared @ 0x140654F20 (ExReleaseDisownedFastResourceShared.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExpPrepareToWakeFastResourceShared @ 0x1402F1D30 (ExpPrepareToWakeFastResourceShared.c)
 *     ExpCommitWakeFastResource @ 0x1402F1EF0 (ExpCommitWakeFastResource.c)
 *     ExpRemoveFastOwnerEntryFromThreadList @ 0x1402F2120 (ExpRemoveFastOwnerEntryFromThreadList.c)
 *     KeAbCrossThreadRelease @ 0x1402F2154 (KeAbCrossThreadRelease.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140359760 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

LONG_PTR __fastcall ExpReleaseDisownedFastResourceShared(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  LONG_PTR result; // rax
  KSPIN_LOCK *v5; // rsi
  __int64 v6; // r15
  unsigned __int8 CurrentIrql; // r14
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v13; // [rsp+30h] [rbp-20h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v15; // [rsp+88h] [rbp+38h] BYREF
  int v16; // [rsp+90h] [rbp+40h] BYREF
  __int64 v17; // [rsp+98h] [rbp+48h] BYREF

  v2 = *(_QWORD *)(a2 + 16);
  result = 0LL;
  v17 = 0LL;
  v13 = 0LL;
  v5 = (KSPIN_LOCK *)(v2 & 0xFFFFFFFFFFFFFFFEuLL);
  v16 = 0;
  v15 = 0;
  v6 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *(int *)(a2 + 32) < 2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 48), &LockHandle);
    ExpPrepareToWakeFastResourceShared(v6, (unsigned int)&v17, (unsigned int)&v13, (unsigned int)&v16, (__int64)&v15);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle, v8);
    KxAcquireSpinLock(v5 + 217);
    ExpRemoveFastOwnerEntryFromThreadList(a2);
    *(_QWORD *)(a2 + 24) = 0LL;
    KxReleaseSpinLock((volatile signed __int64 *)v5 + 217);
    ExpCommitWakeFastResource(&v17, v9, v10, v15);
    if ( KiIrqlFlags )
    {
      LOBYTE(v11) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
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
