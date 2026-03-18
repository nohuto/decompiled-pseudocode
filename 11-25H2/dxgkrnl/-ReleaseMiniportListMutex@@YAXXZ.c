/*
 * XREFs of ?ReleaseMiniportListMutex@@YAXXZ @ 0x14004204C
 * Callers:
 *     DxgkMiracastEnforceInactiveMonitorPolicy @ 0x140041ED0 (DxgkMiracastEnforceInactiveMonitorPolicy.c)
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x14004ACB4 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 *     DpiLeaveSystemDisplay @ 0x14005CCB0 (DpiLeaveSystemDisplay.c)
 *     DpiEnterSystemDisplay @ 0x14007D7F0 (DpiEnterSystemDisplay.c)
 *     DpiMiracastInterfaceChange @ 0x14007E760 (DpiMiracastInterfaceChange.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x14007F470 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTargetDeviceChange @ 0x14007FA20 (DpiMiracastTargetDeviceChange.c)
 *     DpiMiracastTearDownAssociation @ 0x14007FF0C (DpiMiracastTearDownAssociation.c)
 *     DxgkMiracastStartMiracastSession @ 0x140080698 (DxgkMiracastStartMiracastSession.c)
 *     ?PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z @ 0x140085690 (-PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z.c)
 *     DpiDumpAdaptersDisplayMuxStatus @ 0x1400884F4 (DpiDumpAdaptersDisplayMuxStatus.c)
 *     DpiIndirectCbOpmGetSrmListVersion @ 0x140089AB0 (DpiIndirectCbOpmGetSrmListVersion.c)
 *     DpiIndirectCbOpmSetSrmList @ 0x140089C00 (DpiIndirectCbOpmSetSrmList.c)
 *     ?FindAdapterAndAcquire@AUTO_REMOVE_LOCK@@QEAAJPEAU_LUID@@@Z @ 0x14008B020 (-FindAdapterAndAcquire@AUTO_REMOVE_LOCK@@QEAAJPEAU_LUID@@@Z.c)
 *     DpiControlEtwLogging @ 0x14022F240 (DpiControlEtwLogging.c)
 *     DpiAddDevice @ 0x1402329D0 (DpiAddDevice.c)
 *     DpiCleanup @ 0x140234E04 (DpiCleanup.c)
 *     DpiInitializeEx @ 0x140235148 (DpiInitializeEx.c)
 *     DpiFdoHandleQueryPowerRelations @ 0x14023A5C0 (DpiFdoHandleQueryPowerRelations.c)
 *     DpiFdoHandleRemoveDevice @ 0x14023A950 (DpiFdoHandleRemoveDevice.c)
 *     DpiFdoHandleStartDevice @ 0x14023ADA0 (DpiFdoHandleStartDevice.c)
 *     DpiFdoHandleStopDevice @ 0x14023B6E0 (DpiFdoHandleStopDevice.c)
 *     DpiFdoStartAdapterThreadImpl @ 0x14024092C (DpiFdoStartAdapterThreadImpl.c)
 *     DpiFdoStopAdapter @ 0x1402412FC (DpiFdoStopAdapter.c)
 *     DpiDisableMsBddFallbackDriverWorkItem @ 0x140243090 (DpiDisableMsBddFallbackDriverWorkItem.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1402447E0 (DpiMiracastFindDisplayAdapterFdo.c)
 *     DpiMiracastGetDeviceContextFromName @ 0x140244C3C (DpiMiracastGetDeviceContextFromName.c)
 *     DpiIndirectFindDeviceFromInstanceId @ 0x140248A20 (DpiIndirectFindDeviceFromInstanceId.c)
 *     ?DpIterateFdoContexts@@YAXP6AJPEAU_FDO_CONTEXT@@PEAX@Z1@Z @ 0x140248E8C (-DpIterateFdoContexts@@YAXP6AJPEAU_FDO_CONTEXT@@PEAX@Z1@Z.c)
 *     DpiKsrStopAdapter @ 0x14024A5C0 (DpiKsrStopAdapter.c)
 *     DpiAcpiRegisterAcpiCallbacks @ 0x14024B6E4 (DpiAcpiRegisterAcpiCallbacks.c)
 *     DpiAcpiUnregisterAcpiCallbacks @ 0x14024B9E0 (DpiAcpiUnregisterAcpiCallbacks.c)
 *     DpiLdaValidateSystemChainStatus @ 0x14024D170 (DpiLdaValidateSystemChainStatus.c)
 *     DpiGdoDestroyGdiObjects @ 0x14024EF2C (DpiGdoDestroyGdiObjects.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x14031F900 (DxgkMiracastStopAllMiracastSessions.c)
 *     DpiValidateDeviceName @ 0x140342684 (DpiValidateDeviceName.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1403D0FD0 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiFdoStopMiracastSession @ 0x1403E7BF0 (DpiFdoStopMiracastSession.c)
 *     ?DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LOCK@@PEAPEAU_FDO_CONTEXT@@@Z @ 0x1404025DC (-DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LO.c)
 *     DxgkHandleMiracastEscape @ 0x14040A148 (DxgkHandleMiracastEscape.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1404291B4 (DpiAcpiHandleAcpiEvent.c)
 * Callees:
 *     <none>
 */

void ReleaseMiniportListMutex(void)
{
  _InterlockedExchange64(&qword_14015DD98, 0LL);
  KeReleaseMutex(Mutex, 0);
}
