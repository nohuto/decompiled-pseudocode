/*
 * XREFs of KiBugCheckRecoveryPrepareForCrashDump @ 0x1405C5E70
 * Callers:
 *     KiDeferredBugcheckRecoveryWorker @ 0x1405C6000 (KiDeferredBugcheckRecoveryWorker.c)
 * Callees:
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     HvlPrepareForRootCrashdump @ 0x140587C34 (HvlPrepareForRootCrashdump.c)
 *     IoRevertFromDemotedDumpType @ 0x140591EE0 (IoRevertFromDemotedDumpType.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x1405C5B80 (KiBugCheckRecoveryFreezeOtherProcessors.c)
 *     KiSaveBugcheckRecoveryProgress @ 0x1405C6550 (KiSaveBugcheckRecoveryProgress.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall KiBugCheckRecoveryPrepareForCrashDump(unsigned __int8 *a1, bool *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  int v7; // edx
  unsigned __int8 CurrentIrql; // bl
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9

  v4 = KiBugcheckRecoveryDumpPolicy & 0xF;
  if ( (unsigned int)(v4 - 1) > 1 )
    return 0;
  if ( (_DWORD)v4 == 2 )
  {
    if ( !KiPristineTriageDump )
      IoRevertFromDemotedDumpType((__int64)a1, (__int64)a2, v4, a4);
    HvlEnlightenments &= 0x2000u;
    KiSaveBugcheckRecoveryProgress(96LL);
  }
  guard_dispatch_icall_no_overrides(a1, a2, v4, a4);
  *a2 = KeDisableInterrupts();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v7) = 15;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v7);
  }
  *a1 = CurrentIrql;
  KiBugCheckRecoveryFreezeOtherProcessors(0);
  if ( (KiBugcheckRecoveryDumpPolicy & 0xF) == 2 )
    HvlPrepareForRootCrashdump(0LL, v9, v10, v11);
  return 1;
}
