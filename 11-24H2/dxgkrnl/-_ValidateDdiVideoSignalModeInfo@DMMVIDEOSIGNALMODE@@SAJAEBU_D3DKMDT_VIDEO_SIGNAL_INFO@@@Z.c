/*
 * XREFs of ?_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x14003E1D8
 * Callers:
 *     ?Initialize@DMMVIDPNTARGETMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@T_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x14003E0F4 (-Initialize@DMMVIDPNTARGETMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@T_D3DKMDT_WIRE_FORMAT_AND_P.c)
 *     ?ConvertVideoSignalInfo@@YAJPEBU_VideoModeDescriptor@@PEAU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x14006460C (-ConvertVideoSignalInfo@@YAJPEBU_VideoModeDescriptor@@PEAU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     ?_InsertMonitorSourceMode@MonitorModes@DxgMonitor@@QEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1403B09FC (-_InsertMonitorSourceMode@MonitorModes@DxgMonitor@@QEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 * Callees:
 *     ?GetMaxPixelRate@DMMVIDEOSIGNALMODE@@SA_KXZ @ 0x14003E47C (-GetMaxPixelRate@DMMVIDEOSIGNALMODE@@SA_KXZ.c)
 *     ?GetMaxHSync@DMMVIDEOSIGNALMODE@@SAIXZ @ 0x14003E4BC (-GetMaxHSync@DMMVIDEOSIGNALMODE@@SAIXZ.c)
 *     ?GetMaxVSync@DMMVIDEOSIGNALMODE@@SAIXZ @ 0x14003E4F0 (-GetMaxVSync@DMMVIDEOSIGNALMODE@@SAIXZ.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x140361E0C (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

__int64 __fastcall DMMVIDEOSIGNALMODE::_ValidateDdiVideoSignalModeInfo(const struct _D3DKMDT_VIDEO_SIGNAL_INFO *a1)
{
  __int64 MaxVSync; // rdi
  __int64 MaxHSync; // rsi
  unsigned __int64 MaxPixelRate; // rax
  D3DDDI_RATIONAL *p_VSyncFreq; // r10
  unsigned __int64 Numerator; // r9
  SIZE_T v7; // r11
  __int64 Denominator; // rdx
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  SIZE_T PixelRate; // rax
  __int64 result; // rax
  unsigned int v13; // eax
  unsigned int v14; // eax

  MaxVSync = DMMVIDEOSIGNALMODE::GetMaxVSync();
  MaxHSync = DMMVIDEOSIGNALMODE::GetMaxHSync();
  MaxPixelRate = DMMVIDEOSIGNALMODE::GetMaxPixelRate();
  p_VSyncFreq = &a1->VSyncFreq;
  Numerator = a1->VSyncFreq.Numerator;
  v7 = MaxPixelRate;
  if ( *(_QWORD *)&a1->VSyncFreq != 0xFFFFFFFEFFFFFFFEuLL )
  {
    Denominator = a1->VSyncFreq.Denominator;
    if ( !(_DWORD)Denominator
      || Numerator < 5 * Denominator
      || Numerator > (unsigned __int64)(unsigned int)Denominator * MaxVSync )
    {
      WdLogSingleEntry5(
        2LL,
        a1->VSyncFreq.Numerator,
        a1->VSyncFreq.Denominator,
        a1,
        a1->ActiveSize.cx,
        a1->ActiveSize.cy);
      WdLogGlobalForLineNumber = 458;
      return 3223192330LL;
    }
    p_VSyncFreq = &a1->VSyncFreq;
  }
  v9 = a1->HSyncFreq.Numerator;
  if ( *(_QWORD *)&a1->HSyncFreq != 0xFFFFFFFEFFFFFFFEuLL )
  {
    v10 = a1->HSyncFreq.Denominator;
    if ( !(_DWORD)v10 || v9 < 1000 * v10 || v9 > (unsigned __int64)(unsigned int)v10 * MaxHSync )
    {
      v14 = DmmMapVSyncFromRationalToInteger(
              p_VSyncFreq,
              (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)&a1->AdditionalSignalInfo << 29) >> 29),
              0LL);
      WdLogSingleEntry5(
        2LL,
        a1->HSyncFreq.Numerator,
        a1->HSyncFreq.Denominator,
        a1->ActiveSize.cx,
        a1->ActiveSize.cy,
        v14);
      WdLogGlobalForLineNumber = 479;
      return 3223192330LL;
    }
  }
  PixelRate = a1->PixelRate;
  if ( PixelRate != 4294967294 && (PixelRate < 0xF4240 || PixelRate > v7) )
  {
    v13 = DmmMapVSyncFromRationalToInteger(
            &a1->VSyncFreq,
            (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)&a1->AdditionalSignalInfo << 29) >> 29),
            0LL);
    WdLogSingleEntry4(2LL, a1->PixelRate, a1->ActiveSize.cx, a1->ActiveSize.cy, v13);
    WdLogGlobalForLineNumber = 497;
    return 3223192330LL;
  }
  if ( a1->ActiveSize.cx < 0x64 || a1->ActiveSize.cy < 0x64 )
  {
    WdLogSingleEntry3(2LL, a1->ActiveSize.cx, a1->ActiveSize.cy, a1);
    result = 3223192331LL;
    WdLogGlobalForLineNumber = 508;
  }
  else if ( a1->TotalSize.cx < 0x64 || a1->TotalSize.cy < 0x64 )
  {
    WdLogSingleEntry3(2LL, a1->TotalSize.cx, a1->TotalSize.cy, a1);
    result = 3223192332LL;
    WdLogGlobalForLineNumber = 519;
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
    WdLogGlobalForLineNumber = 528;
  }
  return result;
}
