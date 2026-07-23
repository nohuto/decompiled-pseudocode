/*
 * XREFs of ExReleaseFastResource @ 0x14028C460
 * Callers:
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x140288470 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExpFastResourceLegacyRelease @ 0x140462AF4 (ExpFastResourceLegacyRelease.c)
 *     DifExReleaseFastResourceWrapper @ 0x14061EF90 (DifExReleaseFastResourceWrapper.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KeAbPostReleaseEx @ 0x14028D2F0 (KeAbPostReleaseEx.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x14028DDD0 (ExpReleaseFastResourceExclusiveSlow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
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
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall ExReleaseFastResource(ULONG_PTR BugCheckParameter2, __int64 *BugCheckParameter3)
{
  __int64 v2; // rax
  __int16 v5; // cx
  ULONG_PTR v6; // r8
  __int64 result; // rax
  struct _KTHREAD *v8; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v11; // rdx
  ULONG_PTR v12; // r9
  __int64 v13; // rax
  signed __int64 v14; // rax
  signed __int64 v15; // rcx
  signed __int64 v16; // rtt
  __int64 *v17; // rcx
  __int64 **v18; // rax
  unsigned __int8 v19; // r12
  __int64 v20; // rdx
  signed __int64 v21; // rdx
  __int64 v22; // r9
  __int64 v23; // r8
  _BOOL8 v24; // rax
  BOOL v25; // r15d
  unsigned __int64 v26; // rcx
  bool v27; // zf
  signed __int64 v28; // rax
  __int64 v29; // r14
  __int64 *v30; // rcx
  __int64 *v31; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  int v34; // r15d
  char v35; // cl
  int v36; // eax
  char v37; // r14
  __int64 *v38; // rcx
  __int64 **v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  unsigned __int32 v42; // eax
  __int64 v43; // rdx
  unsigned __int32 v44; // ett
  unsigned __int8 v45; // al
  int v46; // ecx
  __int64 *v47; // rax
  __int64 *v48; // r13
  __int64 v49; // rdx
  __int64 *v50; // r15
  __int64 *v51; // rcx
  __int64 *v52; // rax
  __int64 **v53; // rdx
  char v54; // cl
  __int64 v55; // rax
  __int64 v56; // rdx
  ULONG_PTR v57; // r9
  __int64 *v58; // rbx
  char v59; // bp
  __int64 *v60; // rcx
  __int64 **v61; // rax
  struct _KPRCB *v62; // rcx
  unsigned __int32 *v63; // r8
  __int64 v64; // rtt
  unsigned __int32 v65; // eax
  __int64 v66; // rdx
  unsigned __int32 v67; // ett
  __int64 *v68; // rax
  __int64 *v69; // [rsp+30h] [rbp-68h]
  char v70; // [rsp+38h] [rbp-60h]
  __int128 v71; // [rsp+40h] [rbp-58h] BYREF
  __int64 v72; // [rsp+50h] [rbp-48h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h]
  __int64 *v74; // [rsp+B0h] [rbp+18h]
  struct _KPRCB *v75; // [rsp+B8h] [rbp+20h]

  v2 = *(_QWORD *)BugCheckParameter2;
  v5 = *(_WORD *)(BugCheckParameter2 + 26) & 1;
  if ( (v2 & 1) == 0 )
  {
    if ( !v5 )
      goto LABEL_3;
    CurrentIrql = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    if ( CurrentIrql > 2u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
    if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
      goto LABEL_12;
    v11 = BugCheckParameter3[2];
    v12 = v11 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (struct _KTHREAD *)(v11 & 0xFFFFFFFFFFFFFFFEuLL) != CurrentThread )
      KeBugCheckEx(0x1C6u, 9uLL, (ULONG_PTR)BugCheckParameter3, v12, 0LL);
    if ( (*((_BYTE *)BugCheckParameter3 + 37) & 2) == 0 )
    {
      v13 = BugCheckParameter3[3];
      if ( v13 != BugCheckParameter2 )
      {
        if ( v13 )
          KeBugCheckEx(0x1C6u, 8uLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, BugCheckParameter3[3]);
      }
    }
    if ( (v11 & 1) != 0 )
      KeBugCheckEx(0x1C6u, 0xAuLL, (ULONG_PTR)BugCheckParameter3, 0LL, 0LL);
    --*((_DWORD *)BugCheckParameter3 + 8);
    v72 = 0LL;
    result = *((unsigned int *)BugCheckParameter3 + 8);
    v71 = 0LL;
    if ( (int)result > 0 )
      return result;
    _m_prefetchw((const void *)BugCheckParameter2);
    v14 = *(_QWORD *)BugCheckParameter2;
    while ( 1 )
    {
      v15 = v14 ^ (v14 ^ ((v14 & 0xFFFFFFFFFFFFFFFCuLL) - 1)) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (v15 & 2) != 0 && (v15 < 0 || (v15 & 0xFFFFFFFFFFFFFFFCuLL) == 0) )
        break;
      v16 = v14;
      v14 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v15, v14);
      if ( v16 == v14 )
      {
        _disable();
        v17 = (__int64 *)*BugCheckParameter3;
        v18 = (__int64 **)BugCheckParameter3[1];
        if ( *(__int64 **)(*BugCheckParameter3 + 8) != BugCheckParameter3 || *v18 != BugCheckParameter3 )
          goto LABEL_24;
        *v18 = v17;
        v17[1] = (__int64)v18;
        *BugCheckParameter3 = 0LL;
        BugCheckParameter3[1] = 0LL;
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v42 = *SchedulerAssist;
          do
          {
            v43 = v42;
            LODWORD(v43) = v42 & 0xFFDFFFFF;
            v44 = v42;
            v42 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v42 & 0xFFDFFFFF, v42);
          }
          while ( v44 != v42 );
          if ( (v42 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb, v43, SchedulerAssist, v12);
        }
        _enable();
        BugCheckParameter3[3] = 0LL;
LABEL_51:
        result = *((unsigned __int8 *)BugCheckParameter3 + 36);
        if ( (_BYTE)result )
        {
          result = KeAbPostReleaseEx(BugCheckParameter2);
          *((_BYTE *)BugCheckParameter3 + 36) = 0;
        }
        return result;
      }
    }
    v19 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v19, 2LL);
    *((_QWORD *)&v71 + 1) = BugCheckParameter2 + 48;
    *(_QWORD *)&v71 = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v20 = _InterlockedExchange64((volatile __int64 *)(BugCheckParameter2 + 48), (__int64)&v71);
      if ( v20 )
        KxWaitForLockOwnerShip(&v71, v20);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(&v71, BugCheckParameter2 + 48);
    }
    _m_prefetchw((const void *)BugCheckParameter2);
    v21 = *(_QWORD *)BugCheckParameter2;
    do
    {
      v22 = *(_QWORD *)(BugCheckParameter2 + 16);
      v23 = (v21 >> 2) - 1;
      v24 = v22 || *(_DWORD *)(BugCheckParameter2 + 56);
      v25 = v24;
      v26 = (v21 & 0xFFFFFFFFFFFFFFFDuLL | (2 * v24)) ^ ((v21 & 0xFFFFFFFFFFFFFFFDuLL | (2 * v24)) ^ ((v21 & 0xFFFFFFFFFFFFFFFCuLL | (2 * v24) & 0xFFFFFFFFFFFFFFFCuLL) - 1)) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v21 >> 2 == 1 )
      {
        if ( v22 )
        {
          v26 |= 1uLL;
        }
        else
        {
          v55 = *(unsigned int *)(BugCheckParameter2 + 56);
          if ( (_DWORD)v55 )
            v26 ^= (v26 ^ (v26 + 4 * v55)) & 0xFFFFFFFFFFFFFFFCuLL;
        }
      }
      if ( v26 == v21 )
        break;
      v28 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v26, v21);
      v27 = v21 == v28;
      v21 = v28;
    }
    while ( !v27 );
    v29 = 0LL;
    if ( !v23 )
    {
      v30 = *(__int64 **)(BugCheckParameter2 + 16);
      if ( v30 )
      {
        if ( (__int64 *)*v30 == v30 )
        {
          *(_QWORD *)(BugCheckParameter2 + 16) = 0LL;
        }
        else
        {
          *(_QWORD *)(BugCheckParameter2 + 16) = *v30;
          v23 = *v30;
          v31 = (__int64 *)v30[1];
          if ( *(__int64 **)(*v30 + 8) != v30 || (__int64 *)*v31 != v30 )
            goto LABEL_24;
          *v31 = v23;
          *(_QWORD *)(v23 + 8) = v31;
        }
        v29 = v30[2];
        v30[1] = (__int64)v30;
        *v30 = (__int64)v30;
        v74 = v30;
LABEL_60:
        v34 = 2 * v25;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
        {
          KiReleaseQueuedSpinLockInstrumented(&v71, retaddr);
          goto LABEL_63;
        }
        _m_prefetchw(&v71);
        v40 = v71;
        if ( !(_QWORD)v71 )
        {
          if ( (__int128 *)_InterlockedCompareExchange64(
                             *((volatile signed __int64 **)&v71 + 1),
                             0LL,
                             (signed __int64)&v71) == &v71 )
            goto LABEL_63;
          v40 = KxWaitForLockChainValid(&v71);
        }
        *(_QWORD *)&v71 = 0LL;
        v41 = *((_QWORD *)&v71 + 1);
        if ( (((unsigned __int8)v41 ^ (unsigned __int8)_InterlockedExchange64(
                                                         (volatile __int64 *)(v40 + 8),
                                                         *((__int64 *)&v71 + 1))) & 4) != 0 )
          KeWakeAddressAll(v40 + 8, v41, v23, v22);
LABEL_63:
        v35 = 3;
        if ( !v29 )
          v35 = 1;
        v36 = v34 & 2;
        if ( !v29 )
          v36 = v34;
        v37 = v35 | 4;
        if ( !v36 )
          v37 = v35;
        if ( !v74 )
        {
LABEL_70:
          v38 = (__int64 *)*BugCheckParameter3;
          v39 = (__int64 **)BugCheckParameter3[1];
          if ( *(__int64 **)(*BugCheckParameter3 + 8) == BugCheckParameter3 && *v39 == BugCheckParameter3 )
          {
            *v39 = v38;
            v38[1] = (__int64)v39;
            *BugCheckParameter3 = 0LL;
            BugCheckParameter3[1] = 0LL;
            BugCheckParameter3[3] = 0LL;
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v19);
            __writecr8(v19);
            goto LABEL_51;
          }
          goto LABEL_24;
        }
        v45 = KeGetCurrentIrql();
        v70 = v45;
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v45, 2LL);
        v46 = v37 & 4;
        v75 = KeGetCurrentPrcb();
        v47 = v74;
LABEL_85:
        v48 = v47;
        v69 = (__int64 *)*v47;
        if ( v46 )
        {
          v49 = v47[6];
          if ( v49 )
            KiAbConvertWaiterToOwnerEntry(*(_QWORD *)(v49 - 88LL * (*(_BYTE *)(v49 + 8) & 0x3F) - 16));
        }
        KiAcquireKobjectLockSafe(v48 + 3);
        *((_DWORD *)v48 + 7) = 1;
        v50 = (__int64 *)v48[4];
        while ( 1 )
        {
          while ( 1 )
          {
            if ( v50 == v48 + 4 )
            {
LABEL_95:
              _InterlockedAnd((volatile signed __int32 *)v48 + 6, 0xFFFFFF7F);
              v47 = v69;
              v46 = v37 & 4;
              if ( v69 == v74 )
              {
                KiRemoveBoostThread(v75);
                KiExitDispatcher(v75, v70);
                goto LABEL_70;
              }
              goto LABEL_85;
            }
            v51 = (__int64 *)*v50;
            v52 = v50;
            v50 = v51;
            v53 = (__int64 **)v52[1];
            if ( (__int64 *)v51[1] != v52 || *v53 != v52 )
              goto LABEL_24;
            *v53 = v51;
            v51[1] = (__int64)v53;
            v54 = *((_BYTE *)v52 + 16);
            if ( v54 != 1 )
              break;
            if ( (unsigned __int8)KiTryUnwaitThread(v75, v52, *((unsigned __int16 *)v52 + 9), 0LL) )
            {
LABEL_94:
              v27 = (*((_DWORD *)v48 + 7))-- == 1;
              if ( v27 )
                goto LABEL_95;
            }
          }
          if ( v54 == 2 )
          {
            *((_BYTE *)v52 + 17) = 5;
            KiInsertQueueInternal(v52[3], v52);
            goto LABEL_94;
          }
          if ( v54 == 4 )
          {
            *((_BYTE *)v52 + 17) = 5;
            *((_DWORD *)v48 + 7) = 0;
            KeInsertQueueDpc((PRKDPC)v52[3], v48 + 3, v52);
          }
          else
          {
            KiTryUnwaitThread(v75, v52, 256LL, 0LL);
          }
        }
      }
      if ( *(_DWORD *)(BugCheckParameter2 + 56) )
      {
        v68 = *(__int64 **)(BugCheckParameter2 + 8);
        *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
        v74 = v68;
        *(_DWORD *)(BugCheckParameter2 + 56) = 0;
        goto LABEL_60;
      }
    }
    v74 = 0LL;
    goto LABEL_60;
  }
  v6 = BugCheckParameter2 + 64;
  if ( !v5 )
LABEL_3:
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  result = KeGetCurrentIrql();
  v8 = KeGetCurrentThread();
  if ( (unsigned __int8)result > 2u )
    KeBugCheckEx(0x1C6u, 0LL, (unsigned __int8)result, 2uLL, 0LL);
  if ( !(_BYTE)result && (v8->MiscFlags & 0x400) == 0 && !v8->WaitBlock[3].SpareLong )
LABEL_12:
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v56 = *(_QWORD *)(BugCheckParameter2 + 80);
  v57 = v56 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (struct _KTHREAD *)(v56 & 0xFFFFFFFFFFFFFFFEuLL) != v8 )
    KeBugCheckEx(0x1C6u, 9uLL, v6, v57, 0LL);
  if ( (*(_BYTE *)(BugCheckParameter2 + 101) & 2) == 0 )
  {
    result = *(_QWORD *)(BugCheckParameter2 + 88);
    if ( result != BugCheckParameter2 )
    {
      if ( result )
        KeBugCheckEx(0x1C6u, 8uLL, BugCheckParameter2, BugCheckParameter2 + 64, *(_QWORD *)(BugCheckParameter2 + 88));
    }
  }
  if ( (v56 & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xAuLL, v6, 0LL, 0LL);
  v27 = (*(_DWORD *)(BugCheckParameter2 + 96))-- == 1;
  v58 = (__int64 *)(BugCheckParameter2 + 64);
  if ( !v27 )
    return result;
  v59 = *(_BYTE *)(BugCheckParameter2 + 100);
  _disable();
  v60 = (__int64 *)*v58;
  v61 = *(__int64 ***)(BugCheckParameter2 + 72);
  if ( *(__int64 **)(*v58 + 8) != v58 || *v61 != v58 )
LABEL_24:
    __fastfail(3u);
  *v61 = v60;
  v60[1] = (__int64)v61;
  *v58 = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 72) = 0LL;
  v62 = KeGetCurrentPrcb();
  v63 = (unsigned __int32 *)v62->SchedulerAssist;
  if ( v63 )
  {
    _m_prefetchw(v63);
    v65 = *v63;
    do
    {
      v66 = v65;
      LODWORD(v66) = v65 & 0xFFDFFFFF;
      v67 = v65;
      v65 = _InterlockedCompareExchange((volatile signed __int32 *)v63, v65 & 0xFFDFFFFF, v65);
    }
    while ( v67 != v65 );
    if ( (v65 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(v62, v66, v63, v57);
  }
  _enable();
  *(_QWORD *)(BugCheckParameter2 + 80) = 0LL;
  *(_BYTE *)(BugCheckParameter2 + 100) = 0;
  _m_prefetchw((const void *)BugCheckParameter2);
  result = *(_QWORD *)BugCheckParameter2;
  do
  {
    if ( (result & 2) != 0 )
      return ExpReleaseFastResourceExclusiveSlow(BugCheckParameter2);
    v64 = result;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, result);
  }
  while ( v64 != result );
  if ( v59 )
    return KeAbPostReleaseEx(BugCheckParameter2);
  return result;
}
