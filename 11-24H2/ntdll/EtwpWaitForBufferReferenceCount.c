/*
 * XREFs of EtwpWaitForBufferReferenceCount @ 0x1800A9EFC
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x1800A9D24 (EtwpFlushActiveBuffers.c)
 *     EtwpBufferingModeFlush @ 0x18015A5D8 (EtwpBufferingModeFlush.c)
 * Callees:
 *     ZwDelayExecution @ 0x1801606D0 (ZwDelayExecution.c)
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
