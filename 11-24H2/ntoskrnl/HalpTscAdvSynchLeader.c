/*
 * XREFs of HalpTscAdvSynchLeader @ 0x140546820
 * Callers:
 *     HalpTscSynchronizationWorker @ 0x140547220 (HalpTscSynchronizationWorker.c)
 * Callees:
 *     HalpTscAdvSynchToLeader @ 0x140483724 (HalpTscAdvSynchToLeader.c)
 *     HalpFindTimer @ 0x140544A60 (HalpFindTimer.c)
 *     HalpTscAdvSynchCalculateRemoteDeltas @ 0x140546740 (HalpTscAdvSynchCalculateRemoteDeltas.c)
 *     HalpTscAdvSynchReadTimeStamp @ 0x140546A4C (HalpTscAdvSynchReadTimeStamp.c)
 *     HalpTscAdvSynchToTarget @ 0x140546B08 (HalpTscAdvSynchToTarget.c)
 *     HalpTscTraceStatus @ 0x1405474F8 (HalpTscTraceStatus.c)
 *     HalpTscTraceSynchronizationSummary @ 0x140547594 (HalpTscTraceSynchronizationSummary.c)
 */

__int64 __fastcall HalpTscAdvSynchLeader(__int64 a1)
{
  __int64 Number; // r15
  unsigned int v3; // ebx
  __int64 v4; // r9
  __int64 TimeStamp; // r14
  unsigned int v6; // eax
  unsigned int v7; // r10d
  __int64 v8; // rax
  unsigned int v9; // r10d
  __int64 v10; // r9
  unsigned int i; // esi
  unsigned int v12; // eax
  unsigned __int64 v13; // r14
  ULONG_PTR *Timer; // rax
  ULONG_PTR *v15; // rsi
  __int64 result; // rax
  unsigned __int64 v17; // rdx
  int v18; // [rsp+20h] [rbp-10h]
  unsigned int v19; // [rsp+60h] [rbp+30h] BYREF
  __int64 v20; // [rsp+68h] [rbp+38h] BYREF
  __int64 v21; // [rsp+70h] [rbp+40h] BYREF

  Number = KeGetCurrentPrcb()->Number;
  v3 = 0;
  TimeStamp = HalpTscAdvSynchReadTimeStamp(Number);
  if ( HalpTscRequestedSynchronization )
  {
    if ( !HalpTscRequestedIterations )
      HalpTscRequestedIterations = 500;
    if ( *(_BYTE *)(a1 + 34) )
    {
      HalpTscAdvSynchToLeader(*(_DWORD *)(a1 + 36));
    }
    else
    {
      v20 = 0LL;
      v21 = 0LL;
      v6 = *(_DWORD *)(a1 + 40);
      v19 = KeGetCurrentPrcb()->Number;
      HalpTscAdvSynchCalculateRemoteDeltas(&v20, &v21, &v19, v4, v18, v6);
      if ( v19 != KeGetCurrentPrcb()->Number )
      {
        HalpTscAdvSynchReadTimeStamp((unsigned int)Number);
        LODWORD(Number) = v7;
        v8 = HalpTscAdvSynchReadTimeStamp(v7);
        TimeStamp = v8 - v10;
        HalpTscAdvSynchToTarget(v9);
      }
      for ( i = 0; i < *(_DWORD *)(a1 + 40); ++i )
      {
        if ( i != KeGetCurrentPrcb()->Number && i != v19 )
          HalpTscAdvSynchToLeader(i);
      }
    }
  }
  v20 = 0LL;
  v21 = 0LL;
  v12 = *(_DWORD *)(a1 + 40);
  v19 = KeGetCurrentPrcb()->Number;
  HalpTscAdvSynchCalculateRemoteDeltas(&v20, &v21, &v19, v4, v18, v12);
  v13 = (unsigned __int64)(1000000 * (HalpTscAdvSynchReadTimeStamp((unsigned int)Number) - TimeStamp))
      / *(_QWORD *)KeGetPcr()->HalReserved;
  Timer = HalpFindTimer(5, 0, 0, 0, 1);
  v15 = Timer;
  HalpTscMaximumComputedSpread = v21 - v20;
  if ( v21 - v20 <= (unsigned __int64)(unsigned int)HalpTscMaximumCounterSyncSpread )
  {
    result = HalpTscTraceSynchronizationSummary(KeGetCurrentPrcb()->Number, v19, v21, v20, v13);
    *((_DWORD *)v15 + 46) |= 0x20u;
  }
  else
  {
    *((_DWORD *)Timer + 46) &= ~0x20u;
    HalpTscSynchronizationFailureFallback = 1;
    result = HalpTscTraceStatus(&HAL_ETW_EVENT_TIMER_SYNCH_FAILED);
  }
  if ( *(_DWORD *)(a1 + 40) )
  {
    do
    {
      result = (__int64)KeGetCurrentPrcb();
      if ( v3 != *(_DWORD *)(result + 36) )
      {
        v17 = (unsigned __int64)v3 << 7;
        _InterlockedExchange((volatile __int32 *)(v17 + TscRequest), 7);
        result = *(unsigned int *)(v17 + TscRequest);
        if ( (_DWORD)result == 7 )
        {
          do
          {
            _mm_pause();
            result = TscRequest;
          }
          while ( *(_DWORD *)(v17 + TscRequest) == 7 );
        }
      }
      ++v3;
    }
    while ( v3 < *(_DWORD *)(a1 + 40) );
  }
  return result;
}
