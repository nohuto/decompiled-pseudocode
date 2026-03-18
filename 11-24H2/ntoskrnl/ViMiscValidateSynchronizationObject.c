/*
 * XREFs of ViMiscValidateSynchronizationObject @ 0x140B9F6A8
 * Callers:
 *     VfMiscExInitializeLookasideListEx_Entry @ 0x140B9D8B0 (VfMiscExInitializeLookasideListEx_Entry.c)
 *     VfMiscExInitializeNPagedLookasideList_Entry @ 0x140B9D940 (VfMiscExInitializeNPagedLookasideList_Entry.c)
 *     VfMiscExInitializeResourceLite_Entry @ 0x140B9D9B0 (VfMiscExInitializeResourceLite_Entry.c)
 *     VfMiscKeInitializeEvent_Entry @ 0x140B9DCF0 (VfMiscKeInitializeEvent_Entry.c)
 *     VfMiscKeInitializeMutant_Entry @ 0x140B9DD20 (VfMiscKeInitializeMutant_Entry.c)
 *     VfMiscKeInitializeSemaphore_Entry @ 0x140B9DD50 (VfMiscKeInitializeSemaphore_Entry.c)
 *     VfMiscKeInitializeTimerEx_Entry @ 0x140B9DD80 (VfMiscKeInitializeTimerEx_Entry.c)
 *     ViMiscValidateKeWaitUsage @ 0x140B9F564 (ViMiscValidateKeWaitUsage.c)
 * Callees:
 *     MmIsNonPagedSystemAddressValid @ 0x1404AD300 (MmIsNonPagedSystemAddressValid.c)
 *     VfMiscCheckKernelAddress @ 0x1404B2134 (VfMiscCheckKernelAddress.c)
 *     CarReportRuleViolationFromNt @ 0x140B8D914 (CarReportRuleViolationFromNt.c)
 */

BOOLEAN __fastcall ViMiscValidateSynchronizationObject(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, __int64 a3)
{
  BOOLEAN result; // al

  VfMiscCheckKernelAddress(BugCheckParameter2, a2, a3);
  result = MmIsNonPagedSystemAddressValid((PVOID)BugCheckParameter2);
  if ( !result )
    return CarReportRuleViolationFromNt(196, 225LL, BugCheckParameter2, 0LL, 0LL, 0xBu, a3);
  return result;
}
