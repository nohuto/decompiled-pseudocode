/*
 * XREFs of PpmParkGetParkNode @ 0x14049067C
 * Callers:
 *     PopAccumulateNonDripsIdleCpuTime @ 0x1404904E0 (PopAccumulateNonDripsIdleCpuTime.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x1404905D4 (PopAccumulateNonActivatedCpuTime.c)
 *     PpmIdleGetConcurrencyStats @ 0x140A5A754 (PpmIdleGetConcurrencyStats.c)
 *     PpmIdleGetPackageIdleIntervalStats @ 0x140A60E74 (PpmIdleGetPackageIdleIntervalStats.c)
 * Callees:
 *     Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline @ 0x1405B2224 (Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall PpmParkGetParkNode(__int16 a1, __int16 a2)
{
  __int64 v2; // rbx
  unsigned int i; // esi
  __int64 v6; // rdi
  int IsEnabledDeviceUsageNoInline; // eax
  __int16 v8; // cx

  v2 = 0LL;
  for ( i = 0; i < PpmParkNumNodes; ++i )
  {
    v6 = PpmParkNodes + 1296LL * i;
    IsEnabledDeviceUsageNoInline = Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline();
    v8 = *(_WORD *)(v6 + 6);
    if ( IsEnabledDeviceUsageNoInline )
    {
      if ( v8 == a1 && (*(_WORD *)(v6 + 8) == a2 || PpmParkUseWholeNumaNode) )
        return v6;
    }
    else if ( v8 == a1 && *(_WORD *)(v6 + 8) == a2 )
    {
      return v6;
    }
  }
  return v2;
}
