/*
 * XREFs of KeAccumulateTicks @ 0x1402AAEB0
 * Callers:
 *     KiUpdateRunTime @ 0x1402AA8E0 (KiUpdateRunTime.c)
 *     PpmIdleExecuteTransition @ 0x140371030 (PpmIdleExecuteTransition.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KiCheckForTimerExpiration @ 0x1402AB5D0 (KiCheckForTimerExpiration.c)
 *     KdPollBreakIn @ 0x1402ABAA0 (KdPollBreakIn.c)
 *     KiDpcWatchdogCounterReset @ 0x1402AC2C0 (KiDpcWatchdogCounterReset.c)
 *     KiRequestSoftwareInterrupt @ 0x1402DC510 (KiRequestSoftwareInterrupt.c)
 *     KiQueryEffectivePriorityThread @ 0x14036A4C0 (KiQueryEffectivePriorityThread.c)
 *     KiCheckKeepAlive @ 0x1403A49E4 (KiCheckKeepAlive.c)
 *     KiDpcWatchdogCaptureStack @ 0x14043FD44 (KiDpcWatchdogCaptureStack.c)
 *     EtwTraceDpcProfilingStack @ 0x14043FDEC (EtwTraceDpcProfilingStack.c)
 *     EtwTraceDpcProfilingStackBegin @ 0x14043FE7C (EtwTraceDpcProfilingStackBegin.c)
 *     HvlInvokeHypervisorDebugger @ 0x14043FF4C (HvlInvokeHypervisorDebugger.c)
 *     KiDeferDpcWatchdogViolation @ 0x14043FF9C (KiDeferDpcWatchdogViolation.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1404F71F8 (KiResetGlobalDpcWatchdogProfiler.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     DbgBreakPointWithStatus @ 0x1404FA0D0 (DbgBreakPointWithStatus.c)
 */

