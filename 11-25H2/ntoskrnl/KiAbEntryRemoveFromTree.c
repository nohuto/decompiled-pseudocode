/*
 * XREFs of KiAbEntryRemoveFromTree @ 0x14029D4A0
 * Callers:
 *     ExpAcquireFastResourceExclusiveSlow @ 0x1402937F0 (ExpAcquireFastResourceExclusiveSlow.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x140294850 (ExpAcquireFastResourceSharedSlow.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14029BA20 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeAbPreWait @ 0x14029D460 (KeAbPreWait.c)
 *     KiAbCrossThreadRelease @ 0x140407818 (KiAbCrossThreadRelease.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402120E0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402121B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140212BC0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     KeWakeAddressAll @ 0x14028A700 (KeWakeAddressAll.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     RtlRbRemoveNode @ 0x1402E2A20 (RtlRbRemoveNode.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402FD480 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FF4DC (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140323E4C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiHaltOnAddressWakeEntireList @ 0x1404F668C (KiHaltOnAddressWakeEntireList.c)
 */

__int64 __fastcall KiAbEntryRemoveFromTree(char *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rdx
  char v7; // cl
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r14
  int *v11; // r12
  unsigned __int8 CurrentIrql; // al
  int v13; // r13d
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  __int64 v16; // rcx
  unsigned __int64 v17; // rsi
  int v18; // ecx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  char *v21; // r14
  __int64 v22; // rdx
  _RTL_RB_TREE *v23; // rcx
  unsigned __int64 Root; // rbx
  __int64 v25; // rsi
  __int64 v26; // r9
  char *v27; // rdx
  __int64 v28; // rcx
  char **v29; // rax
  __int64 v30; // rdx
  int v31; // ecx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  unsigned __int8 v35; // cl
  bool v36; // bl
  __int64 v37; // r8
  __int64 v38; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  __int64 result; // rax
  _RTL_RB_TREE *v42; // rcx
  __int64 Next; // rax
  unsigned __int64 *volatile Lock; // rdx
  unsigned int v45; // esi
  int v46; // edx
  __int64 v47; // rcx
  unsigned __int64 v48; // rax
  __int64 v49; // rcx
  signed __int32 v50; // eax
  signed __int32 v51; // ett
  signed __int32 v52[8]; // [rsp+0h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  __int128 v54; // [rsp+38h] [rbp-40h] BYREF
  __int64 v55; // [rsp+48h] [rbp-30h]
  void *retaddr; // [rsp+88h] [rbp+10h]
  unsigned __int64 Tree; // [rsp+98h] [rbp+20h]
  unsigned __int8 v58; // [rsp+A0h] [rbp+28h]

  v4 = *(_QWORD *)a1;
  v5 = 0x140000000uLL;
  v7 = a1[8];
  v55 = 0LL;
  v8 = v4 & 0x7FFFFFFFFFFFFFFCLL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v54 = 0LL;
  if ( v7 < 0 )
  {
    a3 = *(_QWORD *)(*(_QWORD *)&a1[-88 * (v7 & 0x3F) - 16] + 544LL);
    v5 = (unsigned int)(v8 >> 4) % *(_DWORD *)(a3 + 96);
    v10 = *(_QWORD *)(a3 + 88) + 24 * v5;
    v11 = (int *)(v10 + 16);
  }
  else
  {
    v9 = ((v8 >> 4) & 0x3FF) << 6;
    v10 = (__int64)&KiAbTreeArray + v9;
    v11 = (int *)((char *)&unk_140E16DD0 + v9);
  }
  Tree = v10;
  CurrentIrql = KeGetCurrentIrql();
  v58 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  v13 = a1[11] & 1;
  if ( (a1[11] & 1) != 0 )
    goto LABEL_77;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(v11);
    v14 = *v11 & 0x7FFFFFFF;
    do
    {
      v15 = v14;
      v14 = _InterlockedCompareExchange(v11, v14 + 1, v14);
      if ( v15 == v14 )
        goto LABEL_9;
    }
    while ( v14 >= 0 );
    LOBYTE(v5) = -1;
    ExpWaitForSpinLockSharedAndAcquire(v11, v5);
  }
  else
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v11, 0xFFu);
  }
  while ( 1 )
  {
LABEL_9:
    v16 = *(_QWORD *)(v10 + 8);
    v17 = *(_QWORD *)v10;
    if ( (v16 & 1) != 0 )
    {
      if ( !v17 )
        goto LABEL_17;
      v17 ^= v10;
    }
    v18 = v16 & 1;
    while ( v17 )
    {
      v19 = *(_QWORD *)(v17 - 16) & 0x7FFFFFFFFFFFFFFCLL;
      if ( v19 < v8 )
      {
        v20 = *(_QWORD *)(v17 + 8);
        if ( v18 && v20 )
          goto LABEL_141;
      }
      else
      {
        if ( v19 <= v8 )
          break;
        v20 = *(_QWORD *)v17;
        if ( v18 && v20 )
        {
LABEL_141:
          v17 ^= v20;
          continue;
        }
      }
      v17 = v20;
    }
LABEL_17:
    v21 = (char *)(v17 - 16);
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v17 - 16 + 72);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v22 = _InterlockedExchange64((volatile __int64 *)(v17 - 16 + 72), (__int64)&LockHandle);
      if ( v22 )
        KxWaitForLockOwnerShip(&LockHandle, v22, a3, a4);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v17 - 16 + 72);
    }
    if ( v21 != a1 )
    {
      if ( v13 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          *v11 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v11, retaddr);
      }
      else if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      {
        _InterlockedAnd(v11, 0xBFFFFFFF);
        _InterlockedDecrement(v11);
      }
      else
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v11, retaddr, a3);
      }
      a1[7] &= ~0x80u;
      if ( a1[9] )
      {
        v42 = (_RTL_RB_TREE *)(v21 + 56);
        if ( (a1[11] & 2) != 0 )
        {
          --v21[84];
          a1[11] &= ~2u;
        }
        if ( (a1[11] & 4) != 0 )
        {
          *((_DWORD *)v21 + 21) ^= ((unsigned __int16)*((_DWORD *)v21 + 21) ^ (unsigned __int16)(((unsigned __int16)(*((_DWORD *)v21 + 21) >> 8)
                                                                                                - 1) << 8)) & 0x7F00;
          a1[11] &= ~4u;
        }
      }
      else
      {
        v42 = (_RTL_RB_TREE *)(v21 + 40);
      }
      RtlRbRemoveNode(v42, (PRTL_BALANCED_NODE)(a1 + 16));
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
        goto LABEL_123;
      _m_prefetchw(&LockHandle);
      Next = (__int64)LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
          goto LABEL_62;
        Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      Lock = LockHandle.LockQueue.Lock;
      if ( (((unsigned __int8)Lock ^ (unsigned __int8)_InterlockedExchange64(
                                                        (volatile __int64 *)(Next + 8),
                                                        (__int64)LockHandle.LockQueue.Lock)) & 4) != 0 )
        KeWakeAddressAll(Next + 8, (__int64)Lock);
      goto LABEL_62;
    }
    if ( v13 )
      break;
    ExReleaseSpinLockSharedFromDpcLevel(v11);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v10 = Tree;
    v13 = 1;
