/*
 * XREFs of MI_SET_SOFTWARE_PTE_SHADOW_STACK @ 0x1404862CC
 * Callers:
 *     MiDuplicateCloneLeaf @ 0x140396854 (MiDuplicateCloneLeaf.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MI_SET_SOFTWARE_PTE_SHADOW_STACK(__int64 *a1)
{
  __int64 result; // rax

  result = MI_READ_PTE_LOCK_FREE((unsigned __int64)a1) | 0x4000000;
  *a1 = result;
  return result;
}
