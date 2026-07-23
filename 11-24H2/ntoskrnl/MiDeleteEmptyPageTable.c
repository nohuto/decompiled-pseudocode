/*
 * XREFs of MiDeleteEmptyPageTable @ 0x1402005B0
 * Callers:
 *     MiDeleteVaDirect @ 0x14023BBE0 (MiDeleteVaDirect.c)
 * Callees:
 *     MiDeleteEmptyPageTableWorker @ 0x1402005C8 (MiDeleteEmptyPageTableWorker.c)
 */

__int64 MiDeleteEmptyPageTable()
{
  MiDeleteEmptyPageTableWorker();
  return 0LL;
}
