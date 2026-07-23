/*
 * XREFs of KiAbConvertWaiterToOwnerEntry @ 0x14027E670
 * Callers:
 *     ExpReleaseFastResourceShared @ 0x14027CE20 (ExpReleaseFastResourceShared.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x14027D4F0 (ExpReleaseFastResourceExclusiveSlow.c)
 *     ExpCommitWakeFastResource @ 0x14027F2E0 (ExpCommitWakeFastResource.c)
 *     KeAbPreWakeupThread @ 0x14027FB04 (KeAbPreWakeupThread.c)
 *     KeWakeWaitChain @ 0x140280200 (KeWakeWaitChain.c)
 *     ExReleaseFastResource @ 0x140298850 (ExReleaseFastResource.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     ExpWakePushLock @ 0x140406240 (ExpWakePushLock.c)
 * Callees:
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140212BC0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     KiProcessDeferredReadyList @ 0x140285EA0 (KiProcessDeferredReadyList.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x14029BB60 (KiAbThreadRemoveBoostsSlow.c)
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402BC860 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     RtlRbInsertNodeEx @ 0x1402E2370 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x1402E2A20 (RtlRbRemoveNode.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x1402E3830 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x1402E39A0 (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x1402E5690 (KiAbOwnerComputeCpuPriorityKey.c)
 *     KiAbThreadInsertList @ 0x1402E5880 (KiAbThreadInsertList.c)
 *     KiAbQueueAutoBoostDpc @ 0x1402E5E60 (KiAbQueueAutoBoostDpc.c)
 *     KiAbIoBoostOwners @ 0x1402E61E0 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x1402E72F0 (KiAbCpuBoostOwners.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1402E83C0 (KiAbEntryGetLockedHeadEntry.c)
 *     EtwTraceAutoBoostProcessLockEntry @ 0x1402E8C88 (EtwTraceAutoBoostProcessLockEntry.c)
 *     KiAbProcessThreadLocks @ 0x1402E8D40 (KiAbProcessThreadLocks.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x1402E9DE0 (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbSetMinimumThreadPriority @ 0x1402E9E70 (KiAbSetMinimumThreadPriority.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402FD480 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     EtwTraceAutoBoostConvertWaiterToOwner @ 0x140311EA0 (EtwTraceAutoBoostConvertWaiterToOwner.c)
 *     KiReadyDeferredReadyList @ 0x140315830 (KiReadyDeferredReadyList.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140323E4C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     PsBoostThreadOutstandingIoQoS @ 0x140325D24 (PsBoostThreadOutstandingIoQoS.c)
 *     IoBoostThreadIoPriority @ 0x140326240 (IoBoostThreadIoPriority.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x14041AA70 (KiAbTryIncrementIoWaiterCounts.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiAbConvertWaiterToOwnerEntry(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  __int64 v6; // r14
  unsigned int v7; // edi
  __int64 v8; // r12
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  _DWORD *v11; // rsi
  __int64 v12; // r15
  __int64 CurrentIrql; // rax
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  int v18; // edx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  _QWORD *v21; // rbx
  unsigned __int64 *v22; // rcx
  __int64 v23; // rdx
  int v24; // r8d
  char v25; // al
  _RTL_RB_TREE *v26; // rbx
  char v27; // r9
  _RTL_BALANCED_NODE *Min; // rcx
  unsigned __int64 Root; // rdx
  int v30; // ecx
  BOOLEAN v31; // r8
  _RTL_BALANCED_NODE *v32; // rax
  _RTL_BALANCED_NODE *v33; // rax
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 p_AbSelfIoBoostsList; // r15
  __int64 v36; // rax
  __int64 LockedHeadEntry; // rax
  __int64 v38; // rsi
  unsigned int v39; // ebx
  __int64 v40; // r15
  char v41; // r15
  int v42; // eax
  unsigned int v43; // eax
  unsigned int v44; // edx
  char v45; // dl
  char v46; // cl
  char v47; // cl
  int v48; // r10d
  char CpuPriorityKey; // r12
  __int64 v50; // r15
  int v51; // edx
  __int64 v52; // r8
  char v53; // cl
  char v54; // al
  char v55; // r8
  char v56; // dl
  char v57; // cl
  _QWORD *v58; // r15
  signed __int64 v59; // rax
  signed __int64 v60; // rtt
  char v61; // si
  _QWORD *v62; // rcx
  __int64 v63; // rsi
  volatile signed __int16 *v64; // rbx
  __int64 result; // rax
  unsigned __int8 v66; // si
  signed __int32 v67[6]; // [rsp+8h] [rbp-89h] BYREF
  __int64 v68; // [rsp+38h] [rbp-59h] BYREF
  _QWORD *v69; // [rsp+40h] [rbp-51h] BYREF
  unsigned int v70; // [rsp+48h] [rbp-49h]
  _SINGLE_LIST_ENTRY *v71; // [rsp+50h] [rbp-41h]
  __int64 v72; // [rsp+58h] [rbp-39h]
  __int64 v73; // [rsp+60h] [rbp-31h]
  unsigned __int64 v74; // [rsp+68h] [rbp-29h]
  struct _KPRCB *v75; // [rsp+70h] [rbp-21h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-19h] BYREF
  struct _KLOCK_QUEUE_HANDLE v77; // [rsp+90h] [rbp-1h] BYREF
  void *retaddr; // [rsp+F0h] [rbp+5Fh]
  int v80; // [rsp+100h] [rbp+6Fh] BYREF
  int v81; // [rsp+108h] [rbp+77h]
  int v82; // [rsp+110h] [rbp+7Fh] BYREF

  v81 = a3;
  v4 = *(_QWORD *)a2;
  v6 = a2;
  v7 = 0;
  v69 = 0LL;
  v68 = 0LL;
  v8 = v4 & 0x7FFFFFFFFFFFFFFCLL;
  v72 = v8;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v8 && *(char *)(a2 + 8) >= 0 )
  {
    v8 |= 0x8000000000000000uLL;
    v72 = v8;
  }
  v9 = *(_QWORD *)a2 & 0x7FFFFFFFFFFFFFFCLL;
  if ( *(char *)(a2 + 8) < 0 )
  {
    a3 = *(_QWORD *)(*(_QWORD *)(a2 - 88LL * (*(_BYTE *)(a2 + 8) & 0x3F) - 16) + 544LL);
    a2 = (unsigned int)(v9 >> 4) % *(_DWORD *)(a3 + 96);
    v12 = *(_QWORD *)(a3 + 88) + 24 * a2;
    v11 = (_DWORD *)(v12 + 16);
  }
  else
  {
    v10 = ((v9 >> 4) & 0x3FF) << 6;
    v11 = (_DWORD *)((char *)&KiAbTreeArray + v10 + 16);
    v12 = (__int64)&KiAbTreeArray + v10;
  }
  CurrentIrql = KeGetCurrentIrql();
  v73 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags((unsigned __int8)CurrentIrql);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(v11);
    v15 = *v11 & 0x7FFFFFFF;
    v14 = _InterlockedCompareExchange(v11, v15 + 1, v15);
    if ( v15 != v14 )
    {
      while ( v14 >= 0 )
      {
        a2 = (unsigned int)v14;
        v14 = _InterlockedCompareExchange(v11, v14 + 1, v14);
        if ( v14 == (_DWORD)a2 )
          goto LABEL_17;
      }
      LOBYTE(a2) = -1;
      ExpWaitForSpinLockSharedAndAcquire(v11, a2);
    }
  }
  else
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v11, 0xFFu);
  }
LABEL_17:
  v16 = *(_QWORD *)(v12 + 8);
  v17 = *(_QWORD *)v12;
  if ( (v16 & 1) != 0 )
  {
    if ( !v17 )
    {
LABEL_32:
      *(_BYTE *)(v6 + 9) = 0;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      {
        _InterlockedAnd(v11, 0xBFFFFFFF);
        _InterlockedDecrement(v11);
      }
      else
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v11, retaddr, a3);
      }
      goto LABEL_148;
    }
    v17 ^= v12;
  }
  v18 = v16 & 1;
  if ( !v17 )
    goto LABEL_32;
  a3 = 0x7FFFFFFFFFFFFFFCLL;
  do
  {
    v19 = *(_QWORD *)(v17 - 16) & 0x7FFFFFFFFFFFFFFCLL;
    if ( v19 >= v9 )
    {
      if ( v19 <= v9 )
        break;
      v20 = *(_QWORD *)v17;
    }
    else
    {
      v20 = *(_QWORD *)(v17 + 8);
    }
    if ( v18 && v20 )
      v17 ^= v20;
    else
      v17 = v20;
  }
  while ( v17 );
  if ( !v17 )
    goto LABEL_32;
  v21 = (_QWORD *)(v17 - 16);
  LockHandle.LockQueue.Next = 0LL;
  v22 = (unsigned __int64 *)(v17 - 16 + 72);
  LockHandle.LockQueue.Lock = v22;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v23 = _InterlockedExchange64((volatile __int64 *)v22, (__int64)&LockHandle);
    if ( v23 )
      KxWaitForLockOwnerShip(&LockHandle, v23, 0x7FFFFFFFFFFFFFFCLL, a4);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v22);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _InterlockedAnd(v11, 0xBFFFFFFF);
    _InterlockedDecrement(v11);
  }
  else
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v11, retaddr, a3);
  }
  if ( *(__int64 *)v6 >= 0 )
  {
    *(_BYTE *)(v6 + 9) = 0;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v7 = 1;
    goto LABEL_148;
  }
  _InterlockedAdd16((volatile signed __int16 *)(BugCheckParameter1 + 792), 0xFFu);
  if ( (*(_BYTE *)(v6 + 11) & 2) != 0 )
  {
    --*((_BYTE *)v21 + 84);
    *(_BYTE *)(v6 + 11) &= ~2u;
  }
  if ( (*(_BYTE *)(v6 + 11) & 4) != 0 )
  {
    *((_DWORD *)v21 + 21) ^= ((unsigned __int16)*((_DWORD *)v21 + 21) ^ (unsigned __int16)(((unsigned __int16)(*((_DWORD *)v21 + 21) >> 8)
                                                                                          - 1) << 8)) & 0x7F00;
    *(_BYTE *)(v6 + 11) &= ~4u;
  }
  if ( v21 == (_QWORD *)v6 )
  {
    *(_BYTE *)(v6 + 9) = 0;
    v7 = 2;
    goto LABEL_73;
  }
  RtlRbRemoveNode((PRTL_RB_TREE)(v21 + 7), (PRTL_BALANCED_NODE)(v6 + 16));
  v24 = *(_DWORD *)(v6 + 80);
  *(_BYTE *)(v6 + 9) = 0;
  *(_DWORD *)(v6 + 80) = 0;
  if ( v24 )
    KiAbThreadRemoveBoostsSlow(BugCheckParameter1);
  v25 = KiAbOwnerComputeCpuPriorityKey(v6);
  v26 = (_RTL_RB_TREE *)(v21 + 5);
  *(_BYTE *)(v6 + 40) = v25;
  v27 = v25;
  Min = v26->Min;
  Root = (unsigned __int64)v26->Root;
  if ( ((unsigned __int8)Min & 1) == 0 )
    goto LABEL_58;
  if ( Root )
  {
    Root ^= (unsigned __int64)v26;
LABEL_58:
    v30 = (unsigned __int8)Min & 1;
    v31 = 0;
    if ( Root )
    {
      while ( 1 )
      {
        while ( *(char *)(Root + 24) > v27 )
        {
          v32 = *(_RTL_BALANCED_NODE **)Root;
          if ( v30 )
          {
            if ( !v32 )
              goto LABEL_72;
            v32 = (_RTL_BALANCED_NODE *)(Root ^ (unsigned __int64)v32);
          }
          if ( !v32 )
            goto LABEL_72;
          Root = (unsigned __int64)v32;
        }
        v33 = *(_RTL_BALANCED_NODE **)(Root + 8);
        if ( v30 )
        {
          if ( !v33 )
            break;
          v33 = (_RTL_BALANCED_NODE *)(Root ^ (unsigned __int64)v33);
        }
        if ( !v33 )
          break;
        Root = (unsigned __int64)v33;
      }
      v31 = 1;
    }
    goto LABEL_72;
  }
  v31 = 0;
LABEL_72:
  RtlRbInsertNodeEx(v26, (PRTL_BALANCED_NODE)Root, v31, (PRTL_BALANCED_NODE)(v6 + 16));
LABEL_73:
  *(_BYTE *)(v6 + 8) &= ~0x40u;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  CurrentPrcb = KeGetCurrentPrcb();
  v75 = CurrentPrcb;
  if ( !KiAbpInlinePreWakeupPriorityBoosting )
  {
    if ( (unsigned int)KiAbThreadInsertList(
                         BugCheckParameter1,
                         &CurrentPrcb->AbSelfIoBoostsList,
                         BugCheckParameter1 + 816) )
    {
      KiAbQueueAutoBoostDpc(CurrentPrcb);
      v7 |= 8u;
    }
    goto LABEL_144;
  }
  p_AbSelfIoBoostsList = (__int64)&CurrentPrcb->AbSelfIoBoostsList;
  v36 = *(_QWORD *)v6 & 0x7FFFFFFFFFFFFFFCLL;
  v71 = &CurrentPrcb->AbSelfIoBoostsList;
  v74 = v36;
  memset(&v77, 0, sizeof(v77));
  v82 = 0;
  if ( v36 && *(char *)(v6 + 8) >= 0 )
    v74 = v36 | 0x8000000000000000uLL;
  LockedHeadEntry = KiAbEntryGetLockedHeadEntry(v6, 0LL, &v77);
  v38 = LockedHeadEntry;
  if ( LockedHeadEntry )
  {
    if ( !*(_BYTE *)(v6 + 9) )
    {
      v39 = 384;
      if ( v6 != LockedHeadEntry )
      {
        KiAbEntryUpdateOwnerTreePosition(v6, LockedHeadEntry);
        v39 = 400;
      }
      v51 = *(_DWORD *)(v38 + 84);
      v52 = *(_QWORD *)(v38 + 64);
      v80 = 0;
      v53 = 0;
      v54 = 0;
      if ( (_BYTE)v51 )
        v53 = 2;
      BYTE1(v80) = v53;
      if ( (v51 & 0x7F00) != 0 )
        v54 = 1;
      BYTE2(v80) = v54;
      if ( v52 )
      {
        v55 = *(_BYTE *)(v52 + 24);
        LOBYTE(v80) = v55;
      }
      else
      {
        v55 = v80;
      }
      if ( *(_BYTE *)(v38 + 9) )
      {
        v56 = *(_BYTE *)(*(_QWORD *)(v38 - 88LL * (*(_BYTE *)(v38 + 8) & 0x3F) - 16) + 195LL);
        v57 = v55;
        if ( v56 > 30 )
          v56 = 30;
        if ( v56 > v55 )
          v57 = v56;
        LOBYTE(v80) = v57;
      }
      if ( !v80 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v77);
        v39 |= 1u;
        goto LABEL_136;
      }
      if ( (unsigned int)KiAbSetMinimumThreadPriority(
                           v6,
                           (unsigned int)&v80,
                           (unsigned int)&v68,
                           (unsigned int)&v69,
                           p_AbSelfIoBoostsList,
                           (__int64)&v82)
        && v6 != v38 )
      {
        KiAbEntryUpdateOwnerTreePosition(v6, v38);
        v39 |= 0x20u;
      }
LABEL_124:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v77);
      if ( v82 )
      {
        v58 = *(_QWORD **)(v6 - 88LL * (*(_BYTE *)(v6 + 8) & 0x3F) - 16);
        _m_prefetchw(v58 - 6);
        v59 = *(v58 - 6);
        if ( v59 )
        {
          while ( 1 )
          {
            v60 = v59;
            v59 = _InterlockedCompareExchange64(v58 - 6, v59 + 1, v59);
            if ( v60 == v59 )
              break;
            if ( !v59 )
              goto LABEL_136;
          }
          if ( ObpTraceFlags )
            ObpPushStackInfo((_DWORD)v58 - 48);
          v61 = v82;
          if ( (v82 & 1) != 0 )
            IoBoostThreadIoPriority(v58, 2LL, 0x80000000LL);
          if ( (v61 & 2) != 0 )
            PsBoostThreadOutstandingIoQoS(v58);
          ObDereferenceObjectDeferDeleteWithTag(v58, 0x746C6644u);
        }
      }
      goto LABEL_136;
    }
    v39 = 392;
    if ( v6 != LockedHeadEntry )
    {
      KiAbEntryUpdateWaiterTreePosition(v6, LockedHeadEntry);
      v39 = 424;
    }
    v40 = *(_QWORD *)(v38 + 48);
    if ( v40 )
      v41 = *(_BYTE *)(v40 + 24);
    else
      v41 = 30;
    LOBYTE(v80) = v41;
    if ( !*(_BYTE *)(v38 + 9) )
    {
      v42 = *(_DWORD *)(v38 + 80);
      v70 = 0;
      v43 = v42 & 0x3FFFFFFF;
      if ( v43 )
      {
        _BitScanReverse(&v44, v43);
        v70 = v44;
        v45 = v44 + 1;
      }
      else
      {
        v45 = 0;
      }
      v46 = *(_BYTE *)(*(_QWORD *)(v38 - 88LL * (*(_BYTE *)(v38 + 8) & 0x3F) - 16) + 563LL);
      if ( v46 > v45 )
      {
        v45 = *(_BYTE *)(*(_QWORD *)(v38 - 88LL * (*(_BYTE *)(v38 + 8) & 0x3F) - 16) + 563LL);
        if ( v46 > 30 )
          v45 = 30;
      }
      v47 = v41;
      if ( v45 < v41 )
        v47 = v45;
      v41 = v47;
      LOBYTE(v80) = v47;
    }
    KiAbTryIncrementIoWaiterCounts(v6, v38);
    CpuPriorityKey = KiAbEntryGetCpuPriorityKey(v6);
    if ( v41 < CpuPriorityKey )
    {
      if ( !v48 )
      {
        v50 = (__int64)v71;
        goto LABEL_103;
      }
    }
    else if ( !v48 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v77);
      v39 |= 2u;
      goto LABEL_136;
    }
    v50 = (__int64)v71;
    KiAbIoBoostOwners(v38, v48, (unsigned int)&v68, (unsigned int)&v69, (__int64)v71);
LABEL_103:
    KiAbCpuBoostOwners(v38, (unsigned __int8)CpuPriorityKey, (unsigned int)&v68, (unsigned int)&v69, v50);
    goto LABEL_124;
  }
  v39 = 384;
LABEL_136:
  if ( (WORD2(xmmword_140FC5B10) & 0x1000) != 0 )
    EtwTraceAutoBoostProcessLockEntry(*(_QWORD *)(v6 - 88LL * (*(_BYTE *)(v6 + 8) & 0x3F) - 16), v74, v39);
  v62 = v69;
  if ( v69 )
  {
    v63 = (__int64)v71;
    do
    {
      v64 = (volatile signed __int16 *)(v62 - 101);
      v69 = (_QWORD *)*v62;
      *v62 = 1LL;
      _InterlockedOr(v67, 0);
      if ( *((_BYTE *)v62 - 16) )
        KiAbProcessThreadLocks((_DWORD)v62 - 808, 4, (unsigned int)&v68, (unsigned int)&v69, v63);
      _InterlockedDecrement16(v64 + 434);
      v62 = v69;
    }
    while ( v69 );
  }
  v8 = v72;
  CurrentPrcb = v75;
LABEL_144:
  if ( v68 )
  {
    if ( !v81 )
    {
      result = KiProcessDeferredReadyList(CurrentPrcb, &v68, v73);
      goto LABEL_151;
    }
    KiReadyDeferredReadyList(CurrentPrcb, &v68);
  }
LABEL_148:
  v66 = v73;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v73);
  result = v66;
  __writecr8(v66);
LABEL_151:
  if ( (WORD2(xmmword_140FC5B10) & 0x1000) != 0 )
    return EtwTraceAutoBoostConvertWaiterToOwner(BugCheckParameter1, v8, v7);
  return result;
}
