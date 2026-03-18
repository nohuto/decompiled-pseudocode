/*
 * XREFs of ExQueueWorkItemFromIo @ 0x1402E59A0
 * Callers:
 *     IoQueueWorkItem @ 0x1402E4B40 (IoQueueWorkItem.c)
 *     IoQueueWorkItemEx @ 0x1402E56E0 (IoQueueWorkItemEx.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
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

__int64 __fastcall ExQueueWorkItemFromIo(_QWORD *BugCheckParameter2, int a2)
{
  ULONG_PTR v3; // rsi
  ULONG_PTR v4; // r9
  char v5; // di
  unsigned int v6; // ebx
  int v7; // ebp
  __int64 v8; // r9
  unsigned __int8 CurrentIrql; // r14
  unsigned int v10; // r8d
  unsigned int v11; // ecx
  unsigned __int16 *v12; // r12
  __int64 result; // rax
  __int64 v14; // rdi
  _QWORD *v15; // rbp
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r14
  _KTHREAD *CurrentThread; // r13
  signed int v19; // r10d
  __int64 v20; // rdx
  __int64 v21; // rax
  int v22; // ecx
  unsigned int v23; // ecx
  char v24; // cl
  char v25; // dl
  int v26; // ecx
  __int64 v27; // rdx
  _QWORD *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rdx
  int v31; // ecx
  bool IsThreadRunning; // al
  unsigned __int8 v33; // [rsp+30h] [rbp-48h]
  unsigned __int8 v34; // [rsp+38h] [rbp-40h]
  char v35; // [rsp+80h] [rbp+8h]
  unsigned int v36; // [rsp+90h] [rbp+18h]
  __int64 v37; // [rsp+98h] [rbp+20h]

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
    v36 = a2 - 32;
  }
  else
  {
    _mm_lfence();
    v36 = ExpBuiltinPriorities[a2];
  }
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = *((_QWORD *)PspSystemPartition + 2);
  v37 = v8;
  CurrentIrql = KeGetCurrentIrql();
  v34 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    v8 = v37;
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
        v29 = 8LL * *v12;
        if ( *(_QWORD *)(*(_QWORD *)(v29 + *(_QWORD *)(v8 + 16)) + 264LL) >= 2uLL )
        {
          v30 = *(_QWORD *)(*(_QWORD *)(v29 + *(_QWORD *)(v8 + 8)) + 8LL);
          if ( (v30 & 1) == 0 )
          {
            if ( v30 )
            {
              v31 = *(_DWORD *)(v30 + 712) & 0x3FFF;
              if ( (*(_DWORD *)(v30 + 712) & 0x4000) != 0 )
                --v31;
              if ( v31 >= (2 * *(_DWORD *)(v30 + 716)) >> 1 )
              {
                v35 = 0;
                v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 8LL * *v12) + 8LL);
                if ( (v14 & 1) != 0 )
                  v14 = 0LL;
                v15 = (_QWORD *)(v14 + 8);
                v16 = KeGetCurrentIrql();
                v33 = v16;
                __writecr8(2uLL);
                if ( KiIrqlFlags )
                  KiRaiseIrqlProcessIrqlFlags(v16);
                CurrentPrcb = KeGetCurrentPrcb();
                CurrentThread = CurrentPrcb->CurrentThread;
                if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
                {
                  IsThreadRunning = KeIsThreadRunning((__int64)CurrentPrcb->CurrentThread);
                  EtwTracePriQEnqueueWork(CurrentThread, BugCheckParameter2, v36, IsThreadRunning);
                }
                KiAcquireKobjectLockSafe((volatile signed __int32 *)v14);
                if ( (_QWORD *)*v15 == v15
                  || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v14 && CurrentThread->WaitReason == 15 )
                {
LABEL_45:
                  v19 = v36;
                }
                else
                {
                  v19 = v36;
                  v20 = v14 + 664;
                  v21 = 32LL;
                  while ( 1 )
                  {
                    v22 = *(_DWORD *)(v20 - 4);
                    v20 -= 4LL;
                    v6 += v22;
                    --v21;
                    v23 = *(_DWORD *)(v14 + 664);
                    if ( v6 >= v23 )
                      break;
                    if ( v21 <= (int)v36 )
                    {
                      if ( v6 >= v23 )
                        break;
                      v35 = KiWakePriQueueWaiter(CurrentPrcb, v14, BugCheckParameter2, v36);
                      v24 = v35;
                      if ( v35 )
                      {
                        v25 = 0;
                        goto LABEL_38;
                      }
                      goto LABEL_45;
                    }
                  }
                }
                ++*(_DWORD *)(v14 + 4);
                v27 = v14 + 16LL * v19 + 24;
                v28 = *(_QWORD **)(v27 + 8);
                if ( *v28 != v27 )
                  __fastfail(3u);
                *BugCheckParameter2 = v27;
                BugCheckParameter2[1] = v28;
                *v28 = BugCheckParameter2;
                v24 = v35;
                *(_QWORD *)(v27 + 8) = BugCheckParameter2;
                v25 = 1;
LABEL_38:
                _InterlockedAnd((volatile signed __int32 *)v14, 0xFFFFFF7F);
                if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 && !v24 && !v25 )
                  EtwTracePriQEnqueueFailed(CurrentThread, BugCheckParameter2);
                KiExitDispatcher(CurrentPrcb, 0LL, 1u, 0, v33);
                v26 = *(_DWORD *)(v14 + 712);
                if ( v26 < (2 * *(_DWORD *)(v14 + 716)) >> 1
                  || v26 < *(_DWORD *)(v14 + 720)
                  && (_QWORD *)*v15 == v15
                  && (*(_DWORD *)(v14 + 4) || *(int *)(v14 + 716) < 0) )
                {
                  KeSetEvent((PRKEVENT)(*(_QWORD *)(*(_QWORD *)(v37 + 16) + 8LL * *v12) + 16LL), 0, 0);
                }
                CurrentIrql = v34;
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
      v11 = *(_DWORD *)(qword_140E2D890 + 4LL * (v10 * (unsigned __int16)KeNumberNodes + v7));
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( !v5 )
    KeBugCheckEx(0xE4u, 5uLL, (ULONG_PTR)BugCheckParameter2, v3, 0xFFFFFFFFFFFFFFFFuLL);
  return result;
}
