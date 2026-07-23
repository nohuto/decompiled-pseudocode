/*
 * XREFs of CcNotifyWriteBehind @ 0x1405778D0
 * Callers:
 *     MiShutdownSystem @ 0x140B64244 (MiShutdownSystem.c)
 *     MmDuplicateMemory @ 0x140B64A68 (MmDuplicateMemory.c)
 * Callees:
 *     CcForEachPartition @ 0x14021AA70 (CcForEachPartition.c)
 */

_UNKNOWN **CcNotifyWriteBehind()
{
  return CcForEachPartition((__int64)CcNotifyWriteBehindHelper, 2LL, 0, 0);
}
