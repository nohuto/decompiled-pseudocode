/*
 * XREFs of PopPowerAggregatorEvaluateDozeTimers @ 0x1406E99E8
 * Callers:
 *     PopPowerAggregatorNotifyAcDcStateChange @ 0x1406E99A4 (PopPowerAggregatorNotifyAcDcStateChange.c)
 *     PopPowerAggregatorNotifyPdcPhaseState @ 0x1406EFEAC (PopPowerAggregatorNotifyPdcPhaseState.c)
 *     PopPowerAggregatorDozeTimerWorker @ 0x14074CF60 (PopPowerAggregatorDozeTimerWorker.c)
 * Callees:
 *     PopPowerAggregatorDozeTimerDisarm @ 0x1406E9AD0 (PopPowerAggregatorDozeTimerDisarm.c)
 *     PopQueryRestrictedStandbyTimeoutSeconds @ 0x14073D674 (PopQueryRestrictedStandbyTimeoutSeconds.c)
 *     PopPowerAggregatorDozeTimerArm @ 0x14074CE84 (PopPowerAggregatorDozeTimerArm.c)
 */

unsigned __int64 PopPowerAggregatorEvaluateDozeTimers()
{
  unsigned __int64 result; // rax
  unsigned __int64 v1; // rdx
  __int64 v2; // rbx
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rcx

  PopPowerAggregatorDozeTimerDisarm(&PopPowerAggregatorContext, 0LL);
  result = PopPowerAggregatorDozeTimerDisarm(&PopPowerAggregatorContext, 1LL);
  if ( byte_140F083AC )
  {
    LODWORD(v1) = 0;
    if ( PopPowerAggregatorRestrictedStandbyDozeTimeoutSeconds )
    {
      result = PopQueryRestrictedStandbyTimeoutSeconds();
      LODWORD(v1) = result;
      PopPowerAggregatorRestrictedStandbyDozeTimeoutSeconds = result;
    }
    v2 = MEMORY[0xFFFFF78000000014];
    if ( !*(_BYTE *)PopSmartSuspendDecision )
      goto LABEL_9;
    v3 = *(_QWORD *)(PopSmartSuspendDecision + 32);
    if ( !v3 )
      return result;
    if ( v3 < MEMORY[0xFFFFF78000000014]
      || (v4 = v3 - MEMORY[0xFFFFF78000000014],
          result = 0xD6BF94D5E57A42BDuLL * v4,
          v1 = v4 / 0x989680,
          (unsigned int)(v4 / 0x989680) < 0xA) )
    {
      LODWORD(v1) = 10;
    }
    else
    {
LABEL_9:
      if ( !(_DWORD)v1 )
        return result;
    }
    PopPowerAggregatorDozeTimerArm(&PopPowerAggregatorContext, 0LL, -10000000LL * (unsigned int)v1);
    result = PopSmartSuspendDecision;
    if ( *(_BYTE *)PopSmartSuspendDecision )
    {
      result = *(_QWORD *)(PopSmartSuspendDecision + 40);
      if ( result != -1LL )
        return PopPowerAggregatorDozeTimerArm(&PopPowerAggregatorContext, 1LL, v2 - result);
    }
  }
  return result;
}
