/*
 * XREFs of ExReleaseFastResource @ 0x14025BE50
 * Callers:
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x140257E60 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExpFastResourceLegacyRelease @ 0x140469BD0 (ExpFastResourceLegacyRelease.c)
 *     DifExReleaseFastResourceWrapper @ 0x1406209D0 (DifExReleaseFastResourceWrapper.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     KeAbPostReleaseEx @ 0x14025CCE0 (KeAbPostReleaseEx.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x14025D7C0 (ExpReleaseFastResourceExclusiveSlow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402D85F0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiAcquireKobjectLockSafe @ 0x14031E740 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x14031E7A0 (KiExitDispatcher.c)
 *     KeWakeAddressAll @ 0x140321AA0 (KeWakeAddressAll.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140321C90 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x140321D40 (KxWaitForLockChainValid.c)
 *     KiRemoveBoostThread @ 0x1403230A4 (KiRemoveBoostThread.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x140323370 (KiAbConvertWaiterToOwnerEntry.c)
 *     KiInsertQueueInternal @ 0x140323B94 (KiInsertQueueInternal.c)
 *     KiTryUnwaitThread @ 0x1403D95F0 (KiTryUnwaitThread.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
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
  __int64 v12; // rax
  signed __int64 v13; // rax
  signed __int64 v14; // rcx
  signed __int64 v15; // rtt
  __int64 *v16; // rcx
  __int64 **v17; // rax
  unsigned __int8 v18; // r12
  signed __int64 v19; // rdx
  __int64 v20; // r9
  __int64 v21; // r8
  _BOOL8 v22; // rax
  BOOL v23; // r15d
  unsigned __int64 v24; // rcx
  bool v25; // zf
  signed __int64 v26; // rax
  signed __int64 v27; // r14
  signed __int64 *v28; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int v31; // r15d
  char v32; // cl
  int v33; // eax
  char v34; // r14
  __int64 *v35; // rcx
  __int64 **v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  signed __int32 v39; // eax
  signed __int32 v40; // ett
  unsigned __int8 v41; // al
  int v42; // ecx
  signed __int64 *v43; // rax
  signed __int64 *v44; // r13
  __int64 v45; // rdx
  signed __int64 *v46; // r15
  signed __int64 *v47; // rcx
  signed __int64 *v48; // rax
  signed __int64 **v49; // rdx
  char v50; // cl
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 *v53; // rbx
  char v54; // bp
  __int64 *v55; // rcx
  __int64 **v56; // rax
  struct _KPRCB *v57; // rcx
  signed __int32 *v58; // r8
  __int64 v59; // rtt
  signed __int32 v60; // eax
  signed __int32 v61; // ett
  signed __int64 *v62; // rax
  signed __int64 *v63; // [rsp+30h] [rbp-68h]
  char v64; // [rsp+38h] [rbp-60h]
  __int128 v65; // [rsp+40h] [rbp-58h] BYREF
  __int64 v66; // [rsp+50h] [rbp-48h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  signed __int64 *v68; // [rsp+B0h] [rbp+18h]
  struct _KPRCB *v69; // [rsp+B8h] [rbp+20h]

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
    if ( (struct _KTHREAD *)(v11 & 0xFFFFFFFFFFFFFFFEuLL) != CurrentThread )
      KeBugCheckEx(0x1C6u, 9uLL, (ULONG_PTR)BugCheckParameter3, v11 & 0xFFFFFFFFFFFFFFFEuLL, 0LL);
    if ( (*((_BYTE *)BugCheckParameter3 + 37) & 2) == 0 )
    {
      v12 = BugCheckParameter3[3];
      if ( v12 != BugCheckParameter2 )
      {
        if ( v12 )
          KeBugCheckEx(0x1C6u, 8uLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, BugCheckParameter3[3]);
      }
    }
    if ( (v11 & 1) != 0 )
      KeBugCheckEx(0x1C6u, 0xAuLL, (ULONG_PTR)BugCheckParameter3, 0LL, 0LL);
    --*((_DWORD *)BugCheckParameter3 + 8);
    v66 = 0LL;
    result = *((unsigned int *)BugCheckParameter3 + 8);
    v65 = 0LL;
    if ( (int)result > 0 )
      return result;
    _m_prefetchw((const void *)BugCheckParameter2);
    v13 = *(_QWORD *)BugCheckParameter2;
    while ( 1 )
    {
      v14 = v13 ^ (v13 ^ ((v13 & 0xFFFFFFFFFFFFFFFCuLL) - 1)) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (v14 & 2) != 0 && (v14 < 0 || (v14 & 0xFFFFFFFFFFFFFFFCuLL) == 0) )
        break;
      v15 = v13;
      v13 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v14, v13);
      if ( v15 == v13 )
      {
        _disable();
        v16 = (__int64 *)*BugCheckParameter3;
        v17 = (__int64 **)BugCheckParameter3[1];
        if ( *(__int64 **)(*BugCheckParameter3 + 8) != BugCheckParameter3 || *v17 != BugCheckParameter3 )
          goto LABEL_24;
        *v17 = v16;
        v16[1] = (__int64)v17;
        *BugCheckParameter3 = 0LL;
        BugCheckParameter3[1] = 0LL;
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v39 = *SchedulerAssist;
          do
          {
            v40 = v39;
            v39 = _InterlockedCompareExchange(SchedulerAssist, v39 & 0xFFDFFFFF, v39);
          }
          while ( v40 != v39 );
          if ( (v39 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
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
    v18 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v18, 2LL);
    *((_QWORD *)&v65 + 1) = BugCheckParameter2 + 48;
    *(_QWORD *)&v65 = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _InterlockedExchange64((volatile __int64 *)(BugCheckParameter2 + 48), (__int64)&v65) )
        KxWaitForLockOwnerShip(&v65);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(&v65, BugCheckParameter2 + 48);
    }
    _m_prefetchw((const void *)BugCheckParameter2);
    v19 = *(_QWORD *)BugCheckParameter2;
    do
    {
      v20 = *(_QWORD *)(BugCheckParameter2 + 16);
      v21 = (v19 >> 2) - 1;
      v22 = v20 || *(_DWORD *)(BugCheckParameter2 + 56);
      v23 = v22;
      v24 = (v19 & 0xFFFFFFFFFFFFFFFDuLL | (2 * v22)) ^ ((v19 & 0xFFFFFFFFFFFFFFFDuLL | (2 * v22)) ^ ((v19 & 0xFFFFFFFFFFFFFFFCuLL | (2 * v22) & 0xFFFFFFFFFFFFFFFCuLL) - 1)) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v19 >> 2 == 1 )
      {
        if ( v20 )
        {
          v24 |= 1uLL;
        }
        else
        {
          v51 = *(unsigned int *)(BugCheckParameter2 + 56);
          if ( (_DWORD)v51 )
            v24 ^= (v24 ^ (v24 + 4 * v51)) & 0xFFFFFFFFFFFFFFFCuLL;
        }
      }
      if ( v24 == v19 )
        break;
      v26 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v24, v19);
      v25 = v19 == v26;
      v19 = v26;
    }
    while ( !v25 );
    v27 = 0LL;
    if ( !v21 )
    {
      v28 = *(signed __int64 **)(BugCheckParameter2 + 16);
      if ( v28 )
      {
        v19 = *v28;
        if ( (signed __int64 *)*v28 == v28 )
        {
          *(_QWORD *)(BugCheckParameter2 + 16) = 0LL;
        }
        else
        {
          *(_QWORD *)(BugCheckParameter2 + 16) = v19;
          v21 = *v28;
          v19 = v28[1];
          if ( *(signed __int64 **)(*v28 + 8) != v28 || *(signed __int64 **)v19 != v28 )
            goto LABEL_24;
          *(_QWORD *)v19 = v21;
          *(_QWORD *)(v21 + 8) = v19;
        }
        v27 = v28[2];
        v28[1] = (signed __int64)v28;
        *v28 = (signed __int64)v28;
        v68 = v28;
LABEL_60:
        v31 = 2 * v23;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
        {
          KiReleaseQueuedSpinLockInstrumented(&v65, retaddr, v21, v20);
          goto LABEL_63;
        }
        _m_prefetchw(&v65);
        v37 = v65;
        if ( !(_QWORD)v65 )
        {
          if ( (__int128 *)_InterlockedCompareExchange64(
                             *((volatile signed __int64 **)&v65 + 1),
                             0LL,
                             (signed __int64)&v65) == &v65 )
            goto LABEL_63;
          v37 = KxWaitForLockChainValid(&v65, v19, v21, v20);
        }
        *(_QWORD *)&v65 = 0LL;
        v38 = *((_QWORD *)&v65 + 1);
        if ( (((unsigned __int8)v38 ^ (unsigned __int8)_InterlockedExchange64(
                                                         (volatile __int64 *)(v37 + 8),
                                                         *((__int64 *)&v65 + 1))) & 4) != 0 )
          KeWakeAddressAll(v37 + 8, v38, v21, v20);
LABEL_63:
        v32 = 3;
        if ( !v27 )
          v32 = 1;
        v33 = v31 & 2;
        if ( !v27 )
          v33 = v31;
        v34 = v32 | 4;
        if ( !v33 )
          v34 = v32;
        if ( !v68 )
        {
LABEL_70:
          v35 = (__int64 *)*BugCheckParameter3;
          v36 = (__int64 **)BugCheckParameter3[1];
          if ( *(__int64 **)(*BugCheckParameter3 + 8) == BugCheckParameter3 && *v36 == BugCheckParameter3 )
          {
            *v36 = v35;
            v35[1] = (__int64)v36;
            *BugCheckParameter3 = 0LL;
            BugCheckParameter3[1] = 0LL;
            BugCheckParameter3[3] = 0LL;
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v18);
            __writecr8(v18);
            goto LABEL_51;
          }
          goto LABEL_24;
        }
        v41 = KeGetCurrentIrql();
        v64 = v41;
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v41, 2LL);
        v42 = v34 & 4;
        v69 = KeGetCurrentPrcb();
        v43 = v68;
LABEL_85:
        v44 = v43;
        v63 = (signed __int64 *)*v43;
        if ( v42 )
        {
          v45 = v43[6];
          if ( v45 )
            KiAbConvertWaiterToOwnerEntry(*(_QWORD *)(v45 - 88LL * (*(_BYTE *)(v45 + 8) & 0x3F) - 16));
        }
        KiAcquireKobjectLockSafe(v44 + 3);
        *((_DWORD *)v44 + 7) = 1;
        v46 = (signed __int64 *)v44[4];
        while ( 1 )
        {
          while ( 1 )
          {
            if ( v46 == v44 + 4 )
            {
LABEL_95:
              _InterlockedAnd((volatile signed __int32 *)v44 + 6, 0xFFFFFF7F);
              v43 = v63;
              v42 = v34 & 4;
              if ( v63 == v68 )
              {
                KiRemoveBoostThread(v69);
                KiExitDispatcher(v69, v64);
                goto LABEL_70;
              }
              goto LABEL_85;
            }
            v47 = (signed __int64 *)*v46;
            v48 = v46;
            v46 = v47;
            v49 = (signed __int64 **)v48[1];
            if ( (signed __int64 *)v47[1] != v48 || *v49 != v48 )
              goto LABEL_24;
            *v49 = v47;
            v47[1] = (signed __int64)v49;
            v50 = *((_BYTE *)v48 + 16);
            if ( v50 != 1 )
              break;
            if ( (unsigned __int8)KiTryUnwaitThread(v69, v48, *((unsigned __int16 *)v48 + 9), 0LL) )
            {
LABEL_94:
              v25 = (*((_DWORD *)v44 + 7))-- == 1;
              if ( v25 )
                goto LABEL_95;
            }
          }
          if ( v50 == 2 )
          {
            *((_BYTE *)v48 + 17) = 5;
            KiInsertQueueInternal(v48[3], v48);
            goto LABEL_94;
          }
          if ( v50 == 4 )
          {
            *((_BYTE *)v48 + 17) = 5;
            *((_DWORD *)v44 + 7) = 0;
            KeInsertQueueDpc((PRKDPC)v48[3], v44 + 3, v48);
          }
          else
          {
            KiTryUnwaitThread(v69, v48, 256LL, 0LL);
          }
        }
      }
      if ( *(_DWORD *)(BugCheckParameter2 + 56) )
      {
        v62 = *(signed __int64 **)(BugCheckParameter2 + 8);
        *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
        v68 = v62;
        *(_DWORD *)(BugCheckParameter2 + 56) = 0;
        goto LABEL_60;
      }
    }
    v68 = 0LL;
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
  v52 = *(_QWORD *)(BugCheckParameter2 + 80);
  if ( (struct _KTHREAD *)(v52 & 0xFFFFFFFFFFFFFFFEuLL) != v8 )
    KeBugCheckEx(0x1C6u, 9uLL, v6, v52 & 0xFFFFFFFFFFFFFFFEuLL, 0LL);
  if ( (*(_BYTE *)(BugCheckParameter2 + 101) & 2) == 0 )
  {
    result = *(_QWORD *)(BugCheckParameter2 + 88);
    if ( result != BugCheckParameter2 )
    {
      if ( result )
        KeBugCheckEx(0x1C6u, 8uLL, BugCheckParameter2, BugCheckParameter2 + 64, *(_QWORD *)(BugCheckParameter2 + 88));
    }
  }
  if ( (v52 & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xAuLL, v6, 0LL, 0LL);
  v25 = (*(_DWORD *)(BugCheckParameter2 + 96))-- == 1;
  v53 = (__int64 *)(BugCheckParameter2 + 64);
  if ( !v25 )
    return result;
  v54 = *(_BYTE *)(BugCheckParameter2 + 100);
  _disable();
  v55 = (__int64 *)*v53;
  v56 = *(__int64 ***)(BugCheckParameter2 + 72);
  if ( *(__int64 **)(*v53 + 8) != v53 || *v56 != v53 )
LABEL_24:
    __fastfail(3u);
  *v56 = v55;
  v55[1] = (__int64)v56;
  *v53 = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 72) = 0LL;
  v57 = KeGetCurrentPrcb();
  v58 = (signed __int32 *)v57->SchedulerAssist;
  if ( v58 )
  {
    _m_prefetchw(v58);
    v60 = *v58;
    do
    {
      v61 = v60;
      v60 = _InterlockedCompareExchange(v58, v60 & 0xFFDFFFFF, v60);
    }
    while ( v61 != v60 );
    if ( (v60 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(v57);
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
    v59 = result;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, result);
  }
  while ( v59 != result );
  if ( v54 )
    return KeAbPostReleaseEx(BugCheckParameter2);
  return result;
}
