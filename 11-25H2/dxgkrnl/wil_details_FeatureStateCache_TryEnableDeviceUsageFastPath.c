/*
 * XREFs of wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14006735C
 * Callers:
 *     wil_details_IsEnabledFallback @ 0x14006164C (wil_details_IsEnabledFallback.c)
 *     NtDxgkDisplayPortOperation @ 0x140063620 (NtDxgkDisplayPortOperation.c)
 *     Feature_BrokeredDisplays_RotMgr__private_ReportDeviceUsage @ 0x140064C20 (Feature_BrokeredDisplays_RotMgr__private_ReportDeviceUsage.c)
 *     Feature_LegacyHPDFiltering__private_IsEnabledPreCheck @ 0x14007D66C (Feature_LegacyHPDFiltering__private_IsEnabledPreCheck.c)
 *     Feature_SupportWaitWakeForPowerRuntimeD3__private_IsEnabledPreCheck @ 0x14007D728 (Feature_SupportWaitWakeForPowerRuntimeD3__private_IsEnabledPreCheck.c)
 *     Feature_DisplayMux_Dynamic_Enabled__private_IsEnabledPreCheck @ 0x1400895C8 (Feature_DisplayMux_Dynamic_Enabled__private_IsEnabledPreCheck.c)
 *     Feature_DisplayMux_Static_Enabled__private_IsEnabledPreCheck @ 0x140089684 (Feature_DisplayMux_Static_Enabled__private_IsEnabledPreCheck.c)
 *     Feature_BrokeredDisplays_ModeChanges__private_IsEnabledPreCheck @ 0x14008DF24 (Feature_BrokeredDisplays_ModeChanges__private_IsEnabledPreCheck.c)
 *     ?SmmLoadConfiguration@@YAXXZ @ 0x14018236C (-SmmLoadConfiguration@@YAXXZ.c)
 *     ?GpuVaIoMmuEnabled@DXGGLOBAL@@QEAAEXZ @ 0x140182410 (-GpuVaIoMmuEnabled@DXGGLOBAL@@QEAAEXZ.c)
 *     ?VmBusGetInternalAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14018A780 (-VmBusGetInternalAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1401BCC9C (-CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401BE5E0 (-LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?NeedLidStateRecovery@DISPLAYDIAGNOSTICADAPTERDATA@@QEAA_NXZ @ 0x1401BEF14 (-NeedLidStateRecovery@DISPLAYDIAGNOSTICADAPTERDATA@@QEAA_NXZ.c)
 *     ?TryRecovery@DISPLAYSTATECHECKER@@QEAAXXZ @ 0x1401BF110 (-TryRecovery@DISPLAYSTATECHECKER@@QEAAXXZ.c)
 *     ?CopyDriverStore@DXGADAPTER@@QEAAJXZ @ 0x1401C7468 (-CopyDriverStore@DXGADAPTER@@QEAAJXZ.c)
 *     ?TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1401CB4A0 (-TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     NtDxgkIsFeatureEnabled @ 0x1401CC7A0 (NtDxgkIsFeatureEnabled.c)
 *     NtDxgkDuplicateHandle @ 0x1401DEAC0 (NtDxgkDuplicateHandle.c)
 *     ?IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x140200B54 (-IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ.c)
 *     ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x140206050 (-CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@EE.c)
 *     DpQueryServices @ 0x14022EB30 (DpQueryServices.c)
 *     DpiFdoDispatchIoctl @ 0x140237020 (DpiFdoDispatchIoctl.c)
 *     DpiFdoQuerySysMmAdapterCaps @ 0x14023E0DC (DpiFdoQuerySysMmAdapterCaps.c)
 *     DpiFeatureStartDevice @ 0x1402470C8 (DpiFeatureStartDevice.c)
 *     ?_DsiReset@MonitorMipiDsiState@DxgMonitor@@AEAAJKPEAXK0PEA_K@Z @ 0x1402779D0 (-_DsiReset@MonitorMipiDsiState@DxgMonitor@@AEAAJKPEAXK0PEA_K@Z.c)
 *     ?_DsiTransmission@MonitorMipiDsiState@DxgMonitor@@AEAAJKPEAXK0PEA_K@Z @ 0x140277C54 (-_DsiTransmission@MonitorMipiDsiState@DxgMonitor@@AEAAJKPEAXK0PEA_K@Z.c)
 *     ?_QueryMipiDsiCaps@MonitorMipiDsiState@DxgMonitor@@AEBAJKPEAXPEA_K@Z @ 0x1402780AC (-_QueryMipiDsiCaps@MonitorMipiDsiState@DxgMonitor@@AEBAJKPEAXPEA_K@Z.c)
 *     ?GetColorimetryData@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_COLORIMETRY_DATA@@AEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x1402788A0 (-GetColorimetryData@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_COLORIMETRY_DATA@@AEAUDIS.c)
 *     ?OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z @ 0x140300A14 (-OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z.c)
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x140302144 (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 *     ?IsIFlipFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x1403D7C7C (-IsIFlipFeatureEnabled@DXGVAILOBJECT@@SAEXZ.c)
 *     ?OnInitialized@MonitorMipiDsiState@DxgMonitor@@QEAAJXZ @ 0x140401698 (-OnInitialized@MonitorMipiDsiState@DxgMonitor@@QEAAJXZ.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1404092C8 (DpiPdoHandleChildConnectionChange.c)
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
