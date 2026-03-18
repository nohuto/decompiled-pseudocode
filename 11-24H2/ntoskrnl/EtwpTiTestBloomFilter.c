/*
 * XREFs of EtwpTiTestBloomFilter @ 0x1403D3AEC
 * Callers:
 *     EtwpTiAsyncVadQueryEventWrite @ 0x1403D3748 (EtwpTiAsyncVadQueryEventWrite.c)
 * Callees:
 *     EtwpTiGetHashedBitNumbers @ 0x1403D3A3C (EtwpTiGetHashedBitNumbers.c)
 */

char __fastcall EtwpTiTestBloomFilter(__int64 a1, unsigned __int64 a2)
{
  char v2; // dl
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v5; // [rsp+28h] [rbp-10h]

  v4 = 0LL;
  v5 = 0;
  EtwpTiGetHashedBitNumbers((unsigned int *)&v4, a2, a2);
  v2 = 1;
  if ( ((*(char *)(((unsigned __int64)(unsigned int)v4 >> 3) + qword_140EFEC48) >> (v4 & 7)) & 1) == 0
    || ((*(char *)(((unsigned __int64)HIDWORD(v4) >> 3) + qword_140EFEC48) >> (BYTE4(v4) & 7)) & 1) == 0
    || ((*(char *)(((unsigned __int64)v5 >> 3) + qword_140EFEC48) >> (v5 & 7)) & 1) == 0 )
  {
    return 0;
  }
  return v2;
}
