/*
 * XREFs of PopAdaptiveGetSystemInitiatedRebootTargetState @ 0x140A9EA5C
 * Callers:
 *     PopPowerInformationInternal @ 0x140AC4A30 (PopPowerInformationInternal.c)
 * Callees:
 *     Feature_ExpandSTEIgnoreReasons__private_IsEnabledDeviceUsageNoInline @ 0x1405CCDE8 (Feature_ExpandSTEIgnoreReasons__private_IsEnabledDeviceUsageNoInline.c)
 *     PopGetCurrentPdcPhase @ 0x1405D88FC (PopGetCurrentPdcPhase.c)
 *     PopPowerAggregatorGetCurrentTargetState @ 0x140759660 (PopPowerAggregatorGetCurrentTargetState.c)
 *     PopReleaseAdaptiveLock @ 0x1409BB1EC (PopReleaseAdaptiveLock.c)
 *     PopAcquireAdaptiveLock @ 0x140A30168 (PopAcquireAdaptiveLock.c)
 */

unsigned __int64 PopAdaptiveGetSystemInitiatedRebootTargetState()
{
  __int64 v0; // rsi
  __int64 v1; // rbx
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  __int64 v4; // rbx
  _OWORD v6[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]

  v7 = 0LL;
  memset(v6, 0, sizeof(v6));
  v0 = 0LL;
  PopAcquireAdaptiveLock(1);
  v1 = qword_140FD71F8;
  if ( (qword_140FD71F8 & 7) == 0 )
  {
    v1 = 0LL;
    if ( PopAdaptiveBootContext )
      v1 = qword_140FD71F0;
  }
  PopReleaseAdaptiveLock();
  if ( (v1 & 7) == 0 )
  {
    PopPowerAggregatorGetCurrentTargetState((__int64)v6);
    if ( LODWORD(v6[0]) == 1 )
    {
      v2 = v1 & 0xFFFFFFFFFFFFFFF8uLL | 1;
      v3 = v2;
      if ( (unsigned int)Feature_ExpandSTEIgnoreReasons__private_IsEnabledDeviceUsageNoInline() )
      {
        v4 = 0LL;
        if ( (int)PopGetCurrentPdcPhase() > 0 )
          v4 = 8LL;
        return v3 & 0xFFFFFFFFFFFFFFF7uLL | v4;
      }
      else
      {
        if ( PopBsdCurrentCsPhase > 0 )
          v0 = 8LL;
        return v0 | v2 & 0xFFFFFFFFFFFFFFF7uLL;
      }
    }
    else if ( LODWORD(v6[0]) == 4 )
    {
      return (PopFullWake == 0 ? 8 : 0) | v1 & 0xFFFFFFFFFFFFFFF0uLL ^ PopAdaptiveSystemPowerStateToBootState[(int)v7] & 7;
    }
    else
    {
      return v1 & 0xFFFFFFFFFFFFFFF8uLL;
    }
  }
  return v1;
}
