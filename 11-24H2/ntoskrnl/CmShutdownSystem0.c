/*
 * XREFs of CmShutdownSystem0 @ 0x140667980
 * Callers:
 *     CmShutdownSystem @ 0x1407D5194 (CmShutdownSystem.c)
 * Callees:
 *     CmFcShutdownSystem @ 0x1407D5BE4 (CmFcShutdownSystem.c)
 */

__int64 CmShutdownSystem0()
{
  __int64 result; // rax

  result = CmFcShutdownSystem(0LL);
  CmpDoIdleProcessing = 0;
  CmpNoMoreTx = 1;
  return result;
}
