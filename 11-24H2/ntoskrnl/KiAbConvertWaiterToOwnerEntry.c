/*
 * XREFs of KiAbConvertWaiterToOwnerEntry @ 0x140323370
 * Callers:
 *     ExReleaseFastResource @ 0x14025BE50 (ExReleaseFastResource.c)
 *     ExpReleaseFastResourceShared @ 0x14025C680 (ExpReleaseFastResourceShared.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x14025D7C0 (ExpReleaseFastResourceExclusiveSlow.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeWakeWaitChain @ 0x1403D7B10 (KeWakeWaitChain.c)
 *     ExpCommitWakeFastResource @ 0x1403D8410 (ExpCommitWakeFastResource.c)
 *     KeAbPreWakeupThread @ 0x1403D8DF0 (KeAbPreWakeupThread.c)
 *     ExpWakePushLock @ 0x14040DE50 (ExpWakePushLock.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     KiAbThreadInsertList @ 0x14024E470 (KiAbThreadInsertList.c)
 *     KiAbSetMinimumThreadPriority @ 0x14024E520 (KiAbSetMinimumThreadPriority.c)
 *     KiAbIoBoostOwners @ 0x14024EA60 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x14024F2F0 (KiAbCpuBoostOwners.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140250050 (KiAbEntryGetLockedHeadEntry.c)
 *     EtwTraceAutoBoostProcessLockEntry @ 0x140250910 (EtwTraceAutoBoostProcessLockEntry.c)
 *     KiAbProcessThreadLocks @ 0x1402509C0 (KiAbProcessThreadLocks.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x140251A80 (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x140251B10 (KiAbOwnerComputeCpuPriorityKey.c)
 *     KiAbQueueAutoBoostDpc @ 0x140253AF0 (KiAbQueueAutoBoostDpc.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14025E950 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     PsBoostThreadOutstandingIoQoS @ 0x1402788E0 (PsBoostThreadOutstandingIoQoS.c)
 *     IoBoostThreadIoPriority @ 0x140278D90 (IoBoostThreadIoPriority.c)
 *     KiReadyDeferredReadyList @ 0x140299320 (KiReadyDeferredReadyList.c)
 *     RtlRbInsertNodeEx @ 0x1402BDA80 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x1402BE130 (RtlRbRemoveNode.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x1402BEEB0 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x1402BF020 (KiAbEntryUpdateWaiterTreePosition.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402C4AD0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402DFAA0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     KiProcessDeferredReadyList @ 0x14031D3D0 (KiProcessDeferredReadyList.c)
 *     KxReleaseQueuedSpinLock @ 0x140321BB0 (KxReleaseQueuedSpinLock.c)
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 *     KiAbThreadRemoveBoostsSlow @ 0x140340980 (KiAbThreadRemoveBoostsSlow.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x140418610 (KiAbTryIncrementIoWaiterCounts.c)
 *     EtwTraceAutoBoostConvertWaiterToOwner @ 0x140478F1C (EtwTraceAutoBoostConvertWaiterToOwner.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall KiAbConvertWaiterToOwnerEntry(ULONG_PTR BugCheckParameter1, __int64 a2, int a3)
{
  __int64 v3; // r12
  unsigned int v6; // edi
  __int64 v7; // r12
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  _DWORD *v10; // rsi
  __int64 v11; // r15
  __int64 v12; // r8
  __int64 CurrentIrql; // rax
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  signed __int32 v16; // edx
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  int v19; // edx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  _QWORD *v22; // rbx
  volatile __int64 *v23; // rcx
  _QWORD *v24; // rdx
  int v25; // r8d
  char v26; // al
  unsigned __int64 *v27; // rbx
  char v28; // r9
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  int v31; // ecx
  bool v32; // r8
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
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
  v3 = *(_QWORD *)a2;
  v81 = 0LL;
  v6 = 0;
  v73 = 0LL;
  v72 = 0LL;
  v7 = v3 & 0x7FFFFFFFFFFFFFFCLL;
  v76 = v7;
  v80 = 0LL;
  if ( v7 && *(char *)(a2 + 8) >= 0 )
  {
    v7 |= 0x8000000000000000uLL;
    v76 = v7;
  }
  v8 = *(_QWORD *)a2 & 0x7FFFFFFFFFFFFFFCLL;
  if ( *(char *)(a2 + 8) < 0 )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(a2 - 88LL * (*(_BYTE *)(a2 + 8) & 0x3F) - 16) + 544LL);
    v11 = *(_QWORD *)(v12 + 88) + 24LL * ((unsigned int)(v8 >> 4) % *(_DWORD *)(v12 + 96));
    v10 = (_DWORD *)(v11 + 16);
  }
  else
  {
    v9 = ((v8 >> 4) & 0x3FF) << 6;
    v10 = (_DWORD *)((char *)&KiAbTreeArray + v9 + 16);
    v11 = (__int64)&KiAbTreeArray + v9;
  }
  CurrentIrql = KeGetCurrentIrql();
  v77 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags((unsigned __int8)CurrentIrql, 2LL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(v10);
    v15 = *v10 & 0x7FFFFFFF;
    v14 = _InterlockedCompareExchange(v10, v15 + 1, v15);
    if ( v15 != v14 )
    {
      while ( v14 >= 0 )
      {
        v16 = v14;
        v14 = _InterlockedCompareExchange(v10, v14 + 1, v14);
        if ( v14 == v16 )
          goto LABEL_17;
      }
      ExpWaitForSpinLockSharedAndAcquire(v10, 0xFFu);
    }
  }
  else
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v10, 0xFFu);
  }
LABEL_17:
  v17 = *(_QWORD *)(v11 + 8);
  v18 = *(_QWORD *)v11;
  if ( (v17 & 1) != 0 )
  {
    if ( !v18 )
    {
LABEL_31:
      *(_BYTE *)(a2 + 9) = 0;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      {
        _InterlockedAnd(v10, 0xBFFFFFFF);
        _InterlockedDecrement(v10);
      }
      else
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v10, retaddr);
      }
      goto LABEL_147;
    }
    v18 ^= v11;
  }
  v19 = v17 & 1;
  if ( !v18 )
    goto LABEL_31;
  do
  {
    v20 = *(_QWORD *)(v18 - 16) & 0x7FFFFFFFFFFFFFFCLL;
    if ( v20 >= v8 )
    {
      if ( v20 <= v8 )
        break;
      v21 = *(_QWORD *)v18;
    }
    else
    {
      v21 = *(_QWORD *)(v18 + 8);
    }
    if ( v19 && v21 )
      v18 ^= v21;
    else
      v18 = v21;
  }
  while ( v18 );
  if ( !v18 )
    goto LABEL_31;
  v22 = (_QWORD *)(v18 - 16);
  *(_QWORD *)&v80 = 0LL;
  v23 = (volatile __int64 *)(v18 - 16 + 72);
  *((_QWORD *)&v80 + 1) = v23;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v24 = (_QWORD *)_InterlockedExchange64(v23, (__int64)&v80);
    if ( v24 )
      KxWaitForLockOwnerShip((__int64)&v80, v24);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)&v80, v23);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _InterlockedAnd(v10, 0xBFFFFFFF);
    _InterlockedDecrement(v10);
  }
  else
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v10, retaddr);
  }
  if ( *(__int64 *)a2 >= 0 )
  {
    *(_BYTE *)(a2 + 9) = 0;
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&v80, (__int64)v24);
    v6 = 1;
    goto LABEL_147;
  }
  _InterlockedAdd16((volatile signed __int16 *)(BugCheckParameter1 + 792), 0xFFu);
  if ( (*(_BYTE *)(a2 + 11) & 2) != 0 )
  {
    --*((_BYTE *)v22 + 84);
    *(_BYTE *)(a2 + 11) &= ~2u;
  }
  if ( (*(_BYTE *)(a2 + 11) & 4) != 0 )
  {
    *((_DWORD *)v22 + 21) ^= ((unsigned __int16)*((_DWORD *)v22 + 21) ^ (unsigned __int16)(((unsigned __int16)(*((_DWORD *)v22 + 21) >> 8)
                                                                                          - 1) << 8)) & 0x7F00;
    *(_BYTE *)(a2 + 11) &= ~4u;
  }
  if ( v22 == (_QWORD *)a2 )
  {
    *(_BYTE *)(a2 + 9) = 0;
    v6 = 2;
    goto LABEL_72;
  }
  RtlRbRemoveNode(v22 + 7, (unsigned __int64 *)(a2 + 16));
  v25 = *(_DWORD *)(a2 + 80);
  *(_BYTE *)(a2 + 9) = 0;
  *(_DWORD *)(a2 + 80) = 0;
  if ( v25 )
    KiAbThreadRemoveBoostsSlow(BugCheckParameter1);
  v26 = KiAbOwnerComputeCpuPriorityKey(a2);
  v27 = v22 + 5;
  *(_BYTE *)(a2 + 40) = v26;
  v28 = v26;
  v29 = v27[1];
  v30 = *v27;
  if ( (v29 & 1) == 0 )
    goto LABEL_57;
  if ( v30 )
  {
    v30 ^= (unsigned __int64)v27;
LABEL_57:
    v31 = v29 & 1;
    v32 = 0;
    if ( v30 )
    {
      while ( 1 )
      {
        while ( *(char *)(v30 + 24) > v28 )
        {
          v33 = *(_QWORD *)v30;
          if ( v31 )
          {
            if ( !v33 )
              goto LABEL_71;
            v33 ^= v30;
          }
          if ( !v33 )
            goto LABEL_71;
          v30 = v33;
        }
        v34 = *(_QWORD *)(v30 + 8);
        if ( v31 )
        {
          if ( !v34 )
            break;
          v34 ^= v30;
        }
        if ( !v34 )
          break;
        v30 = v34;
      }
      v32 = 1;
    }
    goto LABEL_71;
  }
  v32 = 0;
LABEL_71:
  RtlRbInsertNodeEx((__int64 *)v27, v30, v32, a2 + 16);
LABEL_72:
  *(_BYTE *)(a2 + 8) &= ~0x40u;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v80, (__int64)v24);
  CurrentPrcb = KeGetCurrentPrcb();
  v79 = CurrentPrcb;
  if ( !KiAbpInlinePreWakeupPriorityBoosting )
  {
    if ( (unsigned int)KiAbThreadInsertList(
                         BugCheckParameter1,
                         &CurrentPrcb->AbSelfIoBoostsList.Next,
                         (_QWORD *)(BugCheckParameter1 + 816)) )
    {
      KiAbQueueAutoBoostDpc((struct _KDPC *)CurrentPrcb);
      v6 |= 8u;
    }
    goto LABEL_143;
  }
  p_AbSelfIoBoostsList = &CurrentPrcb->AbSelfIoBoostsList;
  v83 = 0LL;
  v37 = *(_QWORD *)a2 & 0x7FFFFFFFFFFFFFFCLL;
  v75 = &CurrentPrcb->AbSelfIoBoostsList;
  v78 = v37;
  v82 = 0LL;
  v88 = 0;
  if ( v37 && *(char *)(a2 + 8) >= 0 )
    v78 = v37 | 0x8000000000000000uLL;
  LockedHeadEntry = KiAbEntryGetLockedHeadEntry(a2, 0LL, (__int64)&v82);
  v39 = (__int64)LockedHeadEntry;
  if ( LockedHeadEntry )
  {
    if ( !*(_BYTE *)(a2 + 9) )
    {
      v40 = 384;
      if ( (_QWORD *)a2 != LockedHeadEntry )
      {
        KiAbEntryUpdateOwnerTreePosition(a2, (__int64)LockedHeadEntry);
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
      if ( (unsigned int)KiAbSetMinimumThreadPriority(a2, (char *)&v86, (__int64)&v72, &v73, p_AbSelfIoBoostsList, &v88)
        && a2 != v39 )
      {
        KiAbEntryUpdateOwnerTreePosition(a2, v39);
        v40 |= 0x20u;
      }
LABEL_123:
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&v82, v53);
      if ( v88 )
      {
        v62 = *(KSPIN_LOCK **)(a2 - 88LL * (*(_BYTE *)(a2 + 8) & 0x3F) - 16);
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
    if ( (_QWORD *)a2 != LockedHeadEntry )
    {
      KiAbEntryUpdateWaiterTreePosition(a2, (__int64)LockedHeadEntry);
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
    KiAbTryIncrementIoWaiterCounts(a2, v39);
    CpuPriorityKey = KiAbEntryGetCpuPriorityKey(a2);
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
  if ( (WORD2(xmmword_140FC5B10) & 0x1000) != 0 )
    EtwTraceAutoBoostProcessLockEntry(*(_QWORD *)(a2 - 88LL * (*(_BYTE *)(a2 + 8) & 0x3F) - 16), v78, v40);
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
  v7 = v76;
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
  if ( (WORD2(xmmword_140FC5B10) & 0x1000) != 0 )
    return EtwTraceAutoBoostConvertWaiterToOwner(BugCheckParameter1, v7, v6);
  return result;
}
