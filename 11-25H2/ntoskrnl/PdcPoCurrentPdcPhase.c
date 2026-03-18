/*
 * XREFs of PdcPoCurrentPdcPhase @ 0x1405D3DC0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     PopDeepSleepResiliencyPhaseAccountingBegin @ 0x140355308 (PopDeepSleepResiliencyPhaseAccountingBegin.c)
 *     PopDeepSleepResiliencyPhaseAccountingEnd @ 0x1403553B8 (PopDeepSleepResiliencyPhaseAccountingEnd.c)
 *     PopFxResumeDeviceAccounting @ 0x140355A94 (PopFxResumeDeviceAccounting.c)
 *     PopFxPauseDeviceAccounting @ 0x1403561B8 (PopFxPauseDeviceAccounting.c)
 *     PopPowerAggregatorNotifyPdcPhaseState @ 0x1406EFEAC (PopPowerAggregatorNotifyPdcPhaseState.c)
 *     PopPowerAggregatorNotifyResiliencyReached @ 0x14074D634 (PopPowerAggregatorNotifyResiliencyReached.c)
 *     PopDisarmIdlePhaseWatchdog @ 0x140964068 (PopDisarmIdlePhaseWatchdog.c)
 *     PopPowerAggregatorNotifyPdcSleepTransition @ 0x140A955D0 (PopPowerAggregatorNotifyPdcSleepTransition.c)
 *     PopIdleCsStateChanged @ 0x140ABC3B4 (PopIdleCsStateChanged.c)
 *     PopSmartSuspendMakePredictions @ 0x140AC3C7C (PopSmartSuspendMakePredictions.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PdcPoCurrentPdcPhase(int a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // ebx
  char v5; // di
  int v6; // ecx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // ecx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v11; // rcx

  v4 = 0;
  PopBsdCurrentCsPhase = a1;
  v5 = a2;
  v6 = a1 - 1;
  if ( v6 )
  {
    v7 = (unsigned int)(v6 - 1);
    if ( (_DWORD)v7 )
    {
      v8 = (unsigned int)(v7 - 4);
      if ( (_DWORD)v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          if ( v9 == 1 )
            PopPowerAggregatorNotifyResiliencyReached();
        }
        else
        {
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          if ( v5 )
          {
            qword_140E27A00 = PerformanceCounter.QuadPart;
            PopDeepSleepResiliencyPhaseAccountingBegin(3u, 0);
            if ( PopFxAccountingGroup == 2 )
              PopFxResumeDeviceAccounting();
          }
          else
          {
            qword_140E27A08 += PerformanceCounter.QuadPart - qword_140E27A00;
            if ( PopFxAccountingGroup == 2 )
              PopFxPauseDeviceAccounting();
            PopDeepSleepResiliencyPhaseAccountingEnd(3u, 0);
          }
        }
      }
      else
      {
        LODWORD(v8) = (unsigned __int8)a2;
        return (unsigned int)PopPowerAggregatorNotifyPdcSleepTransition(v8, a3, a4);
      }
    }
    else
    {
      if ( (_BYTE)a2 )
      {
        PopAcquirePolicyLock(v7, a2);
        PopSmartSuspendMakePredictions(1LL);
        PopReleasePolicyLock();
      }
      LOBYTE(a2) = v5;
      PopPowerAggregatorNotifyPdcPhaseState(2LL, a2);
      LOBYTE(v11) = v5 != 0;
      PopIdleCsStateChanged(v11);
    }
  }
  else
  {
    PopDisarmIdlePhaseWatchdog();
  }
  return v4;
}
