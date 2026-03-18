/*
 * XREFs of CmpDereferenceKeyControlBlockWithLock @ 0x14087DE20
 * Callers:
 *     CmpDrainDelayDerefContext @ 0x14041AEB0 (CmpDrainDelayDerefContext.c)
 *     CmRenameKey @ 0x1407D9068 (CmRenameKey.c)
 *     CmpUnfreezeHive @ 0x1407DA898 (CmpUnfreezeHive.c)
 *     CmpCleanupDiscardReplacePost @ 0x1407E1110 (CmpCleanupDiscardReplacePost.c)
 *     CmpPrepareDiscardReplacePost @ 0x1407E1340 (CmpPrepareDiscardReplacePost.c)
 *     CmpCommitDiscardReplacePost @ 0x140870A94 (CmpCommitDiscardReplacePost.c)
 *     CmpTransMgrFreeVolatileData @ 0x14087B284 (CmpTransMgrFreeVolatileData.c)
 * Callees:
 *     ExFreeToLookasideListEx @ 0x1402CD350 (ExFreeToLookasideListEx.c)
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     CmpFreeTransientPoolWithTag @ 0x140441FC0 (CmpFreeTransientPoolWithTag.c)
 *     ExpAcquireFastMutexContended @ 0x1404489B8 (ExpAcquireFastMutexContended.c)
 *     CmpArmDelayedCloseTimer @ 0x14045A060 (CmpArmDelayedCloseTimer.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     CmpDereferenceHive @ 0x1408443C0 (CmpDereferenceHive.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1408704E0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x140870E00 (CmpDereferenceNameControlBlockWithLock.c)
 *     EtwpTraceRegistry @ 0x140870F40 (EtwpTraceRegistry.c)
 *     CmpConstructName @ 0x1408763E0 (CmpConstructName.c)
 *     CmpDelayDerefKeyControlBlock @ 0x14087E570 (CmpDelayDerefKeyControlBlock.c)
 *     CmpDoQueueLateUnloadWorker @ 0x14087E638 (CmpDoQueueLateUnloadWorker.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x14097C944 (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x14097CA14 (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpRemoveKeyHashFromDeletedKcbTable @ 0x1409E58BC (CmpRemoveKeyHashFromDeletedKcbTable.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     CmpAttachToRegistryProcess @ 0x140BB98E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BB9920 (CmpDetachFromRegistryProcess.c)
 */

