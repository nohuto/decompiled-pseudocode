/*
 * XREFs of ExpConvertFastResourceExclusiveToShared @ 0x1403D75C8
 * Callers:
 *     ExConvertFastResourceExclusiveToShared @ 0x1403D6EE0 (ExConvertFastResourceExclusiveToShared.c)
 *     ExpFastResourceLegacyConvertExclusiveToShared @ 0x1403D74B8 (ExpFastResourceLegacyConvertExclusiveToShared.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402D84E0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x140321BB0 (KxReleaseQueuedSpinLock.c)
 *     ExpUpdateLockWordForRelease @ 0x1403D7440 (ExpUpdateLockWordForRelease.c)
 *     KeWakeWaitChain @ 0x1403D7B10 (KeWakeWaitChain.c)
 *     ExpRemoveFastOwnerEntryFromThreadList @ 0x1403D8640 (ExpRemoveFastOwnerEntryFromThreadList.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall ExpConvertFastResourceExclusiveToShared(__int64 a1, unsigned __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 *p_LastXStateSaveDebugInfo; // rax
  struct _KTHREAD **SparePtr; // rcx
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentThread = KeGetCurrentThread();
  v4 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags != LockHandle.OldIrql )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  --*(_DWORD *)(v4 + 96);
  ExpRemoveFastOwnerEntryFromThreadList(v4 + 64);
  *(_BYTE *)(a2 + 37) &= ~2u;
  *(_DWORD *)(a2 + 32) = 1;
  *(_QWORD *)(a2 + 24) = v4;
  *(_BYTE *)(a2 + 36) = *(_BYTE *)(v4 + 100);
  p_LastXStateSaveDebugInfo = &CurrentThread[1].LastXStateSaveDebugInfo;
  *(_BYTE *)(v4 + 100) = 0;
  SparePtr = (struct _KTHREAD **)CurrentThread[1].WaitBlock[3].SparePtr;
  if ( SparePtr[1] != (struct _KTHREAD *)&CurrentThread[1].LastXStateSaveDebugInfo )
    __fastfail(3u);
  *(_QWORD *)a2 = SparePtr;
  *(_QWORD *)(a2 + 8) = p_LastXStateSaveDebugInfo;
  SparePtr[1] = (struct _KTHREAD *)a2;
  *p_LastXStateSaveDebugInfo = a2;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 48), &LockHandle);
  *(_QWORD *)(v4 + 80) = 0LL;
  v8 = *(_QWORD *)(v4 + 8);
  *(_QWORD *)(v4 + 8) = 0LL;
  v9 = *(_DWORD *)(v4 + 56);
  *(_DWORD *)(v4 + 56) = 0;
  v14 = v8;
  ExpUpdateLockWordForRelease((signed __int64 *)v4, v9 + 1, 1);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle, v10);
  KeWakeWaitChain(&v14, 0LL, 0LL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v11) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
