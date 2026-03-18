/*
 * XREFs of ExpTryQueueWorkItem @ 0x14028214C
 * Callers:
 *     IoTryQueueWorkItem @ 0x140281270 (IoTryQueueWorkItem.c)
 *     PopFxQueueWorkItem @ 0x1402813BC (PopFxQueueWorkItem.c)
 *     ExTryQueueWorkItem @ 0x140282120 (ExTryQueueWorkItem.c)
 *     PopFxRequestWorkerInternal @ 0x140283588 (PopFxRequestWorkerInternal.c)
 *     PopPepProcessEvent @ 0x1402BD780 (PopPepProcessEvent.c)
 *     PopPepRequestWork @ 0x1402C126C (PopPepRequestWork.c)
 * Callees:
 *     ExpPartitionCreateThreadIfNecessary @ 0x14024E260 (ExpPartitionCreateThreadIfNecessary.c)
 *     KeIsThreadRunning @ 0x14028123C (KeIsThreadRunning.c)
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     KiWakePriQueueWaiter @ 0x1402E6BE0 (KiWakePriQueueWaiter.c)
 *     EtwTracePriQEnqueueWork @ 0x1404C9884 (EtwTracePriQEnqueueWork.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     EtwTracePriQEnqueueFailed @ 0x140641CF4 (EtwTracePriQEnqueueFailed.c)
 */

char __fastcall ExpTryQueueWorkItem(__int64 a1, _QWORD *a2, int a3, int a4)
{
  __int64 v5; // rdx
  int v6; // r11d
  __int64 v7; // r10
  char v8; // r13
  ULONG_PTR v9; // r9
  int v10; // ebx
  unsigned __int8 CurrentIrql; // r14
  __int64 v12; // r14
  unsigned __int16 v13; // r8
  int v14; // eax
  unsigned __int16 *v15; // r12
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned __int8 v19; // al
  struct _KPRCB *CurrentPrcb; // r15
  _KTHREAD *CurrentThread; // rsi
  unsigned int *v22; // r9
  __int64 v23; // rdx
  _DWORD *v24; // r8
  unsigned int v25; // ecx
  __int64 v27; // rdx
  __int64 v28; // rdx
  int v29; // ecx
  __int64 v30; // r9
  int v31; // [rsp+30h] [rbp-58h]
  char v32; // [rsp+38h] [rbp-50h]
  unsigned __int8 v33; // [rsp+40h] [rbp-48h]
  __int64 v34; // [rsp+90h] [rbp+8h]
  unsigned __int16 v35; // [rsp+98h] [rbp+10h]

  v34 = a1;
  v5 = 0LL;
  v6 = a4;
  v7 = a1;
  v31 = 0;
  v8 = 0;
  if ( *a2 )
    KeBugCheckEx(0xE4u, 1uLL, (ULONG_PTR)a2, a3, 0LL);
  if ( (unsigned int)(a3 - 7) <= 0x18 || a3 >= 64 )
    KeBugCheckEx(0xE4u, 6uLL, (ULONG_PTR)a2, a3, 0LL);
  v9 = a2[2];
  if ( v9 < 0xFFFF800000000000uLL )
    KeBugCheckEx(0xE4u, 7uLL, (ULONG_PTR)a2, v9, 0LL);
  if ( (unsigned int)a3 >= 7 )
  {
    v10 = a3 - 32;
  }
  else
  {
    _mm_lfence();
    v10 = ExpBuiltinPriorities[a3];
  }
  CurrentIrql = KeGetCurrentIrql();
  v33 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1);
    v7 = v34;
    v5 = 0LL;
    v6 = a4;
  }
  v12 = v10;
  v13 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  v35 = v13;
  LOWORD(v14) = v13;
  while ( (unsigned __int16)v14 < (unsigned __int16)KeNumberNodes )
  {
    v15 = (unsigned __int16 *)KeNodeBlock[(unsigned __int16)v14];
    if ( v15 != (unsigned __int16 *)((char *)&KiNodeInit + 824 * (unsigned __int16)v14) && v15 )
    {
      v27 = *v15;
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 8 * v27) + 264LL) >= 2uLL )
      {
        v28 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) + 8 * v27) + 8LL * v6);
        if ( (v28 & 1) == 0 && v28 )
        {
          v29 = *(_DWORD *)(v28 + 712) & 0x3FFF;
          if ( (*(_DWORD *)(v28 + 712) & 0x4000) != 0 )
            --v29;
          if ( v29 >= (2 * *(_DWORD *)(v28 + 716)) >> 1 )
          {
            v16 = 0LL;
            v17 = *v15;
            v8 = 0;
            v18 = *(_QWORD *)(*(_QWORD *)(v7 + 8) + 8 * v17);
            if ( (*(_QWORD *)(v18 + 8LL * v6) & 1) == 0 )
              v16 = *(_QWORD *)(v18 + 8LL * v6);
            v19 = KeGetCurrentIrql();
            v32 = v19;
            __writecr8(2uLL);
            if ( KiIrqlFlags )
            {
              LOBYTE(v17) = v19;
              KiRaiseIrqlProcessIrqlFlags(v17);
            }
            CurrentPrcb = KeGetCurrentPrcb();
            CurrentThread = CurrentPrcb->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              LOBYTE(v30) = KeIsThreadRunning((__int64)CurrentPrcb->CurrentThread);
              EtwTracePriQEnqueueWork(CurrentThread, a2, (unsigned int)v12, v30);
            }
            KiAcquireKobjectLockSafe(v16);
            if ( *(_QWORD *)(v16 + 8) != v16 + 8
              && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)v16 || CurrentThread->WaitReason != 15) )
            {
              v22 = (unsigned int *)(v16 + 664);
              v23 = 32LL;
              v24 = (_DWORD *)(v16 + 664);
              v25 = 0;
              while ( 1 )
              {
                --v24;
                --v23;
                v25 += *v24;
                if ( v25 >= *v22 )
                  break;
                if ( v23 <= v12 )
                {
                  if ( v25 < *v22 )
                    v8 = KiWakePriQueueWaiter(CurrentPrcb, v16, a2, (unsigned int)v12);
                  break;
                }
              }
            }
            _InterlockedAnd((volatile signed __int32 *)v16, 0xFFFFFF7F);
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 && !v8 )
              EtwTracePriQEnqueueFailed(CurrentThread, a2);
            KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, v32);
            if ( v8 )
              break;
            *(_DWORD *)(v16 + 716) |= 0x80000000;
            ExpPartitionCreateThreadIfNecessary(v34, v15, (_DWORD *)v16);
          }
        }
        v13 = v35;
      }
      LODWORD(v5) = v31;
    }
    v5 = (unsigned int)(v5 + 1);
    v31 = v5;
    if ( (_DWORD)v5 == (unsigned __int16)KeNumberNodes )
      LOWORD(v14) = -1;
    else
      v14 = *(_DWORD *)(qword_140E2D890 + 4LL * ((unsigned int)v5 + v13 * (unsigned __int16)KeNumberNodes));
    v7 = v34;
    v6 = a4;
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v5) = v33;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
  }
  __writecr8(v33);
  return v8;
}
