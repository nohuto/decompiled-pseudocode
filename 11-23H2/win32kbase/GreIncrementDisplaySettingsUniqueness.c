/*
 * XREFs of GreIncrementDisplaySettingsUniqueness @ 0x1C00BD990
 * Callers:
 *     DxgkEngNotifyDisplayChange @ 0x1C0012370 (DxgkEngNotifyDisplayChange.c)
 *     ApplyPathsModality @ 0x1C001851C (ApplyPathsModality.c)
 *     DrvDisableMDEV @ 0x1C001A570 (DrvDisableMDEV.c)
 *     DrvEnableMDEV @ 0x1C001A7D8 (DrvEnableMDEV.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C001AA80 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C001B5AC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     GreResumeDirectDraw @ 0x1C00BD970 (GreResumeDirectDraw.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00CBA60 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     VideoPortCalloutThread @ 0x1C00CCFE8 (VideoPortCalloutThread.c)
 *     UserNotifyUniversalScaleFactorChanged @ 0x1C014F4C4 (UserNotifyUniversalScaleFactorChanged.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreIncrementDisplaySettingsUniqueness(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 1928LL);
  if ( result )
  {
    _InterlockedIncrement((volatile signed __int32 *)(result + 1573008));
    return DisplayScenarioJournalDisplayUniquenessIncremented();
  }
  return result;
}
