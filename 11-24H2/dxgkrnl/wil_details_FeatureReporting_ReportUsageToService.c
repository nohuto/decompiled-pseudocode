/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToService @ 0x140066C98
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
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x140066D1C (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     wil_details_MapReportingKind @ 0x1400670D8 (wil_details_MapReportingKind.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall wil_details_FeatureReporting_ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  unsigned int v4; // edi
  unsigned int v5; // eax
  __int64 v6; // r9
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  char v8; // [rsp+30h] [rbp-28h]
  int v9; // [rsp+70h] [rbp+18h] BYREF

  v9 = a3;
  v4 = a2 & 1;
  v5 = wil_details_MapReportingKind((unsigned int)a3, a2 & 1, a3, a2);
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))wil_details_FeatureReporting_ReportUsageToServiceDirect(
                                                                                                     a1,
                                                                                                     v6,
                                                                                                     v5);
  if ( (_DWORD)result )
  {
    result = g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
    {
      v8 = 0;
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))g_wil_details_pfnFeatureLoggingHook(*(unsigned int *)(a1 + 24), *(_QWORD *)(a1 + 16), 0LL, v4, &v9, 0LL, v8, 1LL);
    }
  }
  return result;
}
