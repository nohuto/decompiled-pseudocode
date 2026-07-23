/*
 * XREFs of CmpDereferenceKeyControlBlock @ 0x140841F90
 * Callers:
 *     CmpDoBuildVirtualStack @ 0x1407DBB34 (CmpDoBuildVirtualStack.c)
 *     CmpReplicateKeyToVirtual @ 0x1407DC15C (CmpReplicateKeyToVirtual.c)
 *     CmpFreeSiloKeyLockEntry @ 0x1407DE398 (CmpFreeSiloKeyLockEntry.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x1407DE3E0 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpDeleteKeyObject @ 0x140843620 (CmpDeleteKeyObject.c)
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 *     CmpWalkOneLevel @ 0x140876890 (CmpWalkOneLevel.c)
 *     CmpGetSymbolicLinkTarget @ 0x14087ABD0 (CmpGetSymbolicLinkTarget.c)
 *     CmEnumerateKey @ 0x140880800 (CmEnumerateKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1408E4560 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpEnumerateLayeredKey @ 0x140909AC4 (CmpEnumerateLayeredKey.c)
 *     CmLoadDifferencingKey @ 0x14092E890 (CmLoadDifferencingKey.c)
 *     CmpCleanupParseContext @ 0x14092F5F0 (CmpCleanupParseContext.c)
 *     CmReleaseLoadKeyContext @ 0x140930978 (CmReleaseLoadKeyContext.c)
 *     CmpLateUnloadHiveWorker @ 0x140964D00 (CmpLateUnloadHiveWorker.c)
 *     CmOpenKey @ 0x1409DE810 (CmOpenKey.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x140A4E738 (CmpKeyEnumStackFreeResumeContext.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     CmpDrainDelayDerefContext @ 0x14040AEB0 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140418320 (CmpInitializeDelayDerefContext.c)
 *     CmpFreeTransientPoolWithTag @ 0x140438B90 (CmpFreeTransientPoolWithTag.c)
 *     ExpAcquireFastMutexContended @ 0x140441108 (ExpAcquireFastMutexContended.c)
 *     CmpArmDelayedCloseTimer @ 0x14044F4B0 (CmpArmDelayedCloseTimer.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     CmpDereferenceHive @ 0x140840680 (CmpDereferenceHive.c)
 *     CmpReferenceHive @ 0x140840940 (CmpReferenceHive.c)
 *     CmpDeleteHive @ 0x140840A1C (CmpDeleteHive.c)
 *     CmUnlockHive @ 0x140842A00 (CmUnlockHive.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x140874810 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpDecommisssionKcb @ 0x140875040 (CmpDecommisssionKcb.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x140875130 (CmpDereferenceNameControlBlockWithLock.c)
 *     EtwpTraceRegistry @ 0x140875270 (EtwpTraceRegistry.c)
 *     CmpConstructName @ 0x14087A710 (CmpConstructName.c)
 *     CmpDelayDerefKeyControlBlock @ 0x140882420 (CmpDelayDerefKeyControlBlock.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1408824E8 (CmpDoQueueLateUnloadWorker.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x140965154 (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x140965224 (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpRemoveKeyHashFromDeletedKcbTable @ 0x1409E014C (CmpRemoveKeyHashFromDeletedKcbTable.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140BBB2C0 (CmpUnlockKcb.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BBB920 (CmpDetachFromRegistryProcess.c)
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
  char *v14; // rax
  char *v15; // rbp
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  char *v18; // rax
  char *v19; // rdi
  ULONG_PTR v20; // r15
  __int64 v21; // rax
  __int64 v22; // rcx
  signed __int64 v23; // rax
  bool v24; // dl
  int v25; // ecx
  __int64 v26; // r8
  _QWORD *v27; // r14
  unsigned __int8 CurrentIrql; // r12
  __int64 v29; // r9
  __int64 *v30; // rax
  ULONG_PTR v31; // r12
  __int64 (__fastcall *v32)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64); // r14
  __int64 v33; // rcx
  void *v34; // r13
  _QWORD *v35; // rcx
  _DWORD *v36; // r13
  ULONG_PTR v37; // r14
  __int64 *i; // rdx
  __int64 v39; // rax
  __int64 v40; // r8
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rdx
  _QWORD *v43; // rax
  char *v44; // rax
  char *v45; // rsi
  WORK_QUEUE_TYPE v46; // r9d
  unsigned __int64 v47; // r9
  bool v48; // r10
  unsigned __int64 v49; // rax
  __int64 v50; // r8
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rdx
  _QWORD *v53; // rax
  _QWORD *v54; // rcx
  unsigned __int64 v55; // r9
  bool v56; // r10
  unsigned __int64 v57; // rax
  int v58; // eax
  signed __int64 *v59; // rbx
  signed __int64 v60; // rax
  signed __int64 v61; // rdx
  signed __int64 v62; // rtt
  __int64 v63; // rcx
  char *v64; // rax
  char *v65; // r13
  char *v66; // rax
  char *v67; // r14
  _QWORD *v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rax
  __int64 v71; // rdx
  _QWORD *v72; // rax
  __int64 v73; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int128 v75; // [rsp+40h] [rbp-98h] BYREF
  unsigned __int64 v76; // [rsp+50h] [rbp-88h]
  _OWORD v77[2]; // [rsp+58h] [rbp-80h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-60h] BYREF

  v75 = 0LL;
  CmpInitializeDelayDerefContext(&v75);
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
        v44 = (char *)KeAbPreAcquire(v2 + 1680, 0LL);
        v45 = v44;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 1680), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v2 + 1680), v44, v2 + 1680);
        if ( v45 )
          v45[10] = 1;
        *(_DWORD *)(v2 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 4236), 1u) & 0x7F) + 4240) = 19;
        if ( **(_QWORD **)(v2 + 2936) == 2LL )
        {
          *(_DWORD *)(v2 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 4236), 1u) & 0x7F) + 4240) = 20;
          if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v2 + 4800), 1, 0) )
          {
            *(_DWORD *)(v2 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 4236), 1u) & 0x7F) + 4240) = 21;
            CmpReferenceHive(v2);
            ExQueueWorkItem(*(PWORK_QUEUE_ITEM *)(v2 + 4816), v46);
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
  v76 = v11;
  v13 = (unsigned __int64 *)(v10 + 24 * (v11 & v12));
  v14 = (char *)KeAbPreAcquire((__int64)v13, 0LL);
  v15 = v14;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v13, 0LL) )
    ExfAcquirePushLockExclusiveEx(v13, v14, (__int64)v13);
  if ( v15 )
    v15[10] = 1;
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
  v18 = (char *)KeAbPreAcquire(BugCheckParameter2 + 48, 0LL);
  v19 = v18;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 48), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter2 + 48), v18, BugCheckParameter2 + 48);
  if ( v19 )
    v19[10] = 1;
  *(_QWORD *)(BugCheckParameter2 + 56) = KeGetCurrentThread();
  v20 = 0LL;
  v21 = *(_QWORD *)(BugCheckParameter2 + 192);
  if ( v21 )
  {
    v63 = *(_QWORD *)(v21 + 24);
    if ( v63 )
    {
      v20 = *(_QWORD *)(v63 + 16);
      CmpUnlockKcb(BugCheckParameter2);
      v64 = (char *)KeAbPreAcquire(v20 + 48, 0LL);
      v65 = v64;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 48), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v20 + 48), v64, v20 + 48);
      if ( v65 )
        v65[10] = 1;
      *(_QWORD *)(v20 + 56) = KeGetCurrentThread();
      v66 = (char *)KeAbPreAcquire(BugCheckParameter2 + 48, 0LL);
      v67 = v66;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 48), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter2 + 48), v66, BugCheckParameter2 + 48);
      if ( v67 )
        v67[10] = 1;
      *(_QWORD *)(BugCheckParameter2 + 56) = KeGetCurrentThread();
    }
  }
  v22 = *(_QWORD *)(BugCheckParameter2 + 32);
  v23 = _InterlockedDecrement64((volatile signed __int64 *)BugCheckParameter2);
  if ( v23 == 2 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 184) & 0x40000) != 0 && *(_BYTE *)(v22 + 2944) == 1 )
      ((void (*)(void))CmpDoQueueLateUnloadWorker)();
    goto LABEL_97;
  }
  if ( v23 )
    goto LABEL_97;
  if ( (*(_DWORD *)(BugCheckParameter2 + 184) & 0x40000) != 0 )
  {
    v73 = *(_QWORD *)(BugCheckParameter2 + 32);
    CmpCleanUpKcbCacheWithLock(BugCheckParameter2);
    CurrentThread = KeGetCurrentThread();
    *(_DWORD *)(v73 + 160) |= 0x80u;
    *(_QWORD *)(v73 + 4176) = CurrentThread;
    *(_DWORD *)(v73 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v73 + 4236), 1u) & 0x7F) + 4240) = 31;
    if ( (*(_DWORD *)(v73 + 160) & 0x20) == 0 )
      CmpDereferenceHive((volatile signed __int32 *)v73);
    goto LABEL_97;
  }
  v24 = 0;
  v25 = *(_DWORD *)(BugCheckParameter2 + 8);
  if ( (v25 & 0x20) == 0 )
    v24 = (v25 & 0x20000) == 0;
  if ( (!CmpHoldLazyFlush
     || (*(_DWORD *)(BugCheckParameter2 + 184) & 0x100000) != 0
     || (*(_DWORD *)(BugCheckParameter2 + 8) & 8) != 0)
    && v24 )
  {
    v27 = KeAbPreAcquire((__int64)&CmpDelayedCloseTableLock, 0LL);
    CurrentIrql = KeGetCurrentIrql();
    v29 = 1LL;
    __writecr8(1uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 1);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayedCloseTableLock, 0) )
      ExpAcquireFastMutexContended((__int64)&CmpDelayedCloseTableLock, (__int64)v27, v26, v29);
    if ( v27 )
      *((_BYTE *)v27 + 10) = 1;
    CmpDelayedCloseTableLock.Owner = KeGetCurrentThread();
    CmpDelayedCloseTableLock.OldIrql = CurrentIrql;
    v30 = (__int64 *)(BugCheckParameter2 + 224);
    if ( (__int64 *)*v30 != v30 )
      KeBugCheckEx(0x51u, 0x34uLL, BugCheckParameter2, 0LL, 0LL);
    v69 = CmpDelayedLRUListHead;
    if ( *(__int64 **)(CmpDelayedLRUListHead + 8) == &CmpDelayedLRUListHead )
    {
      *(_QWORD *)(BugCheckParameter2 + 232) = &CmpDelayedLRUListHead;
      *v30 = v69;
      *(_QWORD *)(v69 + 8) = v30;
      CmpDelayedLRUListHead = BugCheckParameter2 + 224;
      v58 = CmpDelayedCloseElements;
      *(_BYTE *)(BugCheckParameter2 + 64) |= 2u;
      ++qword_140FDA428;
      CmpDelayedCloseElements = v58 + 1;
      if ( v58 + 1 <= (unsigned int)CmpDelayedCloseSize )
      {
        KeReleaseGuardedMutex(&CmpDelayedCloseTableLock);
      }
      else
      {
        KeReleaseGuardedMutex(&CmpDelayedCloseTableLock);
        CmpArmDelayedCloseTimer();
      }
      goto LABEL_96;
    }
    goto LABEL_85;
  }
  v31 = 0LL;
  if ( *(_QWORD *)BugCheckParameter2 )
    goto LABEL_92;
  v32 = (__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64))CmpTraceRoutine;
  if ( CmpTraceRoutine )
  {
    memset(v77, 0, sizeof(v77));
    memset(&ApcState, 0, sizeof(ApcState));
    CmpAttachToRegistryProcess(&ApcState);
    v34 = (void *)CmpConstructName(BugCheckParameter2);
    if ( v34 )
    {
      LOBYTE(v33) = 23;
      if ( v32 == EtwpTraceRegistry )
        EtwpTraceRegistry(v33, (unsigned int)v77, 0, 0, BugCheckParameter2, (__int64)v34);
      else
        guard_dispatch_icall_no_overrides(v33, v77);
      CmpFreeTransientPoolWithTag(v34, 0x624E4D43u);
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
  v35 = *(_QWORD **)(BugCheckParameter2 + 192);
  if ( v35 )
  {
    v70 = v35[3];
    if ( v70 )
    {
      v71 = *v35;
      v31 = *(_QWORD *)(v70 + 16);
      if ( *(_QWORD **)(*v35 + 8LL) != v35 )
        goto LABEL_85;
      v72 = (_QWORD *)v35[1];
      if ( (_QWORD *)*v72 != v35 )
        goto LABEL_85;
      *v72 = v71;
      *(_QWORD *)(v71 + 8) = v72;
    }
    ExFreePoolWithTag(v35, 0);
    *(_QWORD *)(BugCheckParameter2 + 192) = 0LL;
  }
  v36 = (_DWORD *)(BugCheckParameter2 + 16);
  v37 = *(_QWORD *)(BugCheckParameter2 + 72);
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
                         * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 32) + 1656LL) - 1) & ((unsigned int)(101027 * (*v36 ^ (*v36 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*v36 ^ (*v36 >> 9))) >> 9)))
                         + 2)); i; i = (__int64 *)(v39 + 8) )
    {
      v39 = *i;
      if ( !*i )
        break;
      if ( (_DWORD *)v39 == v36 )
      {
        *i = *(_QWORD *)(v39 + 8);
        break;
      }
    }
  }
  *(_DWORD *)(BugCheckParameter2 + 8) |= 0x80000u;
  if ( !v31 )
    goto LABEL_80;
  v40 = *(_QWORD *)(v31 + 32);
  v41 = *(_QWORD *)v31;
  do
  {
    v42 = v41;
    if ( v41 <= 1 )
    {
      v43 = (_QWORD *)(v31 + 224);
      if ( (_QWORD *)*v43 != v43 )
        KeBugCheckEx(0x51u, 0x34uLL, v31, 1uLL, 0LL);
      v68 = (_QWORD *)*((_QWORD *)&v75 + 1);
      if ( **((__int128 ***)&v75 + 1) == &v75 )
      {
        *(_QWORD *)(v31 + 232) = *((_QWORD *)&v75 + 1);
        *v43 = &v75;
        *v68 = v43;
        *((_QWORD *)&v75 + 1) = v31 + 224;
        *(_BYTE *)(v31 + 64) |= 1u;
        goto LABEL_80;
      }
LABEL_85:
      __fastfail(3u);
    }
    v47 = v41 - 1;
    v48 = v41 == 3 && (*(_DWORD *)(v31 + 184) & 0x40000) != 0 && *(_BYTE *)(v40 + 2944) == 1;
    v49 = _InterlockedCompareExchange64((volatile signed __int64 *)v31, v47, v41);
    v41 = v49;
  }
  while ( v49 != v42 );
  if ( v49 < v47 )
    KeBugCheckEx(0x51u, 0x25uLL, v31, 0LL, 0LL);
  if ( v48 )
    CmpDoQueueLateUnloadWorker(v40);
LABEL_80:
  if ( !v37 )
    goto LABEL_92;
  v50 = *(_QWORD *)(v37 + 32);
  v51 = *(_QWORD *)v37;
  while ( 2 )
  {
    v52 = v51;
    if ( v51 <= 1 )
    {
      v53 = (_QWORD *)(v37 + 224);
      if ( (_QWORD *)*v53 != v53 )
        KeBugCheckEx(0x51u, 0x34uLL, v37, 1uLL, 0LL);
      v54 = (_QWORD *)*((_QWORD *)&v75 + 1);
      if ( **((__int128 ***)&v75 + 1) == &v75 )
      {
        *(_QWORD *)(v37 + 232) = *((_QWORD *)&v75 + 1);
        *v53 = &v75;
        *v54 = v53;
        *((_QWORD *)&v75 + 1) = v37 + 224;
        *(_BYTE *)(v37 + 64) |= 1u;
        goto LABEL_92;
      }
      goto LABEL_85;
    }
    v55 = v51 - 1;
    v56 = v51 == 3 && (*(_DWORD *)(v37 + 184) & 0x40000) != 0 && *(_BYTE *)(v50 + 2944) == 1;
    v57 = _InterlockedCompareExchange64((volatile signed __int64 *)v37, v55, v51);
    v51 = v57;
    if ( v57 != v52 )
      continue;
    break;
  }
  if ( v57 < v55 )
    KeBugCheckEx(0x51u, 0x25uLL, v37, 0LL, 0LL);
  if ( v56 )
    CmpDoQueueLateUnloadWorker(v50);
LABEL_92:
  if ( *(struct _KTHREAD **)(BugCheckParameter2 + 56) != KeGetCurrentThread() )
    CmpDecommisssionKcb(BugCheckParameter2);
LABEL_96:
  LODWORD(v11) = v76;
LABEL_97:
  CmpUnlockKcb(BugCheckParameter2);
  if ( v20 )
    CmpUnlockKcb(v20);
  v59 = (signed __int64 *)(*(_QWORD *)(v8 + 1648) + 24LL * ((unsigned int)v11 & (*(_DWORD *)(v8 + 1656) - 1)));
  v59[1] = 0LL;
  _m_prefetchw(v59);
  v60 = *v59;
  v61 = *v59 - 16;
  if ( (*v59 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v61 = 0LL;
  if ( (v60 & 2) != 0 || (v62 = *v59, v62 != _InterlockedCompareExchange64(v59, v61, v60)) )
    ExfReleasePushLock(v59);
  KeAbPostRelease((ULONG_PTR)v59);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 4232), 0xFFFFFFFF) == 1 )
    CmpDeleteHive((_QWORD *)v8);
  CmpDrainDelayDerefContext((_QWORD **)&v75);
}
