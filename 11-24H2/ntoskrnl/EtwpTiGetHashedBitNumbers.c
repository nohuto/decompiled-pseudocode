/*
 * XREFs of EtwpTiGetHashedBitNumbers @ 0x140263290
 * Callers:
 *     EtwpTiClearBloomFilter @ 0x140262E58 (EtwpTiClearBloomFilter.c)
 *     EtwpTiAsyncVadQueryEventWrite @ 0x140262F9C (EtwpTiAsyncVadQueryEventWrite.c)
 *     EtwpTiTestBloomFilter @ 0x140263340 (EtwpTiTestBloomFilter.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall EtwpTiGetHashedBitNumbers(unsigned int *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r10
  unsigned int v4; // eax
  unsigned __int64 result; // rax

  v3 = (unsigned int)EtwpTiQueryVadBloomFilter;
  v4 = HIBYTE(a3)
     + 37
     * (BYTE6(a3)
      + 37
      * (BYTE5(a3)
       + 37
       * (BYTE4(a3)
        + 37 * (BYTE3(a3) + 37 * (BYTE2(a3) + 37 * (BYTE1(a3) + 37 * ((unsigned __int8)a3 + 37 * dword_140EFEF70)))))));
  *a1 = v4 % EtwpTiQueryVadBloomFilter;
  a1[1] = HIWORD(v4) % (unsigned int)v3;
  result = a3 / v3;
  a1[2] = a3 % v3;
  return result;
}
