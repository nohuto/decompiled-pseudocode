/*
 * XREFs of CmpDereferenceKeyControlBlockWithLock @ 0x14087B820
 * Callers:
 *     CmpDrainDelayDerefContext @ 0x14041D8F0 (CmpDrainDelayDerefContext.c)
 *     CmRenameKey @ 0x1407C98A4 (CmRenameKey.c)
 *     CmpUnfreezeHive @ 0x1407CB0D4 (CmpUnfreezeHive.c)
 *     CmpCleanupDiscardReplacePost @ 0x1407D1830 (CmpCleanupDiscardReplacePost.c)
 *     CmpPrepareDiscardReplacePost @ 0x1407D1A60 (CmpPrepareDiscardReplacePost.c)
 *     CmpTransMgrFreeVolatileData @ 0x140885884 (CmpTransMgrFreeVolatileData.c)
 *     CmpCommitDiscardReplacePost @ 0x1409D8BAC (CmpCommitDiscardReplacePost.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExFreeToLookasideListEx @ 0x1403A52A0 (ExFreeToLookasideListEx.c)
 *     CmpFreeTransientPoolWithTag @ 0x140442030 (CmpFreeTransientPoolWithTag.c)
 *     ExpAcquireFastMutexContended @ 0x14044AE54 (ExpAcquireFastMutexContended.c)
 *     CmpArmDelayedCloseTimer @ 0x14045AC7C (CmpArmDelayedCloseTimer.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     CmpDereferenceHive @ 0x1408484B4 (CmpDereferenceHive.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1408743F0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x1408749B0 (CmpDereferenceNameControlBlockWithLock.c)
 *     EtwpTraceRegistry @ 0x140874AF0 (EtwpTraceRegistry.c)
 *     CmpConstructName @ 0x14087A050 (CmpConstructName.c)
 *     CmpDelayDerefKeyControlBlock @ 0x14087C4C0 (CmpDelayDerefKeyControlBlock.c)
 *     CmpDoQueueLateUnloadWorker @ 0x14087C588 (CmpDoQueueLateUnloadWorker.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x1409DAC4C (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x1409DAD1C (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpRemoveKeyHashFromDeletedKcbTable @ 0x1409EC2E4 (CmpRemoveKeyHashFromDeletedKcbTable.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     CmpAttachToRegistryProcess @ 0x140BA99D0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BA9A10 (CmpDetachFromRegistryProcess.c)
 */

