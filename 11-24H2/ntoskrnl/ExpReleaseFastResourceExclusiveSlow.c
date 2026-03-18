/*
 * XREFs of ExpReleaseFastResourceExclusiveSlow @ 0x14025D7C0
 * Callers:
 *     ExReleaseFastResource @ 0x14025BE50 (ExReleaseFastResource.c)
 *     ExpReleaseFastResourceExclusive @ 0x14025D6D0 (ExpReleaseFastResourceExclusive.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     KeAbPostReleaseEx @ 0x14025CCE0 (KeAbPostReleaseEx.c)
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiAcquireKobjectLockSafe @ 0x14031E740 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x14031E7A0 (KiExitDispatcher.c)
 *     KeWakeAddressAll @ 0x140321AA0 (KeWakeAddressAll.c)
 *     KxReleaseQueuedSpinLock @ 0x140321BB0 (KxReleaseQueuedSpinLock.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140321C90 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x140321D40 (KxWaitForLockChainValid.c)
 *     KiRemoveBoostThread @ 0x1403230A4 (KiRemoveBoostThread.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x140323370 (KiAbConvertWaiterToOwnerEntry.c)
 *     KiInsertQueueInternal @ 0x140323B94 (KiInsertQueueInternal.c)
 *     KiTryUnwaitThread @ 0x1403D95F0 (KiTryUnwaitThread.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall ExpReleaseFastResourceExclusiveSlow(signed __int64 *BugCheckParameter2, unsigned __int8 a2)
{
  unsigned __int8 v2; // si
  unsigned __int8 CurrentIrql; // di
  signed __int64 *v5; // rcx
  _DWORD *v6; // rdx
  signed __int64 v7; // r10
  BOOL v8; // r11d
  __int64 v9; // r9
  signed __int64 v10; // r9
  signed __int64 *v11; // r8
  signed __int64 v12; // rax
  __int64 v13; // r8
  signed __int64 v14; // rax
  char v15; // di
  signed __int64 v16; // rcx
  signed __int64 v17; // rtt
  char v18; // si
  __int64 result; // rax
  __int64 v20; // rax
  volatile signed __int64 *v21; // rdx
  unsigned __int8 v22; // al
  struct _KPRCB *CurrentPrcb; // rbp
  _QWORD *v24; // r12
  int v25; // eax
  _QWORD *v26; // r15
  __int64 v27; // rdx
  _QWORD *v28; // rdi
  _QWORD *v29; // rdx
  _QWORD *v30; // rax
  _QWORD *v31; // rcx
  char v32; // cl
  unsigned __int64 v34; // rcx
  signed __int64 v35; // rtt
  signed __int64 v36; // rax
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rcx
  signed __int64 v39; // rtt
  char v40; // [rsp+30h] [rbp-68h]
  __int64 v41; // [rsp+38h] [rbp-60h] BYREF
  volatile signed __int64 *v42; // [rsp+40h] [rbp-58h]
  __int64 v43; // [rsp+48h] [rbp-50h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  _QWORD *v46; // [rsp+B0h] [rbp+18h]
  unsigned __int8 v47; // [rsp+B8h] [rbp+20h]

  v2 = a2;
  v43 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v47 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags != (unsigned __int8)v43 )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  v41 = 0LL;
  v42 = BugCheckParameter2 + 6;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _InterlockedExchange64(BugCheckParameter2 + 6, (__int64)&v41) )
      KxWaitForLockOwnerShip(&v41);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(&v41, BugCheckParameter2 + 6);
  }
  _m_prefetchw(BugCheckParameter2);
  if ( (*BugCheckParameter2 & 2) != 0 )
  {
    v5 = (signed __int64 *)BugCheckParameter2[2];
    v6 = BugCheckParameter2 + 7;
    v7 = 0LL;
    v8 = v5 || *v6;
    v9 = (unsigned int)*v6;
    if ( (_DWORD)v9 )
    {
      v12 = BugCheckParameter2[1];
      BugCheckParameter2[1] = 0LL;
      v46 = (_QWORD *)v12;
      *v6 = 0;
    }
    else if ( v5 )
    {
      if ( (signed __int64 *)*v5 == v5 )
      {
        BugCheckParameter2[2] = 0LL;
      }
      else
      {
        BugCheckParameter2[2] = *v5;
        v10 = *v5;
        v11 = (signed __int64 *)v5[1];
        if ( *(signed __int64 **)(*v5 + 8) != v5 || (signed __int64 *)*v11 != v5 )
LABEL_14:
          __fastfail(3u);
        *v11 = v10;
        *(_QWORD *)(v10 + 8) = v11;
      }
      v7 = v5[2];
      v9 = 1LL;
      v5[1] = (signed __int64)v5;
      *v5 = (signed __int64)v5;
      v46 = v5;
    }
    else
    {
      v9 = 0LL;
      v46 = 0LL;
    }
    v13 = (unsigned int)(2 * v8);
    _m_prefetchw(BugCheckParameter2);
    v14 = *BugCheckParameter2;
    if ( v7 )
    {
      v13 = (unsigned int)v13 | 1;
      v15 = v13;
      do
      {
        if ( BugCheckParameter2[2] || *v6 )
          v16 = v14 | 2;
        else
          v16 = v14 & 0xFFFFFFFFFFFFFFFDuLL;
        if ( v16 == v14 )
          break;
        v17 = v14;
        v14 = _InterlockedCompareExchange64(BugCheckParameter2, v16, v14);
      }
      while ( v17 != v14 );
    }
    else
    {
      do
      {
        if ( BugCheckParameter2[2] || *((_DWORD *)BugCheckParameter2 + 14) )
          v34 = v14 & 0xFFFFFFFFFFFFFFFCuLL | 2;
        else
          v34 = v14 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( (_DWORD)v9 )
        {
          v6 = (_DWORD *)(int)v9;
          v34 += 4LL * (int)v9;
        }
        v15 = 2 * v8;
        if ( v34 == v14 )
          break;
        v35 = v14;
        v14 = _InterlockedCompareExchange64(BugCheckParameter2, v34, v14);
      }
      while ( v35 != v14 );
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
    {
      KiReleaseQueuedSpinLockInstrumented(&v41, retaddr, v13, v9);
      goto LABEL_27;
    }
    _m_prefetchw(&v41);
    v20 = v41;
    if ( !v41 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v42, 0LL, (signed __int64)&v41) == &v41 )
        goto LABEL_27;
      v20 = KxWaitForLockChainValid(&v41, v6, v13, v9);
    }
    v41 = 0LL;
    v21 = v42;
    if ( (((unsigned __int8)v21 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v20 + 8), (__int64)v42)) & 4) != 0 )
      KeWakeAddressAll(v20 + 8, v21, v13, v9);
LABEL_27:
    v18 = (2 * (v15 & 1) + 1) | 4;
    if ( (v15 & 2) == 0 )
      v18 = 2 * (v15 & 1) + 1;
    if ( !v46 )
    {
LABEL_30:
      v2 = a2;
      CurrentIrql = v47;
      goto LABEL_31;
    }
    v22 = KeGetCurrentIrql();
    v40 = v22;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v22, 2LL);
    CurrentPrcb = KeGetCurrentPrcb();
    v24 = v46;
    v25 = v18 & 4;
LABEL_51:
    v26 = v24;
    v24 = (_QWORD *)*v24;
    if ( v25 )
    {
      v27 = v26[6];
      if ( v27 )
        KiAbConvertWaiterToOwnerEntry(*(_QWORD *)(v27 - 88LL * (*(_BYTE *)(v27 + 8) & 0x3F) - 16));
    }
    KiAcquireKobjectLockSafe(v26 + 3);
    *((_DWORD *)v26 + 7) = 1;
    v28 = (_QWORD *)v26[4];
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v28 == v26 + 4 )
        {
LABEL_61:
          _InterlockedAnd((volatile signed __int32 *)v26 + 6, 0xFFFFFF7F);
          v25 = v18 & 4;
          if ( v24 == v46 )
          {
            KiRemoveBoostThread(CurrentPrcb);
            KiExitDispatcher(CurrentPrcb, v40);
            goto LABEL_30;
          }
          goto LABEL_51;
        }
        v29 = (_QWORD *)*v28;
        v30 = v28;
        v28 = v29;
        v31 = (_QWORD *)v30[1];
        if ( (_QWORD *)v29[1] != v30 || (_QWORD *)*v31 != v30 )
          goto LABEL_14;
        *v31 = v29;
        v29[1] = v31;
        v32 = *((_BYTE *)v30 + 16);
        if ( v32 != 1 )
          break;
        if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v30, *((unsigned __int16 *)v30 + 9), 0LL) )
        {
LABEL_60:
          if ( (*((_DWORD *)v26 + 7))-- == 1 )
            goto LABEL_61;
        }
      }
      if ( v32 == 2 )
      {
        *((_BYTE *)v30 + 17) = 5;
        KiInsertQueueInternal(v30[3], v30);
        goto LABEL_60;
      }
      if ( v32 == 4 )
      {
        *((_BYTE *)v30 + 17) = 5;
        *((_DWORD *)v26 + 7) = 0;
        KeInsertQueueDpc((PRKDPC)v30[3], v26 + 3, v30);
      }
      else
      {
        KiTryUnwaitThread(CurrentPrcb, v30, 256LL, 0LL);
      }
    }
  }
  _m_prefetchw(BugCheckParameter2);
  v36 = *BugCheckParameter2;
  do
  {
    if ( BugCheckParameter2[2] || *((_DWORD *)BugCheckParameter2 + 14) )
      v37 = v36 | 2;
    else
      v37 = v36 & 0xFFFFFFFFFFFFFFFDuLL;
    v38 = v37 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v38 == v36 )
      break;
    v39 = v36;
    v36 = _InterlockedCompareExchange64(BugCheckParameter2, v38, v36);
  }
  while ( v39 != v36 );
  KxReleaseQueuedSpinLock(&v41);
LABEL_31:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( v2 )
    return KeAbPostReleaseEx((ULONG_PTR)BugCheckParameter2, v2);
  return result;
}
