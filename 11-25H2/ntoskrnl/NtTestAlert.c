/*
 * XREFs of NtTestAlert @ 0x140A224D0
 * Callers:
 *     <none>
 * Callees:
 *     KeTestAlertThread @ 0x140261EE0 (KeTestAlertThread.c)
 */

NTSTATUS NtTestAlert(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx

  LOBYTE(v1) = KeGetCurrentThread()->PreviousMode;
  return KeTestAlertThread(v1, v0) != 0 ? 0x101 : 0;
}
