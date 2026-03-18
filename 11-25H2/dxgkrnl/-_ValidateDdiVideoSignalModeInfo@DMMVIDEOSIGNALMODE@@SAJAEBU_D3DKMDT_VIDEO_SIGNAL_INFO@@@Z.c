/*
 * XREFs of ?_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x14003E6A0
 * Callers:
 *     ?Initialize@DMMVIDPNTARGETMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@T_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x14003E5BC (-Initialize@DMMVIDPNTARGETMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@T_D3DKMDT_WIRE_FORMAT_AND_P.c)
 *     ?ConvertVideoSignalInfo@@YAJPEBU_VideoModeDescriptor@@PEAU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1400649EC (-ConvertVideoSignalInfo@@YAJPEBU_VideoModeDescriptor@@PEAU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     ?_InsertMonitorSourceMode@MonitorModes@DxgMonitor@@QEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1403BC4FC (-_InsertMonitorSourceMode@MonitorModes@DxgMonitor@@QEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 * Callees:
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1402C1F3C (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

__int64 __fastcall DMMVIDEOSIGNALMODE::_ValidateDdiVideoSignalModeInfo(const struct _D3DKMDT_VIDEO_SIGNAL_INFO *a1)
{
  D3DDDI_RATIONAL *p_VSyncFreq; // rdi
  unsigned __int64 Numerator; // r10
  __int64 Denominator; // rdx
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  SIZE_T PixelRate; // rax
  __int64 result; // rax
  unsigned int v9; // eax
  unsigned int v10; // eax

  p_VSyncFreq = &a1->VSyncFreq;
  Numerator = a1->VSyncFreq.Numerator;
  if ( *(_QWORD *)&a1->VSyncFreq != 0xFFFFFFFEFFFFFFFEuLL )
  {
    Denominator = a1->VSyncFreq.Denominator;
    if ( !(_DWORD)Denominator
      || Numerator < 5 * Denominator
      || Numerator > (DMMVIDEOSIGNALMODE::EnableExperimentalRefreshRates ? 5000LL : 1000LL)
                   * (unsigned __int64)(unsigned int)Denominator )
    {
      WdLogSingleEntry5(2LL, Numerator, Denominator, a1, a1->ActiveSize.cx, a1->ActiveSize.cy);
      WdLogGlobalForLineNumber = 436;
      return 3223192330LL;
    }
    p_VSyncFreq = &a1->VSyncFreq;
  }
  v5 = a1->HSyncFreq.Numerator;
  if ( *(_QWORD *)&a1->HSyncFreq != 0xFFFFFFFEFFFFFFFEuLL )
  {
    v6 = a1->HSyncFreq.Denominator;
    if ( !(_DWORD)v6
      || v5 < 1000 * v6
      || v5 > (DMMVIDEOSIGNALMODE::EnableExperimentalRefreshRates ? 25000000LL : 2000000LL)
            * (unsigned __int64)(unsigned int)v6 )
    {
      v10 = DmmMapVSyncFromRationalToInteger(
              p_VSyncFreq,
              (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)&a1->AdditionalSignalInfo << 29) >> 29),
              0LL);
      WdLogSingleEntry5(
        2LL,
        a1->HSyncFreq.Numerator,
        a1->HSyncFreq.Denominator,
        a1->ActiveSize.cx,
        a1->ActiveSize.cy,
        v10);
      WdLogGlobalForLineNumber = 457;
      return 3223192330LL;
    }
  }
  PixelRate = a1->PixelRate;
  if ( PixelRate != 4294967294
    && (PixelRate < 0xF4240
     || PixelRate > (-(__int64)DMMVIDEOSIGNALMODE::EnableExperimentalRefreshRates & 0x2540BE400uLL) + 10000000000LL) )
  {
    v9 = DmmMapVSyncFromRationalToInteger(
           &a1->VSyncFreq,
           (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)&a1->AdditionalSignalInfo << 29) >> 29),
           0LL);
    WdLogSingleEntry4(2LL, a1->PixelRate, a1->ActiveSize.cx, a1->ActiveSize.cy, v9);
    WdLogGlobalForLineNumber = 475;
    return 3223192330LL;
  }
  if ( a1->ActiveSize.cx < 0x64 || a1->ActiveSize.cy < 0x64 )
  {
    WdLogSingleEntry3(2LL, a1->ActiveSize.cx, a1->ActiveSize.cy, a1);
    result = 3223192331LL;
    WdLogGlobalForLineNumber = 486;
  }
  else if ( a1->TotalSize.cx < 0x64 || a1->TotalSize.cy < 0x64 )
  {
    WdLogSingleEntry3(2LL, a1->TotalSize.cx, a1->TotalSize.cy, a1);
    result = 3223192332LL;
    WdLogGlobalForLineNumber = 497;
  }
  else if ( (int)(*(_DWORD *)&a1->AdditionalSignalInfo << 29) >> 29 == 1
         || (unsigned int)(((int)(*(_DWORD *)&a1->AdditionalSignalInfo << 29) >> 29) - 2) <= 1 )
  {
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(2LL, (int)(*(_DWORD *)&a1->AdditionalSignalInfo << 29) >> 29, a1);
    result = 3223192402LL;
    WdLogGlobalForLineNumber = 506;
  }
  return result;
}