LABEL_77:
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v45 = 0;
      if ( _interlockedbittestandset(v11, 0x1Fu) )
        v45 = ExpWaitForSpinLockExclusiveAndAcquire(v11, 0xFFu);
      v46 = *v11;
      v47 = (unsigned int)*v11;
      LODWORD(v47) = v47 & 0xBFFFFFFF;
      if ( (_DWORD)v47 != 0x80000000 )
      {
        do
        {
          if ( (v46 & 0x40000000) == 0 )
            _InterlockedOr(v11, 0x40000000u);
          if ( (++v45 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v47) )
          {
            HvlNotifyLongSpinWait(v45);
          }
          else
          {
            _mm_pause();
          }
          v46 = *v11;
        }
        while ( (*v11 & 0xBFFFFFFF) != 0x80000000 );
      }
    }
    else
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v11, 0xFFu);
    }
  }
  v23 = (_RTL_RB_TREE *)(v21 + 56);
  if ( !*((_QWORD *)v21 + 7) && (v23 = (_RTL_RB_TREE *)(v21 + 40), !*((_QWORD *)v21 + 5)) || !v23 )
  {
    RtlRbRemoveNode((PRTL_RB_TREE)Tree, (PRTL_BALANCED_NODE)v17);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *v11 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v11, retaddr);
    if ( (v21[11] & 2) != 0 )
    {
      --v21[84];
      v21[11] &= ~2u;
    }
    if ( (v21[11] & 4) != 0 )
    {
      *((_DWORD *)v21 + 21) ^= ((unsigned __int16)*((_DWORD *)v21 + 21) ^ (unsigned __int16)(((unsigned __int16)(*((_DWORD *)v21 + 21) >> 8)
                                                                                            - 1) << 8)) & 0x7F00;
      v21[11] &= ~4u;
    }
    goto LABEL_54;
  }
  Root = (unsigned __int64)v23->Root;
  v25 = (__int64)&v23->Root[-1].Children[1];
  RtlRbRemoveNode(v23, v23->Root);
  v27 = v21 + 16;
  *(_OWORD *)Root = *((_OWORD *)v21 + 1);
  *(_QWORD *)(Root + 16) = *((_QWORD *)v21 + 4);
  if ( *(_QWORD *)Root )
  {
    *(_QWORD *)(*(_QWORD *)Root + 16LL) = Root | *(_DWORD *)(*(_QWORD *)Root + 16LL) & 3;
  }
  else
  {
    v48 = *(_QWORD *)(Tree + 8);
    if ( (v48 & 1) != 0 )
    {
      if ( v48 == 1 )
        v49 = 0LL;
      else
        v49 = v48 ^ (Tree | 1);
    }
    else
    {
      v49 = *(_QWORD *)(Tree + 8);
    }
    if ( (char *)v49 == v27 )
    {
      if ( (v48 & 1) != 0 )
      {
        *(_QWORD *)(Tree + 8) = Tree ^ Root;
        *(_BYTE *)(Tree + 8) = Tree ^ Root | 1;
      }
      else
      {
        *(_QWORD *)(Tree + 8) = Root;
      }
    }
  }
  v28 = *(_QWORD *)(Root + 8);
  if ( v28 )
    *(_QWORD *)(v28 + 16) = Root | *(_DWORD *)(v28 + 16) & 3;
  v29 = (char **)(*(_QWORD *)(Root + 16) & 0xFFFFFFFFFFFFFFFCuLL);
  if ( v29 )
  {
    if ( *v29 == v27 )
      *v29 = (char *)Root;
    else
      v29[1] = (char *)Root;
  }
  else
  {
    if ( (*(_BYTE *)(Tree + 8) & 1) != 0 )
      Root ^= Tree;
    *(_QWORD *)Tree = Root;
  }
  *(_QWORD *)&v54 = 0LL;
  *((_QWORD *)&v54 + 1) = v25 + 72;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v30 = _InterlockedExchange64((volatile __int64 *)(v25 + 72), (__int64)&v54);
    if ( v30 )
      KxWaitForLockOwnerShip(&v54, v30, Tree, v26);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(&v54, v25 + 72);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    *v11 = 0;
  else
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v11, retaddr);
  *(_OWORD *)(v25 + 40) = *(_OWORD *)(v21 + 40);
  *(_OWORD *)(v25 + 56) = *(_OWORD *)(v21 + 56);
  *(_BYTE *)(v25 + 84) = v21[84];
  v31 = *(_DWORD *)(v25 + 84) ^ (*((_DWORD *)v21 + 21) ^ *(_DWORD *)(v25 + 84)) & 0x7F00;
  *(_DWORD *)(v25 + 84) = v31;
  if ( (v21[11] & 2) != 0 )
  {
    *(_BYTE *)(v25 + 84) = v31 - 1;
    v21[11] &= ~2u;
  }
  if ( (v21[11] & 4) != 0 )
  {
    *(_DWORD *)(v25 + 84) ^= ((unsigned __int16)*(_DWORD *)(v25 + 84) ^ (unsigned __int16)(((unsigned __int16)(*(_DWORD *)(v25 + 84) >> 8)
                                                                                          - 1) << 8)) & 0x7F00;
    v21[11] &= ~4u;
  }
  *(_BYTE *)(v25 + 11) |= 1u;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(&v54);
    v32 = v54;
    if ( !(_QWORD)v54 )
    {
      if ( (__int128 *)_InterlockedCompareExchange64(*((volatile signed __int64 **)&v54 + 1), 0LL, (signed __int64)&v54) == &v54 )
        goto LABEL_54;
      v32 = KxWaitForLockChainValid((__int64 *)&v54);
    }
    *(_QWORD *)&v54 = 0LL;
    v33 = *((_QWORD *)&v54 + 1);
    if ( (((unsigned __int8)v33 ^ (unsigned __int8)_InterlockedExchange64(
                                                     (volatile __int64 *)(v32 + 8),
                                                     *((__int64 *)&v54 + 1))) & 4) != 0 )
      KeWakeAddressAll(v32 + 8, v33);
    goto LABEL_54;
  }
  KiReleaseQueuedSpinLockInstrumented(&v54, retaddr);
