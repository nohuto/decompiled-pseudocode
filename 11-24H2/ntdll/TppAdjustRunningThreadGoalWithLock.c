/*
 * XREFs of TppAdjustRunningThreadGoalWithLock @ 0x180051CB4
 * Callers:
 *     TppWorkInitialize @ 0x1800470B0 (TppWorkInitialize.c)
 *     TppWorkCallbackPrologRelease @ 0x18004ECC0 (TppWorkCallbackPrologRelease.c)
 *     TppWorkerFindTask @ 0x18004FB00 (TppWorkerFindTask.c)
 *     TppWorkerThread @ 0x1800502D0 (TppWorkerThread.c)
 *     TppWorkPost @ 0x18006B720 (TppWorkPost.c)
 *     TpSetPoolThreadCpuSets @ 0x180086140 (TpSetPoolThreadCpuSets.c)
 *     TpAllocWait @ 0x18008B0C0 (TpAllocWait.c)
 *     TppGetCurrentThreadNumaNode @ 0x18008B710 (TppGetCurrentThreadNumaNode.c)
 *     TpPostTask @ 0x18008B890 (TpPostTask.c)
 *     TpStartAsyncIoOperation @ 0x1800E1C50 (TpStartAsyncIoOperation.c)
 * Callees:
 *     TppPoolUpdateNodeRelation @ 0x180085F2C (TppPoolUpdateNodeRelation.c)
 *     NtSetInformationWorkerFactory @ 0x180163660 (NtSetInformationWorkerFactory.c)
 */

__int64 __fastcall TppAdjustRunningThreadGoalWithLock(__int64 a1)
{
  unsigned int v2; // r9d
  __int64 result; // rax
  __int16 v4; // r10
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  bool v7; // cf
  int v8; // r9d
  void *v9; // rcx
  int WorkerFactoryInformation; // [rsp+30h] [rbp+8h] BYREF
  signed __int64 v11; // [rsp+38h] [rbp+10h]

  if ( !a1 || (v2 = *(_DWORD *)(a1 + 440)) == 0 )
    v2 = MEMORY[0x7FFE03C0];
  result = *(unsigned int *)(a1 + 424);
  if ( v2 != (_DWORD)result )
  {
    *(_DWORD *)(a1 + 424) = v2;
    v4 = v2 - result;
    _m_prefetchw((const void *)(a1 + 8));
    v5 = *(_QWORD *)(a1 + 8);
    v11 = v5;
    do
    {
      LODWORD(v11) = v11 & 0xFFFF0000 | (unsigned __int16)(v11 + v4);
      v6 = v5;
      v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v11, v5);
      v11 = v5;
    }
    while ( v6 != v5 );
    v7 = v2 < 4;
    v8 = v2 + 1;
    if ( v7 )
      v8 = 4;
    v9 = *(void **)(a1 + 56);
    WorkerFactoryInformation = v8;
    NtSetInformationWorkerFactory(v9, WorkerFactoryAdjustThreadGoal, &WorkerFactoryInformation, 4u);
    return TppPoolUpdateNodeRelation(a1);
  }
  return result;
}
