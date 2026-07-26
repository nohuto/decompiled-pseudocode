/*
 * XREFs of ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140155F00
 * Callers:
 *     NdisEnumerateFilterModules @ 0x14002DDA0 (NdisEnumerateFilterModules.c)
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x14004C300 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x140051D30 (-ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisFSetRestartAttributes@@YAHPEAXPEAU_NDIS_FILTER_PARTIAL_CHARACTERISTICS@@@Z @ 0x14005FDE0 (-ndisFSetRestartAttributes@@YAHPEAXPEAU_NDIS_FILTER_PARTIAL_CHARACTERISTICS@@@Z.c)
 *     ndisWdfDevicePowerOn @ 0x1400822C0 (ndisWdfDevicePowerOn.c)
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x140084490 (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     NdisWdfMiniportDataPathPause @ 0x140094B10 (NdisWdfMiniportDataPathPause.c)
 *     NdisWdfMiniportDataPathStart @ 0x140094BF0 (NdisWdfMiniportDataPathStart.c)
 *     ?ndisIMInitializeDeviceInstanceInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x140098EC4 (-ndisIMInitializeDeviceInstanceInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 *     _lambda_038fcc6e7bde754e7b10949a64dec82f_::operator() @ 0x140099A24 (_lambda_038fcc6e7bde754e7b10949a64dec82f_--operator().c)
 *     NdisMSetMiniportSecondary @ 0x1400A00C0 (NdisMSetMiniportSecondary.c)
 *     ?ndisBindRequest@@YAXPEAXAEAUBindEngine@Ndis@@AEAVBindState@2@PEBU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1400A6944 (-ndisBindRequest@@YAXPEAXAEAUBindEngine@Ndis@@AEAVBindState@2@PEBU_NET_PNP_EVENT_NOTIFICATION@@@.c)
 *     _lambda_7537066ad08712f65f7ead95a6eccf2e_::operator() @ 0x1400B73B8 (_lambda_7537066ad08712f65f7ead95a6eccf2e_--operator().c)
 *     ?ndisQueuedStatusUnbindAdapter@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1400B80C0 (-ndisQueuedStatusUnbindAdapter@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1400B840C (-ndisUnbindAdapterInner@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisQueueFilterRestart@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140135010 (-ndisQueueFilterRestart@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisMQueuedPromoteMiniport@@YAXPEAX@Z @ 0x1401382D0 (-ndisMQueuedPromoteMiniport@@YAXPEAX@Z.c)
 *     ndisHandleLegacyBindIoctl @ 0x1401390A8 (ndisHandleLegacyBindIoctl.c)
 *     _lambda_ecdb32753e2b7a1d37d87608ec168c64_::_lambda_invoker_cdecl_ @ 0x140141EF0 (_lambda_ecdb32753e2b7a1d37d87608ec168c64_--_lambda_invoker_cdecl_.c)
 *     _lambda_062918d3b118b4760965b8092450098c_::operator() @ 0x1401434E4 (_lambda_062918d3b118b4760965b8092450098c_--operator().c)
 *     ?ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x140152680 (-ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisMPauseMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401544B0 (-ndisMPauseMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1401545F0 (-ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INF.c)
 *     ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x140154760 (-ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?ndisMCheckForInitModeExit@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140155640 (-ndisMCheckForInitModeExit@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1401556B0 (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 *     ?ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x140155BA0 (-ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?ndisUnbindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x14015FCE0 (-ndisUnbindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x14015FD60 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x14015FEA0 (-ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@.c)
 *     ?ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x14015FFE0 (-ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x140160850 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ?ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1401610C0 (-ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisCompleteUnsolicitedUnbind@@YAXPEAX@Z @ 0x140161430 (-ndisCompleteUnsolicitedUnbind@@YAXPEAX@Z.c)
 *     ?ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4CallRunMode@@@Z @ 0x140161630 (-ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4Ca.c)
 *     ?ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x140164600 (-ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ndisHandleProtocolReconfigNotification @ 0x140171ED0 (ndisHandleProtocolReconfigNotification.c)
 *     ?ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x140172FB0 (-ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ?ndisPnPNotifyBinding@@_Y2PAGENPNP@@AHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x140173270 (-ndisPnPNotifyBinding@@_Y2PAGENPNP@@AHPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ?ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140176710 (-ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1401771E0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1401788C0 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017BC40 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 *     ?ndisDevicePowerDown@@YAXPEAX@Z @ 0x140180650 (-ndisDevicePowerDown@@YAXPEAX@Z.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x140180E40 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 *     NdisOpenAdapterEx @ 0x140182720 (NdisOpenAdapterEx.c)
 * Callees:
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x140155F40 (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 */

void __fastcall Ndis::BindEngine::EndPolicyUpdates(Ndis::BindEngine *this)
{
  Ndis::BindEngine::ApplyRules(this);
  ExReleasePushLockExclusiveEx(&this->m_lock, 0LL);
  KeLeaveCriticalRegion();
}
