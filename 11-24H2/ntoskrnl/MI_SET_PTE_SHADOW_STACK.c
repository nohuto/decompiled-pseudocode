/*
 * XREFs of MI_SET_PTE_SHADOW_STACK @ 0x140483C1C
 * Callers:
 *     MiRevertValidPte @ 0x140212130 (MiRevertValidPte.c)
 *     MiInitializeShadowPageTable @ 0x1407F6B9C (MiInitializeShadowPageTable.c)
 * Callees:
 *     MiWriteValidPteNewProtection @ 0x140245FB0 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 */

char __fastcall MI_SET_PTE_SHADOW_STACK(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rax
  __int64 v3; // r8

  v2 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
  return MiWriteValidPteNewProtection(BugCheckParameter2, v2 | 0x40, v3);
}
