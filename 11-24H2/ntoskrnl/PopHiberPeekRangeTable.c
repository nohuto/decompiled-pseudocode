/*
 * XREFs of PopHiberPeekRangeTable @ 0x140B5F338
 * Callers:
 *     ConsumerPeekAndConsumeBuffer @ 0x140B6A7D4 (ConsumerPeekAndConsumeBuffer.c)
 * Callees:
 *     PopReadProducerConsumerBuffer @ 0x140B5FB60 (PopReadProducerConsumerBuffer.c)
 */

__int64 __fastcall PopHiberPeekRangeTable(int a1, int a2, __int64 a3)
{
  _DWORD *ProducerConsumerBuffer; // rax
  int v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0;
  ProducerConsumerBuffer = (_DWORD *)PopReadProducerConsumerBuffer(
                                       a1,
                                       a2,
                                       (unsigned int)&v5,
                                       (_DWORD)qword_140F0BC28,
                                       a3,
                                       0);
  return ((*ProducerConsumerBuffer >> 8) & 0x1FFFFF) + 8 * (unsigned int)(unsigned __int8)*ProducerConsumerBuffer + 4;
}
