/*
 * XREFs of Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline @ 0x140092F04
 * Callers:
 *     ?ndisCreateHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x140053CF0 (-ndisCreateHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     NdisWdfDeviceControlIrpHandler @ 0x140077960 (NdisWdfDeviceControlIrpHandler.c)
 *     ?ndisCleanupUserOpenContext@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@@Z @ 0x14007B350 (-ndisCleanupUserOpenContext@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@@Z.c)
 *     ?ndisMInitializeMiniportBlock@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x14007E540 (-ndisMInitializeMiniportBlock@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     NdisWdfDeviceInternalControlIrpHandler @ 0x1400949B0 (NdisWdfDeviceInternalControlIrpHandler.c)
 *     ?ndisReadRegistry@@YAXXZ @ 0x140098C18 (-ndisReadRegistry@@YAXXZ.c)
 *     ?ndisCloseHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@_N@Z @ 0x14009BB88 (-ndisCloseHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@_N@Z.c)
 *     ?ndisPnPIrpStopDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1400A7530 (-ndisPnPIrpStopDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisDisableUdpRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401409A8 (-ndisDisableUdpRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x14016B5D0 (-ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1401788C0 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     Feature_NDPQualityWinter26__private_IsEnabledFallback @ 0x140092F3C (Feature_NDPQualityWinter26__private_IsEnabledFallback.c)
 */

__int64 Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_NDPQualityWinter26__private_featureState & 0x10) != 0 )
    return Feature_NDPQualityWinter26__private_featureState & 1;
  else
    return Feature_NDPQualityWinter26__private_IsEnabledFallback(
             (unsigned int)Feature_NDPQualityWinter26__private_featureState,
             3LL);
}
