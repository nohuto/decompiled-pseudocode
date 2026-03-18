/*
 * XREFs of Amd64ResumeProfiling @ 0x14056C690
 * Callers:
 *     <none>
 * Callees:
 *     Amd64ResumeProfilingInternal @ 0x14056C6CC (Amd64ResumeProfilingInternal.c)
 */

__int64 Amd64ResumeProfiling()
{
  unsigned int Number; // ebx

  Number = KeGetPcr()->Prcb.Number;
  Amd64ResumeProfilingInternal(0LL, Number);
  Amd64ResumeProfilingInternal(100LL, Number);
  return Amd64ResumeProfilingInternal(101LL, Number);
}