void __fastcall KeAccumulateTicks(__int64 a1, int a2, int a3, unsigned __int8 a4, char a5, int a6)
{
  _DWORD *v10; // rbp
  unsigned int v11; // edi
  __int64 v12; // rdx
  __int16 v13; // cx
  unsigned int v14; // ecx
  unsigned int v15; // eax
  char v16; // al
  int v17; // esi
  __int64 v18; // rcx
  unsigned int v19; // eax
  unsigned int v20; // r14d
  unsigned int v21; // esi
  unsigned int v22; // r15d
  unsigned int v23; // r13d
  unsigned int v24; // r12d
  int v25; // r15d
  bool v26; // zf
  unsigned int v27; // eax
  unsigned int v28; // edx
  unsigned int *v29; // rcx
  ULONG_PTR v30; // r9
  unsigned int v31; // ecx
  int v32; // esi
  unsigned int v33; // r8d
  int v34; // r14d
  unsigned int v35; // edx
  ULONG_PTR v36; // r12
  ULONG_PTR v37; // r13
  unsigned int v38; // r10d
  char v39; // dl
  ULONG_PTR v40; // r12
  ULONG_PTR v41; // rsi
  __int64 v42; // r9
  __int64 v43; // r8
  _QWORD *v44; // rcx
  int v45; // eax
  ULONG_PTR BugCheckParameter3; // [rsp+30h] [rbp-38h]
  ULONG_PTR *BugCheckParameter4; // [rsp+70h] [rbp+8h]
  int v48; // [rsp+98h] [rbp+30h]

  if ( a6 != 4 )
    KiCheckForTimerExpiration();
  v10 = *(_DWORD **)(a1 + 8);
  if ( KiTickAccumulationFromAccountingPeriods && (v10[29] & 0x400) == 0 )
    v10[275] = a5 | (2 * v10[275]);
  *(_DWORD *)(a1 + 14528) = a3;
  v11 = a3 - a2;
  if ( !v11 )
  {
    if ( KiForceIdleDisabled || KiForceIdleState != 4 )
      return;
    goto LABEL_12;
  }
  if ( *(_BYTE *)(a1 + 33) )
  {
    if ( !--KiClockPollCycle )
    {
      v39 = 0;
      v40 = (unsigned __int8)KiClockCheckSlot;
      KiClockPollCycle = KiClockKeepAliveCycle;
      v41 = KiProcessorBlock[(unsigned __int8)KiClockCheckSlot];
      if ( (unsigned int)(unsigned __int8)KiClockCheckSlot + 1 < (unsigned int)KeNumberProcessors_0 )
        v39 = KiClockCheckSlot + 1;
      KiClockCheckSlot = v39;
      if ( (unsigned __int8)KiCheckKeepAlive(v41) )
      {
        if ( !*(_DWORD *)(v41 + 33696) && KeEnableWatchdogTimeout && (KiBugCheckActive & 3) == 0 )
        {
          HvlInvokeHypervisorDebugger(1LL, v40);
          KeBugCheckEx(0x101u, (unsigned __int8)KiClockKeepAliveCycle, 0LL, v41, v40);
        }
        *(_DWORD *)(v41 + 33696) = 0;
      }
    }
  }
  if ( a5 )
  {
    if ( !KiTickAccumulationFromAccountingPeriods )
    {
      *(_DWORD *)(a1 + 34376) += v11;
      v10[183] += v11;
    }
    ++*(_DWORD *)(a1 + 33772);
    KiDpcWatchdogCounterReset(a1);
    goto LABEL_39;
  }
  v16 = *(_BYTE *)(a1 + 32);
  v17 = 0;
  if ( KiTickAccumulationFromAccountingPeriods )
  {
    if ( v16 == 2 && *(_BYTE *)(a1 + 14522) )
    {
      ++*(_DWORD *)(a1 + 34396);
      v17 = 1;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 34372) += v11;
    if ( v16 == 2 && *(_BYTE *)(a1 + 14522) )
    {
      *(_DWORD *)(a1 + 34380) += v11;
      v17 = 1;
      ++*(_DWORD *)(a1 + 34396);
    }
    else if ( *(_BYTE *)(a1 + 32) > 1u )
    {
      *(_DWORD *)(a1 + 34384) += v11;
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 8) + 652LL) += v11;
    }
  }
  if ( a4 >= 2u )
  {
    ++*(_DWORD *)(a1 + 33708);
    goto LABEL_58;
  }
  KiDpcWatchdogCounterReset(a1);
  ++*(_DWORD *)(a1 + 33772);
  if ( v17 )
  {
LABEL_58:
    v20 = *(_DWORD *)(a1 + 34624);
    v21 = v20;
    if ( !v20 || v20 > *(_DWORD *)(a1 + 33716) )
      v21 = *(_DWORD *)(a1 + 33716);
    if ( v21 )
    {
      v22 = *(_DWORD *)(a1 + 34396);
      v23 = *(_DWORD *)(a1 + 33708);
      v24 = v23;
      if ( v22 > v23 )
        v24 = *(_DWORD *)(a1 + 34396);
      if ( v21 == v24 )
        EtwTraceDpcProfilingStackBegin(*(_DWORD *)(a1 + 33772), v21, v22, v23, 0);
      if ( v20 && v20 == v22 )
        EtwTraceDpcProfilingStackBegin(*(_DWORD *)(a1 + 33772), v22, v22, v23, 1);
      if ( v21 <= v24 )
      {
        KiDpcWatchdogCaptureStack(a1);
        EtwTraceDpcProfilingStack(*(unsigned int *)(a1 + 33772), v24);
      }
      v25 = 0;
      if ( v21 < 0x20 )
        v26 = v24 == 16;
      else
        v26 = v24 == v21 >> 1;
      LOBYTE(v25) = v26;
    }
    else
    {
      v25 = 0;
    }
    v27 = *(_DWORD *)(a1 + 14540);
    v28 = *(_DWORD *)(a1 + 34396);
    v29 = (unsigned int *)(a1 + 34396);
    if ( v27 )
    {
      if ( v28 >= v27 )
      {
        v42 = *(_QWORD *)(a1 + 14544);
        if ( v42 )
        {
          v43 = *(_QWORD *)(a1 + 14432);
          if ( v43 )
          {
            v44 = (_QWORD *)(v43 + 24);
            if ( *(_DWORD *)(v42 + 72) )
            {
              if ( *(_QWORD *)(v42 + 64) == *v44 )
                *(_DWORD *)(v42 + 72) = v28;
              v29 = (unsigned int *)(a1 + 34396);
            }
            else
            {
              *(_DWORD *)(v42 + 72) = v28;
              *(_QWORD *)(v42 + 64) = *v44;
              KeInsertQueueDpc(
                (PRKDPC)v42,
                *(PVOID *)(a1 + 8),
                (PVOID)(0x7E35C6C7F3DD7277LL
                      * (KiWaitNever ^ __ROR8__(*v44 ^ _byteswap_uint64(KiWaitAlways ^ v43), KiWaitNever))));
              v29 = (unsigned int *)(a1 + 34396);
            }
          }
        }
      }
    }
    v30 = *v29;
    v31 = *(_DWORD *)(a1 + 33704);
    v32 = 0;
    v33 = *(_DWORD *)(a1 + 33708);
    v34 = 0;
    v35 = *(_DWORD *)(a1 + 34400);
    v36 = 0LL;
    v37 = 0LL;
    v48 = 0;
    v38 = 0;
    BugCheckParameter3 = 0LL;
    BugCheckParameter4 = 0LL;
    if ( v31 )
    {
      LOBYTE(v32) = v33 == v31 >> 1;
      if ( v33 >= v31 )
      {
        v34 = 1;
        BugCheckParameter4 = 0LL;
        v36 = 1LL;
        BugCheckParameter3 = (ULONG_PTR)&KeDpcWatchdogProfileGlobalTriageBlock;
        v37 = v31;
        v38 = 2;
      }
    }
    if ( v35 && (unsigned int)v30 >= v35 )
    {
      v36 = 0LL;
      v48 = 1;
      v37 = v30;
      BugCheckParameter3 = *(unsigned int *)(a1 + 34400);
      BugCheckParameter4 = &KeDpcWatchdogProfileGlobalTriageBlock;
      v38 = 3;
    }
    else if ( !v34 )
    {
LABEL_81:
      if ( v25 | v32 )
        KeInsertQueueDpc((PRKDPC)(a1 + 35544), 0LL, 0LL);
      goto LABEL_39;
    }
    if ( KeEnableWatchdogTimeout )
    {
      __rdtsc();
      HvlInvokeHypervisorDebugger(v38, 0LL);
      if ( !(_BYTE)KdDebuggerEnabled || KiForceBugcheckForDpcWatchdog || (_BYTE)KdDebuggerNotPresent )
      {
        if ( !v48 || KiRecoveryCallbackCount <= 0 )
          KeBugCheckEx(0x133u, v36, v37, BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
        KiDeferDpcWatchdogViolation();
LABEL_109:
        *(_DWORD *)(a1 + 34396) = 0;
        KiResetGlobalDpcWatchdogProfiler(a1);
LABEL_110:
        if ( v34 )
        {
          KiDpcWatchdogCounterReset(a1);
          ++*(_DWORD *)(a1 + 33772);
        }
        goto LABEL_81;
      }
      v45 = v48;
      if ( v48 )
        NT_ASSERT(
          "*** DPC execution time exceeds system limit
    This is NOT a break in update time
    This is a BUG in a DPC "
          "routine
    Perform a stack trace to find the culprit
    The time out limit will be doubled on continuation
 "
          "   Use gh to continue!!
");
      if ( v34 )
        NT_ASSERT(
          "*** DPC watchdog timeout
    This is NOT a break in update time
    This is most likely a BUG in an ISR
    Pe"
          "rform a stack trace to find the culprit
    The period will be doubled on continuation
    Use gh to continue!!
");
    }
    else
    {
      v45 = v48;
    }
    if ( !v45 )
      goto LABEL_110;
    goto LABEL_109;
  }
LABEL_39:
  if ( !KiTickAccumulationFromAccountingPeriods
    && v10 != *(_DWORD **)(a1 + 24)
    && *(_BYTE *)(a1 + 32) <= 1u
    && (int)KiQueryEffectivePriorityThread(v10, a1) < 8 )
  {
    *(_DWORD *)(a1 + 34412) += v11;
  }
  if ( v11 >= 8 )
  {
    *(_DWORD *)(a1 + 11684) = 0;
  }
  else
  {
    v18 = v11;
    *(_DWORD *)(a1 + 11684) += 15 * (*(_DWORD *)(a1 + 34368) - *(_DWORD *)(a1 + 11680));
    v19 = *(_DWORD *)(a1 + 11684);
    do
    {
      v19 >>= 4;
      --v18;
    }
    while ( v18 );
    *(_DWORD *)(a1 + 11684) = v19;
  }
  *(_DWORD *)(a1 + 11680) = *(_DWORD *)(a1 + 34368);
  v12 = *(unsigned int *)(a1 + 14428);
  *(_DWORD *)(a1 + 14508) = (unsigned int)(*(_DWORD *)(a1 + 14508) + *(_DWORD *)(a1 + 14428) - *(_DWORD *)(a1 + 14516)) >> v11;
  *(_DWORD *)(a1 + 14516) = v12;
  if ( !*(_DWORD *)(a1 + 14424) || (v13 = *(_WORD *)(a1 + 14524), (v13 & 3) != 0) )
  {
    v26 = (*(_DWORD *)(a1 + 34388))-- == 1;
    if ( v26 )
    {
      *(_DWORD *)(a1 + 34388) = KiAdjustDpcThreshold;
      v15 = *(_DWORD *)(a1 + 14504);
      if ( v15 < KiMaximumDpcQueueDepth )
        *(_DWORD *)(a1 + 14504) = v15 + 1;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 34388) = KiAdjustDpcThreshold;
    if ( (v13 & 0xAF) == 0 )
    {
      LOBYTE(v12) = 2;
      KiRequestSoftwareInterrupt(a1, v12);
    }
    v14 = *(_DWORD *)(a1 + 14504);
    if ( *(_DWORD *)(a1 + 14508) < (unsigned int)KiIdealDpcRate && v14 > 1 )
      *(_DWORD *)(a1 + 14504) = v14 - 1;
  }
LABEL_12:
  if ( ((_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled)
    && KiPollSlot == *(_DWORD *)(a1 + 36)
    && (!KdPitchDebugger && (_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled) )
  {
    if ( (unsigned __int8)KdPollBreakIn() )
      DbgBreakPointWithStatus(1u);
  }
}
