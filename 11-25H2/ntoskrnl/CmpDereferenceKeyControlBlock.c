/*
 * XREFs of CmpDereferenceKeyControlBlock @ 0x140849FE0
 * Callers:
 *     CmpDoBuildVirtualStack @ 0x1407CBE24 (CmpDoBuildVirtualStack.c)
 *     CmpReplicateKeyToVirtual @ 0x1407CC44C (CmpReplicateKeyToVirtual.c)
 *     CmpFreeSiloKeyLockEntry @ 0x1407CE688 (CmpFreeSiloKeyLockEntry.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x1407CE6D0 (CmpGlobalUnlockKeyForWrite.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x140840E80 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpDeleteKeyObject @ 0x14084B6B0 (CmpDeleteKeyObject.c)
 *     CmpDoParseKey @ 0x140871670 (CmpDoParseKey.c)
 *     CmpWalkOneLevel @ 0x140876200 (CmpWalkOneLevel.c)
 *     CmEnumerateKey @ 0x14087C630 (CmEnumerateKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x14088A6C0 (CmpGetSymbolicLinkTarget.c)
 *     CmReleaseLoadKeyContext @ 0x140912250 (CmReleaseLoadKeyContext.c)
 *     CmLoadDifferencingKey @ 0x140913148 (CmLoadDifferencingKey.c)
 *     CmpCleanupParseContext @ 0x140913E90 (CmpCleanupParseContext.c)
 *     CmpEnumerateLayeredKey @ 0x140974D5C (CmpEnumerateLayeredKey.c)
 *     CmpLateUnloadHiveWorker @ 0x140A42470 (CmpLateUnloadHiveWorker.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x140A530B8 (CmpKeyEnumStackFreeResumeContext.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     CmpDrainDelayDerefContext @ 0x14041D8F0 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x14042A740 (CmpInitializeDelayDerefContext.c)
 *     CmpFreeTransientPoolWithTag @ 0x140442030 (CmpFreeTransientPoolWithTag.c)
 *     ExpAcquireFastMutexContended @ 0x14044AE54 (ExpAcquireFastMutexContended.c)
 *     CmpArmDelayedCloseTimer @ 0x14045AC7C (CmpArmDelayedCloseTimer.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     CmpDereferenceHive @ 0x1408484B4 (CmpDereferenceHive.c)
 *     CmpDecommisssionKcb @ 0x140848640 (CmpDecommisssionKcb.c)
 *     CmpDeleteHive @ 0x1408488CC (CmpDeleteHive.c)
 *     CmpReferenceHive @ 0x140848B50 (CmpReferenceHive.c)
 *     CmUnlockHive @ 0x14084AA3C (CmUnlockHive.c)
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
 *     CmpUnlockKcb @ 0x140BA92B0 (CmpUnlockKcb.c)
 *     CmpAttachToRegistryProcess @ 0x140BA99D0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BA9A10 (CmpDetachFromRegistryProcess.c)
 */

