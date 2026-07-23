/*
 * XREFs of ExQueueWorkItemFromIo @ 0x1402CC8A0
 * Callers:
 *     IoQueueWorkItemEx @ 0x1402F05B0 (IoQueueWorkItemEx.c)
 *     IoQueueWorkItem @ 0x1403AA020 (IoQueueWorkItem.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
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

__int64 __fastcall ExQueueWorkItemFromIo(_QWORD *BugCheckParameter2, int a2)
{
  ULONG_PTR v3; // rsi
  ULONG_PTR v4; // r9
  char v5; // di
  unsigned int v6; // ebx
  int v7; // ebp
  __int64 v8; // r9
  unsigned __int8 CurrentIrql; // r15
  unsigned int v10; // r8d
  unsigned int v11; // ecx
  unsigned __int16 *v12; // r12
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  _QWORD *v16; // rbp
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r15
  _KTHREAD *CurrentThread; // r13
  signed int v20; // r10d
  __int64 v21; // rdx
  __int64 v22; // rax
  int v23; // ecx
  unsigned int v24; // ecx
  char v25; // cl
  char v26; // dl
  int v27; // ecx
  __int64 v28; // rdx
  _QWORD *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rdx
  int v32; // ecx
  unsigned __int8 IsThreadRunning; // al
  unsigned __int8 v34; // [rsp+30h] [rbp-48h]
  unsigned __int8 v35; // [rsp+38h] [rbp-40h]
  char v36; // [rsp+80h] [rbp+8h]
  unsigned int v37; // [rsp+90h] [rbp+18h]
  __int64 v38; // [rsp+98h] [rbp+20h]

  v3 = a2;
  if ( *BugCheckParameter2 )
    KeBugCheckEx(0xE4u, 1uLL, (ULONG_PTR)BugCheckParameter2, a2, 0LL);
  if ( (unsigned int)(a2 - 7) <= 0x18 || a2 >= 64 )
    KeBugCheckEx(0xE4u, 6uLL, (ULONG_PTR)BugCheckParameter2, a2, 0LL);
  v4 = BugCheckParameter2[2];
  if ( v4 < 0xFFFF800000000000uLL )
    KeBugCheckEx(0xE4u, 7uLL, (ULONG_PTR)BugCheckParameter2, v4, 0LL);
  if ( (unsigned int)a2 >= 7 )
  {
    v37 = a2 - 32;
  }
  else
  {
    _mm_lfence();
    v37 = ExpBuiltinPriorities[a2];
  }
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = *((_QWORD *)PspSystemPartition + 2);
  v38 = v8;
  CurrentIrql = KeGetCurrentIrql();
  v35 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    v8 = v38;
  }
  v10 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  v11 = v10;
  while ( v11 < (unsigned __int16)KeNumberNodes )
  {
    v12 = (unsigned __int16 *)KeNodeBlock[(unsigned __int16)v11];
    if ( v12 != (unsigned __int16 *)((char *)&KiNodeInit + 824 * (unsigned __int16)v11) )
    {
      if ( v12 )
      {
        v30 = 8LL * *v12;
        if ( *(_QWORD *)(*(_QWORD *)(v30 + *(_QWORD *)(v8 + 16)) + 264LL) >= 2uLL )
        {
          v31 = *(_QWORD *)(*(_QWORD *)(v30 + *(_QWORD *)(v8 + 8)) + 8LL);
          if ( (v31 & 1) == 0 )
          {
            if ( v31 )
            {
              v32 = *(_DWORD *)(v31 + 712) & 0x3FFF;
              if ( (*(_DWORD *)(v31 + 712) & 0x4000) != 0 )
                --v32;
              if ( v32 >= (2 * *(_DWORD *)(v31 + 716)) >> 1 )
              {
                v36 = 0;
                v14 = *(_QWORD *)(*(_QWORD *)(v8 + 8) + 8LL * *v12);
                v15 = *(_QWORD *)(v14 + 8);
                if ( (v15 & 1) != 0 )
                  v15 = 0LL;
                v16 = (_QWORD *)(v15 + 8);
                v17 = KeGetCurrentIrql();
                v34 = v17;
                __writecr8(2uLL);
                if ( KiIrqlFlags )
                {
                  LOBYTE(v14) = 2;
                  KiRaiseIrqlProcessIrqlFlags(v17, v14);
                }
                CurrentPrcb = KeGetCurrentPrcb();
                CurrentThread = CurrentPrcb->CurrentThread;
                if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
                {
                  IsThreadRunning = KeIsThreadRunning(CurrentPrcb->CurrentThread);
                  EtwTracePriQEnqueueWork(CurrentThread, BugCheckParameter2, v37, IsThreadRunning);
                }
                KiAcquireKobjectLockSafe((volatile signed __int32 *)v15);
                if ( (_QWORD *)*v16 == v16
                  || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v15 && CurrentThread->WaitReason == 15 )
                {
LABEL_46:
                  v20 = v37;
                }
                else
                {
                  v20 = v37;
                  v21 = v15 + 664;
                  v22 = 32LL;
                  while ( 1 )
                  {
                    v23 = *(_DWORD *)(v21 - 4);
                    v21 -= 4LL;
                    v6 += v23;
                    --v22;
                    v24 = *(_DWORD *)(v15 + 664);
                    if ( v6 >= v24 )
                      break;
                    if ( v22 <= (int)v37 )
                    {
                      if ( v6 >= v24 )
                        break;
                      v36 = KiWakePriQueueWaiter(CurrentPrcb, v15, BugCheckParameter2, v37);
                      v25 = v36;
                      if ( v36 )
                      {
                        v26 = 0;
                        goto LABEL_39;
                      }
                      goto LABEL_46;
                    }
                  }
                }
                ++*(_DWORD *)(v15 + 4);
                v28 = v15 + 16LL * v20 + 24;
                v29 = *(_QWORD **)(v28 + 8);
                if ( *v29 != v28 )
                  __fastfail(3u);
                *BugCheckParameter2 = v28;
                BugCheckParameter2[1] = v29;
                *v29 = BugCheckParameter2;
                v25 = v36;
                *(_QWORD *)(v28 + 8) = BugCheckParameter2;
                v26 = 1;
LABEL_39:
                _InterlockedAnd((volatile signed __int32 *)v15, 0xFFFFFF7F);
                if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 && !v25 && !v26 )
                  EtwTracePriQEnqueueFailed(CurrentThread, BugCheckParameter2);
                KiExitDispatcher((unsigned __int64)CurrentPrcb, 0LL, 1u, 0, v34);
                v27 = *(_DWORD *)(v15 + 712);
                if ( v27 < (2 * *(_DWORD *)(v15 + 716)) >> 1
                  || v27 < *(_DWORD *)(v15 + 720)
                  && (_QWORD *)*v16 == v16
                  && (*(_DWORD *)(v15 + 4) || *(int *)(v15 + 716) < 0) )
                {
                  KeSetEvent((PRKEVENT)(*(_QWORD *)(*(_QWORD *)(v38 + 16) + 8LL * *v12) + 16LL), 0, 0);
                }
                CurrentIrql = v35;
                v5 = 1;
                break;
              }
            }
          }
        }
      }
    }
    if ( ++v7 == (unsigned __int16)KeNumberNodes )
      v11 = -1;
    else
      v11 = *(_DWORD *)(qword_140E2DC10 + 4LL * (v10 * (unsigned __int16)KeNumberNodes + v7));
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( !v5 )
    KeBugCheckEx(0xE4u, 5uLL, (ULONG_PTR)BugCheckParameter2, v3, 0xFFFFFFFFFFFFFFFFuLL);
  return result;
}
