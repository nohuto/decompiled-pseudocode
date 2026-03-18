/*
 * XREFs of MiStoreGetVadForAddress @ 0x140207B58
 * Callers:
 *     MmStoreDecommitVirtualMemory @ 0x14020852C (MmStoreDecommitVirtualMemory.c)
 *     MmStoreIsVirtualAddressPoisoned @ 0x140680FC0 (MmStoreIsVirtualAddressPoisoned.c)
 * Callees:
 *     MiUnlockVadTree @ 0x1402A8690 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1402B54D0 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x1402B57D0 (MiLocateAddress.c)
 */

__int64 __fastcall MiStoreGetVadForAddress(__int64 a1)
{
  __int64 Address; // rax
  char v3; // r11
  __int64 v4; // rdx
  __int64 v5; // rbx

  MiLockVadTree(0LL);
  Address = MiLocateAddress(a1);
  LOBYTE(v4) = v3;
  v5 = Address;
  MiUnlockVadTree(0LL, v4);
  return v5;
}
