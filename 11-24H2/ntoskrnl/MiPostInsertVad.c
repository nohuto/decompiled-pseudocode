/*
 * XREFs of MiPostInsertVad @ 0x14025EBE0
 * Callers:
 *     MiInsertVad @ 0x14025FB40 (MiInsertVad.c)
 *     MiPerformVadSplitting @ 0x140405FC8 (MiPerformVadSplitting.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14020D580 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14020D650 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14025CDA0 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x14025F390 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x14033E4C0 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

void __fastcall MiPostInsertVad(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  _QWORD *v4; // r14
  __int64 *v5; // rax
  __int64 v6; // rbp
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 v12; // rax
  _QWORD *v13; // rbp
  struct _KTHREAD *v14; // rdi
  struct _KTHREAD *v15; // r11
  _KLOCK_ENTRIES *KernelAbEntries; // r8
  __int64 i; // rdx
  __int64 v18; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  bool v21; // zf
  struct _KTHREAD *v22; // rbp
  volatile _KAFFINITY_EX *ActiveProcessors; // rcx
  unsigned __int64 *v24; // r15
  __int64 v25; // r8
  volatile signed __int32 *v26; // rbx
  unsigned __int8 CurrentIrql; // r14
  unsigned int v28; // edi
  volatile signed __int32 v29; // edx
  __int64 v30; // rcx
  bool v31; // r10
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // r9
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  char v36; // dl
  char v37; // cl
  char v38; // r9
  _DWORD *v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  _BOOL8 v44; // r11
  unsigned __int64 v45; // r10
  __int64 v46; // rcx
  _QWORD *v47; // rdx
  unsigned __int64 *v48; // rdx
  unsigned __int64 v49; // rcx
  unsigned __int32 v50; // eax
  unsigned __int32 v51; // ett
  __int64 v52; // rbx
  __int64 v53; // rcx
  _BOOL8 v54; // rax
  __int64 v55; // r11
  __int64 v56; // rbx
  _QWORD *v57; // rcx
  __int64 v58; // rcx
  unsigned __int64 *v59; // rbx
  unsigned __int64 v60; // rcx
  __int64 v61; // rax
  char v62; // bl
  __int64 v63; // rdi
  __int64 v64; // rdi
  __int64 v65; // r9
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
    v11 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 104), 0LL) )
      ExfAcquirePushLockExclusiveEx(v6 + 104, v9, v6 + 104);
    if ( v11 )
      *(_BYTE *)(v11 + 10) = 1;
    if ( (*(_DWORD *)(v6 + 56) & 0x400) == 0 )
    {
      v12 = *(_QWORD *)(v6 + 8);
      v13 = (_QWORD *)(v6 + 8);
      if ( *(_QWORD **)(v12 + 8) != v13 )
        __fastfail(3u);
      *v4 = v12;
      v4[1] = v13;
      *(_QWORD *)(v12 + 8) = v4;
      *v13 = v4;
    }
    v14 = KeGetCurrentThread();
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v8);
    v15 = KeGetCurrentThread();
    _disable();
    KernelAbEntries = v15->KernelAbEntries;
    for ( i = 0LL; (unsigned int)i < KernelAbEntries->EntryCount; i = (unsigned int)(i + 1) )
    {
      v18 = (__int64)&KernelAbEntries->Entries[(unsigned int)i];
      v10 = *(_QWORD *)v18;
      if ( (*(_QWORD *)v18 & 0x7FFFFFFFFFFFFFFCLL) == (v8 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_BYTE *)(v18 + 10)
        && (v10 & 1) == 0 )
      {
        *(_BYTE *)(v18 + 10) = 0;
        KiAbEntryFreeAndEnableInterrupts(v18, (ULONG_PTR)v15, v8, 1, 0LL);
        goto LABEL_23;
      }
    }
    if ( (*((_DWORD *)&v15->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v15, v8, 0LL, 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v50 = *SchedulerAssist;
      do
      {
        i = v50;
        LODWORD(i) = v50 & 0xFFDFFFFF;
        v51 = v50;
        v50 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v50 & 0xFFDFFFFF, v50);
      }
      while ( v51 != v50 );
      if ( (v50 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
LABEL_23:
    v21 = v14->SpecialApcDisable++ == -1;
    if ( v21 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)v14->ApcState.ApcListHead[0].Flink != &v14->152 )
      KiCheckForKernelApcDelivery(CurrentPrcb, i, SchedulerAssist, v10);
  }
  if ( a3 )
  {
    v22 = KeGetCurrentThread();
    ActiveProcessors = v22->ApcState.Process[2].ActiveProcessors;
    v24 = &ActiveProcessors[2].StaticBitmap[29];
    --v22->SpecialApcDisable;
    ExAcquireAutoExpandPushLockExclusive((ULONG_PTR)&ActiveProcessors[4].StaticBitmap[6], 0LL);
    v26 = (volatile signed __int32 *)(v24 + 45);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v28 = 0;
      if ( _interlockedbittestandset(v26, 0x1Fu) )
        v28 = ExpWaitForSpinLockExclusiveAndAcquire((int *)v24 + 90, CurrentIrql, v25);
      v29 = *v26;
      v30 = *(unsigned int *)v26;
      LODWORD(v30) = v30 & 0xBFFFFFFF;
      if ( (_DWORD)v30 != 0x80000000 )
      {
        do
        {
          if ( (v29 & 0x40000000) == 0 )
            _InterlockedOr(v26, 0x40000000u);
          if ( (++v28 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v30) )
          {
            HvlNotifyLongSpinWait(v28);
          }
          else
          {
            _mm_pause();
          }
          v29 = *v26;
        }
        while ( (*v26 & 0xBFFFFFFF) != 0x80000000 );
      }
    }
    else
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented((int *)v24 + 90, CurrentIrql);
    }
    v31 = 0;
    v32 = v24[42];
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
      v24[42] = a3;
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
      v39 = v24 + 45;
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
        (ULONG_PTR)&v22->ApcState.Process[2].ActiveProcessors[4].StaticBitmap[6],
        0LL);
      v21 = v22->SpecialApcDisable++ == -1;
      if ( v21 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)v22->ApcState.ApcListHead[0].Flink != &v22->152 )
        KiCheckForKernelApcDelivery(v41, v40, v42, v43);
      return;
    }
    v44 = v31;
    if ( (*(_BYTE *)(a3 + 16) & 3) == v38 )
    {
      if ( (*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFFCuLL) == v32 && *(_QWORD *)(v32 + 8LL * v31) == a3 )
      {
        v46 = *(_QWORD *)(v32 + 16);
        v47 = (_QWORD *)(v46 & 0xFFFFFFFFFFFFFFFCuLL);
        if ( (v46 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
        {
          if ( v47[1] == v32 )
          {
            v47[1] = a3;
          }
          else
          {
            if ( *v47 != v32 )
              goto LABEL_70;
            *v47 = a3;
          }
        }
        else
        {
          if ( v24[42] != v32 )
            goto LABEL_70;
          v24[42] = a3;
        }
        v48 = (unsigned __int64 *)(a3 + 8LL * !v31);
        *(_QWORD *)(a3 + 16) ^= (*(_QWORD *)(a3 + 16) ^ v46) & 0xFFFFFFFFFFFFFFFCuLL;
        v49 = *v48;
        if ( *v48 )
        {
          v65 = *(_QWORD *)(v49 + 16);
          if ( (v65 & 0xFFFFFFFFFFFFFFFCuLL) != a3 )
            goto LABEL_70;
          *(_QWORD *)(v49 + 16) = v32 | v65 & 3;
        }
        *(_QWORD *)(v32 + 8LL * v31) = v49;
        *v48 = v32;
        *(_QWORD *)(v32 + 16) = a3 | *(_DWORD *)(v32 + 16) & 3;
        *(_BYTE *)(a3 + 16) &= 0xFCu;
        *(_BYTE *)(v32 + 16) &= 0xFCu;
        goto LABEL_52;
      }
    }
    else
    {
      v45 = *(_QWORD *)a3;
      if ( !v44 )
        v45 = *(_QWORD *)(a3 + 8);
      if ( (*(_QWORD *)(v45 + 16) & 0xFFFFFFFFFFFFFFFCuLL) == a3 && *(_QWORD *)(a3 + 8 * !v44) == v45 )
      {
        v52 = 8 * v44;
        if ( *(_QWORD *)(v32 + 8 * v44) == a3 && (*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFFCuLL) == v32 )
        {
          *(_QWORD *)(v32 + 8 * v44) = v45;
          *(_QWORD *)(v45 + 16) = v32 | *(_DWORD *)(v45 + 16) & 3;
          v53 = *(_QWORD *)(v45 + 8 * v44);
          if ( v53 )
          {
            v63 = *(_QWORD *)(v53 + 16);
            if ( (v63 & 0xFFFFFFFFFFFFFFFCuLL) != v45 )
              goto LABEL_70;
            *(_QWORD *)(v53 + 16) = a3 | v63 & 3;
          }
          v54 = v44;
          v55 = (unsigned int)v44 ^ 1;
          *(_QWORD *)(a3 + 8 * !v54) = v53;
          *(_QWORD *)(v45 + v52) = a3;
          *(_QWORD *)(a3 + 16) = v45 | *(_DWORD *)(a3 + 16) & 3;
          if ( (*(_QWORD *)(v45 + 16) & 0xFFFFFFFFFFFFFFFCuLL) == v32
            && *(_QWORD *)(v32 + 8 * ((unsigned int)v55 ^ 1LL)) == v45 )
          {
            v56 = *(_QWORD *)(v32 + 16);
            v57 = (_QWORD *)(v56 & 0xFFFFFFFFFFFFFFFCuLL);
            if ( (v56 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
            {
              if ( v57[1] == v32 )
              {
                v57[1] = v45;
              }
              else
              {
                if ( *v57 != v32 )
                  goto LABEL_70;
                *v57 = v45;
              }
            }
            else
            {
              if ( v24[42] != v32 )
                goto LABEL_70;
              v24[42] = v45;
            }
            v58 = v56 ^ *(_QWORD *)(v45 + 16);
            v59 = (unsigned __int64 *)(v45 + 8 * v55);
            *(_QWORD *)(v45 + 16) ^= v58 & 0xFFFFFFFFFFFFFFFCuLL;
            v60 = *v59;
            if ( !*v59 )
              goto LABEL_100;
            v64 = *(_QWORD *)(v60 + 16);
            if ( (v64 & 0xFFFFFFFFFFFFFFFCuLL) == v45 )
            {
              *(_QWORD *)(v60 + 16) = v32 | v64 & 3;
LABEL_100:
              *(_QWORD *)(v32 + 8 * ((unsigned int)v55 ^ 1LL)) = v60;
              *v59 = v32;
              v61 = v45 | *(_DWORD *)(v32 + 16) & 3;
              *(_QWORD *)(v32 + 16) = v61;
              *(_BYTE *)(v32 + 16) = v61 & 0xFC;
              v62 = *(_BYTE *)(a3 + 16);
              *(_BYTE *)(a3 + 16) = v62 & 0xFC;
              if ( v38 == (*(_BYTE *)(v45 + 16) & 3) )
              {
                *(_BYTE *)(v32 + 16) ^= (*(_BYTE *)(v32 + 16) ^ v38 ^ 0xFE) & 3;
                *(_BYTE *)(v45 + 16) &= 0xFCu;
              }
              else
              {
                if ( v38 == ((*(_BYTE *)(v45 + 16) ^ 0xFE) & 3) )
                  *(_BYTE *)(a3 + 16) = v62 ^ (v36 ^ v62) & 3;
                *(_BYTE *)(v45 + 16) &= 0xFCu;
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
