/*
 * XREFs of MiPfnIsNonPagedPool @ 0x1404437EC
 * Callers:
 *     MiIsPfnLocked @ 0x140443768 (MiIsPfnLocked.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402FDF90 (MiGetSystemRegionType.c)
 */

__int64 __fastcall MiPfnIsNonPagedPool(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( *(__int64 *)(a1 + 40) < 0 || (unsigned int)MiGetSystemRegionType((__int64)(*(_QWORD *)(a1 + 8) << 25) >> 16) != 4 )
    return 0LL;
  LOBYTE(v1) = (*(_BYTE *)(a1 + 34) & 7) == 6;
  return v1;
}
