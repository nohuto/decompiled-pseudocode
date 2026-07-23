/*
 * XREFs of PsResumeProcess @ 0x140A86F20
 * Callers:
 *     <none>
 * Callees:
 *     PsMultiResumeProcess @ 0x140455C30 (PsMultiResumeProcess.c)
 */

__int64 __fastcall PsResumeProcess(__int64 a1)
{
  return PsMultiResumeProcess(a1);
}
