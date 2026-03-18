/*
 * XREFs of wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140066F1C
 * Callers:
 *     wil_details_IsEnabledFallback @ 0x140061F08 (wil_details_IsEnabledFallback.c)
 *     Feature_BrokeredDisplays_RotMgr__private_ReportDeviceUsage @ 0x140064840 (Feature_BrokeredDisplays_RotMgr__private_ReportDeviceUsage.c)
 *     Feature_LegacyHPDFiltering__private_IsEnabledPreCheck @ 0x14007DCF4 (Feature_LegacyHPDFiltering__private_IsEnabledPreCheck.c)
 *     Feature_SupportWaitWakeForPowerRuntimeD3__private_IsEnabledPreCheck @ 0x14007DDB0 (Feature_SupportWaitWakeForPowerRuntimeD3__private_IsEnabledPreCheck.c)
 *     Feature_DisplayMux_Dynamic_Enabled__private_IsEnabledPreCheck @ 0x140089CB0 (Feature_DisplayMux_Dynamic_Enabled__private_IsEnabledPreCheck.c)
 *     Feature_DisplayMux_Static_Enabled__private_IsEnabledPreCheck @ 0x140089D6C (Feature_DisplayMux_Static_Enabled__private_IsEnabledPreCheck.c)
 *     Feature_BrokeredDisplays_ConsoleSessions__private_IsEnabledPreCheck @ 0x14008D560 (Feature_BrokeredDisplays_ConsoleSessions__private_IsEnabledPreCheck.c)
 *     Feature_BrokeredDisplays_ModeChanges__private_IsEnabledPreCheck @ 0x14008F1F4 (Feature_BrokeredDisplays_ModeChanges__private_IsEnabledPreCheck.c)
 *     ?SmmLoadConfiguration@@YAXXZ @ 0x14018481C (-SmmLoadConfiguration@@YAXXZ.c)
 *     ?GpuVaIoMmuEnabled@DXGGLOBAL@@QEAAEXZ @ 0x1401848C0 (-GpuVaIoMmuEnabled@DXGGLOBAL@@QEAAEXZ.c)
 *     ?VmBusGetInternalAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14018CA10 (-VmBusGetInternalAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1401BF658 (-CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401C0F90 (-LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?NeedLidStateRecovery@DISPLAYDIAGNOSTICADAPTERDATA@@QEAA_NXZ @ 0x1401C18C4 (-NeedLidStateRecovery@DISPLAYDIAGNOSTICADAPTERDATA@@QEAA_NXZ.c)
 *     ?TryRecovery@DISPLAYSTATECHECKER@@QEAAXXZ @ 0x1401C1AC0 (-TryRecovery@DISPLAYSTATECHECKER@@QEAAXXZ.c)
 *     ?CopyDriverStore@DXGADAPTER@@QEAAJXZ @ 0x1401CC6F8 (-CopyDriverStore@DXGADAPTER@@QEAAJXZ.c)
 *     ?TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1401D0730 (-TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     NtDxgkIsFeatureEnabled @ 0x1401D1A40 (NtDxgkIsFeatureEnabled.c)
 *     NtDxgkDuplicateHandle @ 0x1401E3CC0 (NtDxgkDuplicateHandle.c)
 *     ?IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x140207264 (-IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ.c)
 *     ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x14020C720 (-CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@EE.c)
 *     DpQueryServices @ 0x140235390 (DpQueryServices.c)
 *     DpiFdoDispatchIoctl @ 0x14023DB30 (DpiFdoDispatchIoctl.c)
 *     DpiFdoQuerySysMmAdapterCaps @ 0x140244DA4 (DpiFdoQuerySysMmAdapterCaps.c)
 *     DpiFeatureStartDevice @ 0x14024DEF8 (DpiFeatureStartDevice.c)
 *     ?_DsiReset@MonitorMipiDsiState@DxgMonitor@@AEAAJKPEAXK0PEA_K@Z @ 0x14027EED0 (-_DsiReset@MonitorMipiDsiState@DxgMonitor@@AEAAJKPEAXK0PEA_K@Z.c)
 *     ?_DsiTransmission@MonitorMipiDsiState@DxgMonitor@@AEAAJKPEAXK0PEA_K@Z @ 0x14027F154 (-_DsiTransmission@MonitorMipiDsiState@DxgMonitor@@AEAAJKPEAXK0PEA_K@Z.c)
 *     ?_QueryMipiDsiCaps@MonitorMipiDsiState@DxgMonitor@@AEBAJKPEAXPEA_K@Z @ 0x14027F5AC (-_QueryMipiDsiCaps@MonitorMipiDsiState@DxgMonitor@@AEBAJKPEAXPEA_K@Z.c)
 *     ?GetColorimetryData@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_COLORIMETRY_DATA@@AEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x14027FDA0 (-GetColorimetryData@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_COLORIMETRY_DATA@@AEAUDIS.c)
 *     ?OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z @ 0x1402B7698 (-OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z.c)
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1402D5328 (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 *     ?IsIFlipFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x1403CFE6C (-IsIFlipFeatureEnabled@DXGVAILOBJECT@@SAEXZ.c)
 *     ?OnInitialized@MonitorMipiDsiState@DxgMonitor@@QEAAJXZ @ 0x1403FB518 (-OnInitialized@MonitorMipiDsiState@DxgMonitor@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(unsigned __int8 a1, int a2, __int64 a3)
{
  volatile signed __int32 *v3; // r9
  int v4; // edx
  unsigned int v5; // r10d
  signed __int32 v6; // eax
  signed __int32 v7; // ett

  v3 = *(volatile signed __int32 **)a3;
  v4 = a2 - 3;
  if ( v4 )
  {
    if ( v4 != 1 )
      return;
    v5 = 32;
  }
  else
  {
    v5 = 16;
  }
  if ( *(_BYTE *)(a3 + 30) || *(_BYTE *)(a3 + 29) )
  {
    _InterlockedOr(v3, v5);
  }
  else
  {
    v6 = *v3;
    do
    {
      if ( (v6 & 2) == 0 )
        break;
      if ( ((a1 ^ (unsigned __int8)v6) & 1) != 0 )
        break;
      v7 = v6;
      v6 = _InterlockedCompareExchange(v3, v6 | v5, v6);
    }
    while ( v7 != v6 );
  }
}
