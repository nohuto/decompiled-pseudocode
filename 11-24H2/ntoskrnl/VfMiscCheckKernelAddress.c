/*
 * XREFs of VfMiscCheckKernelAddress @ 0x1404AC9C4
 * Callers:
 *     VfMiscKeAcquireSpinLockAtDpcLevel_Entry @ 0x1406135D0 (VfMiscKeAcquireSpinLockAtDpcLevel_Entry.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x140B97E90 (VerifierPortKeAcquireSpinLockNoXdv.c)
 *     ViKeAcquireSpinLockCommon @ 0x140B980C0 (ViKeAcquireSpinLockCommon.c)
 *     VfMiscIoFreeMdl_Entry @ 0x140B9FB10 (VfMiscIoFreeMdl_Entry.c)
 *     VfMiscIoInitializeWorkItem_Entry @ 0x140B9FB70 (VfMiscIoInitializeWorkItem_Entry.c)
 *     VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry @ 0x140B9FBE0 (VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry.c)
 *     VfMiscKeAcquireInStackQueuedSpinLockForDpc_Entry @ 0x140B9FC70 (VfMiscKeAcquireInStackQueuedSpinLockForDpc_Entry.c)
 *     VfMiscKeAcquireSpinLockRaiseToDpc_Entry @ 0x140B9FCB0 (VfMiscKeAcquireSpinLockRaiseToDpc_Entry.c)
 *     VfMiscKeInsertQueueDpc_Entry @ 0x140B9FDB0 (VfMiscKeInsertQueueDpc_Entry.c)
 *     VfMiscKeReleaseMutant_Entry @ 0x140B9FEC0 (VfMiscKeReleaseMutant_Entry.c)
 *     VfMiscObfDereferenceObject_Entry @ 0x140B9FF20 (VfMiscObfDereferenceObject_Entry.c)
 *     VfMiscKeRemoveQueueDpc_Entry @ 0x140B9FF50 (VfMiscKeRemoveQueueDpc_Entry.c)
 *     VfMiscKeSetEvent_Entry @ 0x140B9FF80 (VfMiscKeSetEvent_Entry.c)
 *     VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry @ 0x140B9FFD0 (VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry.c)
 *     VfMiscObGetObjectSecurity_Entry @ 0x140BA0480 (VfMiscObGetObjectSecurity_Entry.c)
 *     VfMiscObReferenceObjectByPointerWithTag_Entry @ 0x140BA0560 (VfMiscObReferenceObjectByPointerWithTag_Entry.c)
 *     VfMiscObReferenceObjectByPointer_Entry @ 0x140BA0590 (VfMiscObReferenceObjectByPointer_Entry.c)
 *     VfMiscObfReferenceObjectWithTag_Entry @ 0x140BA05F0 (VfMiscObfReferenceObjectWithTag_Entry.c)
 *     ViMiscValidateSynchronizationObject @ 0x140BA16A8 (ViMiscValidateSynchronizationObject.c)
 *     ViMiscCheckReleaseSpinlock @ 0x140BAA150 (ViMiscCheckReleaseSpinlock.c)
 * Callees:
 *     CarReportRuleViolationFromNt @ 0x140B8F914 (CarReportRuleViolationFromNt.c)
 */

unsigned __int64 __fastcall VfMiscCheckKernelAddress(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        __int64 a3)
{
  unsigned __int64 result; // rax

  result = BugCheckParameter2 + BugCheckParameter3 - 1;
  if ( !BugCheckParameter3 )
    result = BugCheckParameter2;
  if ( result >= BugCheckParameter2 )
  {
    result = BugCheckParameter3 + BugCheckParameter2 - 1;
    if ( !BugCheckParameter3 )
      result = BugCheckParameter2;
    if ( result <= 0x7FFFFFFEFFFFLL )
      return CarReportRuleViolationFromNt(0xC4u, 0xE0uLL, BugCheckParameter2, BugCheckParameter3, 0LL, 11, a3);
  }
  return result;
}
