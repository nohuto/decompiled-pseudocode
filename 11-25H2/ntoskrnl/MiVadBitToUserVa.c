/*
 * XREFs of MiVadBitToUserVa @ 0x1409CD9B0
 * Callers:
 *     MiClearVadCellBits @ 0x1402A9DB8 (MiClearVadCellBits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadBitToUserVa(__int64 a1, __int64 a2)
{
  return (a2 + 8 * (*(_QWORD *)(a1 + 8) - qword_140E2F048)) << 16;
}
