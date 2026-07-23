/*
 * XREFs of CmpDereferenceKeyControlBlockWithLock @ 0x140881CD0
 * Callers:
 *     CmpDrainDelayDerefContext @ 0x14040AEB0 (CmpDrainDelayDerefContext.c)
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 *     CmpUnfreezeHive @ 0x1407DADE8 (CmpUnfreezeHive.c)
 *     CmpCleanupDiscardReplacePost @ 0x1407E1660 (CmpCleanupDiscardReplacePost.c)
 *     CmpPrepareDiscardReplacePost @ 0x1407E1890 (CmpPrepareDiscardReplacePost.c)
 *     CmpCommitDiscardReplacePost @ 0x140874DC4 (CmpCommitDiscardReplacePost.c)
 *     CmpTransMgrFreeVolatileData @ 0x14087F134 (CmpTransMgrFreeVolatileData.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExFreeToLookasideListEx @ 0x1402E6050 (ExFreeToLookasideListEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     CmpFreeTransientPoolWithTag @ 0x140438B90 (CmpFreeTransientPoolWithTag.c)
 *     ExpAcquireFastMutexContended @ 0x140441108 (ExpAcquireFastMutexContended.c)
 *     CmpArmDelayedCloseTimer @ 0x14044F4B0 (CmpArmDelayedCloseTimer.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     CmpDereferenceHive @ 0x140840680 (CmpDereferenceHive.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x140874810 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x140875130 (CmpDereferenceNameControlBlockWithLock.c)
 *     EtwpTraceRegistry @ 0x140875270 (EtwpTraceRegistry.c)
 *     CmpConstructName @ 0x14087A710 (CmpConstructName.c)
 *     CmpDelayDerefKeyControlBlock @ 0x140882420 (CmpDelayDerefKeyControlBlock.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1408824E8 (CmpDoQueueLateUnloadWorker.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x140965154 (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x140965224 (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpRemoveKeyHashFromDeletedKcbTable @ 0x1409E014C (CmpRemoveKeyHashFromDeletedKcbTable.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BBB920 (CmpDetachFromRegistryProcess.c)
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
  __int64 v14; // r9
  __int64 *v15; // rax
  ULONG_PTR v16; // rsi
  void (__fastcall *v17)(unsigned __int8, __int64, int, int, __int64, __int64); // rdi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  void *v22; // rbp
  _QWORD *v23; // rcx
  ULONG_PTR v24; // rdi
  _DWORD *v25; // r14
  __int64 *i; // rdx
  __int64 v27; // rax
  __int64 v28; // r8
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  __int64 *v31; // rax
  unsigned __int64 v32; // r9
  bool v33; // r10
  unsigned __int64 v34; // rax
  __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // r8
  __int64 *v38; // rax
  __int64 **v39; // rcx
  unsigned __int64 v40; // r9
  bool v41; // r10
  unsigned __int64 v42; // rax
  void *v43; // rcx
  unsigned __int64 v44; // rcx
  int v45; // eax
  __int64 **v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rdx
  _QWORD *v50; // rax
  __int64 v51; // rdi
  struct _KTHREAD *CurrentThread; // rax
  _OWORD v53[2]; // [rsp+40h] [rbp-88h] BYREF
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
    v51 = *(_QWORD *)(BugCheckParameter2 + 32);
    CmpCleanUpKcbCacheWithLock(BugCheckParameter2, a2);
    CurrentThread = KeGetCurrentThread();
    *(_DWORD *)(v51 + 160) |= 0x80u;
    *(_QWORD *)(v51 + 4176) = CurrentThread;
    *(_DWORD *)(v51 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v51 + 4236), 1u) & 0x7F) + 4240) = 31;
    if ( (*(_DWORD *)(v51 + 160) & 0x20) == 0 )
      CmpDereferenceHive((volatile signed __int32 *)v51);
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
    v14 = 1LL;
    __writecr8(1uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 1);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayedCloseTableLock, 0) )
      ExpAcquireFastMutexContended((__int64)&CmpDelayedCloseTableLock, (__int64)v11, v12, v14);
    if ( v11 )
      *((_BYTE *)v11 + 10) = 1;
    CmpDelayedCloseTableLock.Owner = KeGetCurrentThread();
    CmpDelayedCloseTableLock.OldIrql = CurrentIrql;
    v15 = (__int64 *)(BugCheckParameter2 + 224);
    if ( (__int64 *)*v15 != v15 )
      KeBugCheckEx(0x51u, 0x34uLL, BugCheckParameter2, 0LL, 0LL);
    v47 = CmpDelayedLRUListHead;
    if ( *(__int64 **)(CmpDelayedLRUListHead + 8) == &CmpDelayedLRUListHead )
    {
      *(_QWORD *)(BugCheckParameter2 + 232) = &CmpDelayedLRUListHead;
      *v15 = v47;
      *(_QWORD *)(v47 + 8) = v15;
      CmpDelayedLRUListHead = BugCheckParameter2 + 224;
      v45 = CmpDelayedCloseElements;
      *(_BYTE *)(BugCheckParameter2 + 64) |= 2u;
      ++qword_140FDA428;
      CmpDelayedCloseElements = v45 + 1;
      if ( v45 + 1 <= (unsigned int)CmpDelayedCloseSize )
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
  v16 = 0LL;
  if ( *(_QWORD *)BugCheckParameter2 )
    goto LABEL_62;
  v17 = (void (__fastcall *)(unsigned __int8, __int64, int, int, __int64, __int64))CmpTraceRoutine;
  if ( CmpTraceRoutine )
  {
    memset(v53, 0, sizeof(v53));
    memset(&ApcState, 0, sizeof(ApcState));
    CmpAttachToRegistryProcess(&ApcState);
    v22 = (void *)CmpConstructName(BugCheckParameter2, v18, v19, v20);
    if ( v22 )
    {
      LOBYTE(v21) = 23;
      if ( v17 == EtwpTraceRegistry )
        EtwpTraceRegistry(0x17u, (__int64)v53, 0, 0, BugCheckParameter2, (__int64)v22);
      else
        guard_dispatch_icall_no_overrides(v21, v53);
      CmpFreeTransientPoolWithTag(v22, 0x624E4D43u);
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
  v23 = *(_QWORD **)(BugCheckParameter2 + 192);
  if ( v23 )
  {
    v48 = v23[3];
    if ( v48 )
    {
      v49 = *v23;
      v16 = *(_QWORD *)(v48 + 16);
      if ( *(_QWORD **)(*v23 + 8LL) != v23 )
        goto LABEL_55;
      v50 = (_QWORD *)v23[1];
      if ( (_QWORD *)*v50 != v23 )
        goto LABEL_55;
      *v50 = v49;
      *(_QWORD *)(v49 + 8) = v50;
    }
    ExFreePoolWithTag(v23, 0);
    *(_QWORD *)(BugCheckParameter2 + 192) = 0LL;
  }
  v24 = *(_QWORD *)(BugCheckParameter2 + 72);
  v25 = (_DWORD *)(BugCheckParameter2 + 16);
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
                         * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 32) + 1656LL) - 1) & ((unsigned int)(101027 * (*v25 ^ (*v25 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*v25 ^ (*v25 >> 9))) >> 9)))
                         + 2)); i; i = (__int64 *)(v27 + 8) )
    {
      v27 = *i;
      if ( !*i )
        break;
      if ( (_DWORD *)v27 == v25 )
      {
        *i = *(_QWORD *)(v27 + 8);
        break;
      }
    }
  }
  *(_DWORD *)(BugCheckParameter2 + 8) |= 0x80000u;
  if ( !v16 )
    goto LABEL_50;
  v28 = *(_QWORD *)(v16 + 32);
  v29 = *(_QWORD *)v16;
  do
  {
    v30 = v29;
    if ( v29 <= 1 )
    {
      v31 = (__int64 *)(v16 + 224);
      if ( (__int64 *)*v31 != v31 )
        KeBugCheckEx(0x51u, 0x34uLL, v16, 1uLL, 0LL);
      v46 = *(__int64 ***)(a2 + 8);
      if ( *v46 == (__int64 *)a2 )
      {
        *v31 = a2;
        *(_QWORD *)(v16 + 232) = v46;
        *v46 = v31;
        *(_QWORD *)(a2 + 8) = v31;
        *(_BYTE *)(v16 + 64) |= 1u;
        goto LABEL_50;
      }
LABEL_55:
      __fastfail(3u);
    }
    v32 = v29 - 1;
    v33 = v29 == 3 && (*(_DWORD *)(v16 + 184) & 0x40000) != 0 && *(_BYTE *)(v28 + 2944) == 1;
    v34 = _InterlockedCompareExchange64((volatile signed __int64 *)v16, v32, v29);
    v29 = v34;
  }
  while ( v34 != v30 );
  if ( v34 < v32 )
    KeBugCheckEx(0x51u, 0x25uLL, v16, 0LL, 0LL);
  if ( v33 )
    CmpDoQueueLateUnloadWorker(v28);
LABEL_50:
  if ( !v24 )
    goto LABEL_62;
  v35 = *(_QWORD *)(v24 + 32);
  v36 = *(_QWORD *)v24;
  while ( 2 )
  {
    v37 = v36;
    if ( v36 <= 1 )
    {
      v38 = (__int64 *)(v24 + 224);
      if ( (__int64 *)*v38 != v38 )
        KeBugCheckEx(0x51u, 0x34uLL, v24, 1uLL, 0LL);
      v39 = *(__int64 ***)(a2 + 8);
      if ( *v39 == (__int64 *)a2 )
      {
        *v38 = a2;
        *(_QWORD *)(v24 + 232) = v39;
        *v39 = v38;
        *(_QWORD *)(a2 + 8) = v38;
        *(_BYTE *)(v24 + 64) |= 1u;
        goto LABEL_62;
      }
      goto LABEL_55;
    }
    v40 = v36 - 1;
    v41 = v36 == 3 && (*(_DWORD *)(v24 + 184) & 0x40000) != 0 && *(_BYTE *)(v35 + 2944) == 1;
    v42 = _InterlockedCompareExchange64((volatile signed __int64 *)v24, v40, v36);
    v36 = v42;
    if ( v42 != v37 )
      continue;
    break;
  }
  if ( v42 < v40 )
    KeBugCheckEx(0x51u, 0x25uLL, v24, 0LL, 0LL);
  if ( v41 )
    CmpDoQueueLateUnloadWorker(v35);
LABEL_62:
  if ( *(struct _KTHREAD **)(BugCheckParameter2 + 56) != KeGetCurrentThread()
    && (*(_DWORD *)(BugCheckParameter2 + 8) & 0x80000) != 0 )
  {
    _InterlockedDecrement64(&CmPerfCounters);
    if ( *(_QWORD *)(BugCheckParameter2 + 120) != BugCheckParameter2 + 120 )
      KeBugCheckEx(0x51u, 0x11uLL, BugCheckParameter2, 0LL, 0LL);
    if ( (*(_DWORD *)(BugCheckParameter2 + 8) & 0x10000) != 0 )
      KeBugCheckEx(0x51u, 0x11uLL, BugCheckParameter2, 1uLL, 0LL);
    v43 = *(void **)(BugCheckParameter2 + 200);
    if ( (unsigned __int64)v43 >= 2 )
      ExFreePoolWithTag(v43, 0x624E4D43u);
    v44 = *(_QWORD *)(BugCheckParameter2 + 296);
    if ( (v44 & 1) != 0 )
      v44 &= ~1uLL;
    if ( v44 )
      CmpFreeTransientPoolWithTag((void *)v44, 0x624E4D43u);
    *(_DWORD *)(BugCheckParameter2 + 8) |= 0x10000u;
    *(_QWORD *)(BugCheckParameter2 + 32) = 0LL;
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)&CmpKcbLookaside, (PVOID)BugCheckParameter2);
    _InterlockedDecrement64(qword_140FDA440);
  }
}
