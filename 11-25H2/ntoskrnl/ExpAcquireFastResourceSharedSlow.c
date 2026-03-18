/*
 * XREFs of ExpAcquireFastResourceSharedSlow @ 0x140294850
 * Callers:
 *     ExAcquireFastResourceShared @ 0x140294520 (ExAcquireFastResourceShared.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14048A060 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceWithFlags @ 0x14064A280 (ExAcquireFastResourceWithFlags.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KeAbPostReleaseEx @ 0x14027D430 (KeAbPostReleaseEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KeAbMarkCrossThreadReleasable @ 0x140292FF0 (KeAbMarkCrossThreadReleasable.c)
 *     ExpWaitForFastResource @ 0x140293C60 (ExpWaitForFastResource.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     KiAbEntryRemoveFromTree @ 0x14029D4A0 (KiAbEntryRemoveFromTree.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall ExpAcquireFastResourceSharedSlow(
        struct _KPRCB *BugCheckParameter2,
        __int64 a2,
        signed __int32 *SchedulerAssist,
        _QWORD *a4,
        char a5)
{
  unsigned __int8 CurrentIrql; // r13
  unsigned __int8 v6; // si
  unsigned __int64 v7; // r10
  ULONG_PTR v8; // rdi
  ULONG_PTR v10; // rbx
  char v11; // r11
  __int64 v12; // r15
  struct _KPRCB *p_CpuType; // rdx
  unsigned __int8 v14; // si
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v16; // rdx
  signed __int64 v17; // rax
  char v18; // r8
  unsigned __int64 v19; // rcx
  signed __int64 v20; // rcx
  signed __int64 v21; // rtt
  __int64 v22; // rax
  char v23; // r13
  int v24; // esi
  int v25; // r12d
  int v26; // r13d
  unsigned __int64 v27; // rax
  struct _KPRCB **v28; // rax
  struct _KPRCB *v29; // rcx
  signed __int32 *v30; // r8
  unsigned __int8 v31; // r15
  char v32; // r12
  char v33; // r14
  signed __int32 *v34; // r8
  signed __int32 v36; // eax
  signed __int32 v37; // ett
  signed __int32 v38; // eax
  signed __int32 v39; // ett
  signed __int32 v40; // eax
  signed __int32 v41; // ett
  _QWORD *v42; // rcx
  char v43; // r13
  int v44; // r12d
  int v45; // esi
  int v46; // r13d
  char v47; // al
  _QWORD *v48; // rax
  signed __int32 *v49; // r8
  signed __int32 v50; // eax
  signed __int32 v51; // ett
  signed __int32 *v52; // r8
  signed __int32 v53; // eax
  signed __int32 v54; // ett
  _QWORD *v55; // rax
  signed __int32 v56; // eax
  signed __int32 v57; // ett
  _QWORD *v58; // rax
  __int64 v59; // rdx
  unsigned __int64 v60; // r15
  _QWORD *v61; // rax
  __int64 v62; // rcx
  char v63; // [rsp+20h] [rbp-60h]
  unsigned __int8 v64; // [rsp+28h] [rbp-58h]
  __int128 v65; // [rsp+30h] [rbp-50h] BYREF
  __int128 v66; // [rsp+40h] [rbp-40h]
  __int128 v67; // [rsp+50h] [rbp-30h] BYREF
  ULONG_PTR v68; // [rsp+60h] [rbp-20h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-18h] BYREF
  char v70; // [rsp+C0h] [rbp+40h]
  unsigned __int64 Object; // [rsp+D8h] [rbp+58h]

  Object = (unsigned __int64)a4;
  CurrentIrql = 0;
  v68 = 0LL;
  v6 = 0;
  v7 = (unsigned __int64)a4;
  v64 = 0;
  LOBYTE(a4) = 0;
  v70 = 0;
  v8 = (ULONG_PTR)SchedulerAssist;
  v10 = (ULONG_PTR)BugCheckParameter2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v65 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  _disable();
  v11 = 1;
  v12 = 0LL;
  v63 = 1;
  if ( (*(_QWORD *)&BugCheckParameter2->MxCsr & 1) != 0 && BugCheckParameter2->HalReserved[1] == v7 )
  {
    p_CpuType = (struct _KPRCB *)&BugCheckParameter2->CpuType;
  }
  else
  {
    SchedulerAssist = (signed __int32 *)(v7 + 1720);
    a4 = 0LL;
    BugCheckParameter2 = *(struct _KPRCB **)(v7 + 1720);
    p_CpuType = 0LL;
    while ( BugCheckParameter2 != (struct _KPRCB *)SchedulerAssist )
    {
      if ( (BugCheckParameter2->Number & 0x200) == 0 && BugCheckParameter2->IdleThread == (_KTHREAD *)v10 )
      {
        p_CpuType = BugCheckParameter2;
        break;
      }
      BugCheckParameter2 = *(struct _KPRCB **)&BugCheckParameter2->MxCsr;
      a4 = (_QWORD *)((char *)a4 + 1);
      if ( (unsigned __int64)a4 > 6 )
        goto LABEL_137;
    }
    LOBYTE(a4) = 0;
  }
  if ( p_CpuType == (struct _KPRCB *)1 )
  {
LABEL_137:
    CurrentIrql = KeGetCurrentIrql();
    v64 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    BugCheckParameter2 = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)BugCheckParameter2->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v56 = *SchedulerAssist;
      do
      {
        v57 = v56;
        v56 = _InterlockedCompareExchange(SchedulerAssist, v56 & 0xFFDFFFFF, v56);
      }
      while ( v57 != v56 );
      if ( (v56 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)BugCheckParameter2);
    }
    _enable();
    LOBYTE(a4) = 1;
    v7 = Object;
    v11 = 0;
    v70 = 1;
    v63 = 0;
    if ( (*(_QWORD *)v10 & 1) != 0 && *(_QWORD *)(v10 + 80) == Object )
    {
      p_CpuType = (struct _KPRCB *)(v10 + 64);
    }
    else
    {
      SchedulerAssist = (signed __int32 *)(Object + 1720);
      p_CpuType = 0LL;
      for ( BugCheckParameter2 = *(struct _KPRCB **)(Object + 1720);
            BugCheckParameter2 != (struct _KPRCB *)SchedulerAssist;
            BugCheckParameter2 = *(struct _KPRCB **)&BugCheckParameter2->MxCsr )
      {
        if ( (BugCheckParameter2->Number & 0x200) == 0 && BugCheckParameter2->IdleThread == (_KTHREAD *)v10 )
        {
          p_CpuType = BugCheckParameter2;
          break;
        }
      }
    }
  }
  if ( p_CpuType && (p_CpuType->Number & 0x400) == 0 )
  {
    if ( p_CpuType == (struct _KPRCB *)(v10 + 64) )
    {
      ++*(_DWORD *)&p_CpuType->NestingLevel;
LABEL_117:
      if ( v11 )
      {
        BugCheckParameter2 = KeGetCurrentPrcb();
        v52 = (signed __int32 *)BugCheckParameter2->SchedulerAssist;
        if ( v52 )
        {
          _m_prefetchw(v52);
          v53 = *v52;
          do
          {
            v54 = v53;
            v53 = _InterlockedCompareExchange(v52, v53 & 0xFFDFFFFF, v53);
          }
          while ( v54 != v53 );
          if ( (v53 & 0x200000) != 0 )
          {
            KiRemoveSystemWorkPriorityKick((__int64)BugCheckParameter2);
            LOBYTE(a4) = v70;
          }
        }
        _enable();
        v33 = 0;
      }
      else
      {
        v33 = v63;
      }
      if ( (_BYTE)a4 )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
        v70 = 0;
      }
      if ( v8 )
      {
        KeAbPostReleaseEx(v10, v8);
        v8 = 0LL;
      }
      v31 = v64;
      v6 = 1;
      v32 = v70;
      goto LABEL_62;
    }
    _InterlockedAdd64((volatile signed __int64 *)v10, 4uLL);
    if ( a2 != v10 + 64 )
      *(_QWORD *)(a2 + 24) = v10;
    v55 = (_QWORD *)(v7 + 1720);
    *(_QWORD *)(a2 + 16) = v7;
    *(_DWORD *)(a2 + 32) = 1;
    BugCheckParameter2 = *(struct _KPRCB **)(v7 + 1720);
    if ( BugCheckParameter2->CurrentThread == (_KTHREAD *)(v7 + 1720) )
    {
      *(_QWORD *)a2 = BugCheckParameter2;
      *(_QWORD *)(a2 + 8) = v55;
      BugCheckParameter2->CurrentThread = (_KTHREAD *)a2;
      *v55 = a2;
      goto LABEL_117;
    }
LABEL_44:
    __fastfail(3u);
  }
  if ( (a5 & 8) == 0 )
  {
LABEL_107:
    v33 = v63;
    v31 = v64;
    v32 = v70;
    goto LABEL_62;
  }
  if ( v11 )
  {
    v14 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v14);
    CurrentPrcb = KeGetCurrentPrcb();
    v64 = v14;
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v36 = *SchedulerAssist;
      do
      {
        v37 = v36;
        v36 = _InterlockedCompareExchange(SchedulerAssist, v36 & 0xFFDFFFFF, v36);
      }
      while ( v37 != v36 );
      if ( (v36 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
    v70 = 1;
    v63 = 0;
  }
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v10 + 48);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v16 = _InterlockedExchange64((volatile __int64 *)(v10 + 48), (__int64)&LockHandle);
    if ( v16 )
      KxWaitForLockOwnerShip(&LockHandle, v16, SchedulerAssist, a4);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v10 + 48);
  }
  _m_prefetchw((const void *)v10);
  v17 = *(_QWORD *)v10;
  do
  {
    v18 = 0;
    if ( *(_QWORD *)(v10 + 16) || *(_DWORD *)(v10 + 56) )
      v19 = v17 | 2;
    else
      v19 = v17 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( ((v19 & 2) != 0 || (a5 & 2) == 0) && (a5 & 4) == 0 || (v19 & 1) != 0 )
    {
      v20 = v19 | 2;
    }
    else
    {
      v18 = 1;
      v20 = v19 ^ (v19 ^ (v19 + 4)) & 0xFFFFFFFFFFFFFFFCuLL;
    }
    if ( v20 == v17 )
      break;
    v21 = v17;
    v17 = _InterlockedCompareExchange64((volatile signed __int64 *)v10, v20, v17);
  }
  while ( v21 != v17 );
  if ( v18 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v43 = 1;
    if ( (a5 & 0x10) != 0 )
      v43 = 13;
    v44 = v43 & 2;
    v45 = v43 & 4;
    v46 = v43 & 8;
    if ( a2 != v10 + 64 )
      *(_QWORD *)(a2 + 24) = v10;
    *(_DWORD *)(a2 + 32) = 1;
    *(_QWORD *)(a2 + 16) = Object | (v45 != 0);
    if ( v8 )
    {
      v47 = *(_BYTE *)(v8 + 8);
      *(_BYTE *)(v8 + 10) = 1;
      *(_BYTE *)(a2 + 36) = (2 * (v47 & 0x3F)) | 1;
    }
    if ( v44 )
      _disable();
    if ( v45 )
    {
      KxAcquireSpinLock((PKSPIN_LOCK)(Object + 1736));
      v58 = (_QWORD *)(Object + 1744);
      v59 = *(_QWORD *)(Object + 1744);
      if ( *(_QWORD *)(v59 + 8) != Object + 1744 )
        goto LABEL_44;
      *(_QWORD *)a2 = v59;
      *(_QWORD *)(a2 + 8) = v58;
      *(_QWORD *)(v59 + 8) = a2;
      *v58 = a2;
      KxReleaseSpinLock(Object + 1736);
    }
    else
    {
      v48 = (_QWORD *)(Object + 1720);
      BugCheckParameter2 = *(struct _KPRCB **)(Object + 1720);
      if ( BugCheckParameter2->CurrentThread != (_KTHREAD *)(Object + 1720) )
        goto LABEL_44;
      *(_QWORD *)a2 = BugCheckParameter2;
      *(_QWORD *)(a2 + 8) = v48;
      BugCheckParameter2->CurrentThread = (_KTHREAD *)a2;
      *v48 = a2;
    }
    if ( v44 )
    {
      BugCheckParameter2 = KeGetCurrentPrcb();
      v49 = (signed __int32 *)BugCheckParameter2->SchedulerAssist;
      if ( v49 )
      {
        _m_prefetchw(v49);
        v50 = *v49;
        do
        {
          v51 = v50;
          v50 = _InterlockedCompareExchange(v49, v50 & 0xFFDFFFFF, v50);
        }
        while ( v51 != v50 );
        if ( (v50 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)BugCheckParameter2);
      }
      _enable();
    }
    if ( v45 )
    {
      if ( v46 && v8 )
        KeAbMarkCrossThreadReleasable((__int64)BugCheckParameter2, (__int64 *)v8);
      ObfReferenceObjectWithTag((PVOID)Object, 0x746C6644u);
    }
    v8 = 0LL;
    v6 = 1;
    goto LABEL_107;
  }
  ++*(_DWORD *)(v10 + 56);
  if ( v8 )
  {
    *(_BYTE *)v8 |= 2u;
    if ( *(__int64 *)v8 < 0 )
      KiAbEntryRemoveFromTree(v8);
    *(_BYTE *)(v8 + 9) = 1;
    *(_BYTE *)v8 &= ~2u;
  }
  *((_QWORD *)&v67 + 1) = &v67;
  *(_QWORD *)&v67 = &v67;
  v22 = *(_QWORD *)(v10 + 8);
  *((_QWORD *)&v65 + 1) = 0LL;
  *((_QWORD *)&v66 + 1) = 393217LL;
  *(_QWORD *)&v66 = Object;
  v68 = v8;
  if ( v22 )
  {
    v42 = *(_QWORD **)(v22 + 8);
    if ( *v42 != v22 )
      goto LABEL_44;
    *((_QWORD *)&v65 + 1) = *(_QWORD *)(v22 + 8);
    *(_QWORD *)&v65 = v22;
    *v42 = &v65;
    *(_QWORD *)(v22 + 8) = &v65;
  }
  else
  {
    *((_QWORD *)&v65 + 1) = &v65;
    *(_QWORD *)&v65 = &v65;
  }
  *(_QWORD *)(v10 + 8) = &v65;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v23 = 0;
  if ( (a5 & 0x10) != 0 )
    v23 = 4;
  v24 = v23 & 4;
  v25 = v23 & 2;
  v26 = v23 & 8;
  if ( a2 != v10 + 64 )
    *(_QWORD *)(a2 + 24) = v10;
  v27 = Object;
  *(_DWORD *)(a2 + 32) = 1;
  LOBYTE(v12) = v24 != 0;
  *(_QWORD *)(a2 + 16) = Object | v12;
  if ( v8 )
  {
    *(_BYTE *)(a2 + 36) = (2 * (*(_BYTE *)(v8 + 8) & 0x3F)) | 1;
    v27 = Object;
  }
  if ( v25 )
    _disable();
  if ( v24 )
  {
    v60 = v27 + 1736;
    KxAcquireSpinLock((PKSPIN_LOCK)(v27 + 1736));
    v61 = (_QWORD *)(Object + 1744);
    v62 = *(_QWORD *)(Object + 1744);
    if ( *(_QWORD *)(v62 + 8) != Object + 1744 )
      goto LABEL_44;
    *(_QWORD *)a2 = v62;
    *(_QWORD *)(a2 + 8) = v61;
    *(_QWORD *)(v62 + 8) = a2;
    *v61 = a2;
    KxReleaseSpinLock(v60);
  }
  else
  {
    v28 = (struct _KPRCB **)(v27 + 1720);
    v29 = *v28;
    if ( (struct _KPRCB **)(*v28)->CurrentThread != v28 )
      goto LABEL_44;
    *(_QWORD *)a2 = v29;
    *(_QWORD *)(a2 + 8) = v28;
    v29->CurrentThread = (_KTHREAD *)a2;
    *v28 = (struct _KPRCB *)a2;
  }
  if ( v25 )
  {
    v29 = KeGetCurrentPrcb();
    v30 = (signed __int32 *)v29->SchedulerAssist;
    if ( v30 )
    {
      _m_prefetchw(v30);
      v40 = *v30;
      do
      {
        v41 = v40;
        v40 = _InterlockedCompareExchange(v30, v40 & 0xFFDFFFFF, v40);
      }
      while ( v41 != v40 );
      if ( (v40 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)v29);
    }
    _enable();
  }
  if ( v24 )
  {
    if ( v26 && v8 )
      KeAbMarkCrossThreadReleasable((__int64)v29, (__int64 *)v8);
    ObfReferenceObjectWithTag((PVOID)Object, 0x746C6644u);
  }
  *(_BYTE *)(a2 + 37) |= 4u;
  v31 = v64;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v64);
  __writecr8(v64);
  v32 = 0;
  ExpWaitForFastResource(v10, (__int64)&v65, 0x10244u);
  *(_BYTE *)(a2 + 37) &= ~4u;
  if ( v8 )
    KeAbPreAcquire(v10, v8, 0LL);
  v33 = v63;
  v6 = 1;
LABEL_62:
  if ( v33 )
  {
    BugCheckParameter2 = KeGetCurrentPrcb();
    v34 = (signed __int32 *)BugCheckParameter2->SchedulerAssist;
    if ( v34 )
    {
      _m_prefetchw(v34);
      v38 = *v34;
      do
      {
        v39 = v38;
        v38 = _InterlockedCompareExchange(v34, v38 & 0xFFDFFFFF, v38);
      }
      while ( v39 != v38 );
      if ( (v38 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)BugCheckParameter2);
    }
    _enable();
  }
  if ( v32 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v31);
    __writecr8(v31);
  }
  if ( v8 )
  {
    if ( v6 )
      *(_BYTE *)(v8 + 10) = 1;
    else
      KeAbPostReleaseEx(v10, v8);
    if ( (a5 & 0x10) != 0 )
      KeAbMarkCrossThreadReleasable((__int64)BugCheckParameter2, (__int64 *)v8);
  }
  return v6;
}
