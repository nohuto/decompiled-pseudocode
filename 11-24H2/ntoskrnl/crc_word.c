/*
 * XREFs of crc_word @ 0x14045648C
 * Callers:
 *     crc32_z @ 0x140455FAC (crc32_z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall crc_word(unsigned int a1)
{
  __int64 v1; // r8

  v1 = 4LL;
  do
  {
    a1 = dword_140019AE0[(unsigned __int8)a1] ^ (a1 >> 8);
    --v1;
  }
  while ( v1 );
  return a1;
}
