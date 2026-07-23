/*
 * XREFs of MmAllocateDumpHibernateResources @ 0x140A9873C
 * Callers:
 *     IopLiveDumpAllocateMappingResources @ 0x140596728 (IopLiveDumpAllocateMappingResources.c)
 *     PopHiberInitializeResources @ 0x1407507DC (PopHiberInitializeResources.c)
 *     PopEnableHiberFile @ 0x140AAE8C0 (PopEnableHiberFile.c)
 * Callees:
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 */

__int64 __fastcall MmAllocateDumpHibernateResources(unsigned __int64 a1)
{
  __int64 result; // rax

  result = MiReservePtes((__int64)&qword_140E376A8, (unsigned int)(a1 >> 12) + ((a1 & 0xFFF) != 0));
  if ( result )
    return result << 25 >> 16;
  return result;
}
