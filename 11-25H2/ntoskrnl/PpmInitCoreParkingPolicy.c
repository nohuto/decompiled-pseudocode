/*
 * XREFs of PpmInitCoreParkingPolicy @ 0x140C1C330
 * Callers:
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

_BYTE *PpmInitCoreParkingPolicy()
{
  __int64 v0; // rcx
  _BYTE *result; // rax

  v0 = 2LL;
  byte_140F06624 = 100;
  byte_140F0680C = 100;
  result = &unk_140F0680E;
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
  word_140F06618 = 0;
  word_140F06800 = 0;
  dword_140F06620 = 1;
  dword_140F06808 = 1;
  dword_140F0661C = 1;
  dword_140F06804 = 1;
  word_140F06614 = 24902;
  word_140F067FC = 24902;
  byte_140F06616 = 20;
  byte_140F067FE = 20;
  word_140F06750 = 0;
  word_140F06938 = 0;
  byte_140F06752 = 0;
  byte_140F0693A = 0;
  return result;
}
