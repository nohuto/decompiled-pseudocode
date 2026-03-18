/*
 * XREFs of ExpAcquireFastResourceExclusiveSlow @ 0x1402937F0
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireFastResourceExclusive @ 0x1402934E0 (ExAcquireFastResourceExclusive.c)
 *     ExAcquireFastResourceWithFlags @ 0x14064A280 (ExAcquireFastResourceWithFlags.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KeWakeAddressAll @ 0x14028A700 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KeAbMarkCrossThreadReleasable @ 0x140292FF0 (KeAbMarkCrossThreadReleasable.c)
 *     ExpWaitForFastResource @ 0x140293C60 (ExpWaitForFastResource.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     KiAbEntryRemoveFromTree @ 0x14029D4A0 (KiAbEntryRemoveFromTree.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FF4DC (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall ExpAcquireFastResourceExclusiveSlow(
        signed __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        char a5)
{
  __int64 v5; // rsi
  unsigned __int8 CurrentIrql; // r15
  char v10; // r13
  __int64 v11; // rdx
  signed __int64 v12; // rax
  signed __int64 v13; // rcx
  char v14; // dl
  signed __int64 v15; // rtt
  signed __int64 v16; // rax
  _QWORD *v17; // rcx
  __int64 v18; // rax
  volatile signed __int64 *v19; // rdx
  char v20; // al
  char v21; // r12
  unsigned __int64 v22; // rax
  char v23; // di
  int v24; // r14d
  bool v25; // r12
  int v26; // edi
  char v27; // al
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  int v31; // ett
  __int64 v32; // rax
  volatile signed __int64 *v33; // rdx
  unsigned __int64 v34; // rsi
  signed __int64 **v35; // rcx
  signed __int64 v36; // rdx
  __int64 v37; // [rsp+20h] [rbp-50h] BYREF
  volatile signed __int64 *v38; // [rsp+28h] [rbp-48h]
  __int64 v39; // [rsp+30h] [rbp-40h]
  __int128 v40; // [rsp+38h] [rbp-38h] BYREF
  __int128 v41; // [rsp+48h] [rbp-28h]
  __int128 v42; // [rsp+58h] [rbp-18h] BYREF
  __int64 v43; // [rsp+68h] [rbp-8h]
  void *retaddr; // [rsp+A8h] [rbp+38h]
  signed __int64 *v45; // [rsp+B8h] [rbp+48h]

  v43 = 0LL;
  v5 = 0LL;
  v39 = 0LL;
  v45 = a1 + 8;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags != (unsigned __int8)v39 )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  v37 = 0LL;
  v38 = a1 + 6;
  v10 = 1;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v11 = _InterlockedExchange64(a1 + 6, (__int64)&v37);
    if ( v11 )
      KxWaitForLockOwnerShip(&v37, v11, a3, a4);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(&v37, a1 + 6);
  }
  _m_prefetchw(a1);
  v12 = *a1;
  do
  {
    if ( v12 )
    {
      v14 = 0;
      v13 = v12 | 2;
      if ( (v12 | 2) == v12 )
        goto LABEL_12;
    }
    else
    {
      v13 = 1LL;
      v14 = 1;
    }
    v15 = v12;
    v12 = _InterlockedCompareExchange64(a1, v13, v12);
  }
  while ( v15 != v12 );
  if ( !v14 )
  {
LABEL_12:
    *((_QWORD *)&v40 + 1) = 0LL;
    *((_QWORD *)&v42 + 1) = &v42;
    *(_QWORD *)&v42 = &v42;
    v16 = a1[2];
    *((_QWORD *)&v41 + 1) = 393217LL;
    *(_QWORD *)&v41 = a3;
    v43 = a4;
    if ( v16 )
    {
      v17 = *(_QWORD **)(v16 + 8);
      if ( *v17 != v16 )
        goto LABEL_40;
      *((_QWORD *)&v40 + 1) = *(_QWORD *)(v16 + 8);
      *(_QWORD *)&v40 = v16;
      *v17 = &v40;
      *(_QWORD *)(v16 + 8) = &v40;
    }
    else
    {
      *((_QWORD *)&v40 + 1) = &v40;
      *(_QWORD *)&v40 = &v40;
      a1[2] = (signed __int64)&v40;
    }
    if ( a4 )
    {
      *(_BYTE *)a4 |= 2u;
      if ( *(__int64 *)a4 < 0 )
        KiAbEntryRemoveFromTree(a4);
      *(_BYTE *)(a4 + 9) = 1;
      *(_BYTE *)a4 &= ~2u;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
    {
      KiReleaseQueuedSpinLockInstrumented(&v37, retaddr);
      goto LABEL_26;
    }
    _m_prefetchw(&v37);
    v18 = v37;
    if ( !v37 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v38, 0LL, (signed __int64)&v37) == &v37 )
      {
LABEL_26:
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
        v10 = 0;
        ExpWaitForFastResource(a1, &v40, 66084LL);
        if ( a4 )
          KeAbPreAcquire(a1, a4, 0LL);
        goto LABEL_30;
      }
      v18 = KxWaitForLockChainValid(&v37);
    }
    v37 = 0LL;
    v19 = v38;
    if ( (((unsigned __int8)v19 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v18 + 8), (__int64)v38)) & 4) != 0 )
      KeWakeAddressAll(v18 + 8, (__int64)v19);
    goto LABEL_26;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(&v37);
    v32 = v37;
    if ( !v37 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v38, 0LL, (signed __int64)&v37) == &v37 )
        goto LABEL_30;
      v32 = KxWaitForLockChainValid(&v37);
    }
    v37 = 0LL;
    v33 = v38;
    if ( (((unsigned __int8)v33 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v32 + 8), (__int64)v38)) & 4) != 0 )
      KeWakeAddressAll(v32 + 8, (__int64)v33);
  }
  else
  {
    KiReleaseQueuedSpinLockInstrumented(&v37, retaddr);
  }
LABEL_30:
  v20 = 13;
  if ( (a5 & 0x10) == 0 )
    v20 = 1;
  v21 = v20 | 2;
  *((_DWORD *)v45 + 8) = 1;
  if ( v10 )
    v21 = v20;
  v22 = a3;
  v23 = v21;
  v24 = v21 & 2;
  v25 = (v21 & 8) != 0;
  v26 = v23 & 4;
  LOBYTE(v5) = v26 != 0;
  v45[2] = a3 | v5;
  if ( a4 )
  {
    v27 = *(_BYTE *)(a4 + 8) & 0x3F;
    *(_BYTE *)(a4 + 10) = 1;
    *((_BYTE *)v45 + 36) = (2 * v27) | 1;
    v22 = a3;
  }
  if ( v24 )
    _disable();
  if ( v26 )
  {
    v34 = v22 + 1736;
    KxAcquireSpinLock((PKSPIN_LOCK)(v22 + 1736));
    v35 = (signed __int64 **)(a3 + 1744);
    v36 = *(_QWORD *)(a3 + 1744);
    if ( *(_QWORD *)(v36 + 8) != a3 + 1744 )
LABEL_40:
      __fastfail(3u);
    v45[1] = (signed __int64)v35;
    *v45 = v36;
    *(_QWORD *)(v36 + 8) = v45;
    *v35 = v45;
    result = KxReleaseSpinLock(v34);
  }
  else
  {
    result = v22 + 1720;
    CurrentPrcb = *(struct _KPRCB **)result;
    if ( *(_QWORD *)(*(_QWORD *)result + 8LL) != result )
      goto LABEL_40;
    *v45 = (signed __int64)CurrentPrcb;
    v45[1] = result;
    CurrentPrcb->CurrentThread = (_KTHREAD *)v45;
    *(_QWORD *)result = v45;
  }
  if ( v24 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      LODWORD(result) = *SchedulerAssist;
      do
      {
        v31 = result;
        result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
      }
      while ( v31 != (_DWORD)result );
      if ( (result & 0x200000) != 0 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  if ( v26 )
  {
    if ( v25 && a4 )
      KeAbMarkCrossThreadReleasable((__int64)CurrentPrcb, (__int64 *)a4);
    result = ObfReferenceObjectWithTag((PVOID)a3, 0x746C6644u);
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
