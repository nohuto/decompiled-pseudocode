/*
 * XREFs of NtTestAlert @ 0x140A2C0C0
 * Callers:
 *     <none>
 * Callees:
 *     KeTestAlertThread @ 0x1403E6CB0 (KeTestAlertThread.c)
 */

__int64 __fastcall NtTestAlert(__int64 a1, __int64 a2)
{
  LOBYTE(a1) = KeGetCurrentThread()->PreviousMode;
  return KeTestAlertThread(a1, a2) != 0 ? 0x101 : 0;
}