LABEL_54:
  v21[7] &= ~0x80u;
  v21[11] &= ~1u;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
  {
LABEL_123:
    KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    goto LABEL_62;
  }
  _m_prefetchw(&LockHandle);
  v34 = (__int64)LockHandle.LockQueue.Next;
  if ( !LockHandle.LockQueue.Next )
  {
    if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                         (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                         0LL,
                                         (signed __int64)&LockHandle) == &LockHandle )
      goto LABEL_62;
    v34 = KxWaitForLockChainValid((__int64 *)&LockHandle);
  }
  LockHandle.LockQueue.Next = 0LL;
  v35 = (unsigned __int8)LockHandle.LockQueue.Lock;
  if ( ((v35 ^ (unsigned __int8)_InterlockedExchange64(
                                  (volatile __int64 *)(v34 + 8),
                                  (__int64)LockHandle.LockQueue.Lock)) & 4) != 0 )
  {
    _InterlockedOr(v52, 0);
    v36 = KeDisableInterrupts();
    KiHaltOnAddressWakeEntireList(v38, _InterlockedExchange64(&KiHaltOnAddressHashTable[v37], 0LL));
    if ( v36 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v50 = *SchedulerAssist;
        do
        {
          v51 = v50;
          v50 = _InterlockedCompareExchange(SchedulerAssist, v50 & 0xFFDFFFFF, v50);
        }
        while ( v51 != v50 );
        if ( (v50 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
    }
  }
LABEL_62:
  _InterlockedDecrement8((volatile signed __int8 *)(*(_QWORD *)&a1[-88 * (a1[8] & 0x3F) - 16] - (a1[9] != 0) + 793LL));
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v58);
  result = v58;
  __writecr8(v58);
  return result;
}
