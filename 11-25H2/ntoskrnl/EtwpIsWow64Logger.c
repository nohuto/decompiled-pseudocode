/*
 * XREFs of EtwpIsWow64Logger @ 0x140993234
 * Callers:
 *     EtwpUpdateFileHeader @ 0x140991CA0 (EtwpUpdateFileHeader.c)
 *     EtwpAddLogHeader @ 0x140992044 (EtwpAddLogHeader.c)
 *     EtwpFinalizeHeader @ 0x140992E74 (EtwpFinalizeHeader.c)
 * Callees:
 *     <none>
 */

bool __fastcall EtwpIsWow64Logger(__int64 a1)
{
  return (*(_DWORD *)(a1 + 816) & 0x10) != 0 && (*(_DWORD *)(a1 + 12) & 0x2000000) == 0;
}
