/*
 * XREFs of KeExpandKernelStackAndCallout @ 0x140489A50
 * Callers:
 *     MiInitializePartitionSpecialPurposeMemory @ 0x1407EE544 (MiInitializePartitionSpecialPurposeMemory.c)
 *     NtCreateKey @ 0x140AD2A50 (NtCreateKey.c)
 *     NtCreateKeyTransacted @ 0x140AD2B50 (NtCreateKeyTransacted.c)
 *     NtEnumerateKey @ 0x140AD2D00 (NtEnumerateKey.c)
 *     NtOpenKey @ 0x140AD33A0 (NtOpenKey.c)
 *     NtOpenKeyEx @ 0x140AD3490 (NtOpenKeyEx.c)
 *     NtQueryValueKey @ 0x140AD3580 (NtQueryValueKey.c)
 *     IovpLogStackTrace @ 0x140B96A8C (IovpLogStackTrace.c)
 *     KiVerifyXcpt15 @ 0x140BCDC40 (KiVerifyXcpt15.c)
 *     KeCheckedKernelInitialize @ 0x140BCE44C (KeCheckedKernelInitialize.c)
 *     KiFilterFiberContext @ 0x140BCE530 (KiFilterFiberContext.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutInternal @ 0x140347C90 (KeExpandKernelStackAndCalloutInternal.c)
 */

NTSTATUS __stdcall KeExpandKernelStackAndCallout(PEXPAND_STACK_CALLOUT Callout, PVOID Parameter, SIZE_T Size)
{
  return KeExpandKernelStackAndCalloutInternal(Callout, (ULONG_PTR)Parameter, Size, 2, 0LL);
}
