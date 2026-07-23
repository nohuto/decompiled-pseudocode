/*
 * XREFs of NtRevertContainerImpersonation @ 0x140462420
 * Callers:
 *     <none>
 * Callees:
 *     PspRevertContainerImpersonation @ 0x140308400 (PspRevertContainerImpersonation.c)
 */

NTSTATUS NtRevertContainerImpersonation(void)
{
  __int64 v0; // rdx
  signed __int32 *v1; // r8

  return PspRevertContainerImpersonation((ULONG_PTR)KeGetCurrentThread(), v0, v1);
}