void __fastcall CmpDereferenceKeyControlBlock(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r8
  bool v6; // r9
  unsigned __int64 v7; // rax
  ULONG_PTR v8; // rsi
  int v9; // ecx
  __int64 v10; // rax
  unsigned __int64 v11; // r12
  __int64 v12; // rcx
  unsigned __int64 *v13; // rdi
  __int64 *v14; // rax
  __int64 *v15; // rbp
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  __int64 *v18; // rax
  __int64 *v19; // rdi
  ULONG_PTR v20; // r15
  __int64 v21; // rax
  __int64 v22; // rcx
  signed __int64 v23; // rax
  bool v24; // dl
  int v25; // ecx
  __int64 *v26; // r14
  unsigned __int8 CurrentIrql; // r12
  __int64 *v28; // rax
  __int64 *v29; // rax
  __int64 *v30; // rsi
  WORK_QUEUE_TYPE v31; // r9d
  ULONG_PTR v32; // r12
  __int64 (__fastcall *v33)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64); // r14
  __int64 v34; // rcx
  void *v35; // r13
  _QWORD *v36; // rcx
  _DWORD *v37; // r13
  ULONG_PTR v38; // r14
  __int64 *i; // rdx
  __int64 v40; // rax
  __int64 v41; // r8
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rdx
  _QWORD *v44; // rax
  unsigned __int64 v45; // r9
  bool v46; // r10
  unsigned __int64 v47; // rax
  __int64 v48; // r8
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // rdx
  _QWORD *v51; // rax
  _QWORD *v52; // rcx
  unsigned __int64 v53; // r9
  bool v54; // r10
  unsigned __int64 v55; // rax
  int v56; // eax
  signed __int64 *v57; // rbx
  signed __int64 v58; // rax
  signed __int64 v59; // rdx
  signed __int64 v60; // rtt
  __int64 v61; // rcx
  __int64 *v62; // rax
  __int64 *v63; // r13
  __int64 *v64; // rax
  __int64 *v65; // r14
  _QWORD *v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rdx
  _QWORD *v70; // rax
  __int64 v71; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int128 v73; // [rsp+40h] [rbp-98h] BYREF
  unsigned __int64 v74; // [rsp+50h] [rbp-88h]
  _OWORD v75[2]; // [rsp+58h] [rbp-80h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-60h] BYREF

  v73 = 0LL;
  CmpInitializeDelayDerefContext(&v73);
  v2 = *(_QWORD *)(BugCheckParameter2 + 32);
  v3 = *(_QWORD *)BugCheckParameter2;
  while ( 1 )
  {
    v4 = v3;
    if ( v3 <= 1 )
      break;
    v5 = v3 - 1;
    v6 = v3 == 3 && (*(_DWORD *)(BugCheckParameter2 + 184) & 0x40000) != 0 && *(_BYTE *)(v2 + 2944) == 1;
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v5, v3);
    v3 = v7;
    if ( v7 == v4 )
    {
      if ( v7 < v5 )
        KeBugCheckEx(0x51u, 0x25uLL, BugCheckParameter2, 0LL, 0LL);
      if ( v6 )
      {
        v29 = KeAbPreAcquire(v2 + 1680, 0LL);
        v30 = v29;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 1680), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v2 + 1680), v29, v2 + 1680);
        if ( v30 )
          *((_BYTE *)v30 + 10) = 1;
        *(_DWORD *)(v2 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 4236), 1u) & 0x7F) + 4240) = 19;
        if ( **(_QWORD **)(v2 + 2936) == 2LL )
        {
          *(_DWORD *)(v2 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 4236), 1u) & 0x7F) + 4240) = 20;
          if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v2 + 4800), 1, 0) )
          {
            *(_DWORD *)(v2 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 4236), 1u) & 0x7F) + 4240) = 21;
            CmpReferenceHive(v2);
            ExQueueWorkItem(*(PWORK_QUEUE_ITEM *)(v2 + 4816), v31);
          }
        }
        CmUnlockHive(v2);
      }
      return;
    }
  }
  v8 = *(_QWORD *)(BugCheckParameter2 + 32);
  v9 = *(_DWORD *)(BugCheckParameter2 + 16) ^ (*(_DWORD *)(BugCheckParameter2 + 16) >> 9);
  v10 = *(_QWORD *)(v8 + 1648);
  v11 = (unsigned int)(101027 * v9) ^ ((unsigned __int64)(unsigned int)(101027 * v9) >> 9);
  v12 = (unsigned int)(*(_DWORD *)(v8 + 1656) - 1);
  v74 = v11;
  v13 = (unsigned __int64 *)(v10 + 24 * (v11 & v12));
  v14 = KeAbPreAcquire((__int64)v13, 0LL);
  v15 = v14;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v13, 0LL) )
    ExfAcquirePushLockExclusiveEx(v13, v14, (__int64)v13);
  if ( v15 )
    *((_BYTE *)v15 + 10) = 1;
  v13[1] = (unsigned __int64)KeGetCurrentThread();
  _m_prefetchw((const void *)(v8 + 4232));
  v16 = *(_DWORD *)(v8 + 4232);
  do
  {
    if ( !v16 )
      KeBugCheckEx(0x51u, 0x17uLL, v8, 8uLL, BugCheckParameter2);
    v17 = v16;
    v16 = _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 4232), v16 + 1, v16);
  }
  while ( v17 != v16 );
  v18 = KeAbPreAcquire(BugCheckParameter2 + 48, 0LL);
  v19 = v18;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 48), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter2 + 48), v18, BugCheckParameter2 + 48);
  if ( v19 )
    *((_BYTE *)v19 + 10) = 1;
  *(_QWORD *)(BugCheckParameter2 + 56) = KeGetCurrentThread();
  v20 = 0LL;
  v21 = *(_QWORD *)(BugCheckParameter2 + 192);
  if ( v21 )
  {
    v61 = *(_QWORD *)(v21 + 24);
    if ( v61 )
    {
      v20 = *(_QWORD *)(v61 + 16);
      CmpUnlockKcb(BugCheckParameter2);
      v62 = KeAbPreAcquire(v20 + 48, 0LL);
      v63 = v62;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 48), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v20 + 48), v62, v20 + 48);
      if ( v63 )
        *((_BYTE *)v63 + 10) = 1;
      *(_QWORD *)(v20 + 56) = KeGetCurrentThread();
      v64 = KeAbPreAcquire(BugCheckParameter2 + 48, 0LL);
      v65 = v64;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 48), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter2 + 48), v64, BugCheckParameter2 + 48);
      if ( v65 )
        *((_BYTE *)v65 + 10) = 1;
      *(_QWORD *)(BugCheckParameter2 + 56) = KeGetCurrentThread();
    }
  }
  v22 = *(_QWORD *)(BugCheckParameter2 + 32);
  v23 = _InterlockedDecrement64((volatile signed __int64 *)BugCheckParameter2);
  if ( v23 == 2 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 184) & 0x40000) != 0 && *(_BYTE *)(v22 + 2944) == 1 )
      ((void (*)(void))CmpDoQueueLateUnloadWorker)();
    goto LABEL_96;
  }
  if ( v23 )
    goto LABEL_96;
  if ( (*(_DWORD *)(BugCheckParameter2 + 184) & 0x40000) != 0 )
  {
    v71 = *(_QWORD *)(BugCheckParameter2 + 32);
    CmpCleanUpKcbCacheWithLock(BugCheckParameter2);
    CurrentThread = KeGetCurrentThread();
    *(_DWORD *)(v71 + 160) |= 0x80u;
    *(_QWORD *)(v71 + 4176) = CurrentThread;
    *(_DWORD *)(v71 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v71 + 4236), 1u) & 0x7F) + 4240) = 31;
    if ( (*(_DWORD *)(v71 + 160) & 0x20) == 0 )
      CmpDereferenceHive((volatile signed __int32 *)v71);
    goto LABEL_96;
  }
  v24 = 0;
  v25 = *(_DWORD *)(BugCheckParameter2 + 8);
  if ( (v25 & 0x20) == 0 )
    v24 = (v25 & 0x20000) == 0;
  if ( (!CmpHoldLazyFlush
     || (*(_WORD *)(BugCheckParameter2 + 186) & 0x10) != 0
     || (*(_BYTE *)(BugCheckParameter2 + 8) & 8) != 0)
    && v24 )
  {
    v26 = KeAbPreAcquire((__int64)&CmpDelayedCloseTableLock, 0LL);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 1);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayedCloseTableLock, 0) )
      ExpAcquireFastMutexContended((__int64)&CmpDelayedCloseTableLock, v26);
    if ( v26 )
      *((_BYTE *)v26 + 10) = 1;
    CmpDelayedCloseTableLock.Owner = KeGetCurrentThread();
    CmpDelayedCloseTableLock.OldIrql = CurrentIrql;
    v28 = (__int64 *)(BugCheckParameter2 + 224);
    if ( (__int64 *)*v28 != v28 )
      KeBugCheckEx(0x51u, 0x34uLL, BugCheckParameter2, 0LL, 0LL);
    v67 = CmpDelayedLRUListHead;
    if ( *(__int64 **)(CmpDelayedLRUListHead + 8) == &CmpDelayedLRUListHead )
    {
      *(_QWORD *)(BugCheckParameter2 + 232) = &CmpDelayedLRUListHead;
      *v28 = v67;
      *(_QWORD *)(v67 + 8) = v28;
      CmpDelayedLRUListHead = BugCheckParameter2 + 224;
      v56 = CmpDelayedCloseElements;
      *(_BYTE *)(BugCheckParameter2 + 64) |= 2u;
      ++qword_140FD9448;
      CmpDelayedCloseElements = v56 + 1;
      if ( v56 + 1 <= (unsigned int)CmpDelayedCloseSize )
      {
        KeReleaseGuardedMutex(&CmpDelayedCloseTableLock);
      }
      else
      {
        KeReleaseGuardedMutex(&CmpDelayedCloseTableLock);
        CmpArmDelayedCloseTimer();
      }
      goto LABEL_95;
    }
    goto LABEL_84;
  }
  v32 = 0LL;
  if ( *(_QWORD *)BugCheckParameter2 )
    goto LABEL_91;
  v33 = (__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64))CmpTraceRoutine;
  if ( CmpTraceRoutine )
  {
    memset(v75, 0, sizeof(v75));
    memset(&ApcState, 0, sizeof(ApcState));
    CmpAttachToRegistryProcess(&ApcState);
    v35 = (void *)CmpConstructName(BugCheckParameter2);
    if ( v35 )
    {
      LOBYTE(v34) = 23;
      if ( v33 == EtwpTraceRegistry )
        EtwpTraceRegistry(v34, (unsigned int)v75, 0, 0, BugCheckParameter2, (__int64)v35);
      else
        guard_dispatch_icall_no_overrides(v34);
      CmpFreeTransientPoolWithTag(v35, 0x624E4D43u);
    }
    CmpDetachFromRegistryProcess(&ApcState);
  }
  if ( (*(_WORD *)(BugCheckParameter2 + 186) & 0x40) == 0 && (*(_BYTE *)(BugCheckParameter2 + 8) & 8) != 0 )
  {
    CmpDelayDerefKeyControlBlock(*(_QWORD *)(BugCheckParameter2 + 104));
    *(_QWORD *)(BugCheckParameter2 + 104) = 0LL;
    *(_WORD *)(BugCheckParameter2 + 8) &= ~8u;
  }
  CmpDereferenceNameControlBlockWithLock(*(_QWORD *)(BugCheckParameter2 + 80));
  if ( (*(_DWORD *)(BugCheckParameter2 + 8) & 4) != 0 )
    ExFreePoolWithTag(*(PVOID *)(BugCheckParameter2 + 112), 0x6E494D43u);
  v36 = *(_QWORD **)(BugCheckParameter2 + 192);
  if ( v36 )
  {
    v68 = v36[3];
    if ( v68 )
    {
      v69 = *v36;
      v32 = *(_QWORD *)(v68 + 16);
      if ( *(_QWORD **)(*v36 + 8LL) != v36 )
        goto LABEL_84;
      v70 = (_QWORD *)v36[1];
      if ( (_QWORD *)*v70 != v36 )
        goto LABEL_84;
      *v70 = v69;
      *(_QWORD *)(v69 + 8) = v70;
    }
    ExFreePoolWithTag(v36, 0);
    *(_QWORD *)(BugCheckParameter2 + 192) = 0LL;
  }
  v37 = (_DWORD *)(BugCheckParameter2 + 16);
  v38 = *(_QWORD *)(BugCheckParameter2 + 72);
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
                         * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 32) + 1656LL) - 1) & ((unsigned int)(101027 * (*v37 ^ (*v37 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*v37 ^ (*v37 >> 9))) >> 9)))
                         + 2)); i; i = (__int64 *)(v40 + 8) )
    {
      v40 = *i;
      if ( !*i )
        break;
      if ( (_DWORD *)v40 == v37 )
      {
        *i = *(_QWORD *)(v40 + 8);
        break;
      }
    }
  }
  *(_DWORD *)(BugCheckParameter2 + 8) |= 0x80000u;
  if ( !v32 )
    goto LABEL_79;
  v41 = *(_QWORD *)(v32 + 32);
  v42 = *(_QWORD *)v32;
  do
  {
    v43 = v42;
    if ( v42 <= 1 )
    {
      v44 = (_QWORD *)(v32 + 224);
      if ( (_QWORD *)*v44 != v44 )
        KeBugCheckEx(0x51u, 0x34uLL, v32, 1uLL, 0LL);
      v66 = (_QWORD *)*((_QWORD *)&v73 + 1);
      if ( **((__int128 ***)&v73 + 1) == &v73 )
      {
        *(_QWORD *)(v32 + 232) = *((_QWORD *)&v73 + 1);
        *v44 = &v73;
        *v66 = v44;
        *((_QWORD *)&v73 + 1) = v32 + 224;
        *(_BYTE *)(v32 + 64) |= 1u;
        goto LABEL_79;
      }
LABEL_84:
      __fastfail(3u);
    }
    v45 = v42 - 1;
    v46 = v42 == 3 && (*(_DWORD *)(v32 + 184) & 0x40000) != 0 && *(_BYTE *)(v41 + 2944) == 1;
    v47 = _InterlockedCompareExchange64((volatile signed __int64 *)v32, v45, v42);
    v42 = v47;
  }
  while ( v47 != v43 );
  if ( v47 < v45 )
    KeBugCheckEx(0x51u, 0x25uLL, v32, 0LL, 0LL);
  if ( v46 )
    CmpDoQueueLateUnloadWorker(v41);
