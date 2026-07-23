/*
 * XREFs of EtwpWaitForBufferReferenceCount @ 0x1800B72DC
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x1800B7104 (EtwpFlushActiveBuffers.c)
 *     EtwpBufferingModeFlush @ 0x18015D778 (EtwpBufferingModeFlush.c)
 * Callees:
 *     ZwDelayExecution @ 0x1801638A0 (ZwDelayExecution.c)
 */

__int64 __fastcall EtwpWaitForBufferReferenceCount(__int64 a1)
{
  __int64 result; // rax
  LARGE_INTEGER DelayInterval; // [rsp+30h] [rbp+8h] BYREF

  result = *(unsigned int *)(a1 + 12);
  DelayInterval.QuadPart = -2500000LL;
  while ( (_DWORD)result )
  {
    ZwDelayExecution(0, &DelayInterval);
    result = *(unsigned int *)(a1 + 12);
  }
  return result;
}
