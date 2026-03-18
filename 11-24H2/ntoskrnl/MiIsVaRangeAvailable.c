/*
 * XREFs of MiIsVaRangeAvailable @ 0x140A139AC
 * Callers:
 *     MiAllocateEnclaveVad @ 0x1407F6D40 (MiAllocateEnclaveVad.c)
 *     MiReserveUserMemory @ 0x1408DFE98 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1408E0820 (MiMapViewOfDataSection.c)
 *     MiMapViewOfImageSection @ 0x1408E3418 (MiMapViewOfImageSection.c)
 *     MiMapLockedPagesInUserSpace @ 0x1409C3AE8 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x140A135A0 (MiMapViewOfPhysicalSection.c)
 * Callees:
 *     MiCheckForConflictingVadExistence @ 0x140459060 (MiCheckForConflictingVadExistence.c)
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