void __fastcall CmpDereferenceKeyControlBlockWithLock(ULONG_PTR BugCheckParameter2, __int64 a2, char a3)
{
  __int64 v5; // rcx
  signed __int64 v7; // rax
  int v8; // r8d
  bool v9; // cl
  bool v10; // dl
  _QWORD *v11; // rdi
  __int64 v12; // r8
  unsigned __int8 CurrentIrql; // si
  __int64 *v14; // rax
  ULONG_PTR v15; // rsi
  void (__fastcall *v16)(unsigned __int8, __int64, int, int, __int64, __int64); // rdi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  void *v21; // rbp
  _QWORD *v22; // rcx
  ULONG_PTR v23; // rdi
  _DWORD *v24; // r14
  __int64 *i; // rdx
  __int64 v26; // rax
  __int64 v27; // r8
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  __int64 *v30; // rax
  unsigned __int64 v31; // r9
  bool v32; // r10
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // r8
  __int64 *v37; // rax
  __int64 **v38; // rcx
  unsigned __int64 v39; // r9
  bool v40; // r10
  unsigned __int64 v41; // rax
  void *v42; // rcx
  unsigned __int64 v43; // rcx
  int v44; // eax
  __int64 **v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rdx
  _QWORD *v49; // rax
  __int64 v50; // rdi
  struct _KTHREAD *CurrentThread; // rax
  _OWORD v52[2]; // [rsp+40h] [rbp-88h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-68h] BYREF

  v5 = *(_QWORD *)(BugCheckParameter2 + 32);
  v7 = _InterlockedDecrement64((volatile signed __int64 *)BugCheckParameter2);
  if ( v7 == 2 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 184) & 0x40000) != 0 && *(_BYTE *)(v5 + 2944) == 1 )
      CmpDoQueueLateUnloadWorker(v5);
    return;
  }
  if ( v7 )
    return;
  if ( (*(_DWORD *)(BugCheckParameter2 + 184) & 0x40000) != 0 )
  {
    v50 = *(_QWORD *)(BugCheckParameter2 + 32);
    CmpCleanUpKcbCacheWithLock(BugCheckParameter2, a2);
    CurrentThread = KeGetCurrentThread();
    *(_DWORD *)(v50 + 160) |= 0x80u;
    *(_QWORD *)(v50 + 4176) = CurrentThread;
    *(_DWORD *)(v50 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v50 + 4236), 1u) & 0x7F) + 4240) = 31;
    if ( (*(_DWORD *)(v50 + 160) & 0x20) == 0 )
      CmpDereferenceHive((volatile signed __int32 *)v50);
    return;
  }
  v8 = *(_DWORD *)(BugCheckParameter2 + 8);
  v9 = 0;
  v10 = 0;
  if ( (v8 & 0x20000) == 0 )
    v9 = a3 == 0;
  if ( (v8 & 0x20) == 0 )
    v10 = v9;
  if ( (!CmpHoldLazyFlush
     || (*(_DWORD *)(BugCheckParameter2 + 184) & 0x100000) != 0
     || (*(_DWORD *)(BugCheckParameter2 + 8) & 8) != 0)
    && v10 )
  {
    v11 = KeAbPreAcquire((__int64)&CmpDelayedCloseTableLock, 0LL);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 1);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayedCloseTableLock, 0) )
      ExpAcquireFastMutexContended((__int64)&CmpDelayedCloseTableLock, (__int64)v11, v12);
    if ( v11 )
      *((_BYTE *)v11 + 10) = 1;
    CmpDelayedCloseTableLock.Owner = KeGetCurrentThread();
    CmpDelayedCloseTableLock.OldIrql = CurrentIrql;
    v14 = (__int64 *)(BugCheckParameter2 + 224);
    if ( (__int64 *)*v14 != v14 )
      KeBugCheckEx(0x51u, 0x34uLL, BugCheckParameter2, 0LL, 0LL);
    v46 = CmpDelayedLRUListHead;
    if ( *(__int64 **)(CmpDelayedLRUListHead + 8) == &CmpDelayedLRUListHead )
    {
      *(_QWORD *)(BugCheckParameter2 + 232) = &CmpDelayedLRUListHead;
      *v14 = v46;
      *(_QWORD *)(v46 + 8) = v14;
      CmpDelayedLRUListHead = BugCheckParameter2 + 224;
      v44 = CmpDelayedCloseElements;
      *(_BYTE *)(BugCheckParameter2 + 64) |= 2u;
      ++qword_140FD9418;
      CmpDelayedCloseElements = v44 + 1;
      if ( v44 + 1 <= (unsigned int)CmpDelayedCloseSize )
      {
        KeReleaseGuardedMutex(&CmpDelayedCloseTableLock);
      }
      else
      {
        KeReleaseGuardedMutex(&CmpDelayedCloseTableLock);
        CmpArmDelayedCloseTimer();
      }
      return;
    }
    goto LABEL_55;
  }
  v15 = 0LL;
  if ( *(_QWORD *)BugCheckParameter2 )
    goto LABEL_62;
  v16 = (void (__fastcall *)(unsigned __int8, __int64, int, int, __int64, __int64))CmpTraceRoutine;
  if ( CmpTraceRoutine )
  {
    memset(v52, 0, sizeof(v52));
    memset(&ApcState, 0, sizeof(ApcState));
    CmpAttachToRegistryProcess(&ApcState);
    v21 = (void *)CmpConstructName(BugCheckParameter2, v17, v18, v19);
    if ( v21 )
    {
      LOBYTE(v20) = 23;
      if ( v16 == EtwpTraceRegistry )
        EtwpTraceRegistry(0x17u, (__int64)v52, 0, 0, BugCheckParameter2, (__int64)v21);
      else
        guard_dispatch_icall_no_overrides(v20, v52, 0LL, 0LL);
      CmpFreeTransientPoolWithTag(v21, 0x624E4D43u);
    }
    CmpDetachFromRegistryProcess(&ApcState);
  }
  if ( (*(_WORD *)(BugCheckParameter2 + 186) & 0x40) == 0 && (*(_BYTE *)(BugCheckParameter2 + 8) & 8) != 0 )
  {
    CmpDelayDerefKeyControlBlock(*(_QWORD *)(BugCheckParameter2 + 104));
    *(_QWORD *)(BugCheckParameter2 + 104) = 0LL;
    *(_WORD *)(BugCheckParameter2 + 8) &= ~8u;
  }
  CmpDereferenceNameControlBlockWithLock(*(_WORD **)(BugCheckParameter2 + 80));
  if ( (*(_DWORD *)(BugCheckParameter2 + 8) & 4) != 0 )
    ExFreePoolWithTag(*(PVOID *)(BugCheckParameter2 + 112), 0x6E494D43u);
  v22 = *(_QWORD **)(BugCheckParameter2 + 192);
  if ( v22 )
  {
    v47 = v22[3];
    if ( v47 )
    {
      v48 = *v22;
      v15 = *(_QWORD *)(v47 + 16);
      if ( *(_QWORD **)(*v22 + 8LL) != v22 )
        goto LABEL_55;
      v49 = (_QWORD *)v22[1];
      if ( (_QWORD *)*v49 != v22 )
        goto LABEL_55;
      *v49 = v48;
      *(_QWORD *)(v48 + 8) = v49;
    }
    ExFreePoolWithTag(v22, 0);
    *(_QWORD *)(BugCheckParameter2 + 192) = 0LL;
  }
  v23 = *(_QWORD *)(BugCheckParameter2 + 72);
  v24 = (_DWORD *)(BugCheckParameter2 + 16);
  if ( (*(_DWORD *)(BugCheckParameter2 + 8) & 0x20000) != 0 )
  {
    CmpLockDeletedHashEntryExclusiveByKcb(BugCheckParameter2);
    CmpRemoveKeyHashFromDeletedKcbTable(*(_QWORD *)(BugCheckParameter2 + 32), BugCheckParameter2 + 16);
    CmpUnlockDeletedHashEntryByKcb(BugCheckParameter2);
  }
  else
  {
    for ( i = (__int64 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 32) + 1648LL)
                        + 8
                        * (3
                         * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 32) + 1656LL) - 1) & ((unsigned int)(101027 * (*v24 ^ (*v24 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*v24 ^ (*v24 >> 9))) >> 9)))
                         + 2)); i; i = (__int64 *)(v26 + 8) )
    {
      v26 = *i;
      if ( !*i )
        break;
      if ( (_DWORD *)v26 == v24 )
      {
        *i = *(_QWORD *)(v26 + 8);
        break;
      }
    }
  }
  *(_DWORD *)(BugCheckParameter2 + 8) |= 0x80000u;
  if ( !v15 )
    goto LABEL_50;
  v27 = *(_QWORD *)(v15 + 32);
  v28 = *(_QWORD *)v15;
  do
  {
    v29 = v28;
    if ( v28 <= 1 )
    {
      v30 = (__int64 *)(v15 + 224);
      if ( (__int64 *)*v30 != v30 )
        KeBugCheckEx(0x51u, 0x34uLL, v15, 1uLL, 0LL);
      v45 = *(__int64 ***)(a2 + 8);
      if ( *v45 == (__int64 *)a2 )
      {
        *v30 = a2;
        *(_QWORD *)(v15 + 232) = v45;
        *v45 = v30;
        *(_QWORD *)(a2 + 8) = v30;
        *(_BYTE *)(v15 + 64) |= 1u;
        goto LABEL_50;
      }
LABEL_55:
      __fastfail(3u);
    }
    v31 = v28 - 1;
    v32 = v28 == 3 && (*(_DWORD *)(v15 + 184) & 0x40000) != 0 && *(_BYTE *)(v27 + 2944) == 1;
    v33 = _InterlockedCompareExchange64((volatile signed __int64 *)v15, v31, v28);
    v28 = v33;
  }
  while ( v33 != v29 );
  if ( v33 < v31 )
    KeBugCheckEx(0x51u, 0x25uLL, v15, 0LL, 0LL);
  if ( v32 )
    CmpDoQueueLateUnloadWorker(v27);
