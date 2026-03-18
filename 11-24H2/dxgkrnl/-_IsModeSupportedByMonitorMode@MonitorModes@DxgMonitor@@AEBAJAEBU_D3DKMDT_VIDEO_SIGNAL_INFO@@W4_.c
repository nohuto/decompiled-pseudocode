/*
 * XREFs of ?_IsModeSupportedByMonitorMode@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1403776D4
 * Callers:
 *     ?_IsSupportedModeInternal@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1403771E0 (-_IsSupportedModeInternal@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_M.c)
 * Callees:
 *     ?HaveEquivalentMonitorFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@0E@Z @ 0x140040710 (-HaveEquivalentMonitorFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INF.c)
 *     ?GdiHasNoGreaterFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@0@Z @ 0x1400459FC (-GdiHasNoGreaterFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@0@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::_IsModeSupportedByMonitorMode(
        __int64 a1,
        const struct _D3DKMDT_VIDEO_SIGNAL_INFO *a2,
        int a3,
        char a4,
        bool *a5,
        _DWORD *a6)
{
  _QWORD *v10; // r14
  _QWORD *i; // rax
  _QWORD *v12; // rbx
  const struct _D3DKMDT_VIDEO_SIGNAL_INFO *v13; // rdx
  bool v14; // al
  __int64 result; // rax
  int v16; // eax

  if ( (unsigned int)(a3 - 1) > 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1288;
  }
  if ( !a5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1289;
  }
  if ( !a6 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1290;
  }
  v10 = (_QWORD *)(a1 + 128);
  *a6 = 0;
  for ( i = (_QWORD *)*v10; ; i = (_QWORD *)v12[12] )
  {
    if ( i == v10 )
    {
      v12 = 0LL;
    }
    else
    {
      v12 = i - 12;
      if ( !i )
        v12 = 0LL;
    }
    if ( !v12 )
    {
      *a5 = 0;
      return 0LL;
    }
    if ( *((_DWORD *)v12 + 21) != 5 )
    {
      v13 = (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v12 + 1);
      v14 = a3 == 2
          ? DMMVIDEOSIGNALMODE::HaveEquivalentMonitorFrequencyRequirements(a2, v13, a4)
          : DMMVIDEOSIGNALMODE::GdiHasNoGreaterFrequencyRequirements(a2, v13);
      *a5 = v14;
      if ( v14 )
        break;
    }
  }
  v16 = *((_DWORD *)v12 + 21);
  switch ( v16 )
  {
    case 2:
      *a6 = 2;
      return 0LL;
    case 3:
      *a6 = 4;
      return 0LL;
    case 1:
      *a6 = 6;
      return 0LL;
  }
  WdLogSingleEntry1(2LL, *((int *)v12 + 21));
  result = 3223192354LL;
  WdLogGlobalForLineNumber = 1332;
  return result;
}
