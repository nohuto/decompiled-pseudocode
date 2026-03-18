/*
 * XREFs of MiDeleteEmptyPageTable @ 0x140473750
 * Callers:
 *     MiDeleteVaDirect @ 0x1402DA300 (MiDeleteVaDirect.c)
 * Callees:
 *     MiDeleteEmptyPageTableWorker @ 0x140473768 (MiDeleteEmptyPageTableWorker.c)
 */

__int64 MiDeleteEmptyPageTable()
{
  MiDeleteEmptyPageTableWorker();
  return 0LL;
}
