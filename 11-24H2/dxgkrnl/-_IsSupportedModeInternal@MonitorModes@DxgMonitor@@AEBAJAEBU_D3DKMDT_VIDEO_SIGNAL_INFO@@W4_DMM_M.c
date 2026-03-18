/*
 * XREFs of ?_IsSupportedModeInternal@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1403771E0
 * Callers:
 *     ?IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x140376D50 (-IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z.c)
 * Callees:
 *     ?HaveEquivalentMonitorFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@0E@Z @ 0x140040710 (-HaveEquivalentMonitorFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INF.c)
 *     ?_IsModeInPixelRateRange@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@PEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x140377574 (-_IsModeInPixelRateRange@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MO.c)
 *     ?_IsModeSupportedByMonitorMode@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1403776D4 (-_IsModeSupportedByMonitorMode@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_.c)
 *     ?_IsModeInActiveSizeRange@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@PEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x14037785C (-_IsModeInActiveSizeRange@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_M.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::_IsSupportedModeInternal(
        __int64 a1,
        const struct _D3DKMDT_VIDEO_SIGNAL_INFO *a2,
        unsigned int a3,
        __int64 a4,
        _BYTE *a5,
        int *a6)
{
  char v6; // r15
  __int64 i; // rax
  __int64 v11; // r11
  int IsModeInPixelRateRange; // eax
  unsigned int v14; // esi
  int v15; // eax
  int IsModeSupportedByMonitorMode; // eax
  int v17; // eax
  int IsModeInActiveSizeRange; // eax
  int v19; // eax

  v6 = a4;
  if ( a3 - 1 > 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1580;
  }
  if ( !a5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1581;
  }
  if ( !a6 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1582;
  }
  *a6 = 0;
  if ( a3 - 1 > 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1205;
  }
  if ( !a5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1206;
  }
  *a6 = 0;
  for ( i = *(_QWORD *)(a1 + 128); ; i = *(_QWORD *)(v11 + 96) )
  {
    if ( i == a1 + 128 )
    {
      v11 = 0LL;
    }
    else
    {
      v11 = i - 96;
      if ( !i )
        v11 = 0LL;
    }
    if ( !v11 )
      break;
    if ( *(_DWORD *)(v11 + 84) == 5
      && DMMVIDEOSIGNALMODE::HaveEquivalentMonitorFrequencyRequirements(
           a2,
           (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v11 + 8),
           v6) )
    {
      *a6 = 7;
      *a5 = 1;
      return 0LL;
    }
  }
  *a5 = 0;
  if ( *a6 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1610;
  }
  if ( !v6 )
  {
    IsModeInPixelRateRange = DxgMonitor::MonitorModes::_IsModeInPixelRateRange(a1, a2, a3, a5, a6);
    v14 = IsModeInPixelRateRange;
    if ( IsModeInPixelRateRange < 0 )
    {
      WdLogSingleEntry1(2LL, IsModeInPixelRateRange);
      WdLogGlobalForLineNumber = 1626;
      return v14;
    }
    v15 = *a6;
    if ( !*a5 )
    {
      if ( !v15 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1636;
      }
      return 0LL;
    }
    if ( v15 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1642;
    }
  }
  LOBYTE(a4) = v6;
  IsModeSupportedByMonitorMode = DxgMonitor::MonitorModes::_IsModeSupportedByMonitorMode(a1, a2, a3, a4, a5, a6);
  v14 = IsModeSupportedByMonitorMode;
  if ( IsModeSupportedByMonitorMode < 0 )
  {
    WdLogSingleEntry1(2LL, IsModeSupportedByMonitorMode);
    WdLogGlobalForLineNumber = 1655;
  }
  else
  {
    v17 = *a6;
    if ( *a5 )
    {
      if ( !v17 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1665;
      }
      return 0LL;
    }
    if ( v17 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1671;
    }
    IsModeInActiveSizeRange = DxgMonitor::MonitorModes::_IsModeInActiveSizeRange(a1, a2, a3, a5, a6);
    v14 = IsModeInActiveSizeRange;
    if ( IsModeInActiveSizeRange >= 0 )
    {
      v19 = *a6;
      if ( *a5 )
      {
        if ( !v19 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1694;
        }
      }
      else
      {
        if ( v19 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1700;
        }
        *a5 = 0;
        *a6 = 1;
      }
      return 0LL;
    }
    WdLogSingleEntry1(2LL, IsModeInActiveSizeRange);
    WdLogGlobalForLineNumber = 1684;
  }
  return v14;
}
