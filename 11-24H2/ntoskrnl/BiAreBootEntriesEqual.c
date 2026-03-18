/*
 * XREFs of BiAreBootEntriesEqual @ 0x140AB713C
 * Callers:
 *     BiUpdateBcdObject @ 0x1408157BC (BiUpdateBcdObject.c)
 *     BiUpdateEfiEntry @ 0x1409C14D0 (BiUpdateEfiEntry.c)
 * Callees:
 *     memcmp @ 0x1406BFF10 (memcmp.c)
 */

bool __fastcall BiAreBootEntriesEqual(_DWORD *a1, _DWORD *a2)
{
  unsigned int v2; // eax

  v2 = a1[1];
  return v2 == a2[1] && !memcmp(a1, a2, v2);
}
