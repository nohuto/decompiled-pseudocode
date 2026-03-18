/*
 * XREFs of PpmInitCoreParkingPolicy @ 0x140C2D42C
 * Callers:
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

_BYTE *PpmInitCoreParkingPolicy()
{
  __int64 v0; // rcx
  _BYTE *result; // rax

  v0 = 2LL;
  byte_140F06A44 = 100;
  byte_140F06C2C = 100;
  result = &unk_140F06C2E;
  do
  {
    *(result - 488) = 100;
    *result = 100;
    *(result - 509) = 0;
    *(result - 21) = 0;
    ++result;
    --v0;
  }
  while ( v0 );
  word_140F06A38 = 0;
  word_140F06C20 = 0;
  dword_140F06A40 = 1;
  dword_140F06C28 = 1;
  dword_140F06A3C = 1;
  dword_140F06C24 = 1;
  word_140F06A34 = 24902;
  word_140F06C1C = 24902;
  byte_140F06A36 = 20;
  byte_140F06C1E = 20;
  word_140F06B70 = 0;
  word_140F06D58 = 0;
  byte_140F06B72 = 0;
  byte_140F06D5A = 0;
  return result;
}