void __fastcall CmpDereferenceKeyControlBlockWithLock(ULONG_PTR BugCheckParameter2, __int64 a2, char a3)
{
  __int64 v5; // rcx
  signed __int64 v7; // rax
  int v8; // r8d
  bool v9; // cl
  bool v10; // dl
  __int64 *v11; // rdi
  unsigned __int8 CurrentIrql; // si
  __int64 *v13; // rax
  ULONG_PTR v14; // rsi
  void (__fastcall *v15)(unsigned __int8, __int64, int, int, __int64, __int64); // rdi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  void *v20; // rbp
  _QWORD *v21; // rcx
  ULONG_PTR v22; // rdi
  _DWORD *v23; // r14
  __int64 *i; // rdx
  __int64 v25; // rax
  __int64 v26; // r8
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  __int64 *v29; // rax
  unsigned __int64 v30; // r9
  bool v31; // r10
  unsigned __int64 v32; // rax
  __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // r8
  __int64 *v36; // rax
  __int64 **v37; // rcx
  unsigned __int64 v38; // r9
  bool v39; // r10
  unsigned __int64 v40; // rax
  void *v41; // rcx
  unsigned __int64 v42; // rcx
  int v43; // eax
  __int64 **v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rax
  _QWORD *v48; // rdx
  __int64 v49; // rdi
  struct _KTHREAD *CurrentThread; // rax
  _OWORD v51[2]; // [rsp+40h] [rbp-88h] BYREF
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
    v49 = *(_QWORD *)(BugCheckParameter2 + 32);
    CmpCleanUpKcbCacheWithLock(BugCheckParameter2, a2);
    CurrentThread = KeGetCurrentThread();
    *(_DWORD *)(v49 + 160) |= 0x80u;
    *(_QWORD *)(v49 + 4176) = CurrentThread;
    *(_DWORD *)(v49 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v49 + 4236), 1u) & 0x7F) + 4240) = 31;
    if ( (*(_DWORD *)(v49 + 160) & 0x20) == 0 )
      CmpDereferenceHive((volatile signed __int32 *)v49);
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
     || (*(_WORD *)(BugCheckParameter2 + 186) & 0x10) != 0
     || (*(_BYTE *)(BugCheckParameter2 + 8) & 8) != 0)
    && v10 )
  {
    v11 = KeAbPreAcquire((__int64)&CmpDelayedCloseTableLock, 0LL);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 1);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayedCloseTableLock, 0) )
      ExpAcquireFastMutexContended((__int64)&CmpDelayedCloseTableLock, v11);
    if ( v11 )
      *((_BYTE *)v11 + 10) = 1;
    CmpDelayedCloseTableLock.Owner = KeGetCurrentThread();
    CmpDelayedCloseTableLock.OldIrql = CurrentIrql;
    v13 = (__int64 *)(BugCheckParameter2 + 224);
    if ( (__int64 *)*v13 != v13 )
      KeBugCheckEx(0x51u, 0x34uLL, BugCheckParameter2, 0LL, 0LL);
    v45 = CmpDelayedLRUListHead;
    if ( *(__int64 **)(CmpDelayedLRUListHead + 8) == &CmpDelayedLRUListHead )
    {
      *(_QWORD *)(BugCheckParameter2 + 232) = &CmpDelayedLRUListHead;
      *v13 = v45;
      *(_QWORD *)(v45 + 8) = v13;
      CmpDelayedLRUListHead = BugCheckParameter2 + 224;
      v43 = CmpDelayedCloseElements;
      *(_BYTE *)(BugCheckParameter2 + 64) |= 2u;
      ++qword_140FD9448;
      CmpDelayedCloseElements = v43 + 1;
      if ( v43 + 1 <= (unsigned int)CmpDelayedCloseSize )
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
    goto LABEL_54;
  }
  v14 = 0LL;
  if ( *(_QWORD *)BugCheckParameter2 )
    goto LABEL_61;
  v15 = (void (__fastcall *)(unsigned __int8, __int64, int, int, __int64, __int64))CmpTraceRoutine;
  if ( CmpTraceRoutine )
  {
    memset(v51, 0, sizeof(v51));
    memset(&ApcState, 0, sizeof(ApcState));
    CmpAttachToRegistryProcess(&ApcState);
    v20 = (void *)CmpConstructName(BugCheckParameter2, v16, v17, v18);
    if ( v20 )
    {
      LOBYTE(v19) = 23;
      if ( v15 == EtwpTraceRegistry )
        EtwpTraceRegistry(0x17u, (__int64)v51, 0, 0, BugCheckParameter2, (__int64)v20);
      else
        guard_dispatch_icall_no_overrides(v19);
      CmpFreeTransientPoolWithTag(v20, 0x624E4D43u);
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
  v21 = *(_QWORD **)(BugCheckParameter2 + 192);
  if ( v21 )
  {
    v46 = v21[3];
    if ( v46 )
    {
      v14 = *(_QWORD *)(v46 + 16);
      v47 = *v21;
      if ( *(_QWORD **)(*v21 + 8LL) != v21 )
        goto LABEL_54;
      v48 = (_QWORD *)v21[1];
      if ( (_QWORD *)*v48 != v21 )
        goto LABEL_54;
      *v48 = v47;
      *(_QWORD *)(v47 + 8) = v48;
    }
    ExFreePoolWithTag(v21, 0);
    *(_QWORD *)(BugCheckParameter2 + 192) = 0LL;
  }
  v22 = *(_QWORD *)(BugCheckParameter2 + 72);
  v23 = (_DWORD *)(BugCheckParameter2 + 16);
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
                         * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 32) + 1656LL) - 1) & ((unsigned int)(101027 * (*v23 ^ (*v23 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*v23 ^ (*v23 >> 9))) >> 9)))
                         + 2)); i; i = (__int64 *)(v25 + 8) )
    {
      v25 = *i;
      if ( !*i )
        break;
      if ( (_DWORD *)v25 == v23 )
      {
        *i = *(_QWORD *)(v25 + 8);
        break;
      }
    }
  }
  *(_DWORD *)(BugCheckParameter2 + 8) |= 0x80000u;
  if ( !v14 )
    goto LABEL_49;
  v26 = *(_QWORD *)(v14 + 32);
  v27 = *(_QWORD *)v14;
  do
  {
    v28 = v27;
    if ( v27 <= 1 )
    {
      v29 = (__int64 *)(v14 + 224);
      if ( (__int64 *)*v29 != v29 )
        KeBugCheckEx(0x51u, 0x34uLL, v14, 1uLL, 0LL);
      v44 = *(__int64 ***)(a2 + 8);
      if ( *v44 == (__int64 *)a2 )
      {
        *v29 = a2;
        *(_QWORD *)(v14 + 232) = v44;
        *v44 = v29;
        *(_QWORD *)(a2 + 8) = v29;
        *(_BYTE *)(v14 + 64) |= 1u;
        goto LABEL_49;
      }
LABEL_54:
      __fastfail(3u);
    }
    v30 = v27 - 1;
    v31 = v27 == 3 && (*(_DWORD *)(v14 + 184) & 0x40000) != 0 && *(_BYTE *)(v26 + 2944) == 1;
    v32 = _InterlockedCompareExchange64((volatile signed __int64 *)v14, v30, v27);
    v27 = v32;
  }
  while ( v32 != v28 );
  if ( v32 < v30 )
    KeBugCheckEx(0x51u, 0x25uLL, v14, 0LL, 0LL);
  if ( v31 )
    CmpDoQueueLateUnloadWorker(v26);
