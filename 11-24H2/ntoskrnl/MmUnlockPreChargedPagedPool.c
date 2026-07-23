/*
 * XREFs of MmUnlockPreChargedPagedPool @ 0x140AA8970
 * Callers:
 *     HalpMcUpdateUnlock @ 0x1404A8C08 (HalpMcUpdateUnlock.c)
 *     MiDeleteSubsectionLargePages @ 0x1404C3EC4 (MiDeleteSubsectionLargePages.c)
 *     PopFreeHiberContext @ 0x1406F93C8 (PopFreeHiberContext.c)
 * Callees:
 *     MiUnlockCodePage @ 0x140203B44 (MiUnlockCodePage.c)
 *     MiGetPteAddress @ 0x140429FD0 (MiGetPteAddress.c)
 */

__int64 __fastcall MmUnlockPreChargedPagedPool(unsigned __int64 a1)
{
  unsigned __int64 PteAddress; // rax
  __int64 v2; // rdx
  __int16 v3; // r8

  PteAddress = MiGetPteAddress(a1);
  return MiUnlockCodePage(PteAddress, PteAddress + 8 * ((((unsigned __int64)(v3 & 0xFFF) + v2 + 4095) >> 12) - 1), 0);
}