LABEL_79:
  if ( !v38 )
    goto LABEL_91;
  v48 = *(_QWORD *)(v38 + 32);
  v49 = *(_QWORD *)v38;
  while ( 2 )
  {
    v50 = v49;
    if ( v49 <= 1 )
    {
      v51 = (_QWORD *)(v38 + 224);
      if ( (_QWORD *)*v51 != v51 )
        KeBugCheckEx(0x51u, 0x34uLL, v38, 1uLL, 0LL);
      v52 = (_QWORD *)*((_QWORD *)&v73 + 1);
      if ( **((__int128 ***)&v73 + 1) == &v73 )
      {
        *(_QWORD *)(v38 + 232) = *((_QWORD *)&v73 + 1);
        *v51 = &v73;
        *v52 = v51;
        *((_QWORD *)&v73 + 1) = v38 + 224;
        *(_BYTE *)(v38 + 64) |= 1u;
        goto LABEL_91;
      }
      goto LABEL_84;
    }
    v53 = v49 - 1;
    v54 = v49 == 3 && (*(_DWORD *)(v38 + 184) & 0x40000) != 0 && *(_BYTE *)(v48 + 2944) == 1;
    v55 = _InterlockedCompareExchange64((volatile signed __int64 *)v38, v53, v49);
    v49 = v55;
    if ( v55 != v50 )
      continue;
    break;
  }
  if ( v55 < v53 )
    KeBugCheckEx(0x51u, 0x25uLL, v38, 0LL, 0LL);
  if ( v54 )
    CmpDoQueueLateUnloadWorker(v48);
LABEL_91:
  if ( *(struct _KTHREAD **)(BugCheckParameter2 + 56) != KeGetCurrentThread() )
    CmpDecommisssionKcb(BugCheckParameter2);
LABEL_95:
  LODWORD(v11) = v74;
LABEL_96:
  CmpUnlockKcb(BugCheckParameter2);
  if ( v20 )
    CmpUnlockKcb(v20);
  v57 = (signed __int64 *)(*(_QWORD *)(v8 + 1648) + 24LL * ((unsigned int)v11 & (*(_DWORD *)(v8 + 1656) - 1)));
  v57[1] = 0LL;
  _m_prefetchw(v57);
  v58 = *v57;
  v59 = *v57 - 16;
  if ( (*v57 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v59 = 0LL;
  if ( (v58 & 2) != 0 || (v60 = *v57, v60 != _InterlockedCompareExchange64(v57, v59, v58)) )
    ExfReleasePushLock(v57);
  KeAbPostRelease((ULONG_PTR)v57);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 4232), 0xFFFFFFFF) == 1 )
    CmpDeleteHive((_QWORD *)v8);
  CmpDrainDelayDerefContext((_QWORD **)&v73);
}
