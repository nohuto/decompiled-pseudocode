/*
 * XREFs of MmReleaseDumpHibernateResources @ 0x1407EDD58
 * Callers:
 *     IopLiveDumpFreeMappingResources @ 0x140597EA0 (IopLiveDumpFreeMappingResources.c)
 *     PopFreeHiberContext @ 0x1406F93C8 (PopFreeHiberContext.c)
 *     PopEnableHiberFile @ 0x140AAE8C0 (PopEnableHiberFile.c)
 * Callees:
 *     MiReleasePtes @ 0x14029D9A0 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x140429FD0 (MiGetPteAddress.c)
 */

unsigned __int64 __fastcall MmReleaseDumpHibernateResources(unsigned __int64 a1)
{
  _QWORD *PteAddress; // rax
  unsigned int v2; // r8d

  PteAddress = (_QWORD *)MiGetPteAddress(a1);
  return MiReleasePtes((__int64)&qword_140E376A8, PteAddress, v2);
}
