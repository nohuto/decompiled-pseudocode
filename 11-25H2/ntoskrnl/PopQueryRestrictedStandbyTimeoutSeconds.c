/*
 * XREFs of PopQueryRestrictedStandbyTimeoutSeconds @ 0x14073D674
 * Callers:
 *     PopPowerAggregatorEvaluateDozeTimers @ 0x1406E99E8 (PopPowerAggregatorEvaluateDozeTimers.c)
 * Callees:
 *     PopReadRegKeyValue @ 0x1404AABEC (PopReadRegKeyValue.c)
 */

__int64 PopQueryRestrictedStandbyTimeoutSeconds()
{
  int v0; // eax
  unsigned int v1; // ecx
  unsigned int v3; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v0 = PopReadRegKeyValue(
         (wchar_t *)L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\CONTROL\\POWER",
         L"RestrictedStandbyDozeTimeoutSeconds",
         4uLL,
         4,
         &v3);
  v1 = v3;
  if ( v0 < 0 )
    return 0;
  return v1;
}
