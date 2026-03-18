/*
 * XREFs of KdPollBreakIn @ 0x14029CFB0
 * Callers:
 *     KeAccumulateTicks @ 0x14029C3C0 (KeAccumulateTicks.c)
 *     KdCheckForDebugBreak @ 0x14029DE08 (KdCheckForDebugBreak.c)
 *     KdInitSystem @ 0x140B75E30 (KdInitSystem.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     KxTryToAcquireSpinLock @ 0x1404633C8 (KxTryToAcquireSpinLock.c)
 */

char __fastcall KdPollBreakIn(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // bl
  __int64 v5; // rax
  char v6; // si
  __int64 v7; // rdi
  unsigned int *v8; // rdx
  unsigned __int64 *v9; // rcx
  unsigned __int64 v10; // rax
  int v11; // ebx
  _DWORD *v12; // r9
  __int64 v13; // r10
  unsigned __int64 v14; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v17; // eax
  signed __int32 v18; // ett

  if ( KdPitchDebugger && !KdEventLoggingEnabled )
    return 0;
  v4 = 0;
  if ( (_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled )
  {
    v5 = KeDisableInterrupts(a1, a2, a3);
    v6 = v5;
    LODWORD(v5) = KeGetPcr()->Prcb.Number;
    v7 = (unsigned int)v5;
    v8 = (unsigned int *)KdLogBuffer[v5];
    if ( v8 )
    {
      v9 = (unsigned __int64 *)&v8[4 * *v8 + 4];
      v10 = __rdtsc();
      *v9 = ((unsigned __int64)HIDWORD(v10) << 32) | (unsigned int)v10;
      v9[1] = 4 * ((unsigned __int8)KdDebuggerNotPresent & 1u);
    }
    if ( BYTE4(KdpContext) )
    {
      v4 = 1;
      BYTE4(KdpContext) = 0;
    }
    else if ( (unsigned __int8)KxTryToAcquireSpinLock(&KdDebuggerLock) )
    {
      v11 = KdReceivePacket(8LL, 0LL, 0LL, 0LL, 0LL);
      KxReleaseSpinLock((volatile signed __int64 *)&KdDebuggerLock);
      v4 = v11 == 0;
    }
    v4 &= (unsigned __int8)KdDebuggerEnabled;
    KdpControlCPressed |= v4;
    v12 = (_DWORD *)KdLogBuffer[v7];
    if ( v12 )
    {
      v13 = (unsigned int)*v12;
      v14 = __rdtsc();
      *(_QWORD *)&v12[4 * v13 + 6] = v12[4 * v13 + 6] & 4 | (2 * ((unsigned __int8)KdDebuggerNotPresent & 1u)) | ((((unsigned __int64)HIDWORD(v14) << 32) | (unsigned int)v14) - *(_QWORD *)&v12[4 * v13 + 4]) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( (_DWORD)v13 == 254 )
        *v12 = 0;
      else
        *v12 = v13 + 1;
    }
    if ( v6 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v17 = *SchedulerAssist;
        do
        {
          v18 = v17;
          v17 = _InterlockedCompareExchange(SchedulerAssist, v17 & 0xFFDFFFFF, v17);
        }
        while ( v18 != v17 );
        if ( (v17 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
    }
  }
  return v4;
}
