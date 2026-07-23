/*
 * XREFs of EmonResumeProfilingEnhanced @ 0x14055BF00
 * Callers:
 *     <none>
 * Callees:
 *     EmonResumeProfilingInternalEnhanced @ 0x14055BF3C (EmonResumeProfilingInternalEnhanced.c)
 */

__int64 EmonResumeProfilingEnhanced()
{
  unsigned int Number; // ebx
  __int64 result; // rax

  Number = KeGetPcr()->Prcb.Number;
  result = EmonResumeProfilingInternalEnhanced(0LL, Number);
  if ( (unsigned int)EmonVersion >= 2 )
    return EmonResumeProfilingInternalEnhanced(1LL, Number);
  return result;
}
