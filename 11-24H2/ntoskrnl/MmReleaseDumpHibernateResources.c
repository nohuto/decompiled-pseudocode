/*
 * XREFs of MmReleaseDumpHibernateResources @ 0x1407ED788
 * Callers:
 *     IopLiveDumpFreeMappingResources @ 0x14059AF20 (IopLiveDumpFreeMappingResources.c)
 *     PopFreeHiberContext @ 0x1406FB788 (PopFreeHiberContext.c)
 *     PopEnableHiberFile @ 0x140AB3950 (PopEnableHiberFile.c)
 * Callees:
 *     MiReleasePtes @ 0x14028DDA0 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x140437550 (MiGetPteAddress.c)
 */

unsigned __int64 __fastcall MmReleaseDumpHibernateResources(unsigned __int64 a1)
{
  _QWORD *PteAddress; // rax
  unsigned int v2; // r8d

  PteAddress = (_QWORD *)MiGetPteAddress(a1);
  return MiReleasePtes((__int64)&qword_140E37568, PteAddress, v2);
}
