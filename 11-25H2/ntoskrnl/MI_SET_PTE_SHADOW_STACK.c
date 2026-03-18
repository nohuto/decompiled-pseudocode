/*
 * XREFs of MI_SET_PTE_SHADOW_STACK @ 0x140489418
 * Callers:
 *     MiRevertValidPte @ 0x140380260 (MiRevertValidPte.c)
 *     MiInitializeShadowPageTable @ 0x1407E6598 (MiInitializeShadowPageTable.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWriteValidPteNewProtection @ 0x1402B83C0 (MiWriteValidPteNewProtection.c)
 */

__int64 __fastcall MI_SET_PTE_SHADOW_STACK(unsigned __int64 a1)
{
  __int64 v2; // rax

  v2 = MI_READ_PTE_LOCK_FREE(a1);
  return MiWriteValidPteNewProtection(a1, v2 | 0x40);
}
