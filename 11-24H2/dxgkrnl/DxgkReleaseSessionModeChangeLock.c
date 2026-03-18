/*
 * XREFs of DxgkReleaseSessionModeChangeLock @ 0x140298418
 * Callers:
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14003E5F0 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     DxgkGetVirtualRefreshRateInfo @ 0x140291AD0 (DxgkGetVirtualRefreshRateInfo.c)
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHHH@Z @ 0x140292040 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z @ 0x140296DA0 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z.c)
 *     DxgkUpdateGdiInfo @ 0x14030D570 (DxgkUpdateGdiInfo.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x14031CB7C (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     DxgkGetDpiOverrideForSource @ 0x14033B0B0 (DxgkGetDpiOverrideForSource.c)
 *     ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x140344ACC (-FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     DxgkDisplayOnOff @ 0x140345280 (DxgkDisplayOnOff.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x140345CB0 (DxgkUseAdapterViewInCurrentSession.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140347618 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z @ 0x1403C17B4 (-RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1403C5760 (DxgkDisplayConfigDeviceInfo.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x140409620 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     DxgkGetAdapterDeviceDesc @ 0x140412B00 (DxgkGetAdapterDeviceDesc.c)
 *     DxgkGetDisplayModeList @ 0x140415680 (DxgkGetDisplayModeList.c)
 *     DpiGdoDispatchInternalIoctl @ 0x14042BEA0 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

void DxgkReleaseSessionModeChangeLock()
{
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  char *v2; // rcx

  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( SessionData )
  {
    v2 = (char *)SessionData + 18552;
    if ( *((struct _KTHREAD **)SessionData + 2320) == KeGetCurrentThread() )
    {
      *((_QWORD *)SessionData + 2320) = 0LL;
      ExReleasePushLockExclusiveEx(v2, 0LL);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)SessionData + 4642);
      ExReleasePushLockSharedEx(v2, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 470;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pSessionData != NULL", 470LL, 0LL, 0LL, 0LL, 0LL);
  }
}
