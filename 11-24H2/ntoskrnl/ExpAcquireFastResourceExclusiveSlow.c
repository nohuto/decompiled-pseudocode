/*
 * XREFs of ExpAcquireFastResourceExclusiveSlow @ 0x1403BD020
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireFastResourceExclusive @ 0x1403BCD30 (ExAcquireFastResourceExclusive.c)
 *     ExAcquireFastResourceWithFlags @ 0x140654880 (ExAcquireFastResourceWithFlags.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KiAbEntryRemoveFromTree @ 0x14028D4F0 (KiAbEntryRemoveFromTree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
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

__int64 __fastcall ExpAcquireFastResourceExclusiveSlow(signed __int64 *a1, __int64 a2, __int64 a3, char *a4, char a5)
{
  __int64 v5; // rsi
  unsigned __int8 CurrentIrql; // r14
  char v10; // r13
  __int64 v11; // rdx
  signed __int64 v12; // rax
  signed __int64 v13; // rcx
  signed __int64 v14; // rtt
  signed __int64 v15; // rax
  _QWORD *v16; // rcx
  char v17; // al
  char v18; // r12
  __int64 v19; // rax
  char v20; // di
  int v21; // r15d
  bool v22; // r12
  int v23; // edi
  char v24; // al
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  volatile signed __int64 *v27; // rax
  volatile signed __int64 *v28; // rdx
  volatile signed __int64 *v29; // rax
  volatile signed __int64 *v30; // rdx
  void *v31; // rsi
  _DWORD *SchedulerAssist; // r8
  int v33; // ett
  signed __int64 **v34; // rcx
  signed __int64 v35; // rdx
  volatile signed __int64 *v36; // [rsp+20h] [rbp-50h] BYREF
  volatile signed __int64 *v37; // [rsp+28h] [rbp-48h]
  __int64 v38; // [rsp+30h] [rbp-40h]
  __int128 v39; // [rsp+38h] [rbp-38h] BYREF
  __int128 v40; // [rsp+48h] [rbp-28h]
  __int128 v41; // [rsp+58h] [rbp-18h] BYREF
  char *v42; // [rsp+68h] [rbp-8h]
  __int64 retaddr; // [rsp+A8h] [rbp+38h]
  signed __int64 *v44; // [rsp+B8h] [rbp+48h]

  v42 = 0LL;
  v5 = 0LL;
  v38 = 0LL;
  v44 = a1 + 8;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags != (unsigned __int8)v38 )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  v36 = 0LL;
  v37 = a1 + 6;
  v10 = 1;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v11 = _InterlockedExchange64(a1 + 6, (__int64)&v36);
    if ( v11 )
      KxWaitForLockOwnerShip((__int64)&v36, (_QWORD *)v11);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)&v36, a1 + 6);
  }
  _m_prefetchw(a1);
  v12 = *a1;
  do
  {
    if ( v12 )
    {
      LOBYTE(v11) = 0;
      v13 = v12 | 2;
      if ( (v12 | 2) == v12 )
        goto LABEL_12;
    }
    else
    {
      v13 = 1LL;
      v11 = 1LL;
    }
    v14 = v12;
    v12 = _InterlockedCompareExchange64(a1, v13, v12);
  }
  while ( v14 != v12 );
  if ( !(_BYTE)v11 )
  {
LABEL_12:
    *((_QWORD *)&v39 + 1) = 0LL;
    *((_QWORD *)&v41 + 1) = &v41;
    *(_QWORD *)&v41 = &v41;
    v15 = a1[2];
    *((_QWORD *)&v40 + 1) = 393217LL;
    *(_QWORD *)&v40 = a3;
    v42 = a4;
    if ( v15 )
    {
      v16 = *(_QWORD **)(v15 + 8);
      if ( *v16 != v15 )
        goto LABEL_31;
      *((_QWORD *)&v39 + 1) = *(_QWORD *)(v15 + 8);
      v11 = (__int64)&v39;
      *(_QWORD *)&v39 = v15;
      *v16 = &v39;
      *(_QWORD *)(v15 + 8) = &v39;
    }
    else
    {
      *((_QWORD *)&v39 + 1) = &v39;
      *(_QWORD *)&v39 = &v39;
      a1[2] = (signed __int64)&v39;
    }
    if ( a4 )
    {
      *a4 |= 2u;
      if ( *(__int64 *)a4 < 0 )
        KiAbEntryRemoveFromTree(a4, v11, a3, (__int64)a4);
      a4[9] = 1;
      *a4 &= ~2u;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
    {
      KiReleaseQueuedSpinLockInstrumented(&v36, retaddr);
LABEL_17:
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      v10 = 0;
      ExpWaitForFastResource(a1, &v39, 66084LL);
      if ( a4 )
        KeAbPreAcquire((__int64)a1, (__int64)a4);
      goto LABEL_21;
    }
    _m_prefetchw(&v36);
    v27 = v36;
    if ( !v36 )
    {
      if ( (volatile signed __int64 **)_InterlockedCompareExchange64(v37, 0LL, (signed __int64)&v36) == &v36 )
        goto LABEL_17;
      v27 = (volatile signed __int64 *)KxWaitForLockChainValid((__int64 *)&v36);
    }
    v36 = 0LL;
    v28 = v37;
    if ( (((unsigned __int8)v28 ^ (unsigned __int8)_InterlockedExchange64(v27 + 1, (__int64)v37)) & 4) != 0 )
      KeWakeAddressAll((unsigned __int64)(v27 + 1), (__int64)v28);
    goto LABEL_17;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
  {
    KiReleaseQueuedSpinLockInstrumented(&v36, retaddr);
    goto LABEL_21;
  }
  _m_prefetchw(&v36);
  v29 = v36;
  if ( !v36 )
  {
    if ( (volatile signed __int64 **)_InterlockedCompareExchange64(v37, 0LL, (signed __int64)&v36) == &v36 )
      goto LABEL_21;
    v29 = (volatile signed __int64 *)KxWaitForLockChainValid((__int64 *)&v36);
  }
  v36 = 0LL;
  v30 = v37;
  if ( (((unsigned __int8)v30 ^ (unsigned __int8)_InterlockedExchange64(v29 + 1, (__int64)v37)) & 4) != 0 )
    KeWakeAddressAll((unsigned __int64)(v29 + 1), (__int64)v30);
LABEL_21:
  v17 = 13;
  if ( (a5 & 0x10) == 0 )
    v17 = 1;
  v18 = v17 | 2;
  *((_DWORD *)v44 + 8) = 1;
  if ( v10 )
    v18 = v17;
  v19 = a3;
  v20 = v18;
  v21 = v18 & 2;
  v22 = (v18 & 8) != 0;
  v23 = v20 & 4;
  LOBYTE(v5) = v23 != 0;
  v44[2] = a3 | v5;
  if ( a4 )
  {
    v24 = a4[8] & 0x3F;
    a4[10] = 1;
    *((_BYTE *)v44 + 36) = (2 * v24) | 1;
    v19 = a3;
  }
  if ( v21 )
    _disable();
  if ( v23 )
  {
    KxAcquireSpinLock((PKSPIN_LOCK)(v19 + 1736));
    v31 = (void *)a3;
    v34 = (signed __int64 **)(a3 + 1744);
    v35 = *(_QWORD *)(a3 + 1744);
    if ( *(_QWORD *)(v35 + 8) != a3 + 1744 )
LABEL_31:
      __fastfail(3u);
    v44[1] = (signed __int64)v34;
    *v44 = v35;
    *(_QWORD *)(v35 + 8) = v44;
    *v34 = v44;
    result = KxReleaseSpinLock((volatile signed __int64 *)(a3 + 1736));
  }
  else
  {
    result = v19 + 1720;
    CurrentPrcb = *(struct _KPRCB **)result;
    if ( *(_QWORD *)(*(_QWORD *)result + 8LL) != result )
      goto LABEL_31;
    v31 = (void *)a3;
    *v44 = (signed __int64)CurrentPrcb;
    v44[1] = result;
    CurrentPrcb->CurrentThread = (_KTHREAD *)v44;
    *(_QWORD *)result = v44;
  }
  if ( v21 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      LODWORD(result) = *SchedulerAssist;
      do
      {
        v33 = result;
        result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
      }
      while ( v33 != (_DWORD)result );
      if ( (result & 0x200000) != 0 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  if ( v23 )
  {
    if ( v22 && a4 )
      KeAbMarkCrossThreadReleasable(CurrentPrcb, a4);
    result = ObfReferenceObjectWithTag(v31, 0x746C6644u);
  }
  if ( v10 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
