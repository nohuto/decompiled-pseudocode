/*
 * XREFs of HalReturnToFirmware @ 0x140542060
 * Callers:
 *     HaliAcpiSleep @ 0x14049B670 (HaliAcpiSleep.c)
 *     HalpLegacyShutdown @ 0x140542220 (HalpLegacyShutdown.c)
 *     HalpShutdownReset @ 0x140542680 (HalpShutdownReset.c)
 *     KeBugCheck2 @ 0x1405ADDF0 (KeBugCheck2.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x1405C1C60 (KiDeferredBugcheckRecoveryWorker.c)
 *     ExRebootSystemForRecovery @ 0x140647A6C (ExRebootSystemForRecovery.c)
 *     PopShutdownSystem @ 0x140B4FF14 (PopShutdownSystem.c)
 *     PopSaveHiberContext @ 0x140B5BF00 (PopSaveHiberContext.c)
 *     KdpSendWaitContinue @ 0x140B6A32C (KdpSendWaitContinue.c)
 *     HdlspBugCheckProcessing @ 0x140B9D1F8 (HdlspBugCheckProcessing.c)
 * Callees:
 *     DbgPrint @ 0x1403A9600 (DbgPrint.c)
 *     KdPowerTransitionEx @ 0x1404CF5D0 (KdPowerTransitionEx.c)
 *     HalpReboot @ 0x14054237C (HalpReboot.c)
 *     HalpShutdown @ 0x1405424B8 (HalpShutdown.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall __noreturn HalReturnToFirmware(int a1)
{
  int v1; // ecx
  __int64 v2; // rcx

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
    guard_dispatch_icall_no_overrides(v2);
  HalpReboot();
}
