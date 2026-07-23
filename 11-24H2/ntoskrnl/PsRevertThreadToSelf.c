/*
 * XREFs of PsRevertThreadToSelf @ 0x1408E79A0
 * Callers:
 *     <none>
 * Callees:
 *     PsImpersonateClient @ 0x1408E7A20 (PsImpersonateClient.c)
 */

NTSTATUS __fastcall PsRevertThreadToSelf(struct _KTHREAD *a1)
{
  return PsImpersonateClient(a1, 0LL, 0, 0, SecurityImpersonation);
}
