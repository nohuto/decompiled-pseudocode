/*
 * XREFs of ExpReleaseFastResourceExclusiveSlow @ 0x14028DDD0
 * Callers:
 *     ExReleaseFastResource @ 0x14028C460 (ExReleaseFastResource.c)
 *     ExpReleaseFastResourceExclusive @ 0x14028DCE0 (ExpReleaseFastResourceExclusive.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KeAbPostReleaseEx @ 0x14028D2F0 (KeAbPostReleaseEx.c)
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402CA820 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     KiRemoveBoostThread @ 0x1402CBC34 (KiRemoveBoostThread.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x1402CBF00 (KiAbConvertWaiterToOwnerEntry.c)
 *     KiInsertQueueInternal @ 0x1402CC724 (KiInsertQueueInternal.c)
 *     KiTryUnwaitThread @ 0x1402F28C0 (KiTryUnwaitThread.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall ExpReleaseFastResourceExclusiveSlow(signed __int64 *BugCheckParameter2, unsigned __int8 a2)
{
  unsigned __int8 v2; // si
  unsigned __int8 CurrentIrql; // di
  __int64 v5; // rdx
  signed __int64 *v6; // rcx
  _DWORD *v7; // rdx
  signed __int64 v8; // r10
  BOOL v9; // r11d
  __int64 v10; // r9
  signed __int64 v11; // r9
  signed __int64 *v12; // r8
  signed __int64 v13; // rax
  __int64 v14; // r8
  signed __int64 v15; // rax
  char v16; // di
  signed __int64 v17; // rcx
  signed __int64 v18; // rtt
  char v19; // si
  __int64 result; // rax
  __int64 v21; // rax
  volatile signed __int64 *v22; // rdx
  unsigned __int8 v23; // al
  struct _KPRCB *CurrentPrcb; // rbp
  _QWORD *v25; // r12
  int v26; // eax
  _QWORD *v27; // r15
  __int64 v28; // rdx
  _QWORD *v29; // rdi
  _QWORD *v30; // rdx
  _QWORD *v31; // rax
  _QWORD *v32; // rcx
  char v33; // cl
  unsigned __int64 v35; // rcx
  signed __int64 v36; // rtt
  signed __int64 v37; // rax
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rcx
  signed __int64 v40; // rtt
  char v41; // [rsp+30h] [rbp-68h]
  __int64 v42; // [rsp+38h] [rbp-60h] BYREF
  volatile signed __int64 *v43; // [rsp+40h] [rbp-58h]
  __int64 v44; // [rsp+48h] [rbp-50h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h]
  _QWORD *v47; // [rsp+B0h] [rbp+18h]
  unsigned __int8 v48; // [rsp+B8h] [rbp+20h]

  v2 = a2;
  v44 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v48 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags != (unsigned __int8)v44 )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  v42 = 0LL;
  v43 = BugCheckParameter2 + 6;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v5 = _InterlockedExchange64(BugCheckParameter2 + 6, (__int64)&v42);
    if ( v5 )
      KxWaitForLockOwnerShip(&v42, v5);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(&v42, BugCheckParameter2 + 6);
  }
  _m_prefetchw(BugCheckParameter2);
  if ( (*BugCheckParameter2 & 2) != 0 )
  {
    v6 = (signed __int64 *)BugCheckParameter2[2];
    v7 = BugCheckParameter2 + 7;
    v8 = 0LL;
    v9 = v6 || *v7;
    v10 = (unsigned int)*v7;
    if ( (_DWORD)v10 )
    {
      v13 = BugCheckParameter2[1];
      BugCheckParameter2[1] = 0LL;
      v47 = (_QWORD *)v13;
      *v7 = 0;
    }
    else if ( v6 )
    {
      if ( (signed __int64 *)*v6 == v6 )
      {
        BugCheckParameter2[2] = 0LL;
      }
      else
      {
        BugCheckParameter2[2] = *v6;
        v11 = *v6;
        v12 = (signed __int64 *)v6[1];
        if ( *(signed __int64 **)(*v6 + 8) != v6 || (signed __int64 *)*v12 != v6 )
LABEL_14:
          __fastfail(3u);
        *v12 = v11;
        *(_QWORD *)(v11 + 8) = v12;
      }
      v8 = v6[2];
      v10 = 1LL;
      v6[1] = (signed __int64)v6;
      *v6 = (signed __int64)v6;
      v47 = v6;
    }
    else
    {
      v10 = 0LL;
      v47 = 0LL;
    }
    v14 = (unsigned int)(2 * v9);
    _m_prefetchw(BugCheckParameter2);
    v15 = *BugCheckParameter2;
    if ( v8 )
    {
      v14 = (unsigned int)v14 | 1;
      v16 = v14;
      do
      {
        if ( BugCheckParameter2[2] || *v7 )
          v17 = v15 | 2;
        else
          v17 = v15 & 0xFFFFFFFFFFFFFFFDuLL;
        if ( v17 == v15 )
          break;
        v18 = v15;
        v15 = _InterlockedCompareExchange64(BugCheckParameter2, v17, v15);
      }
      while ( v18 != v15 );
    }
    else
    {
      do
      {
        if ( BugCheckParameter2[2] || *((_DWORD *)BugCheckParameter2 + 14) )
          v35 = v15 & 0xFFFFFFFFFFFFFFFCuLL | 2;
        else
          v35 = v15 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( (_DWORD)v10 )
          v35 += 4LL * (int)v10;
        v16 = 2 * v9;
        if ( v35 == v15 )
          break;
        v36 = v15;
        v15 = _InterlockedCompareExchange64(BugCheckParameter2, v35, v15);
      }
      while ( v36 != v15 );
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
    {
      KiReleaseQueuedSpinLockInstrumented(&v42, retaddr);
      goto LABEL_27;
    }
    _m_prefetchw(&v42);
    v21 = v42;
    if ( !v42 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v43, 0LL, (signed __int64)&v42) == &v42 )
        goto LABEL_27;
      v21 = KxWaitForLockChainValid(&v42);
    }
    v42 = 0LL;
    v22 = v43;
    if ( (((unsigned __int8)v22 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v21 + 8), (__int64)v43)) & 4) != 0 )
      KeWakeAddressAll(v21 + 8, v22, v14, v10);
LABEL_27:
    v19 = (2 * (v16 & 1) + 1) | 4;
    if ( (v16 & 2) == 0 )
      v19 = 2 * (v16 & 1) + 1;
    if ( !v47 )
    {
LABEL_30:
      v2 = a2;
      CurrentIrql = v48;
      goto LABEL_31;
    }
    v23 = KeGetCurrentIrql();
    v41 = v23;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v23, 2LL);
    CurrentPrcb = KeGetCurrentPrcb();
    v25 = v47;
    v26 = v19 & 4;
LABEL_51:
    v27 = v25;
    v25 = (_QWORD *)*v25;
    if ( v26 )
    {
      v28 = v27[6];
      if ( v28 )
        KiAbConvertWaiterToOwnerEntry(*(_QWORD *)(v28 - 88LL * (*(_BYTE *)(v28 + 8) & 0x3F) - 16));
    }
    KiAcquireKobjectLockSafe(v27 + 3);
    *((_DWORD *)v27 + 7) = 1;
    v29 = (_QWORD *)v27[4];
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v29 == v27 + 4 )
        {
LABEL_61:
          _InterlockedAnd((volatile signed __int32 *)v27 + 6, 0xFFFFFF7F);
          v26 = v19 & 4;
          if ( v25 == v47 )
          {
            KiRemoveBoostThread(CurrentPrcb);
            KiExitDispatcher(CurrentPrcb, v41);
            goto LABEL_30;
          }
          goto LABEL_51;
        }
        v30 = (_QWORD *)*v29;
        v31 = v29;
        v29 = v30;
        v32 = (_QWORD *)v31[1];
        if ( (_QWORD *)v30[1] != v31 || (_QWORD *)*v32 != v31 )
          goto LABEL_14;
        *v32 = v30;
        v30[1] = v32;
        v33 = *((_BYTE *)v31 + 16);
        if ( v33 != 1 )
          break;
        if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v31, *((unsigned __int16 *)v31 + 9), 0LL) )
        {
LABEL_60:
          if ( (*((_DWORD *)v27 + 7))-- == 1 )
            goto LABEL_61;
        }
      }
      if ( v33 == 2 )
      {
        *((_BYTE *)v31 + 17) = 5;
        KiInsertQueueInternal(v31[3], v31);
        goto LABEL_60;
      }
      if ( v33 == 4 )
      {
        *((_BYTE *)v31 + 17) = 5;
        *((_DWORD *)v27 + 7) = 0;
        KeInsertQueueDpc((PRKDPC)v31[3], v27 + 3, v31);
      }
      else
      {
        KiTryUnwaitThread(CurrentPrcb, v31, 256LL, 0LL);
      }
    }
  }
  _m_prefetchw(BugCheckParameter2);
  v37 = *BugCheckParameter2;
  do
  {
    if ( BugCheckParameter2[2] || *((_DWORD *)BugCheckParameter2 + 14) )
      v38 = v37 | 2;
    else
      v38 = v37 & 0xFFFFFFFFFFFFFFFDuLL;
    v39 = v38 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v39 == v37 )
      break;
    v40 = v37;
    v37 = _InterlockedCompareExchange64(BugCheckParameter2, v39, v37);
  }
  while ( v40 != v37 );
  KxReleaseQueuedSpinLock(&v42);
LABEL_31:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( v2 )
    return KeAbPostReleaseEx((ULONG_PTR)BugCheckParameter2, v2);
  return result;
}
