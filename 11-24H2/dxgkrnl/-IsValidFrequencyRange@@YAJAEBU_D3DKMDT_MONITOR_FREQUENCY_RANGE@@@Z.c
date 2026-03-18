/*
 * XREFs of ?IsValidFrequencyRange@@YAJAEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1400918F0
 * Callers:
 *     ?ConvertFrequencyRange@@YAJPEBU_FrequencyRangeDescriptor@@PEAU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x140057148 (-ConvertFrequencyRange@@YAJPEBU_FrequencyRangeDescriptor@@PEAU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@.c)
 *     ?_ProcessMonitorResolutionKey@MonitorModes@DxgMonitor@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x14028BC08 (-_ProcessMonitorResolutionKey@MonitorModes@DxgMonitor@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z.c)
 * Callees:
 *     ?GetMaxPixelRate@DMMVIDEOSIGNALMODE@@SA_KXZ @ 0x14003E47C (-GetMaxPixelRate@DMMVIDEOSIGNALMODE@@SA_KXZ.c)
 *     ?GetMaxHSync@DMMVIDEOSIGNALMODE@@SAIXZ @ 0x14003E4BC (-GetMaxHSync@DMMVIDEOSIGNALMODE@@SAIXZ.c)
 *     ?GetMaxVSync@DMMVIDEOSIGNALMODE@@SAIXZ @ 0x14003E4F0 (-GetMaxVSync@DMMVIDEOSIGNALMODE@@SAIXZ.c)
 */

__int64 __fastcall IsValidFrequencyRange(const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *a1)
{
  unsigned int MaxVSync; // edi
  __int64 MaxHSync; // r14
  __int64 MaxPixelRate; // rax
  UINT Denominator; // r9d
  SIZE_T v6; // rbp
  __int64 v7; // r8
  unsigned __int64 Numerator; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  SIZE_T v17; // rax

  MaxVSync = DMMVIDEOSIGNALMODE::GetMaxVSync();
  MaxHSync = (unsigned int)DMMVIDEOSIGNALMODE::GetMaxHSync();
  MaxPixelRate = DMMVIDEOSIGNALMODE::GetMaxPixelRate();
  Denominator = a1->RangeLimits.MinVSyncFreq.Denominator;
  v6 = MaxPixelRate;
  if ( !Denominator )
    return 3223192330LL;
  v7 = a1->RangeLimits.MinVSyncFreq.Denominator;
  Numerator = a1->RangeLimits.MinVSyncFreq.Numerator;
  if ( Numerator > v7 * (unsigned __int64)MaxVSync )
    return 3223192330LL;
  if ( Numerator < 5 * v7 )
  {
    if ( a1->Origin != D3DKMDT_MCO_SPECIFICCAP_REGISTRYOVERRIDE )
      return 3223192330LL;
    WdLogSingleEntry3(3LL, Numerator, Denominator, 5LL);
    WdLogGlobalForLineNumber = 678;
  }
  v9 = a1->RangeLimits.MinHSyncFreq.Denominator;
  if ( !(_DWORD)v9 )
    return 3223192330LL;
  v10 = a1->RangeLimits.MinHSyncFreq.Denominator;
  v11 = a1->RangeLimits.MinHSyncFreq.Numerator;
  if ( v11 > v10 * MaxHSync )
    return 3223192330LL;
  if ( v11 < 1000 * v10 )
  {
    if ( a1->Origin == D3DKMDT_MCO_SPECIFICCAP_REGISTRYOVERRIDE )
    {
      WdLogSingleEntry3(3LL, v11, v9, 1000LL);
      WdLogGlobalForLineNumber = 711;
      goto LABEL_11;
    }
    return 3223192330LL;
  }
LABEL_11:
  if ( !a1->RangeLimits.MaxVSyncFreq.Denominator )
    return 3223192330LL;
  v12 = a1->RangeLimits.MaxVSyncFreq.Denominator;
  v13 = a1->RangeLimits.MaxVSyncFreq.Numerator;
  if ( v13 < 5 * v12 )
    return 3223192330LL;
  if ( v13 > (unsigned __int64)MaxVSync * v12 )
    return 3223192330LL;
  if ( !a1->RangeLimits.MaxHSyncFreq.Denominator )
    return 3223192330LL;
  v14 = a1->RangeLimits.MaxHSyncFreq.Denominator;
  v15 = a1->RangeLimits.MaxHSyncFreq.Numerator;
  if ( v15 < 1000 * v14 || v15 > MaxHSync * v14 )
    return 3223192330LL;
  if ( a1->ConstraintType != D3DKMDT_MFRC_ACTIVESIZE )
  {
    if ( a1->ConstraintType != D3DKMDT_MFRC_MAXPIXELRATE )
      return 3223192408LL;
    v17 = a1->Constraint.MaxPixelRate;
    if ( v17 && v17 <= v6 )
      return 0LL;
    return 3223192330LL;
  }
  if ( a1->Constraint.ActiveSize.cx < 0x64 )
    return 3223192331LL;
  else
    return a1->Constraint.ActiveSize.cy < 0x64 ? 0xC01E030B : 0;
}
