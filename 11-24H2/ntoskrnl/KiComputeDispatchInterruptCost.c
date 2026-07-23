/*
 * XREFs of KiComputeDispatchInterruptCost @ 0x140C29574
 * Callers:
 *     KeInitSystem @ 0x140C62E30 (KeInitSystem.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     KeWaitForMultipleObjects @ 0x14031CC00 (KeWaitForMultipleObjects.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     HviIsAnyHypervisorPresent @ 0x14049E730 (HviIsAnyHypervisorPresent.c)
 *     HviGetEnlightenmentInformation @ 0x14066234C (HviGetEnlightenmentInformation.c)
 *     HviGetHypervisorFeatures @ 0x1406623A0 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 KiComputeDispatchInterruptCost()
{
  ULONG v0; // ebp
  struct _KWAIT_BLOCK *WaitBlockArray; // r14
  unsigned int v2; // ebx
  unsigned int v3; // edi
  __int64 Pool2; // rax
  _QWORD *v5; // r13
  __int64 v6; // rcx
  __int64 v7; // rdx
  _BYTE *v8; // rax
  PVOID *v9; // r15
  __int64 v10; // r12
  __int64 v11; // rsi
  bool v12; // al
  unsigned int v13; // ebx
  char *v14; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v17; // eax
  signed __int32 v18; // ett
  ULONG v19; // r9d
  __int64 v20; // r8
  _QWORD *v21; // rdx
  __int64 v22; // rcx
  bool v24; // [rsp+40h] [rbp-68h]
  ULONG v25; // [rsp+44h] [rbp-64h]
  __int64 v26; // [rsp+48h] [rbp-60h]
  LARGE_INTEGER PerformanceFrequency; // [rsp+50h] [rbp-58h] BYREF
  __int128 v28; // [rsp+58h] [rbp-50h] BYREF
  __int128 v29; // [rsp+68h] [rbp-40h] BYREF

  v0 = 0;
  PerformanceFrequency.QuadPart = 0LL;
  WaitBlockArray = 0LL;
  v29 = 0LL;
  if ( (_DWORD)KeNumberProcessors_0 == 1 )
    return 0;
  if ( HviIsAnyHypervisorPresent()
    && ((v28 = 0LL, HviGetHypervisorFeatures(&v28), (v28 & 0x100000000000LL) == 0)
     || (HviGetEnlightenmentInformation(&v29), (v29 & 0x1000) != 0)) )
  {
    return 0;
  }
  else
  {
    v3 = 16;
    if ( (unsigned int)KeNumberProcessors_0 < 0x10 )
      v3 = KeNumberProcessors_0;
    Pool2 = ExAllocatePool2(0x40uLL, 104LL * v3, 0x6369644BuLL);
    v5 = (_QWORD *)Pool2;
    if ( Pool2 )
    {
      if ( v3 )
      {
        v6 = Pool2 + 81;
        v7 = v3;
        do
        {
          *(_WORD *)(v6 - 1) = 1;
          *(_BYTE *)(v6 + 1) = 6;
          *(_DWORD *)(v6 + 3) = 0;
          *(_QWORD *)(v6 + 15) = v6 + 7;
          *(_QWORD *)(v6 + 7) = v6 + 7;
          v8 = (_BYTE *)(v6 - 81);
          *(_QWORD *)(v6 - 49) = v6 - 81;
          *(_WORD *)(v6 - 79) = 0;
          *(_QWORD *)(v6 - 57) = KiComputeDispatchInterruptCostDpcRoutine;
          *(_QWORD *)(v6 - 25) = 0LL;
          *(_QWORD *)(v6 - 65) = 0LL;
          *(_BYTE *)(v6 - 80) = 2;
          v6 += 104LL;
          *v8 = 19;
          --v7;
        }
        while ( v7 );
      }
      v9 = (PVOID *)ExAllocatePool2(0x40uLL, 8LL * v3, 0x6369644BuLL);
      if ( v9 && (WaitBlockArray = (struct _KWAIT_BLOCK *)ExAllocatePool2(0x40uLL, 48LL * v3, 0x6369644BuLL)) != 0LL )
      {
        v25 = 0;
        v10 = 0LL;
        KeQueryPerformanceCounter(&PerformanceFrequency);
        v11 = 5LL;
        v26 = 5LL;
        do
        {
          v12 = KeDisableInterrupts();
          v13 = 0;
          v24 = v12;
          if ( v3 )
          {
            do
            {
              if ( v13 != KeGetPcr()->Prcb.Number )
              {
                v14 = (char *)&v5[13 * v0];
                v9[v0] = v14 + 80;
                if ( !*((_QWORD *)v14 + 7) )
                  *((_WORD *)v14 + 1) = v13 + 2048;
                *((LARGE_INTEGER *)v14 + 8) = KeQueryPerformanceCounter(0LL);
                KeInsertQueueDpc((PRKDPC)&v5[13 * v0++], 0LL, 0LL);
              }
              ++v13;
            }
            while ( v13 < v3 );
            v12 = v24;
            v11 = v26;
          }
          if ( v12 )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
            if ( SchedulerAssist )
            {
              _m_prefetchw(SchedulerAssist);
              v17 = *SchedulerAssist;
              do
              {
                v18 = v17;
                v17 = _InterlockedCompareExchange(SchedulerAssist, v17 & 0xFFDFFFFF, v17);
              }
              while ( v18 != v17 );
              if ( (v17 & 0x200000) != 0 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
            _enable();
          }
          KeWaitForMultipleObjects(v0, v9, WaitAll, Executive, 0, 0, 0LL, WaitBlockArray);
          v19 = v25;
          if ( v0 )
          {
            v19 = v0 + v25;
            v20 = v0;
            v25 += v0;
            v21 = v5 + 8;
            do
            {
              v22 = v21[1] - *v21;
              v21 += 13;
              v10 += v22;
              --v20;
            }
            while ( v20 );
          }
          --v11;
          v0 = 0;
          v26 = v11;
        }
        while ( v11 );
        v2 = 0;
        KiDispatchInterruptCost = 1000000
                                * (unsigned __int64)KeGetCurrentPrcb()->MHz
                                * v10
                                / PerformanceFrequency.QuadPart
                                / v19;
      }
      else
      {
        v2 = -1073741801;
      }
      ExFreePoolWithTag(v5, 0);
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
      if ( WaitBlockArray )
        ExFreePoolWithTag(WaitBlockArray, 0);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return v2;
}
