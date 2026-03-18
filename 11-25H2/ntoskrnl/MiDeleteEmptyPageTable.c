/*
 * XREFs of MiDeleteEmptyPageTable @ 0x140475810
 * Callers:
 *     MiDeleteVaDirect @ 0x1402B05C0 (MiDeleteVaDirect.c)
 * Callees:
 *     MiDeleteEmptyPageTableWorker @ 0x140475828 (MiDeleteEmptyPageTableWorker.c)
 */

__int64 MiDeleteEmptyPageTable()
{
  MiDeleteEmptyPageTableWorker();
  return 0LL;
}
