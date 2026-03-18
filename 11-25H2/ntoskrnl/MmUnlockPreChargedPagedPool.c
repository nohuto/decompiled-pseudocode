/*
 * XREFs of MmUnlockPreChargedPagedPool @ 0x140AA8410
 * Callers:
 *     HalpMcUpdateUnlock @ 0x14036D0B0 (HalpMcUpdateUnlock.c)
 *     MiDeleteSubsectionLargePages @ 0x1404CAC68 (MiDeleteSubsectionLargePages.c)
 *     PopFreeHiberContext @ 0x1406EF918 (PopFreeHiberContext.c)
 * Callees:
 *     MiUnlockCodePage @ 0x14036E5B8 (MiUnlockCodePage.c)
 *     MiGetPteAddress @ 0x140419EE0 (MiGetPteAddress.c)
 */

char __fastcall MmUnlockPreChargedPagedPool(unsigned __int64 a1)
{
  unsigned __int64 PteAddress; // rax
  __int64 v2; // rdx
  __int16 v3; // r8

  PteAddress = MiGetPteAddress(a1);
  return MiUnlockCodePage(PteAddress, PteAddress + 8 * ((((unsigned __int64)(v3 & 0xFFF) + v2 + 4095) >> 12) - 1), 0);
}
