/*
 * XREFs of HalReturnToFirmware @ 0x140544920
 * Callers:
 *     HaliAcpiSleep @ 0x1404D9F00 (HaliAcpiSleep.c)
 *     HalpLegacyShutdown @ 0x140544AE0 (HalpLegacyShutdown.c)
 *     HalpShutdownReset @ 0x140544F70 (HalpShutdownReset.c)
 *     HaliAcpiSleepOld @ 0x140569940 (HaliAcpiSleepOld.c)
 *     KeBugCheck2 @ 0x1405B1780 (KeBugCheck2.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x1405C6000 (KiDeferredBugcheckRecoveryWorker.c)
 *     ExRebootSystemForRecovery @ 0x14065396C (ExRebootSystemForRecovery.c)
 *     PopShutdownSystem @ 0x140B60044 (PopShutdownSystem.c)
 *     PopSaveHiberContext @ 0x140B6EC80 (PopSaveHiberContext.c)
 *     KdpSendWaitContinue @ 0x140B7A32C (KdpSendWaitContinue.c)
 *     HdlspBugCheckProcessing @ 0x140BAD1F8 (HdlspBugCheckProcessing.c)
 * Callees:
 *     DbgPrint @ 0x1402CB260 (DbgPrint.c)
 *     KdPowerTransitionEx @ 0x1404CF5B0 (KdPowerTransitionEx.c)
 *     HalpReboot @ 0x140544C40 (HalpReboot.c)
 *     HalpShutdown @ 0x140544D7C (HalpShutdown.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall __noreturn HalReturnToFirmware(int a1)
{
  int v1; // ecx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9

  if ( a1 )
  {
    v1 = a1 - 1;
    if ( v1 )
    {
      if ( (unsigned int)(v1 - 1) >= 2 )
      {
        DbgPrint("HalReturnToFirmware called\n");
        __debugbreak();
      }
    }
    else
    {
      KdPowerTransitionEx(4, 0);
      HalpShutdown();
    }
  }
  KdPowerTransitionEx(4, 0);
  if ( HalpRebootHandler )
    guard_dispatch_icall_no_overrides(v3, v2, v4, v5);
  HalpReboot();
}
