/*
 * XREFs of ??3@YAXPEAX@Z @ 0x140098850
 * Callers:
 *     ??_E?$DriverCallbackBase@U_NDIS_M_DRIVER_BLOCK@@X@Details@AzTelemetry@@UEAAPEAXI@Z @ 0x1400A5090 (--_E-$DriverCallbackBase@U_NDIS_M_DRIVER_BLOCK@@X@Details@AzTelemetry@@UEAAPEAXI@Z.c)
 *     ??_GMiniportAddDeviceTelemetry@AzTelemetry@@UEAAPEAXI@Z @ 0x1400A50C0 (--_GMiniportAddDeviceTelemetry@AzTelemetry@@UEAAPEAXI@Z.c)
 *     ??_GMiniportDriverUnload@AzTelemetry@@UEAAPEAXI@Z @ 0x1400A5100 (--_GMiniportDriverUnload@AzTelemetry@@UEAAPEAXI@Z.c)
 *     ??_EMiniportFilterResourceRequirements@AzTelemetry@@UEAAPEAXI@Z @ 0x1400A5140 (--_EMiniportFilterResourceRequirements@AzTelemetry@@UEAAPEAXI@Z.c)
 *     ??_GMiniportRemoveDeviceTelemetry@AzTelemetry@@UEAAPEAXI@Z @ 0x1400A5180 (--_GMiniportRemoveDeviceTelemetry@AzTelemetry@@UEAAPEAXI@Z.c)
 *     ??_GMiniportStartDevice@AzTelemetry@@UEAAPEAXI@Z @ 0x1400A51C0 (--_GMiniportStartDevice@AzTelemetry@@UEAAPEAXI@Z.c)
 *     ??_EMiniportDevicePnPEventNotify@AzTelemetry@@UEAAPEAXI@Z @ 0x1400E46F0 (--_EMiniportDevicePnPEventNotify@AzTelemetry@@UEAAPEAXI@Z.c)
 *     ??_EMiniportHaltTelemetry@AzTelemetry@@UEAAPEAXI@Z @ 0x1400E4730 (--_EMiniportHaltTelemetry@AzTelemetry@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall operator delete(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
