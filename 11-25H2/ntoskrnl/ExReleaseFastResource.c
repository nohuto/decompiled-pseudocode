/*
 * XREFs of ExReleaseFastResource @ 0x140298850
 * Callers:
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x1402991C0 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExpFastResourceLegacyRelease @ 0x14046B870 (ExpFastResourceLegacyRelease.c)
 *     DifExReleaseFastResourceWrapper @ 0x140614A10 (DifExReleaseFastResourceWrapper.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     KeAbPostReleaseEx @ 0x14027D430 (KeAbPostReleaseEx.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x14027D4F0 (ExpReleaseFastResourceExclusiveSlow.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x14027E670 (KiAbConvertWaiterToOwnerEntry.c)
 *     KiRemoveBoostThread @ 0x14027EE94 (KiRemoveBoostThread.c)
 *     KiInsertQueueInternal @ 0x14027F170 (KiInsertQueueInternal.c)
 *     KiTryUnwaitThread @ 0x140280490 (KiTryUnwaitThread.c)
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FF4DC (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiHaltOnAddressWakeEntireList @ 0x1404F668C (KiHaltOnAddressWakeEntireList.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall ExReleaseFastResource(ULONG_PTR BugCheckParameter2, __int64 *BugCheckParameter3, __int64 a3)
{
  __int64 v3; // rax
  __int16 v6; // cx
  ULONG_PTR v7; // r8
  __int64 result; // rax
  struct _KTHREAD *v9; // rcx
  __int64 v10; // rdx
  unsigned __int64 v11; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v14; // rdx
  ULONG_PTR v15; // r9
  __int64 v16; // rax
  signed __int64 v17; // rax
  signed __int64 v18; // rcx
  signed __int64 v19; // rtt
  __int64 *v20; // rcx
  __int64 **v21; // rax
  unsigned __int8 v22; // r13
  __int64 v23; // rdx
  signed __int64 v24; // rdx
  __int64 v25; // r9
  __int64 v26; // r8
  _BOOL8 v27; // rax
  BOOL v28; // r12d
  unsigned __int64 v29; // rcx
  bool v30; // zf
  signed __int64 v31; // rax
  __int64 v32; // r15
  volatile signed __int32 *v33; // rcx
  __int64 v34; // r8
  volatile signed __int32 **v35; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v38; // eax
  signed __int32 v39; // ett
  int v40; // r12d
  __int64 v41; // rax
  unsigned __int8 v42; // cl
  bool v43; // di
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rcx
  struct _KPRCB *v47; // rcx
  signed __int32 *v48; // r8
  int v49; // ecx
  int v50; // eax
  unsigned int v51; // edi
  __int64 *v52; // rcx
  __int64 **v53; // rax
  signed __int32 v54; // eax
  signed __int32 v55; // ett
  __int64 v56; // rax
  struct _KPRCB *v57; // r15
  volatile signed __int32 *v58; // rax
  int v59; // ecx
  volatile signed __int32 *v60; // r14
  __int64 v61; // rdx
  _QWORD *v62; // r12
  _QWORD *v63; // r14
  _QWORD *v64; // rcx
  __int64 v65; // rax
  _QWORD *v66; // rdx
  char v67; // cl
  __int64 *v68; // rdi
  ULONG_PTR v69; // rsi
  __int64 *v70; // rax
  __int64 **v71; // rcx
  struct _KPRCB *v72; // rcx
  signed __int32 *v73; // r8
  __int64 v74; // rtt
  signed __int32 v75; // eax
  signed __int32 v76; // ett
  __int64 v77; // rax
  volatile signed __int32 *v78; // rax
  signed __int32 v79[8]; // [rsp+0h] [rbp-98h] BYREF
  volatile signed __int32 *v80; // [rsp+30h] [rbp-68h]
  volatile signed __int32 *v81; // [rsp+38h] [rbp-60h]
  __int64 v82; // [rsp+40h] [rbp-58h]
  __int128 v83; // [rsp+48h] [rbp-50h] BYREF
  __int64 v84; // [rsp+58h] [rbp-40h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  volatile signed __int32 *v86; // [rsp+B0h] [rbp+18h]
  _DWORD *SystemArgument1; // [rsp+B8h] [rbp+20h]

  v3 = *(_QWORD *)BugCheckParameter2;
  v6 = *(_WORD *)(BugCheckParameter2 + 26) & 1;
  if ( (v3 & 1) == 0 )
  {
    if ( !v6 )
      goto LABEL_3;
    CurrentIrql = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    if ( CurrentIrql > 2u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
    if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
      goto LABEL_15;
    v14 = BugCheckParameter3[2];
    v15 = v14 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (struct _KTHREAD *)(v14 & 0xFFFFFFFFFFFFFFFEuLL) != CurrentThread )
      KeBugCheckEx(0x1C6u, 9uLL, (ULONG_PTR)BugCheckParameter3, v15, 0LL);
    if ( (*((_BYTE *)BugCheckParameter3 + 37) & 2) == 0 )
    {
      v16 = BugCheckParameter3[3];
      if ( v16 != BugCheckParameter2 )
      {
        if ( v16 )
          KeBugCheckEx(0x1C6u, 8uLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, BugCheckParameter3[3]);
      }
    }
    if ( (v14 & 1) != 0 )
      KeBugCheckEx(0x1C6u, 0xAuLL, (ULONG_PTR)BugCheckParameter3, 0LL, 0LL);
    --*((_DWORD *)BugCheckParameter3 + 8);
    v84 = 0LL;
    result = *((unsigned int *)BugCheckParameter3 + 8);
    v83 = 0LL;
    if ( (int)result > 0 )
      return result;
    _m_prefetchw((const void *)BugCheckParameter2);
    v17 = *(_QWORD *)BugCheckParameter2;
    while ( 1 )
    {
      v18 = v17 ^ (v17 ^ ((v17 & 0xFFFFFFFFFFFFFFFCuLL) - 1)) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (v18 & 2) != 0 && (v18 < 0 || (v18 & 0xFFFFFFFFFFFFFFFCuLL) == 0) )
        break;
      v19 = v17;
      v17 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v18, v17);
      if ( v19 == v17 )
      {
        _disable();
        v20 = (__int64 *)*BugCheckParameter3;
        v21 = (__int64 **)BugCheckParameter3[1];
        if ( *(__int64 **)(*BugCheckParameter3 + 8) != BugCheckParameter3 || *v21 != BugCheckParameter3 )
          goto LABEL_28;
        *v21 = v20;
        v20[1] = (__int64)v21;
        *BugCheckParameter3 = 0LL;
        BugCheckParameter3[1] = 0LL;
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v38 = *SchedulerAssist;
          do
          {
            v39 = v38;
            v38 = _InterlockedCompareExchange(SchedulerAssist, v38 & 0xFFDFFFFF, v38);
          }
          while ( v39 != v38 );
          if ( (v38 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        _enable();
        BugCheckParameter3[3] = 0LL;
LABEL_52:
        result = *((unsigned __int8 *)BugCheckParameter3 + 36);
        if ( (_BYTE)result )
        {
          result = KeAbPostReleaseEx(BugCheckParameter2, *((unsigned __int8 *)BugCheckParameter3 + 36));
          *((_BYTE *)BugCheckParameter3 + 36) = 0;
        }
        return result;
      }
    }
    v22 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v22);
    *((_QWORD *)&v83 + 1) = BugCheckParameter2 + 48;
    *(_QWORD *)&v83 = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v23 = _InterlockedExchange64((volatile __int64 *)(BugCheckParameter2 + 48), (__int64)&v83);
      if ( v23 )
        KxWaitForLockOwnerShip(&v83, v23, a3, v15);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(&v83, BugCheckParameter2 + 48);
    }
    _m_prefetchw((const void *)BugCheckParameter2);
    v24 = *(_QWORD *)BugCheckParameter2;
    do
    {
      v25 = *(_QWORD *)(BugCheckParameter2 + 16);
      v26 = (v24 >> 2) - 1;
      v27 = v25 || *(_DWORD *)(BugCheckParameter2 + 56);
      v28 = v27;
      v29 = (v24 & 0xFFFFFFFFFFFFFFFDuLL | (2 * v27)) ^ ((v24 & 0xFFFFFFFFFFFFFFFDuLL | (2 * v27)) ^ ((v24 & 0xFFFFFFFFFFFFFFFCuLL | (2 * v27) & 0xFFFFFFFFFFFFFFFCuLL) - 1)) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v24 >> 2 == 1 )
      {
        if ( v25 )
        {
          v29 |= 1uLL;
        }
        else
        {
          v77 = *(unsigned int *)(BugCheckParameter2 + 56);
          if ( (_DWORD)v77 )
            v29 ^= (v29 ^ (v29 + 4 * v77)) & 0xFFFFFFFFFFFFFFFCuLL;
        }
      }
      if ( v29 == v24 )
        break;
      v31 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v29, v24);
      v30 = v24 == v31;
      v24 = v31;
    }
    while ( !v30 );
    v32 = 0LL;
    if ( !v26 )
    {
      v33 = *(volatile signed __int32 **)(BugCheckParameter2 + 16);
      if ( v33 )
      {
        if ( *(volatile signed __int32 **)v33 == v33 )
        {
          *(_QWORD *)(BugCheckParameter2 + 16) = 0LL;
        }
        else
        {
          *(_QWORD *)(BugCheckParameter2 + 16) = *(_QWORD *)v33;
          v34 = *(_QWORD *)v33;
          v35 = (volatile signed __int32 **)*((_QWORD *)v33 + 1);
          if ( *(volatile signed __int32 **)(*(_QWORD *)v33 + 8LL) != v33 || *v35 != v33 )
            goto LABEL_28;
          *v35 = (volatile signed __int32 *)v34;
          *(_QWORD *)(v34 + 8) = v35;
        }
        v32 = *((_QWORD *)v33 + 2);
        *((_QWORD *)v33 + 1) = v33;
        *(_QWORD *)v33 = v33;
        v86 = v33;
LABEL_63:
        v40 = 2 * v28;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        {
          _m_prefetchw(&v83);
          v41 = v83;
          if ( !(_QWORD)v83 )
          {
            if ( (__int128 *)_InterlockedCompareExchange64(
                               *((volatile signed __int64 **)&v83 + 1),
                               0LL,
                               (signed __int64)&v83) == &v83 )
              goto LABEL_71;
            v41 = KxWaitForLockChainValid((__int64 *)&v83);
          }
          *(_QWORD *)&v83 = 0LL;
          v42 = BYTE8(v83);
          if ( ((v42 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v41 + 8), *((__int64 *)&v83 + 1))) & 4) != 0 )
          {
            _InterlockedOr(v79, 0);
            v43 = KeDisableInterrupts();
            KiHaltOnAddressWakeEntireList(v46, _InterlockedExchange64((volatile __int64 *)(v45 + 8 * v44), 0LL));
            if ( v43 )
            {
              v47 = KeGetCurrentPrcb();
              v48 = (signed __int32 *)v47->SchedulerAssist;
              if ( v48 )
              {
                _m_prefetchw(v48);
                v54 = *v48;
                do
                {
                  v55 = v54;
                  v54 = _InterlockedCompareExchange(v48, v54 & 0xFFDFFFFF, v54);
                }
                while ( v55 != v54 );
                if ( (v54 & 0x200000) != 0 )
                  KiRemoveSystemWorkPriorityKick((__int64)v47);
              }
              _enable();
            }
          }
        }
        else
        {
          KiReleaseQueuedSpinLockInstrumented(&v83, retaddr);
        }
LABEL_71:
        v49 = 3;
        if ( !v32 )
          v49 = 1;
        v50 = v40 & 2;
        if ( !v32 )
          v50 = v40;
        v51 = v49 | 4;
        if ( !v50 )
          v51 = v49;
        if ( !v86 )
        {
LABEL_78:
          v52 = (__int64 *)*BugCheckParameter3;
          v53 = (__int64 **)BugCheckParameter3[1];
          if ( *(__int64 **)(*BugCheckParameter3 + 8) == BugCheckParameter3 && *v53 == BugCheckParameter3 )
          {
            *v53 = v52;
            v52[1] = (__int64)v53;
            *BugCheckParameter3 = 0LL;
            BugCheckParameter3[1] = 0LL;
            BugCheckParameter3[3] = 0LL;
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v22);
            __writecr8(v22);
            goto LABEL_52;
          }
          goto LABEL_28;
        }
        v56 = KeGetCurrentIrql();
        v82 = v56;
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v56);
        v57 = KeGetCurrentPrcb();
        v58 = v86;
        v59 = v51 & 4;
LABEL_92:
        v80 = v58;
        v60 = v58;
        v81 = *(volatile signed __int32 **)v58;
        if ( v59 )
        {
          v61 = *((_QWORD *)v58 + 6);
          if ( v61 )
            KiAbConvertWaiterToOwnerEntry(*(_QWORD *)(v61 - 88LL * (*(_BYTE *)(v61 + 8) & 0x3F) - 16), v61, 1LL, 1LL);
        }
        SystemArgument1 = v60 + 6;
        KiAcquireKobjectLockSafe(v60 + 6);
        v62 = v60 + 8;
        *((_DWORD *)v60 + 7) = 1;
        v63 = (_QWORD *)*((_QWORD *)v60 + 4);
        while ( 1 )
        {
          while ( 1 )
          {
            if ( v63 == v62 )
            {
LABEL_102:
              _InterlockedAnd(v80 + 6, 0xFFFFFF7F);
              v58 = v81;
              v59 = v51 & 4;
              if ( v81 == v86 )
              {
                KiRemoveBoostThread(v57, (__int64)v57->CurrentThread);
                KiExitDispatcher(v57, 0LL, 1u, (v51 >> 1) & 1, v82);
                goto LABEL_78;
              }
              goto LABEL_92;
            }
            v64 = (_QWORD *)*v63;
            v65 = (__int64)v63;
            v63 = v64;
            v66 = *(_QWORD **)(v65 + 8);
            if ( v64[1] != v65 || *v66 != v65 )
              goto LABEL_28;
            *v66 = v64;
            v64[1] = v66;
            v67 = *(_BYTE *)(v65 + 16);
            if ( v67 != 1 )
              break;
            if ( (unsigned __int8)KiTryUnwaitThread((__int64)v57, v65, *(unsigned __int16 *)(v65 + 18), 0LL) )
            {
LABEL_101:
              v30 = SystemArgument1[1]-- == 1;
              if ( v30 )
                goto LABEL_102;
            }
          }
          if ( v67 == 2 )
          {
            *(_BYTE *)(v65 + 17) = 5;
            KiInsertQueueInternal(*(_QWORD *)(v65 + 24), (__int64 *)v65);
            goto LABEL_101;
          }
          if ( v67 == 4 )
          {
            *(_BYTE *)(v65 + 17) = 5;
            SystemArgument1[1] = 0;
            KeInsertQueueDpc(*(PRKDPC *)(v65 + 24), SystemArgument1, (PVOID)v65);
          }
          else
          {
            KiTryUnwaitThread((__int64)v57, v65, 256LL, 0LL);
          }
        }
      }
      if ( *(_DWORD *)(BugCheckParameter2 + 56) )
      {
        v78 = *(volatile signed __int32 **)(BugCheckParameter2 + 8);
        *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
        v86 = v78;
        *(_DWORD *)(BugCheckParameter2 + 56) = 0;
        goto LABEL_63;
      }
    }
    v86 = 0LL;
    goto LABEL_63;
  }
  v7 = BugCheckParameter2 + 64;
  if ( !v6 )
LABEL_3:
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  result = KeGetCurrentIrql();
  v9 = KeGetCurrentThread();
  if ( (unsigned __int8)result > 2u )
    KeBugCheckEx(0x1C6u, 0LL, (unsigned __int8)result, 2uLL, 0LL);
  if ( !(_BYTE)result && (v9->MiscFlags & 0x400) == 0 && !v9->WaitBlock[3].SpareLong )
LABEL_15:
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v10 = *(_QWORD *)(BugCheckParameter2 + 80);
  v11 = v10 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (struct _KTHREAD *)(v10 & 0xFFFFFFFFFFFFFFFEuLL) != v9 )
    KeBugCheckEx(0x1C6u, 9uLL, v7, v11, 0LL);
  if ( (*(_BYTE *)(BugCheckParameter2 + 101) & 2) == 0 )
  {
    result = *(_QWORD *)(BugCheckParameter2 + 88);
    if ( result != BugCheckParameter2 )
    {
      if ( result )
        KeBugCheckEx(0x1C6u, 8uLL, BugCheckParameter2, BugCheckParameter2 + 64, *(_QWORD *)(BugCheckParameter2 + 88));
    }
  }
  if ( (v10 & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xAuLL, v7, 0LL, 0LL);
  v30 = (*(_DWORD *)(BugCheckParameter2 + 96))-- == 1;
  v68 = (__int64 *)(BugCheckParameter2 + 64);
  if ( !v30 )
    return result;
  v69 = *(unsigned __int8 *)(BugCheckParameter2 + 100);
  _disable();
  v70 = (__int64 *)*v68;
  v71 = *(__int64 ***)(BugCheckParameter2 + 72);
  if ( *(__int64 **)(*v68 + 8) != v68 || *v71 != v68 )
LABEL_28:
    __fastfail(3u);
  *v71 = v70;
  v70[1] = (__int64)v71;
  *v68 = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 72) = 0LL;
  v72 = KeGetCurrentPrcb();
  v73 = (signed __int32 *)v72->SchedulerAssist;
  if ( v73 )
  {
    _m_prefetchw(v73);
    v75 = *v73;
    do
    {
      v76 = v75;
      v75 = _InterlockedCompareExchange(v73, v75 & 0xFFDFFFFF, v75);
    }
    while ( v76 != v75 );
    if ( (v75 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick((__int64)v72);
  }
  _enable();
  *(_QWORD *)(BugCheckParameter2 + 80) = 0LL;
  *(_BYTE *)(BugCheckParameter2 + 100) = 0;
  _m_prefetchw((const void *)BugCheckParameter2);
  result = *(_QWORD *)BugCheckParameter2;
  do
  {
    if ( (result & 2) != 0 )
      return ExpReleaseFastResourceExclusiveSlow((_QWORD *)BugCheckParameter2, v69, (__int64)v73, v11);
    v74 = result;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, result);
  }
  while ( v74 != result );
  if ( (_BYTE)v69 )
    return KeAbPostReleaseEx(BugCheckParameter2, v69);
  return result;
}
