/*
 * XREFs of PdcPoCurrentPdcPhase @ 0x1405D5CC0
 * Callers:
 *     <none>
 * Callees:
 *     PopDeepSleepResiliencyPhaseAccountingEnd @ 0x1402B962C (PopDeepSleepResiliencyPhaseAccountingEnd.c)
 *     PopDeepSleepResiliencyPhaseAccountingBegin @ 0x1402BA3BC (PopDeepSleepResiliencyPhaseAccountingBegin.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     PopFxPauseDeviceAccounting @ 0x1403A67DC (PopFxPauseDeviceAccounting.c)
 *     PopFxResumeDeviceAccounting @ 0x1404854CC (PopFxResumeDeviceAccounting.c)
 *     Feature_ExpandSTEIgnoreReasons__private_IsEnabledDeviceUsageNoInline @ 0x1405CA558 (Feature_ExpandSTEIgnoreReasons__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_PdcResiliencyV2__private_IsEnabledDeviceUsageNoInline @ 0x1405D57C8 (Feature_PdcResiliencyV2__private_IsEnabledDeviceUsageNoInline.c)
 *     PopPowerAggregatorNotifyPdcPhaseState @ 0x140757DB4 (PopPowerAggregatorNotifyPdcPhaseState.c)
 *     PopPowerAggregatorNotifyResiliencyReached @ 0x140757ED4 (PopPowerAggregatorNotifyResiliencyReached.c)
 *     PopNetResiliencyPhaseStateChanged @ 0x14075B9E8 (PopNetResiliencyPhaseStateChanged.c)
 *     PopAdaptiveStandbyNotifyShellPhaseState @ 0x140761068 (PopAdaptiveStandbyNotifyShellPhaseState.c)
 *     PopDisarmIdlePhaseWatchdog @ 0x1409A2468 (PopDisarmIdlePhaseWatchdog.c)
 *     PopPowerAggregatorNotifyPdcSleepTransition @ 0x140A96860 (PopPowerAggregatorNotifyPdcSleepTransition.c)
 *     PopSmartSuspendMakePredictions @ 0x140ABAB98 (PopSmartSuspendMakePredictions.c)
 *     PopIdleCsStateChanged @ 0x140ABB810 (PopIdleCsStateChanged.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PdcPoCurrentPdcPhase(int a1, char a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // ebp
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  __int64 v15; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx

  v10 = 0;
  if ( (unsigned int)Feature_ExpandSTEIgnoreReasons__private_IsEnabledDeviceUsageNoInline() )
    PopCurrentPdcCsPhase = a1;
  else
    PopBsdCurrentCsPhase = a1;
  v11 = a1 - 1;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      v13 = v12 - 4;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          if ( v14 == 1 )
          {
            if ( (unsigned int)Feature_PdcResiliencyV2__private_IsEnabledDeviceUsageNoInline() )
            {
              LOBYTE(v15) = a2;
              PopNetResiliencyPhaseStateChanged(v15);
            }
            PopPowerAggregatorNotifyResiliencyReached();
          }
        }
        else
        {
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          if ( a2 )
          {
            qword_140E27D80 = PerformanceCounter.QuadPart;
            PopDeepSleepResiliencyPhaseAccountingBegin(3u, 0);
            if ( PopFxAccountingGroup == 2 )
              PopFxResumeDeviceAccounting();
          }
          else
          {
            qword_140E27D88 += PerformanceCounter.QuadPart - qword_140E27D80;
            if ( PopFxAccountingGroup == 2 )
              PopFxPauseDeviceAccounting();
            PopDeepSleepResiliencyPhaseAccountingEnd(3u, 0);
          }
        }
      }
      else
      {
        LOBYTE(v9) = a2;
        return (unsigned int)PopPowerAggregatorNotifyPdcSleepTransition(v9, a3, a4);
      }
    }
    else
    {
      if ( a2 )
      {
        PopAcquirePolicyLock(v9, v8);
        PopSmartSuspendMakePredictions(1LL);
        PopReleasePolicyLock();
      }
      LOBYTE(v8) = a2;
      PopPowerAggregatorNotifyPdcPhaseState(2LL, v8);
      LOBYTE(v17) = a2 != 0;
      PopIdleCsStateChanged(v17);
      LOBYTE(v18) = a2;
      PopAdaptiveStandbyNotifyShellPhaseState(v18);
    }
  }
  else
  {
    PopDisarmIdlePhaseWatchdog();
  }
  return v10;
}
