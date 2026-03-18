/*
 * XREFs of PsRevertThreadToSelf @ 0x140910250
 * Callers:
 *     <none>
 * Callees:
 *     PsImpersonateClient @ 0x1409102D0 (PsImpersonateClient.c)
 */

NTSTATUS __fastcall PsRevertThreadToSelf(struct _KTHREAD *a1)
{
  return PsImpersonateClient(a1, 0LL, 0, 0, SecurityImpersonation);
}
