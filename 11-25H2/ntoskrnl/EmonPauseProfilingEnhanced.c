/*
 * XREFs of EmonPauseProfilingEnhanced @ 0x14055AB20
 * Callers:
 *     <none>
 * Callees:
 *     EmonPauseProfilingInternalEnhanced @ 0x14055AB5C (EmonPauseProfilingInternalEnhanced.c)
 */

__int64 EmonPauseProfilingEnhanced()
{
  unsigned int Number; // ebx
  __int64 result; // rax

  Number = KeGetPcr()->Prcb.Number;
  result = EmonPauseProfilingInternalEnhanced(0LL, Number);
  if ( (unsigned int)EmonVersion >= 2 )
    return EmonPauseProfilingInternalEnhanced(1LL, Number);
  return result;
}