LABEL_49:
  if ( !v22 )
    goto LABEL_61;
  v33 = *(_QWORD *)(v22 + 32);
  v34 = *(_QWORD *)v22;
  while ( 2 )
  {
    v35 = v34;
    if ( v34 <= 1 )
    {
      v36 = (__int64 *)(v22 + 224);
      if ( (__int64 *)*v36 != v36 )
        KeBugCheckEx(0x51u, 0x34uLL, v22, 1uLL, 0LL);
      v37 = *(__int64 ***)(a2 + 8);
      if ( *v37 == (__int64 *)a2 )
      {
        *v36 = a2;
        *(_QWORD *)(v22 + 232) = v37;
        *v37 = v36;
        *(_QWORD *)(a2 + 8) = v36;
        *(_BYTE *)(v22 + 64) |= 1u;
        goto LABEL_61;
      }
      goto LABEL_54;
    }
    v38 = v34 - 1;
    v39 = v34 == 3 && (*(_DWORD *)(v22 + 184) & 0x40000) != 0 && *(_BYTE *)(v33 + 2944) == 1;
    v40 = _InterlockedCompareExchange64((volatile signed __int64 *)v22, v38, v34);
    v34 = v40;
    if ( v40 != v35 )
      continue;
    break;
  }
  if ( v40 < v38 )
    KeBugCheckEx(0x51u, 0x25uLL, v22, 0LL, 0LL);
  if ( v39 )
    CmpDoQueueLateUnloadWorker(v33);
LABEL_61:
  if ( *(struct _KTHREAD **)(BugCheckParameter2 + 56) != KeGetCurrentThread()
    && (*(_DWORD *)(BugCheckParameter2 + 8) & 0x80000) != 0 )
  {
    _InterlockedDecrement64(&CmPerfCounters);
    if ( *(_QWORD *)(BugCheckParameter2 + 120) != BugCheckParameter2 + 120 )
      KeBugCheckEx(0x51u, 0x11uLL, BugCheckParameter2, 0LL, 0LL);
    if ( (*(_DWORD *)(BugCheckParameter2 + 8) & 0x10000) != 0 )
      KeBugCheckEx(0x51u, 0x11uLL, BugCheckParameter2, 1uLL, 0LL);
    v41 = *(void **)(BugCheckParameter2 + 200);
    if ( (unsigned __int64)v41 >= 2 )
      ExFreePoolWithTag(v41, 0x624E4D43u);
    v42 = *(_QWORD *)(BugCheckParameter2 + 296);
    if ( (v42 & 1) != 0 )
      v42 &= ~1uLL;
    if ( v42 )
      CmpFreeTransientPoolWithTag((void *)v42, 0x624E4D43u);
    *(_DWORD *)(BugCheckParameter2 + 8) |= 0x10000u;
    *(_QWORD *)(BugCheckParameter2 + 32) = 0LL;
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)&CmpKcbLookaside, (PVOID)BugCheckParameter2);
    _InterlockedDecrement64(qword_140FD9460);
  }
}
