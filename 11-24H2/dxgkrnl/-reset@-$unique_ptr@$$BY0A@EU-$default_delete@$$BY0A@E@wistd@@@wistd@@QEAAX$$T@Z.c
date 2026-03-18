/*
 * XREFs of ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140023358
 * Callers:
 *     NtDxgkDisplayPortOperation @ 0x14006E190 (NtDxgkDisplayPortOperation.c)
 *     ?DxgkRequestDisplayPrivateTest@@YAJW4DisplayPrivateTest_RequestType@@IPEAX@Z @ 0x1401BDFB8 (-DxgkRequestDisplayPrivateTest@@YAJW4DisplayPrivateTest_RequestType@@IPEAX@Z.c)
 *     ?DxgkRequestDisplayRecoveryToBroker@@YAJXZ @ 0x1401BE18C (-DxgkRequestDisplayRecoveryToBroker@@YAJXZ.c)
 *     ?DxgkSendDisplayDiagnosticsToBroker@@YAJIPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@PEA_N@Z @ 0x1401BE290 (-DxgkSendDisplayDiagnosticsToBroker@@YAJIPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@PEA_N@Z.c)
 *     ?CollectIntrusiveDriverData@DRIVERWHITEBOXINFO@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1401BF860 (-CollectIntrusiveDriverData@DRIVERWHITEBOXINFO@@QEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?CollectNonIntrusiveDriverData@DRIVERWHITEBOXINFO@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1401BFAD0 (-CollectNonIntrusiveDriverData@DRIVERWHITEBOXINFO@@QEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@@@Z @ 0x1401BFD24 (-CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@@@Z.c)
 *     ?LogDisplayBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAXXZ @ 0x1401C127C (-LogDisplayBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAXXZ.c)
 *     ?SendDisplayDiagnosticsToBroker@DISPLAYSTATECHECKER@@AEAAXXZ @ 0x1401C19E4 (-SendDisplayDiagnosticsToBroker@DISPLAYSTATECHECKER@@AEAAXXZ.c)
 *     ?DxgkLogDisplayMuxDiagPacketToDisplayRingbuffer@@YAJXZ @ 0x1401C47B0 (-DxgkLogDisplayMuxDiagPacketToDisplayRingbuffer@@YAJXZ.c)
 *     ?LogActivePathPresentHistoryCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1401C5720 (-LogActivePathPresentHistoryCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?VmBusOpmRequest@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402265B0 (-VmBusOpmRequest@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSendOpmRequest@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IIPEAXK1PEAK@Z @ 0x14022D49C (-VmBusSendOpmRequest@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IIPEAXK1PEAK@Z.c)
 *     ?GetMonitorDescriptor@MonitorDescriptorState@DxgMonitor@@QEBAJPEAU_DXGK_MONITOR_DESCRIPTOR@@@Z @ 0x14027967C (-GetMonitorDescriptor@MonitorDescriptorState@DxgMonitor@@QEBAJPEAU_DXGK_MONITOR_DESCRIPTOR@@@Z.c)
 *     ?GetColorDataRaw@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_COLOR_DATA_RAW@@@Z @ 0x14027FD50 (-GetColorDataRaw@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_COLOR_DATA_RAW@@@Z.c)
 *     ?GetColorimetryData@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_COLORIMETRY_DATA@@AEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x14027FDA0 (-GetColorimetryData@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_COLORIMETRY_DATA@@AEAUDIS.c)
 *     ?GetContainerId@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_GUID@@@Z @ 0x14027FE80 (-GetContainerId@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAU_GUID@@@Z.c)
 *     ?GetDolbyVisionCaps@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_DVLL_CAPS@@@Z @ 0x14027FFB0 (-GetDolbyVisionCaps@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_DVLL_CAPS@@@Z.c)
 *     ?GetHdrLuminance@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAK00@Z @ 0x140280000 (-GetHdrLuminance@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAK00@Z.c)
 *     ?GetUsageParams@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAW4DISPLAY_USE_CASE@@AEA_N1@Z @ 0x1402801A0 (-GetUsageParams@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAW4DISPLAY_USE_CASE@@AEA_N1@Z.c)
 *     ??1DisplayIdMonitorDescriptor@DxgMonitor@@UEAA@XZ @ 0x1402804F0 (--1DisplayIdMonitorDescriptor@DxgMonitor@@UEAA@XZ.c)
 *     ?CopyInstance@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x140280840 (-CopyInstance@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@UIMonitorDescriptor@Dxg.c)
 *     ?GetAnonymizedRawDescriptor@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@PEAI@Z @ 0x1402809E0 (-GetAnonymizedRawDescriptor@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@$$BY0A@EU.c)
 *     ?LoadDescriptorOverridesFromRegistry@DisplayIdMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistry@2@@Z @ 0x140281080 (-LoadDescriptorOverridesFromRegistry@DisplayIdMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorReg.c)
 *     ?UnloadDescriptorOverrides@DisplayIdMonitorDescriptor@DxgMonitor@@UEAAXXZ @ 0x140281370 (-UnloadDescriptorOverrides@DisplayIdMonitorDescriptor@DxgMonitor@@UEAAXXZ.c)
 *     ?TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14028ACA0 (-TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU.c)
 *     ?AllocateAndPopulateHDRMetadataFromDisplay@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAPEAEPEAW4_D3DDDI_HDR_METADATA_TYPE@@PEAI@Z @ 0x1402BDDC0 (-AllocateAndPopulateHDRMetadataFromDisplay@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAPEAEP.c)
 *     ?GetEdidDescriptorRaw@MonitorDescriptorState@DxgMonitor@@QEBAJIPEAIPEAE@Z @ 0x140306974 (-GetEdidDescriptorRaw@MonitorDescriptorState@DxgMonitor@@QEBAJIPEAIPEAE@Z.c)
 *     ?GetDisplayIdDescriptorRaw@MonitorDescriptorState@DxgMonitor@@QEBAJIPEAIPEAE@Z @ 0x140306A2C (-GetDisplayIdDescriptorRaw@MonitorDescriptorState@DxgMonitor@@QEBAJIPEAIPEAE@Z.c)
 *     ?OnInternalIoctl@MonitorDescriptorState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z @ 0x1403CBDD0 (-OnInternalIoctl@MonitorDescriptorState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z.c)
 *     ?ParseDescriptorModes@MonitorModes@DxgMonitor@@AEAAJAEBUIMonitorDescriptor@2@@Z @ 0x1403CD898 (-ParseDescriptorModes@MonitorModes@DxgMonitor@@AEAAJAEBUIMonitorDescriptor@2@@Z.c)
 *     ?IsEotf2084Supported@EdidMonitorDescriptor@DxgMonitor@@UEBA_NXZ @ 0x1403D6A80 (-IsEotf2084Supported@EdidMonitorDescriptor@DxgMonitor@@UEBA_NXZ.c)
 *     ?GetAnonymizedRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@PEAI@Z @ 0x1403D6AF0 (-GetAnonymizedRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@$$BY0A@EU-$def.c)
 *     ?_UpdateMonitorEDIDRegistryForGDI@MonitorDescriptorState@DxgMonitor@@AEBAJXZ @ 0x1403F0054 (-_UpdateMonitorEDIDRegistryForGDI@MonitorDescriptorState@DxgMonitor@@AEBAJXZ.c)
 *     ?ExtractFromEdid@DisplayIdMonitorDescriptor@DxgMonitor@@SAJ$$QEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@KAEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@4@@Z @ 0x1404001D0 (-ExtractFromEdid@DisplayIdMonitorDescriptor@DxgMonitor@@SAJ$$QEAV-$unique_ptr@$$BY0A@EU-$default.c)
 *     ?OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ @ 0x14042ED20 (-OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

void __fastcall wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(void **a1)
{
  void *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v1);
}
