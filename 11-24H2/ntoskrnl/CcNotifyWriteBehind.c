/*
 * XREFs of CcNotifyWriteBehind @ 0x14057A440
 * Callers:
 *     MiShutdownSystem @ 0x140B62174 (MiShutdownSystem.c)
 *     MmDuplicateMemory @ 0x140B62998 (MmDuplicateMemory.c)
 * Callees:
 *     CcForEachPartition @ 0x140470EE8 (CcForEachPartition.c)
 */

_UNKNOWN **CcNotifyWriteBehind()
{
  return CcForEachPartition((__int64)CcNotifyWriteBehindHelper, 2LL, 0, 0);
}
