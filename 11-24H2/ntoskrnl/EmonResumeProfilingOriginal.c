/*
 * XREFs of EmonResumeProfilingOriginal @ 0x14055E570
 * Callers:
 *     <none>
 * Callees:
 *     EmonResumeProfilingInternalOriginal @ 0x14055E484 (EmonResumeProfilingInternalOriginal.c)
 */

unsigned __int64 EmonResumeProfilingOriginal()
{
  unsigned __int64 result; // rax
  int v1; // r11d

  result = EmonResumeProfilingInternalOriginal(0, KeGetPcr()->Prcb.Number);
  if ( (unsigned int)EmonVersion >= 2 )
    return EmonResumeProfilingInternalOriginal(1, v1);
  return result;
}
