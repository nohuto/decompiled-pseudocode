/*
 * XREFs of BiAreBootEntriesEqual @ 0x140AB22A4
 * Callers:
 *     BiUpdateEfiEntry @ 0x140A25220 (BiUpdateEfiEntry.c)
 *     BiUpdateBcdObject @ 0x140AD63A8 (BiUpdateBcdObject.c)
 * Callees:
 *     memcmp @ 0x1406B4C10 (memcmp.c)
 */

bool __fastcall BiAreBootEntriesEqual(_DWORD *a1, _DWORD *a2)
{
  unsigned int v2; // eax

  v2 = a1[1];
  return v2 == a2[1] && !memcmp(a1, a2, v2);
}
