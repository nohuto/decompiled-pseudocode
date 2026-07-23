/*
 * XREFs of NtTestAlert @ 0x140A1FF80
 * Callers:
 *     <none>
 * Callees:
 *     KeTestAlertThread @ 0x1403D4850 (KeTestAlertThread.c)
 */

NTSTATUS NtTestAlert(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx

  LOBYTE(v1) = KeGetCurrentThread()->PreviousMode;
  return KeTestAlertThread(v1, v0) != 0 ? 0x101 : 0;
}
