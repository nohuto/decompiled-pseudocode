/*
 * XREFs of MmLockPreChargedPagedPool @ 0x140AB94D0
 * Callers:
 *     HalpMcUpdateLock @ 0x1404BB93C (HalpMcUpdateLock.c)
 *     MiCreatePagingFileMap @ 0x14093E008 (MiCreatePagingFileMap.c)
 *     PopAllocateHiberContext @ 0x140ABEFAC (PopAllocateHiberContext.c)
 * Callees:
 *     MiLockCode @ 0x1403FE950 (MiLockCode.c)
 *     MiGetPteAddress @ 0x140419EE0 (MiGetPteAddress.c)
 */

__int64 __fastcall MmLockPreChargedPagedPool(unsigned __int64 a1)
{
  volatile signed __int64 *PteAddress; // rax
  __int64 v2; // rdx
  __int16 v3; // r8

  PteAddress = (volatile signed __int64 *)MiGetPteAddress(a1);
  return MiLockCode(
           0LL,
           PteAddress,
           (unsigned __int64)&PteAddress[(((unsigned __int64)(v3 & 0xFFF) + v2 + 4095) >> 12) - 1],
           1);
}
