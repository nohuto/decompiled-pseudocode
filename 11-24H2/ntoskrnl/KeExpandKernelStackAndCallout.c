/*
 * XREFs of KeExpandKernelStackAndCallout @ 0x140231040
 * Callers:
 *     MiInitializePartitionSpecialPurposeMemory @ 0x1407FEB44 (MiInitializePartitionSpecialPurposeMemory.c)
 *     NtOpenKeyEx @ 0x140A40DD0 (NtOpenKeyEx.c)
 *     NtCreateKey @ 0x140AE5320 (NtCreateKey.c)
 *     NtCreateKeyTransacted @ 0x140AE53E0 (NtCreateKeyTransacted.c)
 *     NtEnumerateKey @ 0x140AE5580 (NtEnumerateKey.c)
 *     NtQueryValueKey @ 0x140AE5AA0 (NtQueryValueKey.c)
 *     IovpLogStackTrace @ 0x140BA8A6C (IovpLogStackTrace.c)
 *     KiVerifyXcpt15 @ 0x140BE0C40 (KiVerifyXcpt15.c)
 *     KeCheckedKernelInitialize @ 0x140BE144C (KeCheckedKernelInitialize.c)
 *     KiFilterFiberContext @ 0x140BE1530 (KiFilterFiberContext.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutInternal @ 0x140232D30 (KeExpandKernelStackAndCalloutInternal.c)
 */

NTSTATUS __stdcall KeExpandKernelStackAndCallout(PEXPAND_STACK_CALLOUT Callout, PVOID Parameter, SIZE_T Size)
{
  return KeExpandKernelStackAndCalloutInternal((ULONG_PTR)Callout, (ULONG_PTR)Parameter, 0LL);
}
