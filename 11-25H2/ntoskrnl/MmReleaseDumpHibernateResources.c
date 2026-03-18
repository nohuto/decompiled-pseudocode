/*
 * XREFs of MmReleaseDumpHibernateResources @ 0x1407DD8E8
 * Callers:
 *     IopLiveDumpFreeMappingResources @ 0x140597810 (IopLiveDumpFreeMappingResources.c)
 *     PopFreeHiberContext @ 0x1406EF918 (PopFreeHiberContext.c)
 *     PopEnableHiberFile @ 0x140AAE964 (PopEnableHiberFile.c)
 * Callees:
 *     MiReleasePtes @ 0x1403289B0 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x140419EE0 (MiGetPteAddress.c)
 */

char __fastcall MmReleaseDumpHibernateResources(unsigned __int64 a1)
{
  unsigned __int64 *PteAddress; // rax
  unsigned int v2; // r8d

  PteAddress = (unsigned __int64 *)MiGetPteAddress(a1);
  return MiReleasePtes((__int64)&qword_140E37328, PteAddress, v2);
}
