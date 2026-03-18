/*
 * XREFs of EtwpIsWow64Logger @ 0x1409DC0DC
 * Callers:
 *     EtwpUpdateFileHeader @ 0x1409DAB48 (EtwpUpdateFileHeader.c)
 *     EtwpAddLogHeader @ 0x1409DAEEC (EtwpAddLogHeader.c)
 *     EtwpFinalizeHeader @ 0x1409DBD1C (EtwpFinalizeHeader.c)
 * Callees:
 *     <none>
 */

bool __fastcall EtwpIsWow64Logger(__int64 a1)
{
  return (*(_DWORD *)(a1 + 816) & 0x10) != 0 && (*(_DWORD *)(a1 + 12) & 0x2000000) == 0;
}
