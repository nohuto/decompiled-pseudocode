/*
 * XREFs of MiVadBitToUserVa @ 0x1409AF070
 * Callers:
 *     MiClearVadCellBits @ 0x140291EE4 (MiClearVadCellBits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadBitToUserVa(__int64 a1, __int64 a2)
{
  return (a2 + 8 * (*(_QWORD *)(a1 + 8) - qword_140E2F3C8)) << 16;
}
