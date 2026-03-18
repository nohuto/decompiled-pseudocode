/*
 * XREFs of ?HaveEquivalentMonitorFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@0E@Z @ 0x140040710
 * Callers:
 *     ?FindBestMatch@DMMVIDPNTARGETMODESET@@QEBAPEBVDMMVIDPNTARGETMODE@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x140064C7C (-FindBestMatch@DMMVIDPNTARGETMODESET@@QEBAPEBVDMMVIDPNTARGETMODE@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO.c)
 *     ?BmlGetTargetModePreferenceOnMonitor@@YA?AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARGETMODE@@EPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1402DFD98 (-BmlGetTargetModePreferenceOnMonitor@@YA-AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARG.c)
 *     ?_IsSupportedModeInternal@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1403771E0 (-_IsSupportedModeInternal@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_M.c)
 *     ?_IsModeSupportedByMonitorMode@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1403776D4 (-_IsModeSupportedByMonitorMode@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_.c)
 * Callees:
 *     <none>
 */

bool __fastcall DMMVIDEOSIGNALMODE::HaveEquivalentMonitorFrequencyRequirements(
        const struct _D3DKMDT_VIDEO_SIGNAL_INFO *a1,
        const struct _D3DKMDT_VIDEO_SIGNAL_INFO *a2,
        char a3)
{
  bool result; // al
  unsigned __int64 Denominator; // r9
  unsigned __int64 v5; // r8
  __int64 Numerator; // r10
  unsigned __int64 v7; // rcx

  result = 0;
  if ( a1->ActiveSize.cx == a2->ActiveSize.cx
    && a1->ActiveSize.cy == a2->ActiveSize.cy
    && ((*(_BYTE *)&a2->AdditionalSignalInfo ^ *(_BYTE *)&a1->AdditionalSignalInfo) & 7) == 0 )
  {
    if ( a3 )
      return 1;
    Denominator = a1->VSyncFreq.Denominator;
    if ( (_DWORD)Denominator )
    {
      v5 = a2->VSyncFreq.Denominator;
      if ( (_DWORD)v5 )
      {
        Numerator = a2->VSyncFreq.Numerator;
        v7 = 100000 * (unsigned __int64)a1->VSyncFreq.Numerator / Denominator;
        if ( v7 >= 99700 * Numerator / v5 && v7 <= 100300 * Numerator / (unsigned __int64)(unsigned int)v5 )
          return 1;
      }
    }
  }
  return result;
}
