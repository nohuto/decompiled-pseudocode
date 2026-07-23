/*
 * XREFs of BiAreBootEntriesEqual @ 0x140AB1414
 * Callers:
 *     BiUpdateBcdObject @ 0x140815EFC (BiUpdateBcdObject.c)
 *     BiUpdateEfiEntry @ 0x1409A7B20 (BiUpdateEfiEntry.c)
 * Callees:
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 */

bool __fastcall BiAreBootEntriesEqual(_DWORD *a1, _DWORD *a2)
{
  unsigned int v2; // eax

  v2 = a1[1];
  return v2 == a2[1] && !memcmp(a1, a2, v2);
}
