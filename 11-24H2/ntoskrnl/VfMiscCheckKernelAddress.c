/*
 * XREFs of VfMiscCheckKernelAddress @ 0x1404B2134
 * Callers:
 *     VfMiscKeAcquireSpinLockAtDpcLevel_Entry @ 0x140615010 (VfMiscKeAcquireSpinLockAtDpcLevel_Entry.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x140B95E90 (VerifierPortKeAcquireSpinLockNoXdv.c)
 *     ViKeAcquireSpinLockCommon @ 0x140B960C0 (ViKeAcquireSpinLockCommon.c)
 *     VfMiscIoFreeMdl_Entry @ 0x140B9DB10 (VfMiscIoFreeMdl_Entry.c)
 *     VfMiscIoInitializeWorkItem_Entry @ 0x140B9DB70 (VfMiscIoInitializeWorkItem_Entry.c)
 *     VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry @ 0x140B9DBE0 (VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry.c)
 *     VfMiscKeAcquireInStackQueuedSpinLockForDpc_Entry @ 0x140B9DC70 (VfMiscKeAcquireInStackQueuedSpinLockForDpc_Entry.c)
 *     VfMiscKeAcquireSpinLockRaiseToDpc_Entry @ 0x140B9DCB0 (VfMiscKeAcquireSpinLockRaiseToDpc_Entry.c)
 *     VfMiscKeInsertQueueDpc_Entry @ 0x140B9DDB0 (VfMiscKeInsertQueueDpc_Entry.c)
 *     VfMiscKeReleaseMutant_Entry @ 0x140B9DEC0 (VfMiscKeReleaseMutant_Entry.c)
 *     VfMiscObfDereferenceObject_Entry @ 0x140B9DF20 (VfMiscObfDereferenceObject_Entry.c)
 *     VfMiscKeRemoveQueueDpc_Entry @ 0x140B9DF50 (VfMiscKeRemoveQueueDpc_Entry.c)
 *     VfMiscKeSetEvent_Entry @ 0x140B9DF80 (VfMiscKeSetEvent_Entry.c)
 *     VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry @ 0x140B9DFD0 (VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry.c)
 *     VfMiscObGetObjectSecurity_Entry @ 0x140B9E480 (VfMiscObGetObjectSecurity_Entry.c)
 *     VfMiscObReferenceObjectByPointerWithTag_Entry @ 0x140B9E560 (VfMiscObReferenceObjectByPointerWithTag_Entry.c)
 *     VfMiscObReferenceObjectByPointer_Entry @ 0x140B9E590 (VfMiscObReferenceObjectByPointer_Entry.c)
 *     VfMiscObfReferenceObjectWithTag_Entry @ 0x140B9E5F0 (VfMiscObfReferenceObjectWithTag_Entry.c)
 *     ViMiscValidateSynchronizationObject @ 0x140B9F6A8 (ViMiscValidateSynchronizationObject.c)
 *     ViMiscCheckReleaseSpinlock @ 0x140BA8150 (ViMiscCheckReleaseSpinlock.c)
 * Callees:
 *     CarReportRuleViolationFromNt @ 0x140B8D914 (CarReportRuleViolationFromNt.c)
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
