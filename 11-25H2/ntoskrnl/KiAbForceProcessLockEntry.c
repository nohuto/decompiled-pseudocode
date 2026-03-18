/*
 * XREFs of KiAbForceProcessLockEntry @ 0x14041A848
 * Callers:
 *     KeAbMarkCrossThreadReleasable @ 0x140292FF0 (KeAbMarkCrossThreadReleasable.c)
 * Callees:
 *     KiProcessDeferredReadyList @ 0x140285EA0 (KiProcessDeferredReadyList.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x1402E39A0 (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiAbIoBoostOwners @ 0x1402E61E0 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x1402E72F0 (KiAbCpuBoostOwners.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1402E83C0 (KiAbEntryGetLockedHeadEntry.c)
 *     EtwTraceAutoBoostProcessLockEntry @ 0x1402E8C88 (EtwTraceAutoBoostProcessLockEntry.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x1402E9DE0 (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbDetermineMinOwnerCpuPriority @ 0x14041A9F0 (KiAbDetermineMinOwnerCpuPriority.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x14041AA70 (KiAbTryIncrementIoWaiterCounts.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall KiAbForceProcessLockEntry(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v7; // r14
  __int64 v8; // r14
  _QWORD *LockedHeadEntry; // rax
  __int64 v10; // rsi
  int v11; // ebx
  signed __int8 CpuPriorityKey; // al
  int v13; // r10d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF
  signed __int8 v16; // [rsp+90h] [rbp+40h]
  int v17; // [rsp+98h] [rbp+48h] BYREF
  _QWORD *v18; // [rsp+A0h] [rbp+50h] BYREF

  v4 = a1;
  v18 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags != (unsigned __int8)v18 )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = *(_QWORD *)v4;
  v17 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v8 = v7 & 0x7FFFFFFFFFFFFFFCLL;
  if ( v8 && *(char *)(v4 + 8) >= 0 )
    v8 |= 0x8000000000000000uLL;
  LockedHeadEntry = KiAbEntryGetLockedHeadEntry(v4, 1LL, (__int64)&LockHandle, a4);
  v10 = (__int64)LockedHeadEntry;
  if ( !LockedHeadEntry )
  {
    v11 = 320;
    goto LABEL_19;
  }
  if ( !*(_BYTE *)(v4 + 9) )
  {
    v11 = 320;
    goto LABEL_18;
  }
  v11 = 328;
  if ( (_QWORD *)v4 != LockedHeadEntry )
  {
    KiAbEntryUpdateWaiterTreePosition(v4, (__int64)LockedHeadEntry);
    v11 = 360;
  }
  KiAbDetermineMinOwnerCpuPriority(v10, &v17);
  KiAbTryIncrementIoWaiterCounts(v4, v10);
  CpuPriorityKey = KiAbEntryGetCpuPriorityKey(v4);
  v16 = CpuPriorityKey;
  if ( (char)v17 >= CpuPriorityKey )
  {
    if ( !v13 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v11 |= 2u;
      goto LABEL_19;
    }
    goto LABEL_15;
  }
  if ( v13 )
  {
LABEL_15:
    KiAbIoBoostOwners(v10, v13, (__int64)&v18, 0LL, &CurrentPrcb->AbSelfIoBoostsList.Next);
    CpuPriorityKey = v16;
  }
  KiAbCpuBoostOwners(v10, CpuPriorityKey, (__int64)&v18, 0LL, &CurrentPrcb->AbSelfIoBoostsList.Next);
LABEL_18:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_19:
  if ( (WORD2(xmmword_140FC5B10) & 0x1000) != 0 )
    EtwTraceAutoBoostProcessLockEntry(*(_QWORD *)(v4 - 88LL * (*(_BYTE *)(v4 + 8) & 0x3F) - 16), v8, v11);
  return KiProcessDeferredReadyList(CurrentPrcb, &v18, CurrentIrql);
}
