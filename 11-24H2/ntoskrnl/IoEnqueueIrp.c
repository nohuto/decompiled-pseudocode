/*
 * XREFs of IoEnqueueIrp @ 0x140711BF0
 * Callers:
 *     <none>
 * Callees:
 *     IopQueueThreadIrp @ 0x140284270 (IopQueueThreadIrp.c)
 */

__int64 __fastcall IoEnqueueIrp(__int64 a1)
{
  return IopQueueThreadIrp(a1);
}
