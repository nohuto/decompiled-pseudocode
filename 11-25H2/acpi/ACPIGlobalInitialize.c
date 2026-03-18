/*
 * XREFs of ACPIGlobalInitialize @ 0x1400C6008
 * Callers:
 *     DriverEntry @ 0x1400C64B0 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1400232C0 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 *     ACPIGetUsedDebuggingDevices @ 0x1400C0A44 (ACPIGetUsedDebuggingDevices.c)
 *     ACPILoadFindRSDT @ 0x1400C6114 (ACPILoadFindRSDT.c)
 */

void *ACPIGlobalInitialize()
{
  __int64 RSDT; // rbx

  AcpiHalDispatchTable = 1094930505;
  qword_140088CB8 = (__int64)ACPIGpeHalEnableDisableEvents;
  dword_140088CB4 = 2;
  qword_140088CC0 = (__int64)ACPIEnableInitializeACPI;
  qword_140088CC8 = (__int64)ACPIWakeEnableWakeEvents;
  qword_140088CD0 = (__int64)ACPIWakeMarkHiberPhase;
  ((void (__fastcall *)(int *, __int64 *))HalDispatchTable->HalInitPowerManagement)(
    &AcpiHalDispatchTable,
    &PmHalDispatchTable);
  RSDT = ACPILoadFindRSDT();
  if ( !RSDT )
    KeBugCheckEx(0xA5u, 0x11uLL, 1uLL, 0LL, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x1Eu,
      (__int64)&WPP_d6d09210be433525947e6da7c5185dc5_Traceguids,
      RSDT);
  *((_BYTE *)AcpiInformation + 84) = 1;
  *(_QWORD *)AcpiInformation = RSDT;
  ACPIGetUsedDebuggingDevices();
  return AcpiInformation;
}
