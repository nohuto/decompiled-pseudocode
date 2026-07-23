/*
 * XREFs of MiPostInsertVad @ 0x14028F1F0
 * Callers:
 *     MiInsertVad @ 0x140290150 (MiInsertVad.c)
 *     MiPerformVadSplitting @ 0x1403C877C (MiPerformVadSplitting.c)
 * Callees:
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14028D3B0 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x14028F9A0 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x14031D9A0 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1403368E0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1403369B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __fastcall MiPostInsertVad(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  _QWORD *v4; // r14
  __int64 *v5; // rax
  __int64 v6; // rbp
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  _QWORD *v12; // rbp
  struct _KTHREAD *v13; // rdi
  struct _KTHREAD *v14; // r11
  _KLOCK_ENTRIES *KernelAbEntries; // r8
  unsigned int i; // edx
  __int64 v17; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  bool v20; // zf
  struct _KTHREAD *v21; // rbp
  volatile _KAFFINITY_EX *ActiveProcessors; // rcx
  unsigned __int64 *v23; // r15
  __int64 v24; // r8
  __int64 v25; // r9
  volatile signed __int32 *v26; // rbx
  unsigned __int8 CurrentIrql; // r14
  unsigned int v28; // edi
  __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  bool v31; // r10
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // r9
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  char v36; // dl
  char v37; // cl
  char v38; // r9
  _DWORD *v39; // rcx
  _BOOL8 v40; // r11
  unsigned __int64 v41; // r10
  __int64 v42; // rcx
  _QWORD *v43; // rdx
  unsigned __int64 *v44; // rdx
  unsigned __int64 v45; // rcx
  signed __int32 v46; // eax
  signed __int32 v47; // ett
  __int64 v48; // rbx
  __int64 v49; // rcx
  _BOOL8 v50; // rax
  __int64 v51; // r11
  __int64 v52; // rbx
  _QWORD *v53; // rcx
  __int64 v54; // rcx
  unsigned __int64 *v55; // rbx
  unsigned __int64 v56; // rcx
  __int64 v57; // rax
  char v58; // bl
  __int64 v59; // rdi
  __int64 v60; // rdi
  __int64 v61; // r9
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( (*(_DWORD *)(a1 + 48) & 0x200000) == 0 )
  {
    v4 = (_QWORD *)(a1 + 96);
    v5 = *(__int64 **)(a1 + 72);
    *(_QWORD *)(a1 + 112) = (__int64)KeGetCurrentThread()->ApcState.Process | 1;
    v6 = *v5;
    CurrentThread = KeGetCurrentThread();
    v8 = v6 + 104;
    --CurrentThread->SpecialApcDisable;
    v9 = KeAbPreAcquire(v6 + 104, 0LL, 0LL);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 104), 0LL) )
      ExfAcquirePushLockExclusiveEx(v6 + 104, v9, v6 + 104);
    if ( v10 )
      *(_BYTE *)(v10 + 10) = 1;
    if ( (*(_DWORD *)(v6 + 56) & 0x400) == 0 )
    {
      v11 = *(_QWORD *)(v6 + 8);
      v12 = (_QWORD *)(v6 + 8);
      if ( *(_QWORD **)(v11 + 8) != v12 )
        __fastfail(3u);
      *v4 = v11;
      v4[1] = v12;
      *(_QWORD *)(v11 + 8) = v4;
      *v12 = v4;
    }
    v13 = KeGetCurrentThread();
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v8);
    v14 = KeGetCurrentThread();
    _disable();
    KernelAbEntries = v14->KernelAbEntries;
    for ( i = 0; i < KernelAbEntries->EntryCount; ++i )
    {
      v17 = (__int64)&KernelAbEntries->Entries[i];
      if ( (*(_QWORD *)v17 & 0x7FFFFFFFFFFFFFFCLL) == (v8 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_BYTE *)(v17 + 10)
        && (*(_QWORD *)v17 & 1) == 0 )
      {
        *(_BYTE *)(v17 + 10) = 0;
        KiAbEntryFreeAndEnableInterrupts(v17, (ULONG_PTR)v14, v8, 1LL, 0LL);
        goto LABEL_23;
      }
    }
    if ( (*((_DWORD *)&v14->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v14, v8, 0LL, 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v46 = *SchedulerAssist;
      do
      {
        v47 = v46;
        v46 = _InterlockedCompareExchange(SchedulerAssist, v46 & 0xFFDFFFFF, v46);
      }
      while ( v47 != v46 );
      if ( (v46 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
LABEL_23:
    v20 = v13->SpecialApcDisable++ == -1;
    if ( v20 && ($727077A9B6E167EAE1398C74674DC5A5 *)v13->ApcState.ApcListHead[0].Flink != &v13->152 )
      KiCheckForKernelApcDelivery();
  }
  if ( a3 )
  {
    v21 = KeGetCurrentThread();
    ActiveProcessors = v21->ApcState.Process[2].ActiveProcessors;
    v23 = &ActiveProcessors[2].StaticBitmap[29];
    --v21->SpecialApcDisable;
    ExAcquireAutoExpandPushLockExclusive((ULONG_PTR)&ActiveProcessors[4].StaticBitmap[6], 0LL);
    v26 = (volatile signed __int32 *)(v23 + 45);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v28 = 0;
      if ( _interlockedbittestandset(v26, 0x1Fu) )
        v28 = ExpWaitForSpinLockExclusiveAndAcquire(v23 + 45, CurrentIrql);
      v29 = *(unsigned int *)v26;
      v30 = v29 & 0xFFFFFFFFBFFFFFFFuLL;
      if ( (v29 & 0xBFFFFFFF) != 0x80000000 )
      {
        do
        {
          if ( (v29 & 0x40000000) == 0 )
            _InterlockedOr(v26, 0x40000000u);
          if ( (++v28 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v30, v29, v24, v25) )
          {
            HvlNotifyLongSpinWait(v28);
          }
          else
          {
            _mm_pause();
          }
          v29 = *(unsigned int *)v26;
        }
        while ( (*v26 & 0xBFFFFFFF) != 0x80000000 );
      }
    }
    else
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v23 + 45, CurrentIrql);
    }
    v31 = 0;
    v32 = v23[42];
    v33 = *(unsigned int *)(*(_QWORD *)(a3 + 24) + 24LL) | ((unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)(a3 + 24)
                                                                                                 + 32LL) << 32);
    if ( v32 )
    {
      while ( 1 )
      {
        v34 = *(_QWORD *)(v32 + 24);
        if ( v33 > (*(unsigned int *)(v34 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v34 + 33) << 32))
          || v33 >= (*(unsigned int *)(v34 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v34 + 32) << 32)) )
        {
          v35 = *(_QWORD *)(v32 + 8);
          if ( !v35 )
          {
            v31 = 1;
            break;
          }
        }
        else
        {
          v35 = *(_QWORD *)v32;
          if ( !*(_QWORD *)v32 )
            break;
        }
        v32 = v35;
      }
    }
    *(_QWORD *)a3 = 0LL;
    *(_QWORD *)(a3 + 8) = 0LL;
    *(_QWORD *)(a3 + 16) = v32;
    if ( !v32 )
    {
      v23[42] = a3;
      goto LABEL_52;
    }
    *(_QWORD *)(v32 + 8LL * v31) = a3;
    while ( 1 )
    {
      v36 = *(_BYTE *)(v32 + 16);
      v37 = 2 * v31 - 1;
      v38 = v36 & 3;
      if ( (v36 & 3) != 0 )
        break;
      a3 = v32;
      *(_BYTE *)(v32 + 16) = v36 ^ (v37 ^ v36) & 3;
      v32 = *(_QWORD *)(v32 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v32 )
        goto LABEL_52;
      v31 = *(_QWORD *)v32 != a3;
    }
    if ( v38 != (v37 & 3) )
    {
      *(_BYTE *)(v32 + 16) = v36 & 0xFC;
LABEL_52:
      v39 = v23 + 45;
      if ( CurrentIrql == 17 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          *v39 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v39, retaddr);
      }
      else
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          *v39 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v39, retaddr);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
      ExReleaseAutoExpandPushLockExclusive(
        (ULONG_PTR)&v21->ApcState.Process[2].ActiveProcessors[4].StaticBitmap[6],
        0LL);
      v20 = v21->SpecialApcDisable++ == -1;
      if ( v20 && ($727077A9B6E167EAE1398C74674DC5A5 *)v21->ApcState.ApcListHead[0].Flink != &v21->152 )
        KiCheckForKernelApcDelivery();
      return;
    }
    v40 = v31;
    if ( (*(_BYTE *)(a3 + 16) & 3) == v38 )
    {
      if ( (*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFFCuLL) == v32 && *(_QWORD *)(v32 + 8LL * v31) == a3 )
      {
        v42 = *(_QWORD *)(v32 + 16);
        v43 = (_QWORD *)(v42 & 0xFFFFFFFFFFFFFFFCuLL);
        if ( (v42 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
        {
          if ( v43[1] == v32 )
          {
            v43[1] = a3;
          }
          else
          {
            if ( *v43 != v32 )
              goto LABEL_70;
            *v43 = a3;
          }
        }
        else
        {
          if ( v23[42] != v32 )
            goto LABEL_70;
          v23[42] = a3;
        }
        v44 = (unsigned __int64 *)(a3 + 8LL * !v31);
        *(_QWORD *)(a3 + 16) ^= (*(_QWORD *)(a3 + 16) ^ v42) & 0xFFFFFFFFFFFFFFFCuLL;
        v45 = *v44;
        if ( *v44 )
        {
          v61 = *(_QWORD *)(v45 + 16);
          if ( (v61 & 0xFFFFFFFFFFFFFFFCuLL) != a3 )
            goto LABEL_70;
          *(_QWORD *)(v45 + 16) = v32 | v61 & 3;
        }
        *(_QWORD *)(v32 + 8LL * v31) = v45;
        *v44 = v32;
        *(_QWORD *)(v32 + 16) = a3 | *(_DWORD *)(v32 + 16) & 3;
        *(_BYTE *)(a3 + 16) &= 0xFCu;
        *(_BYTE *)(v32 + 16) &= 0xFCu;
        goto LABEL_52;
      }
    }
    else
    {
      v41 = *(_QWORD *)a3;
      if ( !v40 )
        v41 = *(_QWORD *)(a3 + 8);
      if ( (*(_QWORD *)(v41 + 16) & 0xFFFFFFFFFFFFFFFCuLL) == a3 && *(_QWORD *)(a3 + 8 * !v40) == v41 )
      {
        v48 = 8 * v40;
        if ( *(_QWORD *)(v32 + 8 * v40) == a3 && (*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFFCuLL) == v32 )
        {
          *(_QWORD *)(v32 + 8 * v40) = v41;
          *(_QWORD *)(v41 + 16) = v32 | *(_DWORD *)(v41 + 16) & 3;
          v49 = *(_QWORD *)(v41 + 8 * v40);
          if ( v49 )
          {
            v59 = *(_QWORD *)(v49 + 16);
            if ( (v59 & 0xFFFFFFFFFFFFFFFCuLL) != v41 )
              goto LABEL_70;
            *(_QWORD *)(v49 + 16) = a3 | v59 & 3;
          }
          v50 = v40;
          v51 = (unsigned int)v40 ^ 1;
          *(_QWORD *)(a3 + 8 * !v50) = v49;
          *(_QWORD *)(v41 + v48) = a3;
          *(_QWORD *)(a3 + 16) = v41 | *(_DWORD *)(a3 + 16) & 3;
          if ( (*(_QWORD *)(v41 + 16) & 0xFFFFFFFFFFFFFFFCuLL) == v32
            && *(_QWORD *)(v32 + 8 * ((unsigned int)v51 ^ 1LL)) == v41 )
          {
            v52 = *(_QWORD *)(v32 + 16);
            v53 = (_QWORD *)(v52 & 0xFFFFFFFFFFFFFFFCuLL);
            if ( (v52 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
            {
              if ( v53[1] == v32 )
              {
                v53[1] = v41;
              }
              else
              {
                if ( *v53 != v32 )
                  goto LABEL_70;
                *v53 = v41;
              }
            }
            else
            {
              if ( v23[42] != v32 )
                goto LABEL_70;
              v23[42] = v41;
            }
            v54 = v52 ^ *(_QWORD *)(v41 + 16);
            v55 = (unsigned __int64 *)(v41 + 8 * v51);
            *(_QWORD *)(v41 + 16) ^= v54 & 0xFFFFFFFFFFFFFFFCuLL;
            v56 = *v55;
            if ( !*v55 )
              goto LABEL_100;
            v60 = *(_QWORD *)(v56 + 16);
            if ( (v60 & 0xFFFFFFFFFFFFFFFCuLL) == v41 )
            {
              *(_QWORD *)(v56 + 16) = v32 | v60 & 3;
LABEL_100:
              *(_QWORD *)(v32 + 8 * ((unsigned int)v51 ^ 1LL)) = v56;
              *v55 = v32;
              v57 = v41 | *(_DWORD *)(v32 + 16) & 3;
              *(_QWORD *)(v32 + 16) = v57;
              *(_BYTE *)(v32 + 16) = v57 & 0xFC;
              v58 = *(_BYTE *)(a3 + 16);
              *(_BYTE *)(a3 + 16) = v58 & 0xFC;
              if ( v38 == (*(_BYTE *)(v41 + 16) & 3) )
              {
                *(_BYTE *)(v32 + 16) ^= (*(_BYTE *)(v32 + 16) ^ v38 ^ 0xFE) & 3;
                *(_BYTE *)(v41 + 16) &= 0xFCu;
              }
              else
              {
                if ( v38 == ((*(_BYTE *)(v41 + 16) ^ 0xFE) & 3) )
                  *(_BYTE *)(a3 + 16) = v58 ^ (v36 ^ v58) & 3;
                *(_BYTE *)(v41 + 16) &= 0xFCu;
              }
              goto LABEL_52;
            }
          }
        }
      }
    }
LABEL_70:
    __fastfail(0x1Du);
  }
}
