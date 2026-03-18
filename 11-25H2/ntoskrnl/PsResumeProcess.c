/*
 * XREFs of PsResumeProcess @ 0x140A86130
 * Callers:
 *     <none>
 * Callees:
 *     PsMultiResumeProcess @ 0x1404621A4 (PsMultiResumeProcess.c)
 */

__int64 __fastcall PsResumeProcess(__int64 a1)
{
  return PsMultiResumeProcess(a1);
}
