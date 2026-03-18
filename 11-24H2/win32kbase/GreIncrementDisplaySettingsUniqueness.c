/*
 * XREFs of GreIncrementDisplaySettingsUniqueness @ 0x140087D30
 * Callers:
 *     DrvEnableMDEV @ 0x140012A70 (DrvEnableMDEV.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x140086454 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1400868FC (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     GreResumeDirectDraw @ 0x140087D10 (GreResumeDirectDraw.c)
 *     DrvDisableMDEV @ 0x140089260 (DrvDisableMDEV.c)
 *     DxgkEngNotifyDisplayChange @ 0x1400A38F0 (DxgkEngNotifyDisplayChange.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400E5504 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     xxxUserSetDisplayConfig @ 0x1401636C0 (xxxUserSetDisplayConfig.c)
 *     xxxVideoPortCalloutThread @ 0x1401B08D4 (xxxVideoPortCalloutThread.c)
 *     UserNotifyUniversalScaleFactorChanged @ 0x1401BEA84 (UserNotifyUniversalScaleFactorChanged.c)
 *     ApplyPathsModality @ 0x1401C67FC (ApplyPathsModality.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401C6C88 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreIncrementDisplaySettingsUniqueness(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 1768LL);
  if ( result )
  {
    _InterlockedIncrement((volatile signed __int32 *)(result + 1573008));
    return DisplayScenarioJournalDisplayUniquenessIncremented();
  }
  return result;
}
