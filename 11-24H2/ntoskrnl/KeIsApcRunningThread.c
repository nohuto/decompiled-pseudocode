/*
 * XREFs of KeIsApcRunningThread @ 0x140441CB0
 * Callers:
 *     VerifierKeIsApcRunningThread @ 0x140B95610 (VerifierKeIsApcRunningThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIsApcRunningThread(__int64 a1)
{
  return *(unsigned __int8 *)(a1 + 192);
}
