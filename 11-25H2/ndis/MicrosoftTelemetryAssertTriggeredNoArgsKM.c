/*
 * XREFs of MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400EBEB0
 * Callers:
 *     ?ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z @ 0x1400578C0 (-ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z.c)
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1400658C0 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ?ndisMUpdateNameOnPMWakePacket@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z @ 0x140078610 (-ndisMUpdateNameOnPMWakePacket@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z.c)
 *     ?IndicateReceiveNetBufferListsDummyHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1400AA940 (-IndicateReceiveNetBufferListsDummyHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ReturnNetBufferListsDummyHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1400AAA20 (-ReturnNetBufferListsDummyHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?SendNetBufferListsCompleteDummyHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1400AAA70 (-SendNetBufferListsCompleteDummyHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?SendNetBufferListsDummyHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1400AAAC0 (-SendNetBufferListsDummyHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisFreeReceiveQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1400B1C78 (-ndisFreeReceiveQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisWdfPreReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140149ABC (-ndisWdfPreReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisIfSetFilterIfInfoInRegistry @ 0x14016E530 (ndisIfSetFilterIfInfoInRegistry.c)
 *     ?ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x140171EF0 (-ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401846F0 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x140186B80 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1400EBEE0 (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

__int64 MicrosoftTelemetryAssertTriggeredNoArgsKM()
{
  void *retaddr; // [rsp+38h] [rbp+0h]

  return MicrosoftTelemetryAssertTriggeredWorker(retaddr, 0LL, 0LL);
}
