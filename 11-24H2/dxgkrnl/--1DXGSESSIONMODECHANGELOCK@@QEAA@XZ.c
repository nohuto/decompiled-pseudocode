/*
 * XREFs of ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14003E5F0
 * Callers:
 *     DxgkGetSharedPrimaryHandle @ 0x1401AC9A0 (DxgkGetSharedPrimaryHandle.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1401BA340 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1401C49D4 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     DxgkGetNominalRefreshRateInfo @ 0x1401C628C (DxgkGetNominalRefreshRateInfo.c)
 *     ?DxgkPrepareModeListCache@@YAJU_LUID@@I@Z @ 0x1401C85E0 (-DxgkPrepareModeListCache@@YAJU_LUID@@I@Z.c)
 *     ?DrtTestUpdateRegistryForNewOverride@@YAJU_LUID@@IH@Z @ 0x1401CA7FC (-DrtTestUpdateRegistryForNewOverride@@YAJU_LUID@@IH@Z.c)
 *     DxgkUpdateDpiInfoForNewOverride @ 0x1401CADC0 (DxgkUpdateDpiInfoForNewOverride.c)
 *     ?HdrPowerPolicyChangeCallout@DXGGLOBAL@@QEAAXXZ @ 0x1401D45D8 (-HdrPowerPolicyChangeCallout@DXGGLOBAL@@QEAAXXZ.c)
 *     DxgkRedrawCursorForPostCompositon @ 0x1401EA2CC (DxgkRedrawCursorForPostCompositon.c)
 *     DxgkGetVirtualRefreshRateInfo @ 0x140291AD0 (DxgkGetVirtualRefreshRateInfo.c)
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHHH@Z @ 0x140292040 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH.c)
 *     DxgkUpdateGdiInfo @ 0x14030D570 (DxgkUpdateGdiInfo.c)
 *     DxgkGetDpiOverrideForSource @ 0x14033B0B0 (DxgkGetDpiOverrideForSource.c)
 *     ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x140344ACC (-FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x140345CB0 (DxgkUseAdapterViewInCurrentSession.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140347618 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x140349510 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1403907A8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z @ 0x1403C17B4 (-RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1403C5760 (DxgkDisplayConfigDeviceInfo.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403C9B44 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     DxgkCheckMonitorPowerState @ 0x140408DE0 (DxgkCheckMonitorPowerState.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x140409620 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x14040D3E0 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x14040E300 (-DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x14040F280 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 * Callees:
 *     DxgkReleaseSessionModeChangeLock @ 0x140298418 (DxgkReleaseSessionModeChangeLock.c)
 */

void __fastcall DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK(DXGSESSIONMODECHANGELOCK *this)
{
  if ( *(_BYTE *)this )
  {
    *(_BYTE *)this = 0;
    DxgkReleaseSessionModeChangeLock();
  }
}