LABEL_50:
  if ( !v23 )
    goto LABEL_62;
  v34 = *(_QWORD *)(v23 + 32);
  v35 = *(_QWORD *)v23;
  while ( 2 )
  {
    v36 = v35;
    if ( v35 <= 1 )
    {
      v37 = (__int64 *)(v23 + 224);
      if ( (__int64 *)*v37 != v37 )
        KeBugCheckEx(0x51u, 0x34uLL, v23, 1uLL, 0LL);
      v38 = *(__int64 ***)(a2 + 8);
      if ( *v38 == (__int64 *)a2 )
      {
        *v37 = a2;
        *(_QWORD *)(v23 + 232) = v38;
        *v38 = v37;
        *(_QWORD *)(a2 + 8) = v37;
        *(_BYTE *)(v23 + 64) |= 1u;
        goto LABEL_62;
      }
      goto LABEL_55;
    }
    v39 = v35 - 1;
    v40 = v35 == 3 && (*(_DWORD *)(v23 + 184) & 0x40000) != 0 && *(_BYTE *)(v34 + 2944) == 1;
    v41 = _InterlockedCompareExchange64((volatile signed __int64 *)v23, v39, v35);
    v35 = v41;
    if ( v41 != v36 )
      continue;
    break;
  }
  if ( v41 < v39 )
    KeBugCheckEx(0x51u, 0x25uLL, v23, 0LL, 0LL);
  if ( v40 )
    CmpDoQueueLateUnloadWorker(v34);
