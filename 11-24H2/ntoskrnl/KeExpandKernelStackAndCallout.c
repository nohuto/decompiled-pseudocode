/*
 * XREFs of KeExpandKernelStackAndCallout @ 0x14027BAB0
 * Callers:
 *     MiInitializePartitionSpecialPurposeMemory @ 0x1407FE3D4 (MiInitializePartitionSpecialPurposeMemory.c)
 *     NtOpenKeyEx @ 0x140A4A0B0 (NtOpenKeyEx.c)
 *     NtCreateKey @ 0x140AE3A40 (NtCreateKey.c)
 *     NtCreateKeyTransacted @ 0x140AE3B00 (NtCreateKeyTransacted.c)
 *     NtEnumerateKey @ 0x140AE3CA0 (NtEnumerateKey.c)
 *     NtQueryValueKey @ 0x140AE41C0 (NtQueryValueKey.c)
 *     IovpLogStackTrace @ 0x140BA6A6C (IovpLogStackTrace.c)
 *     KiVerifyXcpt15 @ 0x140BDEC40 (KiVerifyXcpt15.c)
 *     KeCheckedKernelInitialize @ 0x140BDF44C (KeCheckedKernelInitialize.c)
 *     KiFilterFiberContext @ 0x140BDF530 (KiFilterFiberContext.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutInternal @ 0x14027D7A0 (KeExpandKernelStackAndCalloutInternal.c)
 */

NTSTATUS __stdcall KeExpandKernelStackAndCallout(PEXPAND_STACK_CALLOUT Callout, PVOID Parameter, SIZE_T Size)
{
  return KeExpandKernelStackAndCalloutInternal((ULONG_PTR)Callout, (ULONG_PTR)Parameter, 0LL);
}
