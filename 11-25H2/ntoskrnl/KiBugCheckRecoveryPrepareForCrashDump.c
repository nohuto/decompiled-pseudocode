/*
 * XREFs of KiBugCheckRecoveryPrepareForCrashDump @ 0x1405C1AD0
 * Callers:
 *     KiDeferredBugcheckRecoveryWorker @ 0x1405C1C60 (KiDeferredBugcheckRecoveryWorker.c)
 * Callees:
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     HvlPrepareForRootCrashdump @ 0x1405844B4 (HvlPrepareForRootCrashdump.c)
 *     IoRevertFromDemotedDumpType @ 0x14058E6B0 (IoRevertFromDemotedDumpType.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x1405C17E0 (KiBugCheckRecoveryFreezeOtherProcessors.c)
 *     KiSaveBugcheckRecoveryProgress @ 0x1405C21B0 (KiSaveBugcheckRecoveryProgress.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall KiBugCheckRecoveryPrepareForCrashDump(unsigned __int8 *a1, bool *a2)
{
  int v4; // edx
  unsigned __int8 CurrentIrql; // bl

  if ( (KiBugcheckRecoveryDumpPolicy & 0xFu) - 1 > 1 )
    return 0;
  if ( (KiBugcheckRecoveryDumpPolicy & 0xF) == 2 )
  {
    if ( !KiPristineTriageDump )
      IoRevertFromDemotedDumpType();
    HvlEnlightenments &= 0x2000u;
    KiSaveBugcheckRecoveryProgress(96LL);
  }
  guard_dispatch_icall_no_overrides(a1);
  *a2 = KeDisableInterrupts();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v4) = 15;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v4);
  }
  *a1 = CurrentIrql;
  KiBugCheckRecoveryFreezeOtherProcessors(0);
  if ( (KiBugcheckRecoveryDumpPolicy & 0xF) == 2 )
    HvlPrepareForRootCrashdump(0LL);
  return 1;
}
