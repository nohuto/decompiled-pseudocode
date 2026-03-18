/*
 * XREFs of MI_SET_PTE_SHADOW_STACK @ 0x140488B2C
 * Callers:
 *     MiRevertValidPte @ 0x140237FA0 (MiRevertValidPte.c)
 *     MiInitializeShadowPageTable @ 0x1407F6428 (MiInitializeShadowPageTable.c)
 * Callees:
 *     MiWriteValidPteNewProtection @ 0x140219260 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MI_SET_PTE_SHADOW_STACK(unsigned __int64 a1)
{
  __int64 v2; // rax

  v2 = MI_READ_PTE_LOCK_FREE(a1);
  return MiWriteValidPteNewProtection(a1, v2 | 0x40);
}
