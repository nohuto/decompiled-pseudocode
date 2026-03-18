/*
 * XREFs of MiIsVaRangeAvailable @ 0x140902548
 * Callers:
 *     MiAllocateEnclaveVad @ 0x1407E6EB0 (MiAllocateEnclaveVad.c)
 *     MiMapViewOfPhysicalSection @ 0x1408B6998 (MiMapViewOfPhysicalSection.c)
 *     MiMapLockedPagesInUserSpace @ 0x1408F8DEC (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfDataSection @ 0x1408FEC20 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x1409012DC (MiReserveUserMemory.c)
 *     MiMapViewOfImageSection @ 0x1409028FC (MiMapViewOfImageSection.c)
 * Callees:
 *     MiCheckForConflictingVadExistence @ 0x140458A18 (MiCheckForConflictingVadExistence.c)
 */

__int64 __fastcall MiIsVaRangeAvailable(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  unsigned __int64 v5; // r8
  unsigned int v6; // r11d

  v5 = a2 + a3 - 1;
  if ( a2 < 0x10000 && !*(_QWORD *)(a1 + 1600) || a2 < a4 || v5 <= a2 || v5 > a5 )
    return 0LL;
  LOBYTE(v6) = (unsigned int)MiCheckForConflictingVadExistence(a1, a2, v5) == 0;
  return v6;
}
