/*
 * XREFs of ExpAcquireFastResourceSharedSlow @ 0x1403209F0
 * Callers:
 *     ExAcquireFastResourceShared @ 0x1403206D0 (ExAcquireFastResourceShared.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x1403BC9C0 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceWithFlags @ 0x140654880 (ExAcquireFastResourceWithFlags.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KeAbPostReleaseEx @ 0x14028D2F0 (KeAbPostReleaseEx.c)
 *     KiAbEntryRemoveFromTree @ 0x14028D4F0 (KiAbEntryRemoveFromTree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402CA820 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExpWaitForFastResource @ 0x1403BD4B0 (ExpWaitForFastResource.c)
 *     KeAbMarkCrossThreadReleasable @ 0x1403BD5FC (KeAbMarkCrossThreadReleasable.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall ExpAcquireFastResourceSharedSlow(
        struct _KPRCB *BugCheckParameter2,
        __int64 a2,
        signed __int32 *SchedulerAssist,
        unsigned __int64 a4,
        unsigned int a5)
{
  unsigned __int8 CurrentIrql; // r12
  unsigned __int8 v6; // si
  unsigned __int64 v7; // r10
  char v8; // r9
  char *v9; // rdi
  struct _KPRCB *v11; // rbx
  char v12; // r11
  __int64 v13; // r14
  __int64 v14; // r9
  struct _KPRCB *p_CpuType; // rdx
  unsigned __int8 v16; // si
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v18; // rdx
  signed __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  signed __int64 v22; // rcx
  signed __int64 v23; // rtt
  unsigned __int64 v24; // rdx
  _KTHREAD *CurrentThread; // rax
  char v26; // r12
  int v27; // esi
  int v28; // r15d
  int v29; // r12d
  _QWORD *v30; // rax
  struct _KPRCB *v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  struct _LIST_ENTRY *Flink; // rcx
  signed __int32 *v35; // r8
  unsigned __int8 v36; // r14
  char v37; // r15
  char v38; // r13
  signed __int32 *v39; // r8
  signed __int32 v41; // eax
  signed __int32 v42; // ett
  signed __int32 v43; // eax
  signed __int32 v44; // ett
  signed __int32 v45; // eax
  signed __int32 v46; // ett
  char v47; // r12
  int v48; // r15d
  int v49; // esi
  int v50; // r12d
  char v51; // al
  _QWORD *v52; // rax
  signed __int32 *v53; // r8
  signed __int32 *v54; // r8
  signed __int32 v55; // eax
  signed __int32 v56; // ett
  signed __int32 v57; // eax
  signed __int32 v58; // ett
  _QWORD *v59; // rax
  signed __int32 v60; // eax
  signed __int32 v61; // ett
  _QWORD *v62; // rax
  __int64 v63; // rdx
  volatile signed __int64 *v64; // r14
  _QWORD *v65; // rax
  __int64 v66; // rcx
  char v67; // [rsp+20h] [rbp-60h]
  unsigned __int8 v68; // [rsp+28h] [rbp-58h]
  __int128 v69; // [rsp+30h] [rbp-50h] BYREF
  __int64 v70; // [rsp+40h] [rbp-40h]
  __int128 v71; // [rsp+48h] [rbp-38h] BYREF
  __int128 v72; // [rsp+58h] [rbp-28h]
  __int128 v73; // [rsp+68h] [rbp-18h] BYREF
  char *v74; // [rsp+78h] [rbp-8h]
  __int64 retaddr; // [rsp+B8h] [rbp+38h]
  char v76; // [rsp+C0h] [rbp+40h]

  v70 = 0LL;
  CurrentIrql = 0;
  v74 = 0LL;
  v6 = 0;
  v7 = a4;
  v68 = 0;
  v8 = 0;
  v76 = 0;
  v9 = (char *)SchedulerAssist;
  v11 = BugCheckParameter2;
  v69 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  _disable();
  v12 = 1;
  v13 = 0LL;
  v67 = 1;
  if ( (*(_QWORD *)&BugCheckParameter2->MxCsr & 1) != 0 && BugCheckParameter2->HalReserved[1] == v7 )
  {
    p_CpuType = (struct _KPRCB *)&BugCheckParameter2->CpuType;
  }
  else
  {
    SchedulerAssist = (signed __int32 *)(v7 + 1720);
    v14 = 0LL;
    BugCheckParameter2 = *(struct _KPRCB **)(v7 + 1720);
    p_CpuType = 0LL;
    while ( BugCheckParameter2 != (struct _KPRCB *)SchedulerAssist )
    {
      if ( (BugCheckParameter2->Number & 0x200) == 0 && (struct _KPRCB *)BugCheckParameter2->IdleThread == v11 )
      {
        p_CpuType = BugCheckParameter2;
        break;
      }
      BugCheckParameter2 = *(struct _KPRCB **)&BugCheckParameter2->MxCsr;
      if ( (unsigned __int64)++v14 > 6 )
        goto LABEL_131;
    }
    v8 = 0;
  }
  if ( p_CpuType == (struct _KPRCB *)1 )
  {
LABEL_131:
    CurrentIrql = KeGetCurrentIrql();
    v68 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    BugCheckParameter2 = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)BugCheckParameter2->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v60 = *SchedulerAssist;
      do
      {
        v61 = v60;
        v60 = _InterlockedCompareExchange(SchedulerAssist, v60 & 0xFFDFFFFF, v60);
      }
      while ( v61 != v60 );
      if ( (v60 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)BugCheckParameter2);
    }
    _enable();
    v8 = 1;
    v7 = a4;
    v12 = 0;
    v76 = 1;
    v67 = 0;
    if ( (*(_QWORD *)&v11->MxCsr & 1) != 0 && v11->HalReserved[1] == a4 )
    {
      p_CpuType = (struct _KPRCB *)&v11->CpuType;
    }
    else
    {
      SchedulerAssist = (signed __int32 *)(a4 + 1720);
      p_CpuType = 0LL;
      for ( BugCheckParameter2 = *(struct _KPRCB **)(a4 + 1720);
            BugCheckParameter2 != (struct _KPRCB *)SchedulerAssist;
            BugCheckParameter2 = *(struct _KPRCB **)&BugCheckParameter2->MxCsr )
      {
        if ( (BugCheckParameter2->Number & 0x200) == 0 && (struct _KPRCB *)BugCheckParameter2->IdleThread == v11 )
        {
          p_CpuType = BugCheckParameter2;
          break;
        }
      }
    }
  }
  if ( p_CpuType && (p_CpuType->Number & 0x400) == 0 )
  {
    if ( p_CpuType == (struct _KPRCB *)&v11->CpuType )
    {
      ++*(_DWORD *)&p_CpuType->NestingLevel;
LABEL_122:
      if ( v12 )
      {
        BugCheckParameter2 = KeGetCurrentPrcb();
        v54 = (signed __int32 *)BugCheckParameter2->SchedulerAssist;
        if ( v54 )
        {
          _m_prefetchw(v54);
          v57 = *v54;
          do
          {
            v58 = v57;
            v57 = _InterlockedCompareExchange(v54, v57 & 0xFFDFFFFF, v57);
          }
          while ( v58 != v57 );
          if ( (v57 & 0x200000) != 0 )
          {
            KiRemoveSystemWorkPriorityKick((__int64)BugCheckParameter2);
            v8 = v76;
          }
        }
        _enable();
        v38 = 0;
      }
      else
      {
        v38 = v67;
      }
      if ( v8 )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
        v76 = 0;
      }
      if ( v9 )
      {
        KeAbPostReleaseEx((ULONG_PTR)v11, (ULONG_PTR)v9);
        v9 = 0LL;
      }
      v36 = v68;
      v6 = 1;
      v37 = v76;
      goto LABEL_75;
    }
    _InterlockedAdd64((volatile signed __int64 *)v11, 4uLL);
    if ( (char *)a2 != &v11->CpuType )
      *(_QWORD *)(a2 + 24) = v11;
    v59 = (_QWORD *)(v7 + 1720);
    *(_QWORD *)(a2 + 16) = v7;
    *(_DWORD *)(a2 + 32) = 1;
    BugCheckParameter2 = *(struct _KPRCB **)(v7 + 1720);
    if ( BugCheckParameter2->CurrentThread == (_KTHREAD *)(v7 + 1720) )
    {
      *(_QWORD *)a2 = BugCheckParameter2;
      *(_QWORD *)(a2 + 8) = v59;
      BugCheckParameter2->CurrentThread = (_KTHREAD *)a2;
      *v59 = a2;
      goto LABEL_122;
    }
LABEL_48:
    __fastfail(3u);
  }
  if ( (a5 & 8) == 0 )
  {
LABEL_116:
    v38 = v67;
    v36 = v68;
    v37 = v76;
    goto LABEL_75;
  }
  if ( v12 )
  {
    v16 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v16, 2LL);
    CurrentPrcb = KeGetCurrentPrcb();
    v68 = v16;
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v43 = *SchedulerAssist;
      do
      {
        v44 = v43;
        v43 = _InterlockedCompareExchange(SchedulerAssist, v43 & 0xFFDFFFFF, v43);
      }
      while ( v44 != v43 );
      if ( (v43 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
    v76 = 1;
    v67 = 0;
  }
  *(_QWORD *)&v69 = 0LL;
  *((_QWORD *)&v69 + 1) = &v11->PrcbLock;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v18 = _InterlockedExchange64((volatile __int64 *)&v11->PrcbLock, (__int64)&v69);
    if ( v18 )
      KxWaitForLockOwnerShip(&v69, v18);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(&v69, &v11->PrcbLock);
  }
  _m_prefetchw(v11);
  v19 = *(_QWORD *)&v11->MxCsr;
  do
  {
    LOBYTE(SchedulerAssist) = 0;
    if ( v11->NextThread || LODWORD(v11->PriorityState) )
      v20 = v19 | 2;
    else
      v20 = v19 & 0xFFFFFFFFFFFFFFFDuLL;
    v21 = v20;
    if ( ((v20 & 2) != 0 || (a5 & 2) == 0) && (a5 & 4) == 0 || (v20 & 1) != 0 )
    {
      v22 = v20 | 2;
    }
    else
    {
      LOBYTE(SchedulerAssist) = 1;
      v22 = v20 ^ (v20 ^ (v20 + 4)) & 0xFFFFFFFFFFFFFFFCuLL;
    }
    if ( v22 == v19 )
      break;
    v23 = v19;
    v19 = _InterlockedCompareExchange64((volatile signed __int64 *)v11, v22, v19);
  }
  while ( v23 != v19 );
  if ( (_BYTE)SchedulerAssist )
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&v69, v21);
    v47 = 1;
    if ( (a5 & 0x10) != 0 )
      v47 = 13;
    v48 = v47 & 2;
    v49 = v47 & 4;
    v50 = v47 & 8;
    if ( (char *)a2 != &v11->CpuType )
      *(_QWORD *)(a2 + 24) = v11;
    *(_DWORD *)(a2 + 32) = 1;
    *(_QWORD *)(a2 + 16) = a4 | (v49 != 0);
    if ( v9 )
    {
      v51 = v9[8];
      v9[10] = 1;
      *(_BYTE *)(a2 + 36) = (2 * (v51 & 0x3F)) | 1;
    }
    if ( v48 )
      _disable();
    if ( v49 )
    {
      KxAcquireSpinLock((PKSPIN_LOCK)(a4 + 1736));
      v62 = (_QWORD *)(a4 + 1744);
      v63 = *(_QWORD *)(a4 + 1744);
      if ( *(_QWORD *)(v63 + 8) != a4 + 1744 )
        goto LABEL_48;
      *(_QWORD *)a2 = v63;
      *(_QWORD *)(a2 + 8) = v62;
      *(_QWORD *)(v63 + 8) = a2;
      *v62 = a2;
      KxReleaseSpinLock((volatile signed __int64 *)(a4 + 1736));
    }
    else
    {
      v52 = (_QWORD *)(a4 + 1720);
      BugCheckParameter2 = *(struct _KPRCB **)(a4 + 1720);
      if ( BugCheckParameter2->CurrentThread != (_KTHREAD *)(a4 + 1720) )
        goto LABEL_48;
      *(_QWORD *)a2 = BugCheckParameter2;
      *(_QWORD *)(a2 + 8) = v52;
      BugCheckParameter2->CurrentThread = (_KTHREAD *)a2;
      *v52 = a2;
    }
    if ( v48 )
    {
      BugCheckParameter2 = KeGetCurrentPrcb();
      v53 = (signed __int32 *)BugCheckParameter2->SchedulerAssist;
      if ( v53 )
      {
        _m_prefetchw(v53);
        v55 = *v53;
        do
        {
          v56 = v55;
          v55 = _InterlockedCompareExchange(v53, v55 & 0xFFDFFFFF, v55);
        }
        while ( v56 != v55 );
        if ( (v55 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)BugCheckParameter2);
      }
      _enable();
    }
    if ( v49 )
    {
      if ( v50 && v9 )
        KeAbMarkCrossThreadReleasable(BugCheckParameter2, v9);
      ObfReferenceObjectWithTag((PVOID)a4, 0x746C6644u);
    }
    v9 = 0LL;
    v6 = 1;
    goto LABEL_116;
  }
  ++LODWORD(v11->PriorityState);
  if ( v9 )
  {
    *v9 |= 2u;
    if ( *(__int64 *)v9 < 0 )
      KiAbEntryRemoveFromTree(v9, v21, (__int64)SchedulerAssist, a5);
    v9[9] = 1;
    *v9 &= ~2u;
  }
  v24 = a4;
  *((_QWORD *)&v73 + 1) = &v73;
  *(_QWORD *)&v73 = &v73;
  CurrentThread = v11->CurrentThread;
  *((_QWORD *)&v71 + 1) = 0LL;
  *((_QWORD *)&v72 + 1) = 393217LL;
  *(_QWORD *)&v72 = a4;
  v74 = v9;
  if ( CurrentThread )
  {
    Flink = CurrentThread->Header.WaitListHead.Flink;
    if ( (_KTHREAD *)Flink->Flink != CurrentThread )
      goto LABEL_48;
    *((_QWORD *)&v71 + 1) = CurrentThread->Header.WaitListHead.Flink;
    *(_QWORD *)&v71 = CurrentThread;
    Flink->Flink = (struct _LIST_ENTRY *)&v71;
    CurrentThread->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)&v71;
  }
  else
  {
    *((_QWORD *)&v71 + 1) = &v71;
    *(_QWORD *)&v71 = &v71;
  }
  v11->CurrentThread = (_KTHREAD *)&v71;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
  {
    KiReleaseQueuedSpinLockInstrumented((volatile signed __int64 **)&v69, retaddr);
LABEL_37:
    v24 = a4;
    goto LABEL_38;
  }
  _m_prefetchw(&v69);
  v32 = v69;
  if ( (_QWORD)v69 )
  {
LABEL_57:
    *(_QWORD *)&v69 = 0LL;
    v33 = *((_QWORD *)&v69 + 1);
    if ( (((unsigned __int8)v33 ^ (unsigned __int8)_InterlockedExchange64(
                                                     (volatile __int64 *)(v32 + 8),
                                                     *((__int64 *)&v69 + 1))) & 4) != 0 )
      KeWakeAddressAll(v32 + 8, v33);
    goto LABEL_37;
  }
  if ( (__int128 *)_InterlockedCompareExchange64(*((volatile signed __int64 **)&v69 + 1), 0LL, (signed __int64)&v69) != &v69 )
  {
    v32 = KxWaitForLockChainValid((__int64 *)&v69);
    goto LABEL_57;
  }
LABEL_38:
  v26 = 0;
  if ( (a5 & 0x10) != 0 )
    v26 = 4;
  v27 = v26 & 4;
  v28 = v26 & 2;
  v29 = v26 & 8;
  if ( (char *)a2 != &v11->CpuType )
    *(_QWORD *)(a2 + 24) = v11;
  *(_DWORD *)(a2 + 32) = 1;
  LOBYTE(v13) = v27 != 0;
  *(_QWORD *)(a2 + 16) = v24 | v13;
  if ( v9 )
    *(_BYTE *)(a2 + 36) = (2 * (v9[8] & 0x3F)) | 1;
  if ( v28 )
    _disable();
  if ( v27 )
  {
    v64 = (volatile signed __int64 *)(v24 + 1736);
    KxAcquireSpinLock((PKSPIN_LOCK)(v24 + 1736));
    v65 = (_QWORD *)(a4 + 1744);
    v66 = *(_QWORD *)(a4 + 1744);
    if ( *(_QWORD *)(v66 + 8) != a4 + 1744 )
      goto LABEL_48;
    *(_QWORD *)a2 = v66;
    *(_QWORD *)(a2 + 8) = v65;
    *(_QWORD *)(v66 + 8) = a2;
    *v65 = a2;
    KxReleaseSpinLock(v64);
  }
  else
  {
    v30 = (_QWORD *)(v24 + 1720);
    v31 = *(struct _KPRCB **)(v24 + 1720);
    if ( v31->CurrentThread != (_KTHREAD *)(v24 + 1720) )
      goto LABEL_48;
    *(_QWORD *)a2 = v31;
    *(_QWORD *)(a2 + 8) = v30;
    v31->CurrentThread = (_KTHREAD *)a2;
    *v30 = a2;
  }
  if ( v28 )
  {
    v31 = KeGetCurrentPrcb();
    v35 = (signed __int32 *)v31->SchedulerAssist;
    if ( v35 )
    {
      _m_prefetchw(v35);
      v45 = *v35;
      do
      {
        v46 = v45;
        v45 = _InterlockedCompareExchange(v35, v45 & 0xFFDFFFFF, v45);
      }
      while ( v46 != v45 );
      if ( (v45 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)v31);
    }
    _enable();
  }
  if ( v27 )
  {
    if ( v29 && v9 )
      KeAbMarkCrossThreadReleasable(v31, v9);
    ObfReferenceObjectWithTag((PVOID)a4, 0x746C6644u);
  }
  *(_BYTE *)(a2 + 37) |= 4u;
  v36 = v68;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v68);
  __writecr8(v68);
  v37 = 0;
  ExpWaitForFastResource(v11, &v71, 66116LL);
  *(_BYTE *)(a2 + 37) &= ~4u;
  if ( v9 )
    KeAbPreAcquire((__int64)v11, (__int64)v9);
  v38 = v67;
  v6 = 1;
LABEL_75:
  if ( v38 )
  {
    BugCheckParameter2 = KeGetCurrentPrcb();
    v39 = (signed __int32 *)BugCheckParameter2->SchedulerAssist;
    if ( v39 )
    {
      _m_prefetchw(v39);
      v41 = *v39;
      do
      {
        v42 = v41;
        v41 = _InterlockedCompareExchange(v39, v41 & 0xFFDFFFFF, v41);
      }
      while ( v42 != v41 );
      if ( (v41 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)BugCheckParameter2);
    }
    _enable();
  }
  if ( v37 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v36);
    __writecr8(v36);
  }
  if ( v9 )
  {
    if ( v6 )
      v9[10] = 1;
    else
      KeAbPostReleaseEx((ULONG_PTR)v11, (ULONG_PTR)v9);
    if ( (a5 & 0x10) != 0 )
      KeAbMarkCrossThreadReleasable(BugCheckParameter2, v9);
  }
  return v6;
}
