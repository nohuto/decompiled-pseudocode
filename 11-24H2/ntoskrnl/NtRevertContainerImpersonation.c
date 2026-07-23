/*
 * XREFs of NtRevertContainerImpersonation @ 0x140454E00
 * Callers:
 *     <none>
 * Callees:
 *     PspRevertContainerImpersonation @ 0x1402D21C0 (PspRevertContainerImpersonation.c)
 */

NTSTATUS NtRevertContainerImpersonation(void)
{
  return PspRevertContainerImpersonation((__int64)KeGetCurrentThread());
}
