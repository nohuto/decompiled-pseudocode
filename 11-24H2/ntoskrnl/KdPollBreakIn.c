/*
 * XREFs of KdPollBreakIn @ 0x1402ABAA0
 * Callers:
 *     KeAccumulateTicks @ 0x1402AAEB0 (KeAccumulateTicks.c)
 *     KdCheckForDebugBreak @ 0x1402AC8F8 (KdCheckForDebugBreak.c)
 *     KdInitSystem @ 0x140B77E30 (KdInitSystem.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     KxTryToAcquireSpinLock @ 0x140459EB8 (KxTryToAcquireSpinLock.c)
 */

char __fastcall KdPollBreakIn(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // bl
  __int64 v6; // rax
  char v7; // si
  __int64 v8; // rdi
  unsigned int *v9; // rdx
  unsigned __int64 *v10; // rcx
  unsigned __int64 v11; // rax
  int v12; // ebx
  _DWORD *v13; // r9
  __int64 v14; // r10
  unsigned __int64 v15; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v18; // eax
  signed __int32 v19; // ett

  if ( KdPitchDebugger && !KdEventLoggingEnabled )
    return 0;
  v5 = 0;
  if ( (_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled )
  {
    v6 = KeDisableInterrupts(a1, a2, a3, a4);
    v7 = v6;
    LODWORD(v6) = KeGetPcr()->Prcb.Number;
    v8 = (unsigned int)v6;
    v9 = (unsigned int *)KdLogBuffer[v6];
    if ( v9 )
    {
      v10 = (unsigned __int64 *)&v9[4 * *v9 + 4];
      v11 = __rdtsc();
      *v10 = ((unsigned __int64)HIDWORD(v11) << 32) | (unsigned int)v11;
      v10[1] = 4 * ((unsigned __int8)KdDebuggerNotPresent & 1u);
    }
    if ( BYTE4(KdpContext) )
    {
      v5 = 1;
      BYTE4(KdpContext) = 0;
    }
    else if ( (unsigned __int8)KxTryToAcquireSpinLock(&KdDebuggerLock) )
    {
      v12 = KdReceivePacket(8LL, 0LL, 0LL, 0LL, 0LL);
      KxReleaseSpinLock((volatile signed __int64 *)&KdDebuggerLock);
      v5 = v12 == 0;
    }
    v5 &= (unsigned __int8)KdDebuggerEnabled;
    KdpControlCPressed |= v5;
    v13 = (_DWORD *)KdLogBuffer[v8];
    if ( v13 )
    {
      v14 = (unsigned int)*v13;
      v15 = __rdtsc();
      *(_QWORD *)&v13[4 * v14 + 6] = v13[4 * v14 + 6] & 4 | (2 * ((unsigned __int8)KdDebuggerNotPresent & 1u)) | ((((unsigned __int64)HIDWORD(v15) << 32) | (unsigned int)v15) - *(_QWORD *)&v13[4 * v14 + 4]) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( (_DWORD)v14 == 254 )
        *v13 = 0;
      else
        *v13 = v14 + 1;
    }
    if ( v7 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v18 = *SchedulerAssist;
        do
        {
          v19 = v18;
          v18 = _InterlockedCompareExchange(SchedulerAssist, v18 & 0xFFDFFFFF, v18);
        }
        while ( v19 != v18 );
        if ( (v18 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
    }
  }
  return v5;
}
