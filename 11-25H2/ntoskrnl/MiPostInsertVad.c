/*
 * XREFs of MiPostInsertVad @ 0x1402BCBB0
 * Callers:
 *     MiPerformVadSplitting @ 0x1402A3F44 (MiPerformVadSplitting.c)
 *     MiInsertVad @ 0x1402A80AC (MiInsertVad.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14029BA20 (KiAbEntryFreeAndEnableInterrupts.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1402BD2A0 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1402BD440 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

void __fastcall MiPostInsertVad(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  _QWORD *v4; // r14
  __int64 *v5; // rax
  __int64 v6; // rbp
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v8; // rbx
  __int64 *v9; // rax
  __int64 *v10; // rdi
  __int64 v11; // rax
  _QWORD *v12; // rbp
  struct _KTHREAD *v13; // rdi
  struct _KTHREAD *v14; // r10
  _KLOCK_ENTRIES *KernelAbEntries; // r9
  __int64 i; // rdx
  __int64 v17; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  bool v20; // zf
  struct _KTHREAD *v21; // rbx
  volatile _KAFFINITY_EX *ActiveProcessors; // rcx
  unsigned __int64 *v23; // r15
  KIRQL v24; // al
  bool v25; // r10
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // r14
  unsigned __int64 v28; // r9
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  char v31; // dl
  char v32; // cl
  char v33; // r9
  _DWORD *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  _BOOL8 v39; // r11
  unsigned __int64 v40; // r10
  __int64 v41; // rdx
  _QWORD *v42; // rcx
  __int64 v43; // rcx
  unsigned __int64 *v44; // rdx
  unsigned __int64 v45; // rcx
  unsigned __int32 v46; // eax
  unsigned __int32 v47; // ett
  __int64 v48; // rdi
  _QWORD *v49; // rcx
  __int64 v50; // rcx
  unsigned __int64 *v51; // rdi
  unsigned __int64 v52; // rcx
  __int64 v53; // rax
  char v54; // di
  __int64 v55; // rbp
  __int64 v56; // rdi
  __int64 v57; // rcx
  _BOOL8 v58; // rax
  __int64 v59; // r11
  __int64 v60; // rbp
  __int64 v61; // r9
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( (*(_DWORD *)(a1 + 48) & 0x200000) == 0 )
  {
    v4 = (_QWORD *)(a1 + 96);
    v5 = *(__int64 **)(a1 + 72);
    *(_QWORD *)(a1 + 112) = (__int64)KeGetCurrentThread()->ApcState.Process | 1;
    v6 = *v5;
    CurrentThread = KeGetCurrentThread();
    v8 = v6 + 104;
    --CurrentThread->SpecialApcDisable;
    v9 = KeAbPreAcquire(v6 + 104, 0LL);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 104), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 104), v9, v6 + 104);
    if ( v10 )
      *((_BYTE *)v10 + 10) = 1;
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
    for ( i = 0LL; (unsigned int)i < KernelAbEntries->EntryCount; i = (unsigned int)(i + 1) )
    {
      v17 = (__int64)&KernelAbEntries->Entries[(unsigned int)i];
      if ( (*(_QWORD *)v17 & 0x7FFFFFFFFFFFFFFCLL) == (v8 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_BYTE *)(v17 + 10)
        && (*(_QWORD *)v17 & 1) == 0 )
      {
        *(_BYTE *)(v17 + 10) = 0;
        KiAbEntryFreeAndEnableInterrupts(v17, (ULONG_PTR)v14, v8, 1, 0LL);
        goto LABEL_18;
      }
    }
    if ( (*((_DWORD *)&v14->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v14, v8, 0LL, 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v46 = *SchedulerAssist;
      do
      {
        i = v46;
        LODWORD(i) = v46 & 0xFFDFFFFF;
        v47 = v46;
        v46 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v46 & 0xFFDFFFFF, v46);
      }
      while ( v47 != v46 );
      if ( (v46 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
LABEL_18:
    v20 = v13->SpecialApcDisable++ == -1;
    if ( v20 && ($727077A9B6E167EAE1398C74674DC5A5 *)v13->ApcState.ApcListHead[0].Flink != &v13->152 )
      KiCheckForKernelApcDelivery(CurrentPrcb, i, SchedulerAssist, KernelAbEntries);
  }
  if ( !a3 )
    return;
  v21 = KeGetCurrentThread();
  ActiveProcessors = v21->ApcState.Process[2].ActiveProcessors;
  v23 = &ActiveProcessors[2].StaticBitmap[29];
  --v21->SpecialApcDisable;
  ExAcquireAutoExpandPushLockExclusive((ULONG_PTR)&ActiveProcessors[4].StaticBitmap[6], 0LL);
  v24 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v23 + 90);
  v25 = 0;
  v26 = v23[42];
  v27 = v24;
  v28 = *(unsigned int *)(*(_QWORD *)(a3 + 24) + 24LL) | ((unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)(a3 + 24)
                                                                                               + 32LL) << 32);
  if ( !v26 )
    goto LABEL_31;
  while ( 1 )
  {
    v29 = *(_QWORD *)(v26 + 24);
    if ( v28 > (*(unsigned int *)(v29 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v29 + 33) << 32))
      || v28 >= (*(unsigned int *)(v29 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v29 + 32) << 32)) )
    {
      break;
    }
    v30 = *(_QWORD *)v26;
    if ( !*(_QWORD *)v26 )
      goto LABEL_31;
LABEL_28:
    v26 = v30;
  }
  v30 = *(_QWORD *)(v26 + 8);
  if ( v30 )
    goto LABEL_28;
  v25 = 1;
LABEL_31:
  *(_QWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 8) = 0LL;
  *(_QWORD *)(a3 + 16) = v26;
  if ( v26 )
  {
    *(_QWORD *)(v26 + 8LL * v25) = a3;
    while ( 1 )
    {
      v31 = *(_BYTE *)(v26 + 16);
      v32 = 2 * v25 - 1;
      v33 = v31 & 3;
      if ( (v31 & 3) != 0 )
        break;
      a3 = v26;
      *(_BYTE *)(v26 + 16) = v31 ^ (v32 ^ v31) & 3;
      v26 = *(_QWORD *)(v26 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v26 )
        goto LABEL_38;
      v25 = *(_QWORD *)v26 != a3;
    }
    if ( v33 != (v32 & 3) )
    {
      *(_BYTE *)(v26 + 16) = v31 & 0xFC;
      goto LABEL_38;
    }
    v39 = v25;
    if ( (*(_BYTE *)(a3 + 16) & 3) == v33 )
    {
      if ( (*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v26 || *(_QWORD *)(v26 + 8LL * v25) != a3 )
        goto LABEL_56;
      v41 = *(_QWORD *)(v26 + 16);
      v42 = (_QWORD *)(v41 & 0xFFFFFFFFFFFFFFFCuLL);
      if ( (v41 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
      {
        if ( v42[1] == v26 )
        {
          v42[1] = a3;
        }
        else
        {
          if ( *v42 != v26 )
            goto LABEL_56;
          *v42 = a3;
        }
      }
      else
      {
        if ( v23[42] != v26 )
          goto LABEL_56;
        v23[42] = a3;
      }
      v43 = v41 ^ *(_QWORD *)(a3 + 16);
      v44 = (unsigned __int64 *)(a3 + 8LL * !v25);
      *(_QWORD *)(a3 + 16) ^= v43 & 0xFFFFFFFFFFFFFFFCuLL;
      v45 = *v44;
      if ( *v44 )
      {
        v61 = *(_QWORD *)(v45 + 16);
        if ( (v61 & 0xFFFFFFFFFFFFFFFCuLL) != a3 )
          goto LABEL_56;
        *(_QWORD *)(v45 + 16) = v26 | v61 & 3;
      }
      *(_QWORD *)(v26 + 8LL * v25) = v45;
      *v44 = v26;
      *(_QWORD *)(v26 + 16) = a3 | *(_DWORD *)(v26 + 16) & 3;
      *(_BYTE *)(a3 + 16) &= 0xFCu;
      *(_BYTE *)(v26 + 16) &= 0xFCu;
    }
    else
    {
      v40 = *(_QWORD *)a3;
      if ( !v39 )
        v40 = *(_QWORD *)(a3 + 8);
      if ( (*(_QWORD *)(v40 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != a3 )
        goto LABEL_56;
      if ( *(_QWORD *)(a3 + 8 * !v39) != v40 )
        goto LABEL_56;
      v56 = 8 * v39;
      if ( *(_QWORD *)(v26 + 8 * v39) != a3 || (*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v26 )
        goto LABEL_56;
      *(_QWORD *)(v26 + 8 * v39) = v40;
      *(_QWORD *)(v40 + 16) = v26 | *(_DWORD *)(v40 + 16) & 3;
      v57 = *(_QWORD *)(v40 + 8 * v39);
      if ( v57 )
      {
        v60 = *(_QWORD *)(v57 + 16);
        if ( (v60 & 0xFFFFFFFFFFFFFFFCuLL) == v40 )
        {
          *(_QWORD *)(v57 + 16) = a3 | v60 & 3;
          goto LABEL_94;
        }
        goto LABEL_56;
      }
LABEL_94:
      v58 = v39;
      v59 = (unsigned int)v39 ^ 1;
      *(_QWORD *)(a3 + 8 * !v58) = v57;
      *(_QWORD *)(v40 + v56) = a3;
      *(_QWORD *)(a3 + 16) = v40 | *(_DWORD *)(a3 + 16) & 3;
      if ( (*(_QWORD *)(v40 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v26
        || *(_QWORD *)(v26 + 8 * ((unsigned int)v59 ^ 1LL)) != v40 )
      {
        goto LABEL_56;
      }
      v48 = *(_QWORD *)(v26 + 16);
      v49 = (_QWORD *)(v48 & 0xFFFFFFFFFFFFFFFCuLL);
      if ( (v48 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
      {
        if ( v49[1] == v26 )
        {
          v49[1] = v40;
          goto LABEL_78;
        }
        if ( *v49 == v26 )
        {
          *v49 = v40;
          goto LABEL_78;
        }
LABEL_56:
        __fastfail(0x1Du);
      }
      if ( v23[42] != v26 )
        goto LABEL_56;
      v23[42] = v40;
LABEL_78:
      v50 = v48 ^ *(_QWORD *)(v40 + 16);
      v51 = (unsigned __int64 *)(v40 + 8 * v59);
      *(_QWORD *)(v40 + 16) ^= v50 & 0xFFFFFFFFFFFFFFFCuLL;
      v52 = *v51;
      if ( *v51 )
      {
        v55 = *(_QWORD *)(v52 + 16);
        if ( (v55 & 0xFFFFFFFFFFFFFFFCuLL) != v40 )
          goto LABEL_56;
        *(_QWORD *)(v52 + 16) = v26 | v55 & 3;
      }
      *(_QWORD *)(v26 + 8 * ((unsigned int)v59 ^ 1LL)) = v52;
      *v51 = v26;
      v53 = v40 | *(_DWORD *)(v26 + 16) & 3;
      *(_QWORD *)(v26 + 16) = v53;
      *(_BYTE *)(v26 + 16) = v53 & 0xFC;
      v54 = *(_BYTE *)(a3 + 16);
      *(_BYTE *)(a3 + 16) = v54 & 0xFC;
      if ( v33 == (*(_BYTE *)(v40 + 16) & 3) )
      {
        *(_BYTE *)(v26 + 16) ^= (*(_BYTE *)(v26 + 16) ^ v33 ^ 0xFE) & 3;
        *(_BYTE *)(v40 + 16) &= 0xFCu;
      }
      else
      {
        if ( v33 == ((*(_BYTE *)(v40 + 16) ^ 0xFE) & 3) )
          *(_BYTE *)(a3 + 16) = v54 ^ (v31 ^ v54) & 3;
        *(_BYTE *)(v40 + 16) &= 0xFCu;
      }
    }
  }
  else
  {
    v23[42] = a3;
  }
LABEL_38:
  v34 = v23 + 45;
  if ( (_BYTE)v27 == 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *v34 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v34, retaddr);
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *v34 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v34, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v27);
    __writecr8(v27);
  }
  ExReleaseAutoExpandPushLockExclusive((ULONG_PTR)&v21->ApcState.Process[2].ActiveProcessors[4].StaticBitmap[6], 0LL);
  v20 = v21->SpecialApcDisable++ == -1;
  if ( v20 && ($727077A9B6E167EAE1398C74674DC5A5 *)v21->ApcState.ApcListHead[0].Flink != &v21->152 )
    KiCheckForKernelApcDelivery(v36, v35, v37, v38);
}
