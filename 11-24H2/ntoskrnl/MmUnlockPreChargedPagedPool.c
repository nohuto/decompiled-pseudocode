/*
 * XREFs of MmUnlockPreChargedPagedPool @ 0x140AAD8F0
 * Callers:
 *     HalpMcUpdateUnlock @ 0x1404AE2F8 (HalpMcUpdateUnlock.c)
 *     MiDeleteSubsectionLargePages @ 0x1404CA9A4 (MiDeleteSubsectionLargePages.c)
 *     PopFreeHiberContext @ 0x1406FB788 (PopFreeHiberContext.c)
 * Callees:
 *     MiUnlockCodePage @ 0x1402C7618 (MiUnlockCodePage.c)
 *     MiGetPteAddress @ 0x140437550 (MiGetPteAddress.c)
 */

__int64 __fastcall MmUnlockPreChargedPagedPool(unsigned __int64 a1)
{
  _QWORD *PteAddress; // rax
  __int64 v2; // rdx
  __int16 v3; // r8

  PteAddress = (_QWORD *)MiGetPteAddress(a1);
  return MiUnlockCodePage(
           PteAddress,
           (unsigned __int64)&PteAddress[(((unsigned __int64)(v3 & 0xFFF) + v2 + 4095) >> 12) - 1],
           0);
}
