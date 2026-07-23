/*
 * XREFs of MiIsVaRangeAvailable @ 0x140A0C10C
 * Callers:
 *     MiAllocateEnclaveVad @ 0x1407F74B4 (MiAllocateEnclaveVad.c)
 *     MiMapLockedPagesInUserSpace @ 0x1408DC1EC (MiMapLockedPagesInUserSpace.c)
 *     MiReserveUserMemory @ 0x140916A48 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1409173D0 (MiMapViewOfDataSection.c)
 *     MiMapViewOfPhysicalSection @ 0x140A0BD00 (MiMapViewOfPhysicalSection.c)
 *     MiMapViewOfImageSection @ 0x140AE8594 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiCheckForConflictingVadExistence @ 0x14044E110 (MiCheckForConflictingVadExistence.c)
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
