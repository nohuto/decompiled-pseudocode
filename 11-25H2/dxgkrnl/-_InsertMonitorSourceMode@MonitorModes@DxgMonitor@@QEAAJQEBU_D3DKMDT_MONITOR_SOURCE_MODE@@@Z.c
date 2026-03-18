/*
 * XREFs of ?_InsertMonitorSourceMode@MonitorModes@DxgMonitor@@QEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1403BC4FC
 * Callers:
 *     ?AddMode@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJPEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1403BC2F0 (-AddMode@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJPEAUD3DKMDT_HMONITORSOURCEMODESET__@@QE.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x14003E6A0 (-_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::_InsertMonitorSourceMode(
        DxgMonitor::MonitorModes *this,
        const struct _D3DKMDT_MONITOR_SOURCE_MODE *const a2)
{
  int v4; // eax
  __int64 v5; // r9
  char *v6; // rsi
  char *i; // rcx
  char *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdi
  __int128 v11; // xmm1
  char *v12; // rax
  char **v13; // rcx
  __int64 result; // rax

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2267;
  }
  v4 = DMMVIDEOSIGNALMODE::_ValidateDdiVideoSignalModeInfo(&a2->VideoSignalInfo);
  if ( v4 < 0 )
  {
    WdLogSingleEntry2(2LL, a2, v4);
    WdLogGlobalForLineNumber = 2278;
    return 0LL;
  }
  if ( (*(_DWORD *)&a2->VideoSignalInfo.AdditionalSignalInfo & 0x1F8) != 0 )
  {
    WdLogSingleEntry1(2LL, a2);
    result = 3223192330LL;
    WdLogGlobalForLineNumber = 2292;
  }
  else
  {
    v6 = (char *)this + 128;
    for ( i = (char *)*((_QWORD *)this + 16); ; i = (char *)*((_QWORD *)v8 + 12) )
    {
      if ( i == v6 )
      {
        v8 = 0LL;
      }
      else
      {
        v8 = i - 96;
        if ( !i )
          v8 = 0LL;
      }
      if ( !v8 )
        break;
      if ( a2->Id == *(_DWORD *)v8 )
      {
        WdLogSingleEntry2(2LL, a2, a2->Id);
        result = 3223192340LL;
        WdLogGlobalForLineNumber = 2309;
        return result;
      }
    }
    v9 = operator new(0x78uLL, 0x4D677844u, 256LL, v5);
    v10 = v9;
    if ( v9 )
    {
      *(_OWORD *)v9 = *(_OWORD *)&a2->Id;
      *(_OWORD *)(v9 + 16) = *(_OWORD *)&a2->VideoSignalInfo.TotalSize.cy;
      *(_OWORD *)(v9 + 32) = *(_OWORD *)&a2->VideoSignalInfo.VSyncFreq.Denominator;
      *(_OWORD *)(v9 + 48) = *(_OWORD *)&a2->VideoSignalInfo.PixelRate;
      *(_OWORD *)(v9 + 64) = *(_OWORD *)&a2->ColorBasis;
      v11 = *(_OWORD *)&a2->ColorCoeffDynamicRanges.FourthChannel;
      *(_DWORD *)(v9 + 112) = 6;
      *(_OWORD *)(v9 + 80) = v11;
      *(_DWORD *)(v9 + 84) = 5;
      v12 = (char *)(v9 + 96);
      ++*((_DWORD *)this + 30);
      v13 = (char **)*((_QWORD *)this + 17);
      if ( *v13 != v6 )
        __fastfail(3u);
      *(_QWORD *)v12 = v6;
      *((_QWORD *)v12 + 1) = v13;
      *v13 = v12;
      *((_QWORD *)this + 17) = v12;
      if ( *(_DWORD *)(v10 + 88) == 1 )
      {
        WdLogSingleEntry1(7LL, v10);
        WdLogGlobalForLineNumber = 2346;
        *((_QWORD *)this + 18) = v10;
      }
      return 0LL;
    }
    WdLogSingleEntry0(2LL);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 2327;
  }
  return result;
}
