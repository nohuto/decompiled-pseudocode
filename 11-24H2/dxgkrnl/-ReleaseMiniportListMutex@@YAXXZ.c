/*
 * XREFs of ?ReleaseMiniportListMutex@@YAXXZ @ 0x1400419DC
 * Callers:
 *     DxgkMiracastEnforceInactiveMonitorPolicy @ 0x140041860 (DxgkMiracastEnforceInactiveMonitorPolicy.c)
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x14004A800 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 *     DpiLeaveSystemDisplay @ 0x14005C710 (DpiLeaveSystemDisplay.c)
 *     DpiEnterSystemDisplay @ 0x14007DE70 (DpiEnterSystemDisplay.c)
 *     DpiMiracastInterfaceChange @ 0x14007EDE0 (DpiMiracastInterfaceChange.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x14007FAF0 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTargetDeviceChange @ 0x1400800A0 (DpiMiracastTargetDeviceChange.c)
 *     DpiMiracastTearDownAssociation @ 0x14008058C (DpiMiracastTearDownAssociation.c)
 *     DxgkMiracastStartMiracastSession @ 0x140080D18 (DxgkMiracastStartMiracastSession.c)
 *     ?PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z @ 0x140085D20 (-PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z.c)
 *     DpiDumpAdaptersDisplayMuxStatus @ 0x140088BBC (DpiDumpAdaptersDisplayMuxStatus.c)
 *     DpiIndirectCbOpmGetSrmListVersion @ 0x14008A190 (DpiIndirectCbOpmGetSrmListVersion.c)
 *     DpiIndirectCbOpmSetSrmList @ 0x14008A2E0 (DpiIndirectCbOpmSetSrmList.c)
 *     ?FindAdapterAndAcquire@AUTO_REMOVE_LOCK@@QEAAJPEAU_LUID@@@Z @ 0x14008BF84 (-FindAdapterAndAcquire@AUTO_REMOVE_LOCK@@QEAAJPEAU_LUID@@@Z.c)
 *     DpiControlEtwLogging @ 0x140235AA0 (DpiControlEtwLogging.c)
 *     DpiAddDevice @ 0x1402393B0 (DpiAddDevice.c)
 *     DpiCleanup @ 0x14023B7E4 (DpiCleanup.c)
 *     DpiInitializeEx @ 0x14023BB28 (DpiInitializeEx.c)
 *     DpiFdoHandleQueryPowerRelations @ 0x1402410D0 (DpiFdoHandleQueryPowerRelations.c)
 *     DpiFdoHandleRemoveDevice @ 0x140241460 (DpiFdoHandleRemoveDevice.c)
 *     DpiFdoHandleStartDevice @ 0x1402418B0 (DpiFdoHandleStartDevice.c)
 *     DpiFdoHandleStopDevice @ 0x1402421F0 (DpiFdoHandleStopDevice.c)
 *     DpiFdoStartAdapterThreadImpl @ 0x14024772C (DpiFdoStartAdapterThreadImpl.c)
 *     DpiFdoStopAdapter @ 0x140248100 (DpiFdoStopAdapter.c)
 *     DpiDisableMsBddFallbackDriverWorkItem @ 0x140249E90 (DpiDisableMsBddFallbackDriverWorkItem.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x14024B5F0 (DpiMiracastFindDisplayAdapterFdo.c)
 *     DpiMiracastGetDeviceContextFromName @ 0x14024BA4C (DpiMiracastGetDeviceContextFromName.c)
 *     DpiIndirectFindDeviceFromInstanceId @ 0x14024F850 (DpiIndirectFindDeviceFromInstanceId.c)
 *     ?DpIterateFdoContexts@@YAXP6AJPEAU_FDO_CONTEXT@@PEAX@Z1@Z @ 0x14024FCBC (-DpIterateFdoContexts@@YAXP6AJPEAU_FDO_CONTEXT@@PEAX@Z1@Z.c)
 *     DpiKsrStopAdapter @ 0x1402513F0 (DpiKsrStopAdapter.c)
 *     DpiAcpiRegisterAcpiCallbacks @ 0x140252514 (DpiAcpiRegisterAcpiCallbacks.c)
 *     DpiAcpiUnregisterAcpiCallbacks @ 0x140252810 (DpiAcpiUnregisterAcpiCallbacks.c)
 *     DpiLdaValidateSystemChainStatus @ 0x140253FA0 (DpiLdaValidateSystemChainStatus.c)
 *     DpiGdoDestroyGdiObjects @ 0x140255D5C (DpiGdoDestroyGdiObjects.c)
 *     DpiValidateDeviceName @ 0x1403304E4 (DpiValidateDeviceName.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x140398770 (DxgkMiracastStopAllMiracastSessions.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1403C4B50 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiFdoStopMiracastSession @ 0x1403E12A0 (DpiFdoStopMiracastSession.c)
 *     ?DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LOCK@@PEAPEAU_FDO_CONTEXT@@@Z @ 0x1403FC45C (-DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LO.c)
 *     DxgkHandleMiracastEscape @ 0x1404028D8 (DxgkHandleMiracastEscape.c)
 *     DpiAcpiHandleAcpiEvent @ 0x140428EBC (DpiAcpiHandleAcpiEvent.c)
 * Callees:
 *     <none>
 */

void ReleaseMiniportListMutex(void)
{
  _InterlockedExchange64(&qword_140160D58, 0LL);
  KeReleaseMutex(Mutex, 0);
}
