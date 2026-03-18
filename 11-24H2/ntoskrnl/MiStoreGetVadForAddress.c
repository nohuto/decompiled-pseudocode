/*
 * XREFs of MiStoreGetVadForAddress @ 0x14039788C
 * Callers:
 *     MmStoreDecommitVirtualMemory @ 0x140397A6C (MmStoreDecommitVirtualMemory.c)
 *     MmStoreIsVirtualAddressPoisoned @ 0x14068C850 (MmStoreIsVirtualAddressPoisoned.c)
 * Callees:
 *     MiUnlockVadTree @ 0x140261370 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1402DEE70 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x1402FC070 (MiLocateAddress.c)
 */

struct _LIST_ENTRY *__fastcall MiStoreGetVadForAddress(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  struct _LIST_ENTRY *Address; // rbx
  unsigned __int8 v5; // r11

  MiLockVadTree(0, a2, a3);
  Address = MiLocateAddress(a1);
  MiUnlockVadTree(0, v5);
  return Address;
}
