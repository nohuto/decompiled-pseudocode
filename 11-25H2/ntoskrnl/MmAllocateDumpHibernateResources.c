/*
 * XREFs of MmAllocateDumpHibernateResources @ 0x140A9769C
 * Callers:
 *     IopLiveDumpAllocateMappingResources @ 0x140596098 (IopLiveDumpAllocateMappingResources.c)
 *     PopHiberInitializeResources @ 0x140746400 (PopHiberInitializeResources.c)
 *     PopEnableHiberFile @ 0x140AAE964 (PopEnableHiberFile.c)
 * Callees:
 *     MiReservePtes @ 0x14032A200 (MiReservePtes.c)
 */

__int64 __fastcall MmAllocateDumpHibernateResources(unsigned __int64 a1)
{
  __int64 result; // rax

  result = MiReservePtes((__int64)&qword_140E37328, (unsigned int)(a1 >> 12) + ((a1 & 0xFFF) != 0));
  if ( result )
    return result << 25 >> 16;
  return result;
}
