/*
 * XREFs of MiStoreGetVadForAddress @ 0x1402F5754
 * Callers:
 *     MmStoreDecommitVirtualMemory @ 0x1402F62C8 (MmStoreDecommitVirtualMemory.c)
 *     MmStoreIsVirtualAddressPoisoned @ 0x14068D980 (MmStoreIsVirtualAddressPoisoned.c)
 * Callees:
 *     MiLockVadTree @ 0x140240750 (MiLockVadTree.c)
 *     MiUnlockVadTree @ 0x140291980 (MiUnlockVadTree.c)
 *     MiLocateAddress @ 0x140344F70 (MiLocateAddress.c)
 */

__int64 __fastcall MiStoreGetVadForAddress(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 Address; // rbx
  unsigned __int8 v6; // r11

  MiLockVadTree(0, a2, a3, a4);
  Address = MiLocateAddress(a1);
  MiUnlockVadTree(0, v6);
  return Address;
}
