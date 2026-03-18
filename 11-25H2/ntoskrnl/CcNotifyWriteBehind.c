/*
 * XREFs of CcNotifyWriteBehind @ 0x140577140
 * Callers:
 *     MiShutdownSystem @ 0x140B52044 (MiShutdownSystem.c)
 *     MmDuplicateMemory @ 0x140B52868 (MmDuplicateMemory.c)
 * Callees:
 *     CcForEachPartition @ 0x14035EBE4 (CcForEachPartition.c)
 */

_UNKNOWN **CcNotifyWriteBehind()
{
  return CcForEachPartition((__int64)CcNotifyWriteBehindHelper, 2LL, 0, 0);
}
