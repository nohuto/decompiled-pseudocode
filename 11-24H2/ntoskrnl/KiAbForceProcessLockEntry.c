/*
 * XREFs of KiAbForceProcessLockEntry @ 0x1404183E4
 * Callers:
 *     KeAbMarkCrossThreadReleasable @ 0x1403DD90C (KeAbMarkCrossThreadReleasable.c)
 * Callees:
 *     KiAbIoBoostOwners @ 0x14024EA60 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x14024F2F0 (KiAbCpuBoostOwners.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140250050 (KiAbEntryGetLockedHeadEntry.c)
 *     EtwTraceAutoBoostProcessLockEntry @ 0x140250910 (EtwTraceAutoBoostProcessLockEntry.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x140251A80 (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x1402BF020 (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiProcessDeferredReadyList @ 0x14031D3D0 (KiProcessDeferredReadyList.c)
 *     KxReleaseQueuedSpinLock @ 0x140321BB0 (KxReleaseQueuedSpinLock.c)
 *     KiAbDetermineMinOwnerCpuPriority @ 0x140418590 (KiAbDetermineMinOwnerCpuPriority.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x140418610 (KiAbTryIncrementIoWaiterCounts.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall KiAbForceProcessLockEntry(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v5; // r14
  __int64 v6; // r14
  _QWORD *LockedHeadEntry; // rax
  __int64 v8; // rdx
  __int64 v9; // rsi
  int v10; // ebx
  char CpuPriorityKey; // al
  __int64 v12; // rdx
  unsigned int v13; // r10d
  __int128 v15; // [rsp+30h] [rbp-20h] BYREF
  __int64 v16; // [rsp+40h] [rbp-10h]
  char v17; // [rsp+90h] [rbp+40h]
  int v18; // [rsp+98h] [rbp+48h] BYREF
  _QWORD *v19; // [rsp+A0h] [rbp+50h] BYREF

  v2 = a1;
  v19 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags != (unsigned __int8)v19 )
  {
    LOBYTE(a2) = 2;
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, a2);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = *(_QWORD *)v2;
  v16 = 0LL;
  v18 = 0;
  v15 = 0LL;
  v6 = v5 & 0x7FFFFFFFFFFFFFFCLL;
  if ( v6 && *(char *)(v2 + 8) >= 0 )
    v6 |= 0x8000000000000000uLL;
  LockedHeadEntry = KiAbEntryGetLockedHeadEntry(v2, 1LL, (__int64)&v15);
  v9 = (__int64)LockedHeadEntry;
  if ( !LockedHeadEntry )
  {
    v10 = 320;
    goto LABEL_19;
  }
  if ( !*(_BYTE *)(v2 + 9) )
  {
    v10 = 320;
    goto LABEL_18;
  }
  v10 = 328;
  if ( (_QWORD *)v2 != LockedHeadEntry )
  {
    KiAbEntryUpdateWaiterTreePosition(v2, (__int64)LockedHeadEntry);
    v10 = 360;
  }
  KiAbDetermineMinOwnerCpuPriority(v9, &v18);
  KiAbTryIncrementIoWaiterCounts(v2, v9);
  CpuPriorityKey = KiAbEntryGetCpuPriorityKey(v2);
  v17 = CpuPriorityKey;
  if ( (char)v18 >= CpuPriorityKey )
  {
    if ( !v13 )
    {
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&v15, v12);
      v10 |= 2u;
      goto LABEL_19;
    }
    goto LABEL_15;
  }
  if ( v13 )
  {
LABEL_15:
    KiAbIoBoostOwners(v9, v13, (__int64)&v19, 0LL, &CurrentPrcb->AbSelfIoBoostsList.Next);
    CpuPriorityKey = v17;
  }
  LOBYTE(v12) = CpuPriorityKey;
  KiAbCpuBoostOwners(v9, v12, (__int64)&v19, 0LL, &CurrentPrcb->AbSelfIoBoostsList.Next);
LABEL_18:
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v15, v8);
LABEL_19:
  if ( (WORD2(xmmword_140FC5B10) & 0x1000) != 0 )
    EtwTraceAutoBoostProcessLockEntry(*(_QWORD *)(v2 - 88LL * (*(_BYTE *)(v2 + 8) & 0x3F) - 16), v6, v10);
  return KiProcessDeferredReadyList(CurrentPrcb, &v19, CurrentIrql);
}
