/*
 * XREFs of MmAllocateDumpHibernateResources @ 0x140A9D1CC
 * Callers:
 *     IopLiveDumpAllocateMappingResources @ 0x1405997A8 (IopLiveDumpAllocateMappingResources.c)
 *     PopHiberInitializeResources @ 0x1407524BC (PopHiberInitializeResources.c)
 *     PopEnableHiberFile @ 0x140AB3950 (PopEnableHiberFile.c)
 * Callees:
 *     MiReservePtes @ 0x14028FF10 (MiReservePtes.c)
 */

__int64 __fastcall MmAllocateDumpHibernateResources(unsigned __int64 a1)
{
  __int64 result; // rax

  result = MiReservePtes((__int64)&qword_140E37568, (unsigned int)(a1 >> 12) + ((a1 & 0xFFF) != 0));
  if ( result )
    return result << 25 >> 16;
  return result;
}
