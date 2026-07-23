/*
 * XREFs of HalReturnToFirmware @ 0x1405421E0
 * Callers:
 *     HaliAcpiSleep @ 0x1404D3920 (HaliAcpiSleep.c)
 *     HalpLegacyShutdown @ 0x1405423A0 (HalpLegacyShutdown.c)
 *     HalpShutdownReset @ 0x140542830 (HalpShutdownReset.c)
 *     KeBugCheck2 @ 0x1405AE6F0 (KeBugCheck2.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x1405C3730 (KiDeferredBugcheckRecoveryWorker.c)
 *     ExRebootSystemForRecovery @ 0x1406520CC (ExRebootSystemForRecovery.c)
 *     PopShutdownSystem @ 0x140B62104 (PopShutdownSystem.c)
 *     PopSaveHiberContext @ 0x140B70CF0 (PopSaveHiberContext.c)
 *     KdpSendWaitContinue @ 0x140B7C32C (KdpSendWaitContinue.c)
 *     HdlspBugCheckProcessing @ 0x140BAF1F8 (HdlspBugCheckProcessing.c)
 * Callees:
 *     DbgPrint @ 0x140274290 (DbgPrint.c)
 *     KdPowerTransitionEx @ 0x1404C8870 (KdPowerTransitionEx.c)
 *     HalpReboot @ 0x140542500 (HalpReboot.c)
 *     HalpShutdown @ 0x14054263C (HalpShutdown.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall __noreturn HalReturnToFirmware(int a1)
{
  int v1; // ecx
  __int64 v2; // rdx
  __int64 v3; // rcx

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
      KdPowerTransitionEx(4LL, 0LL);
      HalpShutdown();
    }
  }
  KdPowerTransitionEx(4LL, 0LL);
  if ( HalpRebootHandler )
    guard_dispatch_icall_no_overrides(v3, v2);
  HalpReboot();
}
