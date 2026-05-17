/*
 * XREFs of RtlpFtSendUsageNotification @ 0x1801460DC
 * Callers:
 *     RtlNotifyFeatureToggleUsage @ 0x180145E20 (RtlNotifyFeatureToggleUsage.c)
 * Callees:
 *     RtlNotifyFeatureUsage @ 0x1800D6140 (RtlNotifyFeatureUsage.c)
 */

__int64 __fastcall RtlpFtSendUsageNotification(int a1, __int64 a2)
{
  __int16 v2; // ax
  int v4; // [rsp+38h] [rbp+10h] BYREF
  __int16 v5; // [rsp+3Ch] [rbp+14h]
  __int16 v6; // [rsp+3Eh] [rbp+16h]

  v4 = a1;
  v2 = 2;
  if ( (a2 & 0x20) == 0 )
    v2 = 6;
  v5 = v2;
  v6 = 1;
  return RtlNotifyFeatureUsage((__int64)&v4, a2);
}
