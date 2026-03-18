/*
 * XREFs of NtRevertContainerImpersonation @ 0x1402A1A00
 * Callers:
 *     <none>
 * Callees:
 *     PspRevertContainerImpersonation @ 0x1402A2A90 (PspRevertContainerImpersonation.c)
 */

__int64 NtRevertContainerImpersonation()
{
  return PspRevertContainerImpersonation((ULONG_PTR)KeGetCurrentThread());
}
