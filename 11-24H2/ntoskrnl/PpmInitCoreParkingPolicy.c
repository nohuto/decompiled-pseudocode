/*
 * XREFs of PpmInitCoreParkingPolicy @ 0x140C2F54C
 * Callers:
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

_BYTE *PpmInitCoreParkingPolicy()
{
  __int64 v0; // rcx
  _BYTE *result; // rax

  v0 = 2LL;
  byte_140F06D64 = 100;
  byte_140F06F4C = 100;
  result = &unk_140F06F4E;
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
  word_140F06D58 = 0;
  word_140F06F40 = 0;
  dword_140F06D60 = 1;
  dword_140F06F48 = 1;
  dword_140F06D5C = 1;
  dword_140F06F44 = 1;
  word_140F06D54 = 24902;
  word_140F06F3C = 24902;
  byte_140F06D56 = 20;
  byte_140F06F3E = 20;
  word_140F06E90 = 0;
  word_140F07078 = 0;
  byte_140F06E92 = 0;
  byte_140F0707A = 0;
  return result;
}
