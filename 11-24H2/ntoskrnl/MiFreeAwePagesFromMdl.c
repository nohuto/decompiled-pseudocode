/*
 * XREFs of MiFreeAwePagesFromMdl @ 0x140682134
 * Callers:
 *     MiAllocateUserPhysicalPages @ 0x1407F84C8 (MiAllocateUserPhysicalPages.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x1403A2330 (MiFreePagesFromMdl.c)
 *     MiFreeContiguousLargePageRun @ 0x1406821E4 (MiFreeContiguousLargePageRun.c)
 *     MiFreePhysicalRange @ 0x140682480 (MiFreePhysicalRange.c)
 *     MiReadyLargeAwePageForFree @ 0x140682A08 (MiReadyLargeAwePageForFree.c)
 */

char __fastcall MiFreeAwePagesFromMdl(__int64 a1, ULONG_PTR a2)
{
  __int64 v3; // r15
  unsigned __int64 v5; // rdi
  unsigned __int64 i; // rbx
  __int64 v7; // r14
  char result; // al

  v3 = *(_QWORD *)(a1 + 16);
  v5 = (unsigned __int64)*(unsigned int *)(a2 + 40) >> 12;
  if ( v3 == 1 )
    return MiFreePagesFromMdl(a2, 0, 0, a1);
  for ( i = 0LL; i < v5; ++i )
  {
    v7 = *(_QWORD *)(a2 + 8 * i + 48);
    if ( (*(_DWORD *)(a1 + 8) & 8) != 0 )
    {
      result = MiFreePhysicalRange(a1, *(_QWORD *)(a2 + 8 * i + 48));
    }
    else
    {
      MiReadyLargeAwePageForFree(48 * v7 - 0x220000000000LL);
      result = MiFreeContiguousLargePageRun(a1, v7, v3);
    }
  }
  return result;
}
