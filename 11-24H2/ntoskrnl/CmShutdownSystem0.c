/*
 * XREFs of CmShutdownSystem0 @ 0x140666270
 * Callers:
 *     CmShutdownSystem @ 0x1407D5684 (CmShutdownSystem.c)
 * Callees:
 *     CmFcShutdownSystem @ 0x1407D60D4 (CmFcShutdownSystem.c)
 */

__int64 CmShutdownSystem0()
{
  __int64 result; // rax

  result = CmFcShutdownSystem(0LL);
  CmpDoIdleProcessing = 0;
  CmpNoMoreTx = 1;
  return result;
}
