/*
 * XREFs of RtlpHpSegPageRangeShrink @ 0x1402E0DA0
 * Callers:
 *     ExAllocateHeapPool @ 0x1402DAB20 (ExAllocateHeapPool.c)
 *     RtlpHpFreeHeap @ 0x1402DE7F0 (RtlpHpFreeHeap.c)
 *     ExFreeHeapPool @ 0x1402DECE0 (ExFreeHeapPool.c)
 *     RtlpHpSegAlloc @ 0x1402F89EC (RtlpHpSegAlloc.c)
 *     RtlpHpSegFreeInternal @ 0x1403CBADC (RtlpHpSegFreeInternal.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14029BA20 (KiAbEntryFreeAndEnableInterrupts.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x1402E0A40 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegLockAcquire @ 0x1402E129C (RtlpHpSegLockAcquire.c)
 *     RtlCSparseBitmapBitsClear @ 0x1402E12C0 (RtlCSparseBitmapBitsClear.c)
 *     RtlpHpSegMgrRelease @ 0x1402E15FC (RtlpHpSegMgrRelease.c)
 *     RtlRbInsertNodeEx @ 0x1402E2370 (RtlRbInsertNodeEx.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall RtlpHpSegPageRangeShrink(__int64 a1, __int64 a2, int a3)
{
  int v3; // esi
  char *v6; // rcx
  __int64 v7; // rdx
  char v8; // al
  char v9; // al
  int v10; // edx
  __int64 v11; // rax
  char v12; // r8
  __int64 v13; // r14
  unsigned int v14; // ebp
  char v15; // cl
  int v16; // r10d
  unsigned int v17; // r11d
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  unsigned __int64 v21; // r9
  __int16 *v22; // rcx
  int v23; // eax
  unsigned int i; // edx
  char v25; // dl
  __int64 v26; // r8
  __int64 v27; // rdx
  int v28; // r8d
  BOOLEAN v29; // cl
  __int64 v30; // rcx
  _QWORD *v31; // rbx
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // r10
  _KLOCK_ENTRIES *KernelAbEntries; // r8
  __int64 v35; // rdx
  __int64 v36; // r9
  __int64 v37; // rcx
  _DWORD *SchedulerAssist; // r8
  struct _KTHREAD *v39; // rcx
  _QWORD *v41; // rdx
  _QWORD *j; // rsi
  int v43; // eax
  unsigned __int64 v44; // r14
  __int64 v45; // rcx
  _QWORD *v46; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  int v48; // ett
  void *retaddr; // [rsp+58h] [rbp+0h]
  int v50; // [rsp+70h] [rbp+18h] BYREF

  v50 = a3;
  v3 = *(unsigned __int8 *)(a2 + 31);
  if ( (unsigned int)(v3 - 1) > 1 )
  {
    v6 = (char *)(a2 + 56);
    v7 = (unsigned int)(v3 - 2);
    do
    {
      v8 = *v6;
      v6 += 32;
      *(v6 - 32) = v8 & 0xFE;
      --v7;
    }
    while ( v7 );
  }
  v9 = RtlpHpSegLockAcquire(a1);
  v10 = *(_DWORD *)(a2 + 28);
  LOBYTE(v50) = v9;
  if ( *(unsigned __int8 *)(a2 + 31) != v3 )
  {
    *(_BYTE *)(a2 + 31) = 0;
    *(_WORD *)(a2 + 28) = -1;
  }
  *(_BYTE *)(a2 + 24) |= 2u;
  *(_BYTE *)(32LL * (unsigned int)(v3 - 1) + a2 + 26) = v3 - 1;
  *(_WORD *)(a2 + 28) = v10;
  *(_BYTE *)(a2 + 31) = v3;
  *(_DWORD *)a2 = -857879331;
  *(_BYTE *)(a2 + 24) &= 0xF3u;
  v11 = RtlpHpSegPageRangeCoalesce(a1, a2, 0, (unsigned __int8 *)&v50);
  v12 = *(_BYTE *)(a1 + 13);
  v13 = v11;
  v14 = 2;
  if ( (v12 & 0x10) != 0 && *(unsigned __int8 *)(v11 + 31) == 256 - *(unsigned __int8 *)(a1 + 10) )
  {
    v31 = (_QWORD *)(v11 & *(_QWORD *)a1);
    *(_DWORD *)v11 = -857879297;
    if ( v31 )
    {
      v45 = *v31;
      v46 = (_QWORD *)v31[1];
      if ( *(_QWORD **)(*v31 + 8LL) != v31 || (_QWORD *)*v46 != v31 )
        __fastfail(3u);
      *v46 = v45;
      *(_QWORD *)(v45 + 8) = v46;
      --*(_QWORD *)(a1 + 88);
    }
  }
  else
  {
    if ( (v12 & 7) != 0 )
    {
      v15 = *(_BYTE *)(a1 + 8);
      v16 = 0;
      v17 = *(unsigned __int8 *)(v11 + 31) << v15;
      v18 = (v11 & *(_QWORD *)a1) + ((v11 - (v11 & *(_QWORD *)a1)) >> 5 << v15);
      v19 = v18 & *(_QWORD *)a1;
      LODWORD(v18) = v18 - v19;
      v20 = *(_QWORD *)(v19 + 24);
      v21 = v20 + 2 * ((unsigned __int64)((unsigned int)v18 + v17 - 1) >> 21);
      v22 = (__int16 *)(v20 + 2 * ((unsigned __int64)(unsigned int)v18 >> 21));
      v23 = 0;
      for ( i = ((__int64)(2 * ((unsigned __int64)((unsigned int)v18 + v17 - 1) >> 21)
                         - 2 * ((unsigned __int64)(unsigned int)v18 >> 21)) >> 1)
              + 1; (unsigned __int64)v22 <= v21; ++v22 )
      {
        if ( (*v22 & 0x7FF) != 0 )
        {
          if ( *v22 < 0 )
            ++v23;
        }
        else
        {
          ++v16;
        }
      }
      if ( v23 == i )
      {
        v25 = i > ((unsigned __int64)v17 + 0x1FFFFF) >> 21;
      }
      else if ( v23 )
      {
        v25 = 2;
      }
      else
      {
        v25 = (v16 == 0) + 3;
      }
    }
    else
    {
      v25 = 4;
    }
    *(_BYTE *)(v13 + 30) = v25;
    v26 = *(_QWORD *)(a1 + 104);
    v27 = *(_QWORD *)(a1 + 96);
    if ( (v26 & 1) == 0 )
    {
LABEL_17:
      v28 = v26 & 1;
      v29 = 0;
      if ( !v27 )
        goto LABEL_22;
      while ( 1 )
      {
        if ( *(_DWORD *)(v13 + 28) < *(_DWORD *)(v27 + 28) )
        {
          v30 = *(_QWORD *)v27;
          if ( v28 )
          {
            if ( !v30 )
              goto LABEL_66;
            v30 ^= v27;
          }
          if ( !v30 )
            goto LABEL_66;
        }
        else
        {
          v30 = *(_QWORD *)(v27 + 8);
          if ( v28 )
          {
            if ( !v30 )
              goto LABEL_21;
            v30 ^= v27;
          }
          if ( !v30 )
          {
LABEL_21:
            v29 = 1;
            goto LABEL_22;
          }
        }
        v27 = v30;
      }
    }
    if ( v27 )
    {
      v27 ^= a1 + 96;
      goto LABEL_17;
    }
LABEL_66:
    v29 = 0;
LABEL_22:
    RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 96), (PRTL_BALANCED_NODE)v27, v29, (PRTL_BALANCED_NODE)v13);
    _InterlockedAdd64(
      (volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 16),
      (unsigned __int16)~*(_WORD *)(v13 + 28));
    v31 = 0LL;
  }
  result = *(unsigned int *)(a1 + 40);
  if ( (result & 1) != 0 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0
      || (result = (unsigned int)PopHibernateInProgress, PopHibernateInProgress) )
    {
      *(_DWORD *)(a1 + 64) = 0;
    }
    else
    {
      result = ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1 + 64, retaddr);
    }
    v44 = (unsigned __int8)v50;
    if ( KiIrqlFlags )
      result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v50);
    __writecr8(v44);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 64), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 64);
    CurrentThread = KeGetCurrentThread();
    _disable();
    KernelAbEntries = CurrentThread->KernelAbEntries;
    v35 = 0LL;
    v36 = (a1 + 64) & 0x7FFFFFFFFFFFFFFCLL;
    while ( (unsigned int)v35 < KernelAbEntries->EntryCount )
    {
      v37 = (__int64)&KernelAbEntries->Entries[(unsigned int)v35];
      if ( (*(_QWORD *)v37 & 0x7FFFFFFFFFFFFFFCLL) == v36 && *(_BYTE *)(v37 + 10) && (*(_QWORD *)v37 & 1) == 0 )
      {
        *(_BYTE *)(v37 + 10) = 0;
        result = KiAbEntryFreeAndEnableInterrupts(v37, (ULONG_PTR)CurrentThread, a1 + 64, 1, 0LL);
        goto LABEL_32;
      }
      v35 = (unsigned int)(v35 + 1);
    }
    result = *((unsigned int *)&CurrentThread->MiscFlags + 1);
    if ( (result & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, a1 + 64, 0LL, 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      LODWORD(result) = *SchedulerAssist;
      do
      {
        v35 = (unsigned int)result;
        LODWORD(v35) = result & 0xFFDFFFFF;
        v48 = result;
        result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
      }
      while ( v48 != (_DWORD)result );
      if ( (result & 0x200000) != 0 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
LABEL_32:
    v39 = KeGetCurrentThread();
    if ( v39->SpecialApcDisable++ == -1 )
    {
      result = (__int64)&v39->152;
      if ( *(_QWORD *)result != result )
        result = KiCheckForKernelApcDelivery(v39, v35, SchedulerAssist, v36);
    }
  }
  if ( v31 )
  {
    RtlCSparseBitmapBitsClear(
      &dword_140E68050,
      2 * (((unsigned __int64)v31 - qword_140E68048) >> 20),
      2 * ((unsigned __int64)(unsigned int)-*(_DWORD *)a1 >> 20));
    v41 = &v31[4 * *(unsigned __int8 *)(a1 + 10)];
    for ( j = &v41[4 * (256LL - *(unsigned __int8 *)(a1 + 10))]; v41 < j; v14 += v43 )
    {
      v43 = (unsigned __int16)~*((_WORD *)v41 + 14);
      v41 += 4 * ((unsigned __int64)*((unsigned int *)v41 + 7) >> 24);
    }
    RtlpHpSegMgrRelease(a1, v31, v14);
    _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 8), -(__int64)v14);
    result = *(__int16 *)(a1 + 22);
    _InterlockedAdd64(
      (volatile signed __int64 *)(result + a1),
      -(__int64)((unsigned __int64)(unsigned int)-*(_DWORD *)a1 >> 12));
  }
  return result;
}