LABEL_62:
  if ( *(struct _KTHREAD **)(BugCheckParameter2 + 56) != KeGetCurrentThread()
    && (*(_DWORD *)(BugCheckParameter2 + 8) & 0x80000) != 0 )
  {
    _InterlockedDecrement64(&CmPerfCounters);
    if ( *(_QWORD *)(BugCheckParameter2 + 120) != BugCheckParameter2 + 120 )
      KeBugCheckEx(0x51u, 0x11uLL, BugCheckParameter2, 0LL, 0LL);
    if ( (*(_DWORD *)(BugCheckParameter2 + 8) & 0x10000) != 0 )
      KeBugCheckEx(0x51u, 0x11uLL, BugCheckParameter2, 1uLL, 0LL);
    v42 = *(void **)(BugCheckParameter2 + 200);
    if ( (unsigned __int64)v42 >= 2 )
      ExFreePoolWithTag(v42, 0x624E4D43u);
    v43 = *(_QWORD *)(BugCheckParameter2 + 296);
    if ( (v43 & 1) != 0 )
      v43 &= ~1uLL;
    if ( v43 )
      CmpFreeTransientPoolWithTag((void *)v43, 0x624E4D43u);
    *(_DWORD *)(BugCheckParameter2 + 8) |= 0x10000u;
    *(_QWORD *)(BugCheckParameter2 + 32) = 0LL;
    ExFreeToLookasideListEx(&CmpKcbLookaside, (PVOID)BugCheckParameter2);
    _InterlockedDecrement64(qword_140FD9430);
  }
}
