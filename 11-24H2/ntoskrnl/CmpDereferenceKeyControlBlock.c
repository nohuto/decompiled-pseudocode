/*
 * XREFs of CmpDereferenceKeyControlBlock @ 0x140845CD0
 * Callers:
 *     CmpDoBuildVirtualStack @ 0x1407DB5E4 (CmpDoBuildVirtualStack.c)
 *     CmpReplicateKeyToVirtual @ 0x1407DBC0C (CmpReplicateKeyToVirtual.c)
 *     CmpFreeSiloKeyLockEntry @ 0x1407DDE48 (CmpFreeSiloKeyLockEntry.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x1407DDE90 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpDeleteKeyObject @ 0x140847360 (CmpDeleteKeyObject.c)
 *     CmpDoParseKey @ 0x14086E7B0 (CmpDoParseKey.c)
 *     CmpWalkOneLevel @ 0x140872560 (CmpWalkOneLevel.c)
 *     CmpGetSymbolicLinkTarget @ 0x1408768A0 (CmpGetSymbolicLinkTarget.c)
 *     CmEnumerateKey @ 0x14087C950 (CmEnumerateKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14090CE40 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpEnumerateLayeredKey @ 0x140916054 (CmpEnumerateLayeredKey.c)
 *     CmLoadDifferencingKey @ 0x14092C750 (CmLoadDifferencingKey.c)
 *     CmpCleanupParseContext @ 0x14092D4B0 (CmpCleanupParseContext.c)
 *     CmReleaseLoadKeyContext @ 0x14092E838 (CmReleaseLoadKeyContext.c)
 *     CmpLateUnloadHiveWorker @ 0x14097C4F0 (CmpLateUnloadHiveWorker.c)
 *     CmOpenKey @ 0x1409E3DB0 (CmOpenKey.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x140A568A8 (CmpKeyEnumStackFreeResumeContext.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     CmpDrainDelayDerefContext @ 0x14041AEB0 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140424470 (CmpInitializeDelayDerefContext.c)
 *     CmpFreeTransientPoolWithTag @ 0x140441FC0 (CmpFreeTransientPoolWithTag.c)
 *     ExpAcquireFastMutexContended @ 0x1404489B8 (ExpAcquireFastMutexContended.c)
 *     CmpArmDelayedCloseTimer @ 0x14045A060 (CmpArmDelayedCloseTimer.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     CmpDereferenceHive @ 0x1408443C0 (CmpDereferenceHive.c)
 *     CmpReferenceHive @ 0x140844680 (CmpReferenceHive.c)
 *     CmpDeleteHive @ 0x14084475C (CmpDeleteHive.c)
 *     CmUnlockHive @ 0x140846740 (CmUnlockHive.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1408704E0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpDecommisssionKcb @ 0x140870D10 (CmpDecommisssionKcb.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x140870E00 (CmpDereferenceNameControlBlockWithLock.c)
 *     EtwpTraceRegistry @ 0x140870F40 (EtwpTraceRegistry.c)
 *     CmpConstructName @ 0x1408763E0 (CmpConstructName.c)
 *     CmpDelayDerefKeyControlBlock @ 0x14087E570 (CmpDelayDerefKeyControlBlock.c)
 *     CmpDoQueueLateUnloadWorker @ 0x14087E638 (CmpDoQueueLateUnloadWorker.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x14097C944 (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x14097CA14 (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpRemoveKeyHashFromDeletedKcbTable @ 0x1409E58BC (CmpRemoveKeyHashFromDeletedKcbTable.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140BB92C0 (CmpUnlockKcb.c)
 *     CmpAttachToRegistryProcess @ 0x140BB98E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BB9920 (CmpDetachFromRegistryProcess.c)
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
  _QWORD *v14; // rax
  _QWORD *v15; // rbp
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  _QWORD *v18; // rax
  _QWORD *v19; // rdi
  ULONG_PTR v20; // r15
  __int64 v21; // rax
  __int64 v22; // rcx
  signed __int64 v23; // rax
  bool v24; // dl
  int v25; // ecx
  __int64 v26; // r8
  _QWORD *v27; // r14
  unsigned __int8 CurrentIrql; // r12
  __int64 *v29; // rax
  ULONG_PTR v30; // r12
  __int64 (__fastcall *v31)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64); // r14
  __int64 v32; // rcx
  void *v33; // r13
  _QWORD *v34; // rcx
  _DWORD *v35; // r13
  ULONG_PTR v36; // r14
  __int64 *i; // rdx
  __int64 v38; // rax
  __int64 v39; // r8
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rdx
  _QWORD *v42; // rax
  _QWORD *v43; // rax
  _QWORD *v44; // rsi
  WORK_QUEUE_TYPE v45; // r9d
  unsigned __int64 v46; // r9
  bool v47; // r10
  unsigned __int64 v48; // rax
  __int64 v49; // r8
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // rdx
  _QWORD *v52; // rax
  _QWORD *v53; // rcx
  unsigned __int64 v54; // r9
  bool v55; // r10
  unsigned __int64 v56; // rax
  int v57; // eax
  signed __int64 *v58; // rbx
  signed __int64 v59; // rax
  signed __int64 v60; // rdx
  signed __int64 v61; // rtt
  __int64 v62; // rcx
  _QWORD *v63; // rax
  _QWORD *v64; // r13
  _QWORD *v65; // rax
  _QWORD *v66; // r14
  _QWORD *v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rdx
  _QWORD *v71; // rax
  __int64 v72; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int128 v74; // [rsp+40h] [rbp-98h] BYREF
  unsigned __int64 v75; // [rsp+50h] [rbp-88h]
  _OWORD v76[2]; // [rsp+58h] [rbp-80h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-60h] BYREF

  v74 = 0LL;
  CmpInitializeDelayDerefContext(&v74);
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
        v43 = KeAbPreAcquire(v2 + 1680, 0LL);
        v44 = v43;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 1680), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v2 + 1680), (__int64)v43, v2 + 1680);
        if ( v44 )
          *((_BYTE *)v44 + 10) = 1;
        *(_DWORD *)(v2 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 4236), 1u) & 0x7F) + 4240) = 19;
        if ( **(_QWORD **)(v2 + 2936) == 2LL )
        {
          *(_DWORD *)(v2 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 4236), 1u) & 0x7F) + 4240) = 20;
          if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v2 + 4800), 1, 0) )
          {
            *(_DWORD *)(v2 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 4236), 1u) & 0x7F) + 4240) = 21;
            CmpReferenceHive(v2);
            ExQueueWorkItem(*(PWORK_QUEUE_ITEM *)(v2 + 4816), v45);
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
  v75 = v11;
  v13 = (unsigned __int64 *)(v10 + 24 * (v11 & v12));
  v14 = KeAbPreAcquire((__int64)v13, 0LL);
  v15 = v14;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v13, 0LL) )
    ExfAcquirePushLockExclusiveEx(v13, (__int64)v14, (__int64)v13);
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
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter2 + 48), (__int64)v18, BugCheckParameter2 + 48);
  if ( v19 )
    *((_BYTE *)v19 + 10) = 1;
  *(_QWORD *)(BugCheckParameter2 + 56) = KeGetCurrentThread();
  v20 = 0LL;
  v21 = *(_QWORD *)(BugCheckParameter2 + 192);
  if ( v21 )
  {
    v62 = *(_QWORD *)(v21 + 24);
    if ( v62 )
    {
      v20 = *(_QWORD *)(v62 + 16);
      CmpUnlockKcb(BugCheckParameter2);
      v63 = KeAbPreAcquire(v20 + 48, 0LL);
      v64 = v63;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 48), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v20 + 48), (__int64)v63, v20 + 48);
      if ( v64 )
        *((_BYTE *)v64 + 10) = 1;
      *(_QWORD *)(v20 + 56) = KeGetCurrentThread();
      v65 = KeAbPreAcquire(BugCheckParameter2 + 48, 0LL);
      v66 = v65;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 48), 0LL) )
        ExfAcquirePushLockExclusiveEx(
          (unsigned __int64 *)(BugCheckParameter2 + 48),
          (__int64)v65,
          BugCheckParameter2 + 48);
      if ( v66 )
        *((_BYTE *)v66 + 10) = 1;
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
    v72 = *(_QWORD *)(BugCheckParameter2 + 32);
    CmpCleanUpKcbCacheWithLock(BugCheckParameter2);
    CurrentThread = KeGetCurrentThread();
    *(_DWORD *)(v72 + 160) |= 0x80u;
    *(_QWORD *)(v72 + 4176) = CurrentThread;
    *(_DWORD *)(v72 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v72 + 4236), 1u) & 0x7F) + 4240) = 31;
    if ( (*(_DWORD *)(v72 + 160) & 0x20) == 0 )
      CmpDereferenceHive((volatile signed __int32 *)v72);
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
    __writecr8(1uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 1);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayedCloseTableLock, 0) )
      ExpAcquireFastMutexContended((__int64)&CmpDelayedCloseTableLock, (__int64)v27, v26);
    if ( v27 )
      *((_BYTE *)v27 + 10) = 1;
    CmpDelayedCloseTableLock.Owner = KeGetCurrentThread();
    CmpDelayedCloseTableLock.OldIrql = CurrentIrql;
    v29 = (__int64 *)(BugCheckParameter2 + 224);
    if ( (__int64 *)*v29 != v29 )
      KeBugCheckEx(0x51u, 0x34uLL, BugCheckParameter2, 0LL, 0LL);
    v68 = CmpDelayedLRUListHead;
    if ( *(__int64 **)(CmpDelayedLRUListHead + 8) == &CmpDelayedLRUListHead )
    {
      *(_QWORD *)(BugCheckParameter2 + 232) = &CmpDelayedLRUListHead;
      *v29 = v68;
      *(_QWORD *)(v68 + 8) = v29;
      CmpDelayedLRUListHead = BugCheckParameter2 + 224;
      v57 = CmpDelayedCloseElements;
      *(_BYTE *)(BugCheckParameter2 + 64) |= 2u;
      ++qword_140FD9418;
      CmpDelayedCloseElements = v57 + 1;
      if ( v57 + 1 <= (unsigned int)CmpDelayedCloseSize )
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
  v30 = 0LL;
  if ( *(_QWORD *)BugCheckParameter2 )
    goto LABEL_92;
  v31 = (__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64))CmpTraceRoutine;
  if ( CmpTraceRoutine )
  {
    memset(v76, 0, sizeof(v76));
    memset(&ApcState, 0, sizeof(ApcState));
    CmpAttachToRegistryProcess(&ApcState);
    v33 = (void *)CmpConstructName(BugCheckParameter2);
    if ( v33 )
    {
      LOBYTE(v32) = 23;
      if ( v31 == EtwpTraceRegistry )
        EtwpTraceRegistry(v32, (unsigned int)v76, 0, 0, BugCheckParameter2, (__int64)v33);
      else
        guard_dispatch_icall_no_overrides(v32, v76, 0LL, 0LL);
      CmpFreeTransientPoolWithTag(v33, 0x624E4D43u);
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
  v34 = *(_QWORD **)(BugCheckParameter2 + 192);
  if ( v34 )
  {
    v69 = v34[3];
    if ( v69 )
    {
      v70 = *v34;
      v30 = *(_QWORD *)(v69 + 16);
      if ( *(_QWORD **)(*v34 + 8LL) != v34 )
        goto LABEL_85;
      v71 = (_QWORD *)v34[1];
      if ( (_QWORD *)*v71 != v34 )
        goto LABEL_85;
      *v71 = v70;
      *(_QWORD *)(v70 + 8) = v71;
    }
    ExFreePoolWithTag(v34, 0);
    *(_QWORD *)(BugCheckParameter2 + 192) = 0LL;
  }
  v35 = (_DWORD *)(BugCheckParameter2 + 16);
  v36 = *(_QWORD *)(BugCheckParameter2 + 72);
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
                         * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 32) + 1656LL) - 1) & ((unsigned int)(101027 * (*v35 ^ (*v35 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*v35 ^ (*v35 >> 9))) >> 9)))
                         + 2)); i; i = (__int64 *)(v38 + 8) )
    {
      v38 = *i;
      if ( !*i )
        break;
      if ( (_DWORD *)v38 == v35 )
      {
        *i = *(_QWORD *)(v38 + 8);
        break;
      }
    }
  }
  *(_DWORD *)(BugCheckParameter2 + 8) |= 0x80000u;
  if ( !v30 )
    goto LABEL_80;
  v39 = *(_QWORD *)(v30 + 32);
  v40 = *(_QWORD *)v30;
  do
  {
    v41 = v40;
    if ( v40 <= 1 )
    {
      v42 = (_QWORD *)(v30 + 224);
      if ( (_QWORD *)*v42 != v42 )
        KeBugCheckEx(0x51u, 0x34uLL, v30, 1uLL, 0LL);
      v67 = (_QWORD *)*((_QWORD *)&v74 + 1);
      if ( **((__int128 ***)&v74 + 1) == &v74 )
      {
        *(_QWORD *)(v30 + 232) = *((_QWORD *)&v74 + 1);
        *v42 = &v74;
        *v67 = v42;
        *((_QWORD *)&v74 + 1) = v30 + 224;
        *(_BYTE *)(v30 + 64) |= 1u;
        goto LABEL_80;
      }
LABEL_85:
      __fastfail(3u);
    }
    v46 = v40 - 1;
    v47 = v40 == 3 && (*(_DWORD *)(v30 + 184) & 0x40000) != 0 && *(_BYTE *)(v39 + 2944) == 1;
    v48 = _InterlockedCompareExchange64((volatile signed __int64 *)v30, v46, v40);
    v40 = v48;
  }
  while ( v48 != v41 );
  if ( v48 < v46 )
    KeBugCheckEx(0x51u, 0x25uLL, v30, 0LL, 0LL);
  if ( v47 )
    CmpDoQueueLateUnloadWorker(v39);
LABEL_80:
  if ( !v36 )
    goto LABEL_92;
  v49 = *(_QWORD *)(v36 + 32);
  v50 = *(_QWORD *)v36;
  while ( 2 )
  {
    v51 = v50;
    if ( v50 <= 1 )
    {
      v52 = (_QWORD *)(v36 + 224);
      if ( (_QWORD *)*v52 != v52 )
        KeBugCheckEx(0x51u, 0x34uLL, v36, 1uLL, 0LL);
      v53 = (_QWORD *)*((_QWORD *)&v74 + 1);
      if ( **((__int128 ***)&v74 + 1) == &v74 )
      {
        *(_QWORD *)(v36 + 232) = *((_QWORD *)&v74 + 1);
        *v52 = &v74;
        *v53 = v52;
        *((_QWORD *)&v74 + 1) = v36 + 224;
        *(_BYTE *)(v36 + 64) |= 1u;
        goto LABEL_92;
      }
      goto LABEL_85;
    }
    v54 = v50 - 1;
    v55 = v50 == 3 && (*(_DWORD *)(v36 + 184) & 0x40000) != 0 && *(_BYTE *)(v49 + 2944) == 1;
    v56 = _InterlockedCompareExchange64((volatile signed __int64 *)v36, v54, v50);
    v50 = v56;
    if ( v56 != v51 )
      continue;
    break;
  }
  if ( v56 < v54 )
    KeBugCheckEx(0x51u, 0x25uLL, v36, 0LL, 0LL);
  if ( v55 )
    CmpDoQueueLateUnloadWorker(v49);
LABEL_92:
  if ( *(struct _KTHREAD **)(BugCheckParameter2 + 56) != KeGetCurrentThread() )
    CmpDecommisssionKcb(BugCheckParameter2);
LABEL_96:
  LODWORD(v11) = v75;
LABEL_97:
  CmpUnlockKcb(BugCheckParameter2);
  if ( v20 )
    CmpUnlockKcb(v20);
  v58 = (signed __int64 *)(*(_QWORD *)(v8 + 1648) + 24LL * ((unsigned int)v11 & (*(_DWORD *)(v8 + 1656) - 1)));
  v58[1] = 0LL;
  _m_prefetchw(v58);
  v59 = *v58;
  v60 = *v58 - 16;
  if ( (*v58 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v60 = 0LL;
  if ( (v59 & 2) != 0 || (v61 = *v58, v61 != _InterlockedCompareExchange64(v58, v60, v59)) )
    ExfReleasePushLock(v58);
  KeAbPostRelease((ULONG_PTR)v58);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 4232), 0xFFFFFFFF) == 1 )
    CmpDeleteHive((_QWORD *)v8);
  CmpDrainDelayDerefContext((_QWORD **)&v74);
}
