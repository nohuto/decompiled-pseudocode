/*
 * XREFs of Amd64PauseProfiling @ 0x1405698D0
 * Callers:
 *     <none>
 * Callees:
 *     Amd64PauseProfilingInternal @ 0x14056990C (Amd64PauseProfilingInternal.c)
 */

__int64 Amd64PauseProfiling()
{
  unsigned int Number; // ebx

  Number = KeGetPcr()->Prcb.Number;
  Amd64PauseProfilingInternal(0LL, Number);
  Amd64PauseProfilingInternal(100LL, Number);
  return Amd64PauseProfilingInternal(101LL, Number);
}
