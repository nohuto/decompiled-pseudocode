/*
 * XREFs of EmonPauseProfilingOriginal @ 0x14055D6C0
 * Callers:
 *     <none>
 * Callees:
 *     EmonPauseProfilingInternalOriginal @ 0x14055D5D8 (EmonPauseProfilingInternalOriginal.c)
 */

unsigned __int64 EmonPauseProfilingOriginal()
{
  unsigned __int64 result; // rax
  int v1; // r11d

  result = EmonPauseProfilingInternalOriginal(0, KeGetPcr()->Prcb.Number);
  if ( (unsigned int)EmonVersion >= 2 )
    return EmonPauseProfilingInternalOriginal(1, v1);
  return result;
}
