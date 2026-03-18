/*
 * XREFs of InsertReadyQueue @ 0x140013A60
 * Callers:
 *     DequeueAndReadyContext @ 0x140005CE4 (DequeueAndReadyContext.c)
 *     RestartCtxtPassive @ 0x1400137F0 (RestartCtxtPassive.c)
 *     RestartContext @ 0x14001384C (RestartContext.c)
 * Callees:
 *     RunContext @ 0x140005EA0 (RunContext.c)
 *     ConPrintf @ 0x1400067DC (ConPrintf.c)
 *     OSQueueWorkItem @ 0x140013FD4 (OSQueueWorkItem.c)
 *     LogSchedEvent @ 0x14002DA00 (LogSchedEvent.c)
 *     AsyncCallBack @ 0x1400348D4 (AsyncCallBack.c)
 *     AMLIDebugger @ 0x1400564EC (AMLIDebugger.c)
 */

__int64 __fastcall InsertReadyQueue(__int64 a1, char a2)
{
  unsigned int v2; // edi
  __int64 v5; // rax
  __int64 v6; // r8
  struct _KTHREAD *CurrentThread; // r11
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // r14
  __int64 v11; // rdx
  int v12; // eax
  int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // r8
  struct _KTHREAD *v16; // r11
  __int64 v17; // r9
  __int64 v18; // r10
  __int64 v19; // rdi
  __int64 v20; // rdx
  int v21; // eax
  _QWORD *v22; // rcx
  _QWORD *v23; // rdx
  __int64 v25; // rax
  __int64 v26; // r8
  struct _KTHREAD *v27; // r11
  __int64 v28; // r9
  __int64 v29; // r10
  __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // r9
  int v36; // eax

  v2 = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger();
  }
  v5 = *(_QWORD *)(a1 + 104);
  if ( v5 )
    v6 = *(_QWORD *)(v5 + 32);
  else
    v6 = *(_QWORD *)(a1 + 72);
  CurrentThread = KeGetCurrentThread();
  v8 = *(_QWORD *)(a1 + 120);
  v9 = *(_QWORD *)(a1 + 408);
  v10 = (unsigned int)gReadyQueue;
  if ( (gDebugger & 0x8000) != 0 && qword_140089090 )
  {
    v11 = 72LL * (_InterlockedExchangeAdd((_DWORD *)&qword_140089088 + 1, 1u) % (unsigned int)qword_140089088);
    *(_QWORD *)((char *)qword_140089090 + v11 + 8) = MEMORY[0xFFFFF78000000008];
    *(_DWORD *)((char *)qword_140089090 + v11) = 1229869905;
    *(_QWORD *)((char *)qword_140089090 + v11 + 16) = CurrentThread;
    *(_QWORD *)((char *)qword_140089090 + v11 + 24) = v9;
    *(_QWORD *)((char *)qword_140089090 + v11 + 32) = a1;
    *(_QWORD *)((char *)qword_140089090 + v11 + 40) = v10;
    *(_QWORD *)((char *)qword_140089090 + v11 + 48) = a1;
    *(_QWORD *)((char *)qword_140089090 + v11 + 56) = v6;
    *(_QWORD *)((char *)qword_140089090 + v11 + 64) = v8;
  }
  v12 = *(_DWORD *)(a1 + 64);
  if ( (v12 & 1) != 0 )
  {
    *(_DWORD *)(a1 + 64) = v12 & 0xFFFFFFFE;
    if ( !KeCancelTimer((PKTIMER)(a1 + 192)) )
      *(_DWORD *)(a1 + 64) |= 2u;
  }
  v13 = *(_DWORD *)(a1 + 64);
  *(_DWORD *)(a1 + 64) = v13 | 8;
  if ( (v13 & 2) == 0 && (v13 & 0x90) != 0x10 )
  {
    if ( a2 )
    {
      KeReleaseSpinLock(&SpinLock, NewIrql);
      AsyncCallBack(a1, 32771LL);
      NewIrql = KeAcquireSpinLockRaiseToDpc(&SpinLock);
      return v2;
    }
    if ( (gdwfAMLI & 4) != 0 )
    {
      if ( (gReadyQueue & 8) == 0 )
        return (unsigned int)RunContext((_QWORD *)a1);
      v34 = *(_QWORD *)(a1 + 104);
      if ( v34 )
        v35 = *(_QWORD *)(v34 + 32);
      else
        v35 = *(_QWORD *)(a1 + 72);
      LogSchedEvent(1363367000, a1, a1, v35, *(_QWORD *)(a1 + 120));
      v36 = *(_DWORD *)(a1 + 64);
      if ( (v36 & 0x40) != 0 )
        goto LABEL_23;
      v22 = (_QWORD *)(a1 + 32);
      *(_DWORD *)(a1 + 64) = v36 | 0x40;
      v23 = (_QWORD *)qword_140088EE0;
      if ( *(__int64 **)qword_140088EE0 == &qword_140088ED8 )
        goto LABEL_22;
    }
    else
    {
      if ( (v13 & 0x80u) != 0 && *(struct _KTHREAD **)(a1 + 408) == KeGetCurrentThread() )
      {
        v32 = *(_QWORD *)(a1 + 104);
        if ( v32 )
          v33 = *(_QWORD *)(v32 + 32);
        else
          v33 = *(_QWORD *)(a1 + 72);
        LogSchedEvent(1313166164, a1, a1, v33, *(_QWORD *)(a1 + 120));
        return (unsigned int)RunContext((_QWORD *)a1);
      }
      if ( (__int64 *)RunningContextListHead == &RunningContextListHead && (gReadyQueue & 8) == 0 )
      {
        v25 = *(_QWORD *)(a1 + 104);
        if ( v25 )
          v26 = *(_QWORD *)(v25 + 32);
        else
          v26 = *(_QWORD *)(a1 + 72);
        v27 = KeGetCurrentThread();
        v28 = *(_QWORD *)(a1 + 120);
        v29 = *(_QWORD *)(a1 + 408);
        v30 = (unsigned int)gReadyQueue;
        if ( (gDebugger & 0x8000) != 0 && qword_140089090 )
        {
          v31 = 72LL * (_InterlockedExchangeAdd((_DWORD *)&qword_140089088 + 1, 1u) % (unsigned int)qword_140089088);
          *(_QWORD *)((char *)qword_140089090 + v31 + 8) = MEMORY[0xFFFFF78000000008];
          *(_DWORD *)((char *)qword_140089090 + v31) = 1163280716;
          *(_QWORD *)((char *)qword_140089090 + v31 + 16) = v27;
          *(_QWORD *)((char *)qword_140089090 + v31 + 24) = v29;
          *(_QWORD *)((char *)qword_140089090 + v31 + 32) = a1;
          *(_QWORD *)((char *)qword_140089090 + v31 + 40) = v30;
          *(_QWORD *)((char *)qword_140089090 + v31 + 48) = a1;
          *(_QWORD *)((char *)qword_140089090 + v31 + 56) = v26;
          *(_QWORD *)((char *)qword_140089090 + v31 + 64) = v28;
        }
        v2 = RunContext((_QWORD *)a1);
        if ( (__int64 *)qword_140088ED8 != &qword_140088ED8 && (gReadyQueue & 2) == 0 )
        {
          LogSchedEvent(1263092555, 0, v2, 0, 0LL);
          gReadyQueue |= 2u;
          OSQueueWorkItem(&qword_140088EF8);
        }
        return v2;
      }
      v14 = *(_QWORD *)(a1 + 104);
      if ( v14 )
        v15 = *(_QWORD *)(v14 + 32);
      else
        v15 = *(_QWORD *)(a1 + 72);
      v16 = KeGetCurrentThread();
      v17 = *(_QWORD *)(a1 + 120);
      v18 = *(_QWORD *)(a1 + 408);
      v19 = (unsigned int)gReadyQueue;
      if ( (gDebugger & 0x8000) != 0 && qword_140089090 )
      {
        v20 = 72LL * (_InterlockedExchangeAdd((_DWORD *)&qword_140089088 + 1, 1u) % (unsigned int)qword_140089088);
        *(_QWORD *)((char *)qword_140089090 + v20 + 8) = MEMORY[0xFFFFF78000000008];
        *(_DWORD *)((char *)qword_140089090 + v20) = 1363367000;
        *(_QWORD *)((char *)qword_140089090 + v20 + 16) = v16;
        *(_QWORD *)((char *)qword_140089090 + v20 + 24) = v18;
        *(_QWORD *)((char *)qword_140089090 + v20 + 32) = a1;
        *(_QWORD *)((char *)qword_140089090 + v20 + 40) = v19;
        *(_QWORD *)((char *)qword_140089090 + v20 + 48) = a1;
        *(_QWORD *)((char *)qword_140089090 + v20 + 56) = v15;
        *(_QWORD *)((char *)qword_140089090 + v20 + 64) = v17;
      }
      v21 = *(_DWORD *)(a1 + 64);
      if ( (v21 & 0x40) != 0 )
      {
LABEL_23:
        *(_DWORD *)(a1 + 64) |= 0x20u;
        return 32772;
      }
      v22 = (_QWORD *)(a1 + 32);
      *(_DWORD *)(a1 + 64) = v21 | 0x40;
      v23 = (_QWORD *)qword_140088EE0;
      if ( *(__int64 **)qword_140088EE0 == &qword_140088ED8 )
      {
LABEL_22:
        *v22 = &qword_140088ED8;
        v22[1] = v23;
        *v23 = v22;
        qword_140088EE0 = (__int64)v22;
        goto LABEL_23;
      }
    }
    __fastfail(3u);
  }
  return v2;
}
