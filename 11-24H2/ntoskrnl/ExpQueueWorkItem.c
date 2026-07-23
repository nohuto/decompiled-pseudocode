/*
 * XREFs of ExpQueueWorkItem @ 0x1402CD0A0
 * Callers:
 *     ExQueueWorkItemToPartition @ 0x140279D60 (ExQueueWorkItemToPartition.c)
 *     ExQueueWorkItemToPrivatePool @ 0x14027B744 (ExQueueWorkItemToPrivatePool.c)
 *     ExQueueWorkItemEx @ 0x1402D6B60 (ExQueueWorkItemEx.c)
 *     ExQueueWorkItemExFromIo @ 0x1403A9120 (ExQueueWorkItemExFromIo.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KiWakePriQueueWaiter @ 0x1402CD480 (KiWakePriQueueWaiter.c)
 *     KeIsThreadRunning @ 0x1403AD158 (KeIsThreadRunning.c)
 *     EtwTracePriQEnqueueWork @ 0x1404C3070 (EtwTracePriQEnqueueWork.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     EtwTracePriQEnqueueFailed @ 0x14064C2D0 (EtwTracePriQEnqueueFailed.c)
 */

__int64 __fastcall ExpQueueWorkItem(__int64 a1, _QWORD *a2, unsigned int a3, unsigned int a4, int a5)
{
  unsigned __int8 v5; // si
  unsigned int v7; // ebx
  __int64 v8; // r9
  int v9; // ebp
  unsigned __int8 CurrentIrql; // r13
  unsigned int v11; // ecx
  unsigned __int16 *v12; // r14
  int v14; // ecx
  __int64 v15; // rdi
  char v16; // r12
  _QWORD *v17; // rsi
  unsigned __int8 v18; // al
  struct _KPRCB *CurrentPrcb; // rbp
  _KTHREAD *CurrentThread; // r15
  unsigned int v21; // r10d
  __int64 v22; // rdx
  __int64 v23; // rax
  int v24; // ecx
  unsigned int v25; // ecx
  _QWORD *v26; // rbx
  char v27; // cl
  int v28; // ecx
  __int64 v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rdx
  unsigned __int8 IsThreadRunning; // al
  unsigned __int8 v34; // [rsp+30h] [rbp-48h]

  v5 = 0;
  v7 = 0;
  v8 = a1;
  v9 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    v8 = a1;
  }
  if ( a4 >= (unsigned __int16)KeNumberNodes )
    a4 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  v11 = a4;
  while ( v11 < (unsigned __int16)KeNumberNodes )
  {
    v12 = (unsigned __int16 *)KeNodeBlock[(unsigned __int16)v11];
    if ( v12 != (unsigned __int16 *)((char *)&KiNodeInit + 824 * (unsigned __int16)v11) )
    {
      if ( v12 )
      {
        v31 = 8LL * *v12;
        if ( *(_QWORD *)(*(_QWORD *)(v31 + *(_QWORD *)(v8 + 16)) + 264LL) >= 2uLL )
        {
          v32 = *(_QWORD *)(*(_QWORD *)(v31 + *(_QWORD *)(v8 + 8)) + 8LL * a5);
          if ( (v32 & 1) == 0 )
          {
            if ( v32 )
            {
              v14 = *(_DWORD *)(v32 + 712) & 0x3FFF;
              if ( (*(_DWORD *)(v32 + 712) & 0x4000) != 0 )
                --v14;
              if ( v14 >= (2 * *(_DWORD *)(v32 + 716)) >> 1 )
              {
                v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 8LL * *v12) + 8LL * a5);
                if ( (v15 & 1) != 0 )
                  v15 = 0LL;
                v16 = 0;
                v17 = (_QWORD *)(v15 + 8);
                v18 = KeGetCurrentIrql();
                v34 = v18;
                __writecr8(2uLL);
                if ( KiIrqlFlags )
                  KiRaiseIrqlProcessIrqlFlags(v18, 2LL);
                CurrentPrcb = KeGetCurrentPrcb();
                CurrentThread = CurrentPrcb->CurrentThread;
                if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
                {
                  IsThreadRunning = KeIsThreadRunning(CurrentPrcb->CurrentThread);
                  EtwTracePriQEnqueueWork(CurrentThread, a2, a3, IsThreadRunning);
                }
                KiAcquireKobjectLockSafe((volatile signed __int32 *)v15);
                if ( (_QWORD *)*v17 == v17
                  || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v15 && CurrentThread->WaitReason == 15 )
                {
                  v21 = a3;
                }
                else
                {
                  v21 = a3;
                  v22 = v15 + 664;
                  v23 = 32LL;
                  while ( 1 )
                  {
                    v24 = *(_DWORD *)(v22 - 4);
                    v22 -= 4LL;
                    v7 += v24;
                    --v23;
                    v25 = *(_DWORD *)(v15 + 664);
                    if ( v7 >= v25 )
                      break;
                    if ( v23 <= (int)a3 )
                    {
                      if ( v7 >= v25 )
                        break;
                      v26 = a2;
                      v16 = KiWakePriQueueWaiter(CurrentPrcb, v15, a2, a3);
                      if ( v16 )
                      {
                        v27 = 0;
                        goto LABEL_33;
                      }
                      v21 = a3;
                      goto LABEL_42;
                    }
                  }
                }
                v26 = a2;
LABEL_42:
                ++*(_DWORD *)(v15 + 4);
                v29 = v15 + 16LL * (int)v21 + 24;
                v30 = *(_QWORD **)(v29 + 8);
                if ( *v30 != v29 )
                  __fastfail(3u);
                *v26 = v29;
                v26[1] = v30;
                *v30 = v26;
                *(_QWORD *)(v29 + 8) = v26;
                v27 = 1;
LABEL_33:
                _InterlockedAnd((volatile signed __int32 *)v15, 0xFFFFFF7F);
                if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 && !v16 && !v27 )
                  EtwTracePriQEnqueueFailed(CurrentThread, v26);
                KiExitDispatcher((unsigned __int64)CurrentPrcb, 0LL, 1u, 0, v34);
                v28 = *(_DWORD *)(v15 + 712);
                if ( v28 < (2 * *(_DWORD *)(v15 + 716)) >> 1
                  || v28 < *(_DWORD *)(v15 + 720)
                  && (_QWORD *)*v17 == v17
                  && (*(_DWORD *)(v15 + 4) || *(int *)(v15 + 716) < 0) )
                {
                  KeSetEvent((PRKEVENT)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *v12) + 16LL), 0, 0);
                }
                v5 = 1;
                break;
              }
            }
          }
        }
      }
    }
    if ( ++v9 == (unsigned __int16)KeNumberNodes )
      v11 = -1;
    else
      v11 = *(_DWORD *)(qword_140E2DC10 + 4LL * (a4 * (unsigned __int16)KeNumberNodes + v9));
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v5;
}
