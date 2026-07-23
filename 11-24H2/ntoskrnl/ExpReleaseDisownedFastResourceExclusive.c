/*
 * XREFs of ExpReleaseDisownedFastResourceExclusive @ 0x1402F1C00
 * Callers:
 *     ExReleaseDisownedFastResource @ 0x1402F19C0 (ExReleaseDisownedFastResource.c)
 *     ExReleaseDisownedFastResourceExclusive @ 0x140654E30 (ExReleaseDisownedFastResourceExclusive.c)
 *     ExReleaseDisownedFastResourceShared @ 0x140654F20 (ExReleaseDisownedFastResourceShared.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExpCommitWakeFastResource @ 0x1402F1EF0 (ExpCommitWakeFastResource.c)
 *     ExpRemoveFastOwnerEntryFromThreadList @ 0x1402F2120 (ExpRemoveFastOwnerEntryFromThreadList.c)
 *     KeAbCrossThreadRelease @ 0x1402F2154 (KeAbCrossThreadRelease.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140359760 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     ExpPrepareToWakeFastResourceExclusive @ 0x140410140 (ExpPrepareToWakeFastResourceExclusive.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
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
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // [rsp+30h] [rbp-20h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v15; // [rsp+98h] [rbp+48h] BYREF
  int v16; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+58h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 36);
  v17 = 0LL;
  v13 = 0LL;
  v16 = 0;
  v4 = a1;
  v15 = 0;
  v5 = *(_DWORD *)(a2 + 32);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v5 < 2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
    }
    v8 = (KSPIN_LOCK *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFEuLL);
    KxAcquireSpinLock(v8 + 217);
    ExpRemoveFastOwnerEntryFromThreadList(a2);
    KxReleaseSpinLock((volatile signed __int64 *)v8 + 217);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 48), &LockHandle);
    *(_QWORD *)(a2 + 16) = 0LL;
    --*(_DWORD *)(a2 + 32);
    *(_BYTE *)(a2 + 36) = 0;
    ExpPrepareToWakeFastResourceExclusive(v4, (unsigned int)&v17, (unsigned int)&v13, (unsigned int)&v16, (__int64)&v15);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle, v9);
    ExpCommitWakeFastResource(&v17, v10, v11, v15);
    if ( KiIrqlFlags )
    {
      LOBYTE(v12) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
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
