/*
 * XREFs of KiAbConvertWaiterToOwnerEntry @ 0x1402CBF00
 * Callers:
 *     ExReleaseFastResource @ 0x14028C460 (ExReleaseFastResource.c)
 *     ExpReleaseFastResourceShared @ 0x14028CC90 (ExpReleaseFastResourceShared.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x14028DDD0 (ExpReleaseFastResourceExclusiveSlow.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeAbPreWakeupThread @ 0x1402DFF50 (KeAbPreWakeupThread.c)
 *     KeWakeWaitChain @ 0x1402F15F0 (KeWakeWaitChain.c)
 *     ExpCommitWakeFastResource @ 0x1402F1EF0 (ExpCommitWakeFastResource.c)
 *     ExpWakePushLock @ 0x1404060A0 (ExpWakePushLock.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140219B50 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     PsBoostThreadOutstandingIoQoS @ 0x14022DE70 (PsBoostThreadOutstandingIoQoS.c)
 *     IoBoostThreadIoPriority @ 0x14022E320 (IoBoostThreadIoPriority.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140241380 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     KiAbThreadInsertList @ 0x14027EA80 (KiAbThreadInsertList.c)
 *     KiAbSetMinimumThreadPriority @ 0x14027EB30 (KiAbSetMinimumThreadPriority.c)
 *     KiAbIoBoostOwners @ 0x14027F070 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x14027F900 (KiAbCpuBoostOwners.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140280660 (KiAbEntryGetLockedHeadEntry.c)
 *     EtwTraceAutoBoostProcessLockEntry @ 0x140280F20 (EtwTraceAutoBoostProcessLockEntry.c)
 *     KiAbProcessThreadLocks @ 0x140280FD0 (KiAbProcessThreadLocks.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x140282090 (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x140282120 (KiAbOwnerComputeCpuPriorityKey.c)
 *     KiAbQueueAutoBoostDpc @ 0x140284100 (KiAbQueueAutoBoostDpc.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14028EF60 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KiReadyDeferredReadyList @ 0x1402A7E10 (KiReadyDeferredReadyList.c)
 *     KiProcessDeferredReadyList @ 0x1402C5F60 (KiProcessDeferredReadyList.c)
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x14031FE60 (KiAbThreadRemoveBoostsSlow.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     RtlRbInsertNodeEx @ 0x1403651C0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x140365870 (RtlRbRemoveNode.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x1403665F0 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x140366760 (KiAbEntryUpdateWaiterTreePosition.c)
 *     EtwTraceAutoBoostConvertWaiterToOwner @ 0x1403C1000 (EtwTraceAutoBoostConvertWaiterToOwner.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x1404083C0 (KiAbTryIncrementIoWaiterCounts.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall KiAbConvertWaiterToOwnerEntry(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3, __int64 a4)
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
  volatile __int64 *v22; // rcx
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
  __int64 v34; // r9
  struct _KPRCB *CurrentPrcb; // rbx
  _SINGLE_LIST_ENTRY *p_AbSelfIoBoostsList; // r15
  __int64 v37; // rax
  _QWORD *LockedHeadEntry; // rax
  __int64 v39; // rsi
  int v40; // ebx
  __int64 v41; // r15
  char v42; // r15
  int v43; // eax
  unsigned int v44; // eax
  unsigned int v45; // edx
  char v46; // dl
  char v47; // cl
  char v48; // cl
  __int64 v49; // rdx
  unsigned int v50; // r10d
  char CpuPriorityKey; // r12
  _SINGLE_LIST_ENTRY *v52; // r15
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // r8
  char v56; // cl
  char v57; // al
  char v58; // r8
  unsigned __int8 v59; // cl
  bool v60; // cc
  char v61; // cl
  KSPIN_LOCK *v62; // r15
  signed __int64 v63; // rax
  signed __int64 v64; // rtt
  char v65; // si
  _QWORD *v66; // rcx
  _SINGLE_LIST_ENTRY *v67; // rsi
  volatile signed __int16 *v68; // rbx
  char result; // al
  unsigned __int8 v70; // si
  signed __int32 v71[6]; // [rsp+8h] [rbp-89h] BYREF
  _QWORD *v72; // [rsp+38h] [rbp-59h] BYREF
  _QWORD *v73; // [rsp+40h] [rbp-51h] BYREF
  unsigned int v74; // [rsp+48h] [rbp-49h]
  _SINGLE_LIST_ENTRY *v75; // [rsp+50h] [rbp-41h]
  __int64 v76; // [rsp+58h] [rbp-39h]
  __int64 v77; // [rsp+60h] [rbp-31h]
  unsigned __int64 v78; // [rsp+68h] [rbp-29h]
  struct _KPRCB *v79; // [rsp+70h] [rbp-21h]
  __int128 v80; // [rsp+78h] [rbp-19h] BYREF
  __int64 v81; // [rsp+88h] [rbp-9h]
  __int128 v82; // [rsp+90h] [rbp-1h] BYREF
  __int64 v83; // [rsp+A0h] [rbp+Fh]
  __int64 retaddr; // [rsp+F0h] [rbp+5Fh]
  int v86; // [rsp+100h] [rbp+6Fh] BYREF
  int v87; // [rsp+108h] [rbp+77h]
  int v88; // [rsp+110h] [rbp+7Fh] BYREF

  v87 = a3;
  v4 = *(_QWORD *)a2;
  v6 = a2;
  v81 = 0LL;
  v7 = 0;
  v73 = 0LL;
  v72 = 0LL;
  v8 = v4 & 0x7FFFFFFFFFFFFFFCLL;
  v76 = v8;
  v80 = 0LL;
  if ( v8 && *(char *)(a2 + 8) >= 0 )
  {
    v8 |= 0x8000000000000000uLL;
    v76 = v8;
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
  v77 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags((unsigned __int8)CurrentIrql, 2LL);
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
      ExpWaitForSpinLockSharedAndAcquire(v11, a2, a3, a4);
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
LABEL_31:
      *(_BYTE *)(v6 + 9) = 0;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      {
        _InterlockedAnd(v11, 0xBFFFFFFF);
        _InterlockedDecrement(v11);
      }
      else
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v11, retaddr);
      }
      goto LABEL_147;
    }
    v17 ^= v12;
  }
  v18 = v16 & 1;
  if ( !v17 )
    goto LABEL_31;
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
    goto LABEL_31;
  v21 = (_QWORD *)(v17 - 16);
  *(_QWORD *)&v80 = 0LL;
  v22 = (volatile __int64 *)(v17 - 16 + 72);
  *((_QWORD *)&v80 + 1) = v22;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v23 = _InterlockedExchange64(v22, (__int64)&v80);
    if ( v23 )
      KxWaitForLockOwnerShip(&v80, v23);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(&v80, v22);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _InterlockedAnd(v11, 0xBFFFFFFF);
    _InterlockedDecrement(v11);
  }
  else
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v11, retaddr);
  }
  if ( *(__int64 *)v6 >= 0 )
  {
    *(_BYTE *)(v6 + 9) = 0;
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&v80, v23);
    v7 = 1;
    goto LABEL_147;
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
    goto LABEL_72;
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
    goto LABEL_57;
  if ( Root )
  {
    Root ^= (unsigned __int64)v26;
LABEL_57:
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
              goto LABEL_71;
            v32 = (_RTL_BALANCED_NODE *)(Root ^ (unsigned __int64)v32);
          }
          if ( !v32 )
            goto LABEL_71;
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
    goto LABEL_71;
  }
  v31 = 0;
LABEL_71:
  RtlRbInsertNodeEx(v26, (PRTL_BALANCED_NODE)Root, v31, (PRTL_BALANCED_NODE)(v6 + 16));
LABEL_72:
  *(_BYTE *)(v6 + 8) &= ~0x40u;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v80, v23);
  CurrentPrcb = KeGetCurrentPrcb();
  v79 = CurrentPrcb;
  if ( !KiAbpInlinePreWakeupPriorityBoosting )
  {
    if ( (unsigned int)KiAbThreadInsertList(
                         BugCheckParameter1,
                         &CurrentPrcb->AbSelfIoBoostsList.Next,
                         (_QWORD *)(BugCheckParameter1 + 816),
                         v34) )
    {
      KiAbQueueAutoBoostDpc((struct _KDPC *)CurrentPrcb);
      v7 |= 8u;
    }
    goto LABEL_143;
  }
  p_AbSelfIoBoostsList = &CurrentPrcb->AbSelfIoBoostsList;
  v83 = 0LL;
  v37 = *(_QWORD *)v6 & 0x7FFFFFFFFFFFFFFCLL;
  v75 = &CurrentPrcb->AbSelfIoBoostsList;
  v78 = v37;
  v82 = 0LL;
  v88 = 0;
  if ( v37 && *(char *)(v6 + 8) >= 0 )
    v78 = v37 | 0x8000000000000000uLL;
  LockedHeadEntry = KiAbEntryGetLockedHeadEntry(v6, 0LL, (__int64)&v82);
  v39 = (__int64)LockedHeadEntry;
  if ( LockedHeadEntry )
  {
    if ( !*(_BYTE *)(v6 + 9) )
    {
      v40 = 384;
      if ( (_QWORD *)v6 != LockedHeadEntry )
      {
        KiAbEntryUpdateOwnerTreePosition(v6, LockedHeadEntry);
        v40 = 400;
      }
      v54 = *(unsigned int *)(v39 + 84);
      v55 = *(_QWORD *)(v39 + 64);
      v86 = 0;
      v56 = 0;
      v57 = 0;
      if ( (_BYTE)v54 )
        v56 = 2;
      BYTE1(v86) = v56;
      if ( (v54 & 0x7F00) != 0 )
        v57 = 1;
      BYTE2(v86) = v57;
      if ( v55 )
      {
        v58 = *(_BYTE *)(v55 + 24);
        LOBYTE(v86) = v58;
      }
      else
      {
        v58 = v86;
      }
      if ( *(_BYTE *)(v39 + 9) )
      {
        v59 = *(_BYTE *)(*(_QWORD *)(v39 - 88LL * (*(_BYTE *)(v39 + 8) & 0x3F) - 16) + 195LL);
        v60 = (char)v59 <= 30;
        v54 = v59;
        v61 = v58;
        if ( !v60 )
          v54 = 30LL;
        if ( (char)v54 > v58 )
          v61 = v54;
        LOBYTE(v86) = v61;
      }
      if ( !v86 )
      {
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&v82, v54);
        v40 |= 1u;
        goto LABEL_135;
      }
      if ( (unsigned int)KiAbSetMinimumThreadPriority(v6, (char *)&v86, (__int64)&v72, &v73, p_AbSelfIoBoostsList, &v88)
        && v6 != v39 )
      {
        KiAbEntryUpdateOwnerTreePosition(v6, v39);
        v40 |= 0x20u;
      }
LABEL_123:
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&v82, v53);
      if ( v88 )
      {
        v62 = *(KSPIN_LOCK **)(v6 - 88LL * (*(_BYTE *)(v6 + 8) & 0x3F) - 16);
        _m_prefetchw(v62 - 6);
        v63 = *(v62 - 6);
        if ( v63 )
        {
          while ( 1 )
          {
            v64 = v63;
            v63 = _InterlockedCompareExchange64((volatile signed __int64 *)v62 - 6, v63 + 1, v63);
            if ( v64 == v63 )
              break;
            if ( !v63 )
              goto LABEL_135;
          }
          if ( ObpTraceFlags )
            ObpPushStackInfo((_DWORD)v62 - 48);
          v65 = v88;
          if ( (v88 & 1) != 0 )
            IoBoostThreadIoPriority(v62, 2, 0x80000000);
          if ( (v65 & 2) != 0 )
            PsBoostThreadOutstandingIoQoS((__int64)v62);
          ObDereferenceObjectDeferDeleteWithTag(v62, 0x746C6644u);
        }
      }
      goto LABEL_135;
    }
    v40 = 392;
    if ( (_QWORD *)v6 != LockedHeadEntry )
    {
      KiAbEntryUpdateWaiterTreePosition(v6, LockedHeadEntry);
      v40 = 424;
    }
    v41 = *(_QWORD *)(v39 + 48);
    if ( v41 )
      v42 = *(_BYTE *)(v41 + 24);
    else
      v42 = 30;
    LOBYTE(v86) = v42;
    if ( !*(_BYTE *)(v39 + 9) )
    {
      v43 = *(_DWORD *)(v39 + 80);
      v74 = 0;
      v44 = v43 & 0x3FFFFFFF;
      if ( v44 )
      {
        _BitScanReverse(&v45, v44);
        v74 = v45;
        v46 = v45 + 1;
      }
      else
      {
        v46 = 0;
      }
      v47 = *(_BYTE *)(*(_QWORD *)(v39 - 88LL * (*(_BYTE *)(v39 + 8) & 0x3F) - 16) + 563LL);
      if ( v47 > v46 )
      {
        v46 = *(_BYTE *)(*(_QWORD *)(v39 - 88LL * (*(_BYTE *)(v39 + 8) & 0x3F) - 16) + 563LL);
        if ( v47 > 30 )
          v46 = 30;
      }
      v48 = v42;
      if ( v46 < v42 )
        v48 = v46;
      v42 = v48;
      LOBYTE(v86) = v48;
    }
    KiAbTryIncrementIoWaiterCounts(v6, v39);
    CpuPriorityKey = KiAbEntryGetCpuPriorityKey(v6);
    if ( v42 < CpuPriorityKey )
    {
      if ( !v50 )
      {
        v52 = v75;
        goto LABEL_102;
      }
    }
    else if ( !v50 )
    {
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&v82, v49);
      v40 |= 2u;
      goto LABEL_135;
    }
    v52 = v75;
    KiAbIoBoostOwners(v39, v50, (__int64)&v72, &v73, v75);
LABEL_102:
    KiAbCpuBoostOwners(v39, (unsigned __int8)CpuPriorityKey, (__int64)&v72, &v73, v52);
    goto LABEL_123;
  }
  v40 = 384;
LABEL_135:
  if ( (WORD2(xmmword_140FC6B50) & 0x1000) != 0 )
    EtwTraceAutoBoostProcessLockEntry(*(_QWORD *)(v6 - 88LL * (*(_BYTE *)(v6 + 8) & 0x3F) - 16), v78, v40);
  v66 = v73;
  if ( v73 )
  {
    v67 = v75;
    do
    {
      v68 = (volatile signed __int16 *)(v66 - 101);
      v73 = (_QWORD *)*v66;
      *v66 = 1LL;
      _InterlockedOr(v71, 0);
      if ( *((_BYTE *)v66 - 16) )
        KiAbProcessThreadLocks((__int64)(v66 - 101), 4, (__int64)&v72, &v73, v67);
      _InterlockedDecrement16(v68 + 434);
      v66 = v73;
    }
    while ( v73 );
  }
  v8 = v76;
  CurrentPrcb = v79;
LABEL_143:
  if ( v72 )
  {
    if ( !v87 )
    {
      result = KiProcessDeferredReadyList(CurrentPrcb, &v72, v77);
      goto LABEL_150;
    }
    KiReadyDeferredReadyList((__int64)CurrentPrcb, &v72);
  }
LABEL_147:
  v70 = v77;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v77);
  result = v70;
  __writecr8(v70);
LABEL_150:
  if ( (WORD2(xmmword_140FC6B50) & 0x1000) != 0 )
    return EtwTraceAutoBoostConvertWaiterToOwner(BugCheckParameter1, v8, v7);
  return result;
}
