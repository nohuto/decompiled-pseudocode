/*
 * XREFs of ExpReleaseFastResourceExclusiveSlow @ 0x14027D4F0
 * Callers:
 *     ExpReleaseFastResourceExclusive @ 0x14027C150 (ExpReleaseFastResourceExclusive.c)
 *     ExReleaseFastResource @ 0x140298850 (ExReleaseFastResource.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     KeAbPostReleaseEx @ 0x14027D430 (KeAbPostReleaseEx.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x14027E670 (KiAbConvertWaiterToOwnerEntry.c)
 *     KiRemoveBoostThread @ 0x14027EE94 (KiRemoveBoostThread.c)
 *     KiInsertQueueInternal @ 0x14027F170 (KiInsertQueueInternal.c)
 *     KiTryUnwaitThread @ 0x140280490 (KiTryUnwaitThread.c)
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     KeWakeAddressAll @ 0x14028A700 (KeWakeAddressAll.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FF4DC (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall ExpReleaseFastResourceExclusiveSlow(
        _QWORD *BugCheckParameter2,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int8 v4; // di
  unsigned __int8 CurrentIrql; // si
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  _DWORD *v9; // rdx
  __int64 v10; // r10
  BOOL v11; // r11d
  __int64 v12; // r9
  __int64 v13; // r9
  _QWORD *v14; // r8
  _QWORD *v15; // rax
  __int64 v16; // r8
  signed __int64 v17; // rax
  char v18; // si
  signed __int64 v19; // rcx
  signed __int64 v20; // rtt
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  unsigned __int64 *volatile Lock; // rdx
  unsigned int v23; // edi
  __int64 result; // rax
  unsigned __int8 v25; // al
  struct _KPRCB *CurrentPrcb; // r15
  _QWORD *v27; // r14
  _QWORD *v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  _QWORD *v32; // rax
  _QWORD *v33; // r12
  _QWORD *v34; // rdx
  _QWORD *v35; // rax
  _QWORD *v36; // rcx
  char v37; // cl
  bool v38; // zf
  unsigned __int64 v39; // rcx
  signed __int64 v40; // rtt
  signed __int64 v41; // rax
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rcx
  signed __int64 v44; // rtt
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-68h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  _QWORD *v47; // [rsp+A0h] [rbp+8h]
  unsigned __int8 v49; // [rsp+B0h] [rbp+18h]
  char v50; // [rsp+B8h] [rbp+20h]

  v4 = a2;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v49 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags != LockHandle.OldIrql )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = BugCheckParameter2 + 6;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v7 = _InterlockedExchange64(BugCheckParameter2 + 6, (__int64)&LockHandle);
    if ( v7 )
      KxWaitForLockOwnerShip(&LockHandle, v7, a3, a4);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, BugCheckParameter2 + 6);
  }
  _m_prefetchw(BugCheckParameter2);
  if ( (*BugCheckParameter2 & 2) == 0 )
  {
    _m_prefetchw(BugCheckParameter2);
    v41 = *BugCheckParameter2;
    do
    {
      if ( BugCheckParameter2[2] || *((_DWORD *)BugCheckParameter2 + 14) )
        v42 = v41 | 2;
      else
        v42 = v41 & 0xFFFFFFFFFFFFFFFDuLL;
      v43 = v42 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v43 == v41 )
        break;
      v44 = v41;
      v41 = _InterlockedCompareExchange64(BugCheckParameter2, v43, v41);
    }
    while ( v44 != v41 );
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    goto LABEL_34;
  }
  v8 = (_QWORD *)BugCheckParameter2[2];
  v9 = BugCheckParameter2 + 7;
  v10 = 0LL;
  v11 = v8 || *v9;
  v12 = (unsigned int)*v9;
  if ( (_DWORD)v12 )
  {
    v15 = (_QWORD *)BugCheckParameter2[1];
    BugCheckParameter2[1] = 0LL;
    v47 = v15;
    *v9 = 0;
  }
  else if ( v8 )
  {
    if ( (_QWORD *)*v8 == v8 )
    {
      BugCheckParameter2[2] = 0LL;
    }
    else
    {
      BugCheckParameter2[2] = *v8;
      v13 = *v8;
      v14 = (_QWORD *)v8[1];
      if ( *(_QWORD **)(*v8 + 8LL) != v8 || (_QWORD *)*v14 != v8 )
LABEL_14:
        __fastfail(3u);
      *v14 = v13;
      *(_QWORD *)(v13 + 8) = v14;
    }
    v10 = v8[2];
    v12 = 1LL;
    v8[1] = v8;
    *v8 = v8;
    v47 = v8;
  }
  else
  {
    v12 = 0LL;
    v47 = 0LL;
  }
  v16 = (unsigned int)(2 * v11);
  _m_prefetchw(BugCheckParameter2);
  v17 = *BugCheckParameter2;
  if ( v10 )
  {
    v16 = (unsigned int)v16 | 1;
    v18 = v16;
    do
    {
      if ( BugCheckParameter2[2] || *v9 )
        v19 = v17 | 2;
      else
        v19 = v17 & 0xFFFFFFFFFFFFFFFDuLL;
      if ( v19 == v17 )
        break;
      v20 = v17;
      v17 = _InterlockedCompareExchange64(BugCheckParameter2, v19, v17);
    }
    while ( v20 != v17 );
  }
  else
  {
    do
    {
      if ( BugCheckParameter2[2] || *((_DWORD *)BugCheckParameter2 + 14) )
        v39 = v17 & 0xFFFFFFFFFFFFFFFCuLL | 2;
      else
        v39 = v17 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (_DWORD)v12 )
        v39 += 4LL * (int)v12;
      v18 = 2 * v11;
      if ( v39 == v17 )
        break;
      v40 = v17;
      v17 = _InterlockedCompareExchange64(BugCheckParameter2, v39, v17);
    }
    while ( v40 != v17 );
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
  {
    KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    goto LABEL_30;
  }
  _m_prefetchw(&LockHandle);
  Next = LockHandle.LockQueue.Next;
  if ( LockHandle.LockQueue.Next )
  {
LABEL_28:
    LockHandle.LockQueue.Next = 0LL;
    Lock = LockHandle.LockQueue.Lock;
    if ( (((unsigned __int8)Lock ^ (unsigned __int8)_InterlockedExchange64(
                                                      (volatile __int64 *)&Next->Lock,
                                                      (__int64)LockHandle.LockQueue.Lock)) & 4) != 0 )
      KeWakeAddressAll(&Next->Lock, Lock, v16, v12);
    goto LABEL_30;
  }
  if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                       (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                       0LL,
                                       (signed __int64)&LockHandle) != &LockHandle )
  {
    Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
    goto LABEL_28;
  }
LABEL_30:
  v23 = (2 * (v18 & 1) + 1) | 4;
  if ( (v18 & 2) == 0 )
    v23 = 2 * (v18 & 1) + 1;
  if ( v47 )
  {
    v25 = KeGetCurrentIrql();
    v50 = v25;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v25);
    CurrentPrcb = KeGetCurrentPrcb();
    v27 = v47;
    do
    {
      v28 = v27;
      v27 = (_QWORD *)*v27;
      if ( (v23 & 4) != 0 )
      {
        v29 = v28[6];
        if ( v29 )
          KiAbConvertWaiterToOwnerEntry(*(_QWORD *)(v29 - 88LL * (*(_BYTE *)(v29 + 8) & 0x3F) - 16));
      }
      KiAcquireKobjectLockSafe(v28 + 3);
      v32 = v28 + 4;
      *((_DWORD *)v28 + 7) = 1;
      v33 = (_QWORD *)v28[4];
      while ( v33 != v32 )
      {
        v34 = (_QWORD *)*v33;
        v35 = v33;
        v33 = v34;
        v36 = (_QWORD *)v35[1];
        if ( (_QWORD *)v34[1] != v35 || (_QWORD *)*v36 != v35 )
          goto LABEL_14;
        *v36 = v34;
        v34[1] = v36;
        v37 = *((_BYTE *)v35 + 16);
        if ( v37 == 1 )
        {
          v38 = (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v35, *((unsigned __int16 *)v35 + 9), 0LL) == 0;
          v32 = v28 + 4;
          if ( !v38 )
          {
            v38 = (*((_DWORD *)v28 + 7))-- == 1;
            if ( v38 )
              break;
            v32 = v28 + 4;
          }
        }
        else if ( v37 == 2 )
        {
          *((_BYTE *)v35 + 17) = 5;
          KiInsertQueueInternal(v35[3], v35);
          v38 = (*((_DWORD *)v28 + 7))-- == 1;
          if ( v38 )
            break;
          v32 = v28 + 4;
        }
        else
        {
          if ( v37 == 4 )
          {
            *((_BYTE *)v35 + 17) = 5;
            *((_DWORD *)v28 + 7) = 0;
            KeInsertQueueDpc((PRKDPC)v35[3], v28 + 3, v35);
          }
          else
          {
            KiTryUnwaitThread(CurrentPrcb, v35, 256LL, 0LL);
          }
          v32 = v28 + 4;
        }
      }
      _InterlockedAnd((volatile signed __int32 *)v28 + 6, 0xFFFFFF7F);
    }
    while ( v27 != v47 );
    KiRemoveBoostThread(CurrentPrcb, CurrentPrcb->CurrentThread, v30, v31);
    KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, (v23 >> 1) & 1, v50);
  }
  CurrentIrql = v49;
  v4 = a2;
LABEL_34:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( v4 )
    return KeAbPostReleaseEx((ULONG_PTR)BugCheckParameter2, v4);
  return result;
}
