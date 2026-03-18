/*
 * XREFs of MmLockPreChargedPagedPool @ 0x140ABD5D0
 * Callers:
 *     HalpMcUpdateLock @ 0x1404BAD8C (HalpMcUpdateLock.c)
 *     MiCreatePagingFileMap @ 0x140942908 (MiCreatePagingFileMap.c)
 *     PopAllocateHiberContext @ 0x140AC688C (PopAllocateHiberContext.c)
 * Callees:
 *     MiLockCode @ 0x14023D6F0 (MiLockCode.c)
 *     MiGetPteAddress @ 0x140437550 (MiGetPteAddress.c)
 */

__int64 __fastcall MmLockPreChargedPagedPool(unsigned __int64 a1)
{
  ULONG_PTR PteAddress; // rax
  __int64 v2; // rdx
  __int16 v3; // r8

  PteAddress = MiGetPteAddress(a1);
  return MiLockCode(0LL, PteAddress, PteAddress + 8 * ((((unsigned __int64)(v3 & 0xFFF) + v2 + 4095) >> 12) - 1), 1);
}
