/*
 * XREFs of PsResumeProcess @ 0x140A8ABE0
 * Callers:
 *     <none>
 * Callees:
 *     PsMultiResumeProcess @ 0x140460798 (PsMultiResumeProcess.c)
 */

__int64 __fastcall PsResumeProcess(__int64 a1)
{
  return PsMultiResumeProcess(a1);
}
