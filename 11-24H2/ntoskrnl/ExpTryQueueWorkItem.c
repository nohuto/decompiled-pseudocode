/*
 * XREFs of ExpTryQueueWorkItem @ 0x1403AB6FC
 * Callers:
 *     PopPepRequestWork @ 0x1402BFC80 (PopPepRequestWork.c)
 *     PopPepProcessEvent @ 0x1402C0980 (PopPepProcessEvent.c)
 *     IoTryQueueWorkItem @ 0x1403A9FA0 (IoTryQueueWorkItem.c)
 *     PopFxQueueWorkItem @ 0x1403AA2B4 (PopFxQueueWorkItem.c)
 *     PopFxRequestWorkerInternal @ 0x1403AB3E4 (PopFxRequestWorkerInternal.c)
 *     ExTryQueueWorkItem @ 0x1403AB6D0 (ExTryQueueWorkItem.c)
 * Callees:
 *     ExpPartitionCreateThreadIfNecessary @ 0x140225B30 (ExpPartitionCreateThreadIfNecessary.c)
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KiWakePriQueueWaiter @ 0x1402CD480 (KiWakePriQueueWaiter.c)
 *     KeIsThreadRunning @ 0x1403AD158 (KeIsThreadRunning.c)
 *     EtwTracePriQEnqueueWork @ 0x1404C3070 (EtwTracePriQEnqueueWork.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     EtwTracePriQEnqueueFailed @ 0x14064C2D0 (EtwTracePriQEnqueueFailed.c)
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
  int v16; // ecx
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned __int8 v20; // al
  struct _KPRCB *CurrentPrcb; // r15
  _KTHREAD *CurrentThread; // rsi
  unsigned int *v23; // r9
  __int64 v24; // rdx
  _DWORD *v25; // r8
  unsigned int v26; // ecx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // r9
  int v31; // [rsp+30h] [rbp-58h]
  unsigned __int8 v32; // [rsp+38h] [rbp-50h]
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
    LOBYTE(v5) = 2;
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, v5);
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
      v28 = *v15;
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 8 * v28) + 264LL) >= 2uLL )
      {
        v29 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) + 8 * v28) + 8LL * v6);
        if ( (v29 & 1) == 0 && v29 )
        {
          v16 = *(_DWORD *)(v29 + 712) & 0x3FFF;
          if ( (*(_DWORD *)(v29 + 712) & 0x4000) != 0 )
            --v16;
          if ( v16 >= (2 * *(_DWORD *)(v29 + 716)) >> 1 )
          {
            v17 = 0LL;
            v18 = *v15;
            v8 = 0;
            v19 = *(_QWORD *)(*(_QWORD *)(v7 + 8) + 8 * v18);
            if ( (*(_QWORD *)(v19 + 8LL * v6) & 1) == 0 )
              v17 = *(_QWORD *)(v19 + 8LL * v6);
            v20 = KeGetCurrentIrql();
            v32 = v20;
            __writecr8(2uLL);
            if ( KiIrqlFlags )
            {
              LOBYTE(v19) = 2;
              LOBYTE(v18) = v20;
              KiRaiseIrqlProcessIrqlFlags(v18, v19);
            }
            CurrentPrcb = KeGetCurrentPrcb();
            CurrentThread = CurrentPrcb->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              LOBYTE(v30) = KeIsThreadRunning(CurrentPrcb->CurrentThread);
              EtwTracePriQEnqueueWork(CurrentThread, a2, (unsigned int)v12, v30);
            }
            KiAcquireKobjectLockSafe((volatile signed __int32 *)v17);
            if ( *(_QWORD *)(v17 + 8) != v17 + 8
              && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)v17 || CurrentThread->WaitReason != 15) )
            {
              v23 = (unsigned int *)(v17 + 664);
              v24 = 32LL;
              v25 = (_DWORD *)(v17 + 664);
              v26 = 0;
              while ( 1 )
              {
                --v25;
                --v24;
                v26 += *v25;
                if ( v26 >= *v23 )
                  break;
                if ( v24 <= v12 )
                {
                  if ( v26 < *v23 )
                    v8 = KiWakePriQueueWaiter((__int64)CurrentPrcb, v17, (__int64)a2, v12);
                  break;
                }
              }
            }
            _InterlockedAnd((volatile signed __int32 *)v17, 0xFFFFFF7F);
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 && !v8 )
              EtwTracePriQEnqueueFailed(CurrentThread, a2);
            KiExitDispatcher((unsigned __int64)CurrentPrcb, 0LL, 1u, 0, v32);
            if ( v8 )
              break;
            *(_DWORD *)(v17 + 716) |= 0x80000000;
            ExpPartitionCreateThreadIfNecessary(v34, v15, (_DWORD *)v17);
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
      v14 = *(_DWORD *)(qword_140E2DC10 + 4LL * ((unsigned int)v5 + v13 * (unsigned __int16)KeNumberNodes));
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
