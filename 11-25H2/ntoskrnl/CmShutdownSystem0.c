/*
 * XREFs of CmShutdownSystem0 @ 0x14065C07C
 * Callers:
 *     CmShutdownSystem @ 0x1407C5A50 (CmShutdownSystem.c)
 * Callees:
 *     CmFcShutdownSystem @ 0x1407C6490 (CmFcShutdownSystem.c)
 */

__int64 CmShutdownSystem0()
{
  __int64 result; // rax

  result = CmFcShutdownSystem(0LL);
  CmpDoIdleProcessing = 0;
  CmpNoMoreTx = 1;
  return result;
}
