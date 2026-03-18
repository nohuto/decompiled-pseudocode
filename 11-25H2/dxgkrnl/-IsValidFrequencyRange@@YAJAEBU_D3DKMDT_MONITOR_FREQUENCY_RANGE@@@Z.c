/*
 * XREFs of ?IsValidFrequencyRange@@YAJAEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x14009058C
 * Callers:
 *     ?ConvertFrequencyRange@@YAJPEBU_FrequencyRangeDescriptor@@PEAU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x140057938 (-ConvertFrequencyRange@@YAJPEBU_FrequencyRangeDescriptor@@PEAU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@.c)
 *     ?_ProcessMonitorResolutionKey@MonitorModes@DxgMonitor@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1403532A4 (-_ProcessMonitorResolutionKey@MonitorModes@DxgMonitor@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsValidFrequencyRange(const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *a1)
{
  __int64 Denominator; // r8
  __int64 v3; // rdi
  __int64 v4; // rsi
  unsigned __int64 v5; // rbp
  __int64 v6; // rcx
  unsigned __int64 Numerator; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  SIZE_T MaxPixelRate; // rax

  Denominator = a1->RangeLimits.MinVSyncFreq.Denominator;
  v3 = DMMVIDEOSIGNALMODE::EnableExperimentalRefreshRates ? 5000LL : 1000LL;
  v4 = DMMVIDEOSIGNALMODE::EnableExperimentalRefreshRates ? 25000000LL : 2000000LL;
  v5 = (-(__int64)DMMVIDEOSIGNALMODE::EnableExperimentalRefreshRates & 0x2540BE400LL) + 10000000000LL;
  if ( !(_DWORD)Denominator )
    return 3223192330LL;
  v6 = a1->RangeLimits.MinVSyncFreq.Denominator;
  Numerator = a1->RangeLimits.MinVSyncFreq.Numerator;
  if ( Numerator > v3 * (unsigned __int64)(unsigned int)v6 )
    return 3223192330LL;
  if ( Numerator < 5 * v6 )
  {
    if ( a1->Origin != D3DKMDT_MCO_SPECIFICCAP_REGISTRYOVERRIDE )
      return 3223192330LL;
    WdLogSingleEntry3(3LL, Numerator, Denominator, 5LL);
    WdLogGlobalForLineNumber = 678;
  }
  v8 = a1->RangeLimits.MinHSyncFreq.Denominator;
  if ( !(_DWORD)v8 )
    return 3223192330LL;
  v9 = a1->RangeLimits.MinHSyncFreq.Numerator;
  if ( v9 > v4 * (unsigned __int64)a1->RangeLimits.MinHSyncFreq.Denominator )
    return 3223192330LL;
  if ( v9 < 1000 * (unsigned __int64)a1->RangeLimits.MinHSyncFreq.Denominator )
  {
    if ( a1->Origin == D3DKMDT_MCO_SPECIFICCAP_REGISTRYOVERRIDE )
    {
      WdLogSingleEntry3(3LL, v9, v8, 1000LL);
      WdLogGlobalForLineNumber = 711;
      goto LABEL_11;
    }
    return 3223192330LL;
  }
LABEL_11:
  if ( !a1->RangeLimits.MaxVSyncFreq.Denominator )
    return 3223192330LL;
  v10 = a1->RangeLimits.MaxVSyncFreq.Denominator;
  v11 = a1->RangeLimits.MaxVSyncFreq.Numerator;
  if ( v11 < 5 * v10 )
    return 3223192330LL;
  if ( v11 > v3 * v10 )
    return 3223192330LL;
  if ( !a1->RangeLimits.MaxHSyncFreq.Denominator )
    return 3223192330LL;
  v12 = a1->RangeLimits.MaxHSyncFreq.Denominator;
  v13 = a1->RangeLimits.MaxHSyncFreq.Numerator;
  if ( v13 < 1000 * v12 || v13 > v4 * v12 )
    return 3223192330LL;
  if ( a1->ConstraintType != D3DKMDT_MFRC_ACTIVESIZE )
  {
    if ( a1->ConstraintType != D3DKMDT_MFRC_MAXPIXELRATE )
      return 3223192408LL;
    MaxPixelRate = a1->Constraint.MaxPixelRate;
    if ( MaxPixelRate && MaxPixelRate <= v5 )
      return 0LL;
    return 3223192330LL;
  }
  if ( a1->Constraint.ActiveSize.cx < 0x64 )
    return 3223192331LL;
  else
    return a1->Constraint.ActiveSize.cy < 0x64 ? 0xC01E030B : 0;
}
