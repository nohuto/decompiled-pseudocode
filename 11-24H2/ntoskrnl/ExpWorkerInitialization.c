/*
 * XREFs of ExpWorkerInitialization @ 0x140C45050
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140C42BB4 (ExpInitSystemPhase1.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140419080 (KiQueryUnbiasedInterruptTime.c)
 *     ExQueueDebuggerWorker @ 0x140656B18 (ExQueueDebuggerWorker.c)
 *     ExpLegacyWorkerInitialization @ 0x140656B74 (ExpLegacyWorkerInitialization.c)
 *     ExpNodeInitialize @ 0x1407C00C0 (ExpNodeInitialize.c)
 *     ExpPartitionInitialize @ 0x1407C02D4 (ExpPartitionInitialize.c)
 *     ExpPartitionStart @ 0x1407C0484 (ExpPartitionStart.c)
 *     ObpUnlockObjectType @ 0x1409C64EC (ObpUnlockObjectType.c)
 *     ObpLockObjectTypeExclusive @ 0x1409C6564 (ObpLockObjectTypeExclusive.c)
 */

__int64 ExpWorkerInitialization()
{
  int v0; // eax
  unsigned int v1; // eax
  unsigned __int16 i; // bx
  __int64 v3; // rcx
  __int64 result; // rax
  unsigned int v5; // esi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned int v8; // ecx
  int v9; // ebx
  unsigned int v10; // edi
  __int64 v11; // rax
  _QWORD *v12; // r8
  const char *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax

  ExpWorkerSwapinMutex.Event.Header.Size = 6;
  ExpWorkerSwapinMutex.Owner = 0LL;
  ExpWorkerSwapinMutex.Event.Header.WaitListHead.Blink = &ExpWorkerSwapinMutex.Event.Header.WaitListHead;
  ExpWorkerSwapinMutex.Event.Header.WaitListHead.Flink = &ExpWorkerSwapinMutex.Event.Header.WaitListHead;
  v0 = ExpMaximumKernelWorkerThreads;
  ExpWorkerSwapinMutex.Count = 1;
  ExpWorkerSwapinMutex.Contention = 0;
  LOWORD(ExpWorkerSwapinMutex.Event.Header.Lock) = 1;
  ExpWorkerSwapinMutex.Event.Header.SignalState = 0;
  ExpWorkersCanSwap = 1;
  if ( ExpMaximumKernelWorkerThreads > 0x4000 )
  {
    v0 = 0x4000;
    ExpMaximumKernelWorkerThreads = 0x4000;
  }
  if ( v0 < 32 )
    ExpMaximumKernelWorkerThreads = 32;
  v1 = ExpWorkerThreadTimeoutInSeconds;
  if ( (unsigned int)ExpWorkerThreadTimeoutInSeconds > 0xE10 )
  {
    v1 = 3600;
    ExpWorkerThreadTimeoutInSeconds = 3600;
  }
  if ( v1 < 0x3C )
    ExpWorkerThreadTimeoutInSeconds = 60;
  for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
  {
    v3 = 0LL;
    if ( (_UNKNOWN *)KeNodeBlock[i] != (_UNKNOWN *)((char *)&KiNodeInit + 824 * i) )
      v3 = KeNodeBlock[i];
    ExpNodeInitialize(v3);
  }
  result = ExpPartitionInitialize((__int64)PspSystemPartition);
  if ( (int)result >= 0 )
  {
    result = ExpPartitionStart(*((_QWORD *)PspSystemPartition + 2));
    v5 = result;
    if ( (int)result >= 0 )
    {
      ExpLegacyWorkerInitialization();
      _mm_lfence();
      if ( !qword_140E625C0 )
      {
        v6 = __rdtsc();
        qword_140E625C0 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v6) << 32) | (unsigned int)v6) >> 4)) ^ 0xB96LL;
        if ( !qword_140E625C0 )
          qword_140E625C0 = 1LL;
        v7 = __rdtsc();
        qword_140E625C8 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v7) << 32) | (unsigned int)v7) >> 4)) ^ 0x5CBLL;
        ObpLockObjectTypeExclusive((__int64)ObpTypeObjectType);
        v8 = 0;
        v9 = 64;
        v10 = *((_DWORD *)ObpTypeObjectType + 11);
        qword_140E625D8 = v10;
        while ( v8 < v10 )
        {
          v11 = ObpObjectTypes[v8];
          if ( !v11 )
          {
            v10 = v8;
            qword_140E625D8 = v8;
            break;
          }
          if ( (*(_BYTE *)(v11 + 66) & 0x40) != 0 )
            _bittestandset64(&qword_140E625E0, v8);
          ++v8;
        }
        ObpUnlockObjectType((__int64)ObpTypeObjectType);
        if ( v10 )
        {
          qword_140E62600 = ObpObjectTypes[41929663 * (__rdtsc() >> 4) % v10];
          v12 = (_QWORD *)(qword_140E62600 + 112);
          v13 = (const char *)(qword_140E62600 + 112);
          if ( qword_140E62600 + 112 < (unsigned __int64)(qword_140E62600 + 176) )
          {
            do
            {
              _mm_prefetch(v13, 0);
              v13 += 64;
            }
            while ( (unsigned __int64)v13 < qword_140E62600 + 176 );
          }
          v14 = qword_140E625C0;
          v15 = 8LL;
          do
          {
            v14 = __ROR8__(v14 - *v12++, qword_140E625C8);
            v9 -= 8;
            --v15;
          }
          while ( v15 );
          for ( ; v9; --v9 )
          {
            v16 = *(unsigned __int8 *)v12;
            v12 = (_QWORD *)((char *)v12 + 1);
            v14 = __ROR8__(v14 - v16, qword_140E625C8);
          }
          qword_140E62608 = v14;
          qword_140E625D0 = KiQueryUnbiasedInterruptTime()
                          + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL
                          + 288000000000LL;
        }
        else
        {
          qword_140E625C0 = 0LL;
        }
      }
      ExpDebuggerDpc.TargetInfoAsUlong = 275;
      ExpDebuggerDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)ExpDebuggerDpcRoutine;
      ExpDebuggerWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ExpDebuggerWorker;
      ExpDebuggerDpc.DeferredContext = 0LL;
      ExpDebuggerDpc.DpcData = 0LL;
      ExpDebuggerDpc.ProcessorHistory = 0LL;
      ExpDebuggerWorkItem.Parameter = 0LL;
      ExpDebuggerWorkItem.List.Flink = 0LL;
      ExpDebuggerWork = 1;
      ExQueueDebuggerWorker();
      return v5;
    }
  }
  return result;
}
