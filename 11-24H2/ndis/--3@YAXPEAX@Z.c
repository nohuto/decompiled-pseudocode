/*
 * XREFs of ??3@YAXPEAX@Z @ 0x14008CFB0
 * Callers:
 *     ??_G?$ObjectTriageData@U_NDIS_COMMON_OPEN_BLOCK@@@@UEAAPEAXI@Z @ 0x1400913C0 (--_G-$ObjectTriageData@U_NDIS_COMMON_OPEN_BLOCK@@@@UEAAPEAXI@Z.c)
 *     ??_E?$DriverCallbackBase@U_NDIS_M_DRIVER_BLOCK@@X@Details@AzTelemetry@@UEAAPEAXI@Z @ 0x14009C350 (--_E-$DriverCallbackBase@U_NDIS_M_DRIVER_BLOCK@@X@Details@AzTelemetry@@UEAAPEAXI@Z.c)
 *     ??_GMiniportAddDeviceTelemetry@AzTelemetry@@UEAAPEAXI@Z @ 0x14009C380 (--_GMiniportAddDeviceTelemetry@AzTelemetry@@UEAAPEAXI@Z.c)
 *     ??_GMiniportDriverUnload@AzTelemetry@@UEAAPEAXI@Z @ 0x14009C3C0 (--_GMiniportDriverUnload@AzTelemetry@@UEAAPEAXI@Z.c)
 *     ??_EMiniportFilterResourceRequirements@AzTelemetry@@UEAAPEAXI@Z @ 0x14009C400 (--_EMiniportFilterResourceRequirements@AzTelemetry@@UEAAPEAXI@Z.c)
 *     ??_GMiniportRemoveDeviceTelemetry@AzTelemetry@@UEAAPEAXI@Z @ 0x14009C440 (--_GMiniportRemoveDeviceTelemetry@AzTelemetry@@UEAAPEAXI@Z.c)
 *     ??_GMiniportStartDevice@AzTelemetry@@UEAAPEAXI@Z @ 0x14009C480 (--_GMiniportStartDevice@AzTelemetry@@UEAAPEAXI@Z.c)
 *     ??_EMiniportDevicePnPEventNotify@AzTelemetry@@UEAAPEAXI@Z @ 0x1400DD4E0 (--_EMiniportDevicePnPEventNotify@AzTelemetry@@UEAAPEAXI@Z.c)
 *     ??_EMiniportHaltTelemetry@AzTelemetry@@UEAAPEAXI@Z @ 0x1400DD520 (--_EMiniportHaltTelemetry@AzTelemetry@@UEAAPEAXI@Z.c)
 *     ??_ETriageData@@UEAAPEAXI@Z @ 0x1400E4A70 (--_ETriageData@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall operator delete(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
