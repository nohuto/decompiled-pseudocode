/*
 * XREFs of Amd64ResumeProfiling @ 0x140569390
 * Callers:
 *     <none>
 * Callees:
 *     Amd64ResumeProfilingInternal @ 0x1405693CC (Amd64ResumeProfilingInternal.c)
 */

__int64 Amd64ResumeProfiling()
{
  unsigned int Number; // ebx

  Number = KeGetPcr()->Prcb.Number;
  Amd64ResumeProfilingInternal(0LL, Number);
  Amd64ResumeProfilingInternal(100LL, Number);
  return Amd64ResumeProfilingInternal(101LL, Number);
}
