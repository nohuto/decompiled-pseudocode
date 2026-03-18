/*
 * XREFs of ?ConvertFrequencyRange@@YAJPEBU_FrequencyRangeDescriptor@@PEAU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x140057938
 * Callers:
 *     ?ParseDescriptorModes@MonitorModes@DxgMonitor@@AEAAJAEBUIMonitorDescriptor@2@@Z @ 0x1403D580C (-ParseDescriptorModes@MonitorModes@DxgMonitor@@AEAAJAEBUIMonitorDescriptor@2@@Z.c)
 * Callees:
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x140057A0C (-ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONIT.c)
 *     ConvertMonitorFrequencyRangeType @ 0x1400632D0 (ConvertMonitorFrequencyRangeType.c)
 *     ?IsValidFrequencyRange@@YAJAEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x14009058C (-IsValidFrequencyRange@@YAJAEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z.c)
 */

__int64 __fastcall ConvertFrequencyRange(
        const struct _FrequencyRangeDescriptor *a1,
        struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *a2)
{
  __int64 result; // rax
  D3DKMDT_MONITOR_FREQUENCY_RANGE_CONSTRAINT ConstraintType; // ecx
  __int32 v6; // ecx

  if ( !a1 || !a2 )
    return 3221225485LL;
  *(_OWORD *)&a2->Origin = 0LL;
  *(_OWORD *)&a2->RangeLimits.MaxVSyncFreq.Denominator = 0LL;
  *(_OWORD *)&a2->RangeLimits.MaxHSyncFreq.Denominator = 0LL;
  result = ConvertMonitorFrequencyRangeType(a1->ConstraintType, &a2->ConstraintType);
  if ( (int)result >= 0 )
  {
    result = ConvertMonitorCapablitiesOrigin(a1->Origin, a2);
    if ( (int)result >= 0 )
    {
      ConstraintType = a2->ConstraintType;
      a2->RangeLimits.MinVSyncFreq.Numerator = a1->MinVSyncNumerator;
      a2->RangeLimits.MinVSyncFreq.Denominator = a1->MinVSyncDenominator;
      a2->RangeLimits.MaxVSyncFreq.Numerator = a1->MaxVSyncNumerator;
      a2->RangeLimits.MaxVSyncFreq.Denominator = a1->MaxVSyncDenominator;
      a2->RangeLimits.MinHSyncFreq.Numerator = a1->MinHSyncNumerator;
      a2->RangeLimits.MinHSyncFreq.Denominator = a1->MinHSyncDenominator;
      a2->RangeLimits.MaxHSyncFreq.Numerator = a1->MaxHSyncNumerator;
      a2->RangeLimits.MaxHSyncFreq.Denominator = a1->MaxHSyncDenominator;
      v6 = ConstraintType - 1;
      if ( v6 )
      {
        if ( v6 != 1 )
          return 3223192408LL;
        a2->Constraint.MaxPixelRate = a1->MaxPixelRate;
      }
      else
      {
        a2->Constraint.ActiveSize.cx = a1->ActiveWidth;
        a2->Constraint.ActiveSize.cy = a1->ActiveHeight;
      }
      return IsValidFrequencyRange(a2);
    }
  }
  return result;
}
