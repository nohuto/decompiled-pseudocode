/*
 * XREFs of EtwpTiClearBloomFilter @ 0x1403D3604
 * Callers:
 *     EtwpTiVadQueryEventWriteCallback @ 0x1409FBC80 (EtwpTiVadQueryEventWriteCallback.c)
 * Callees:
 *     EtwpTiGetHashedBitNumbers @ 0x1403D3A3C (EtwpTiGetHashedBitNumbers.c)
 */

int __fastcall EtwpTiClearBloomFilter(__int64 a1, __int64 a2)
{
  unsigned int v2; // ecx
  _BYTE *v3; // rdx
  int v4; // eax
  unsigned int v5; // ecx
  _BYTE *v6; // rdx
  int result; // eax
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v9; // [rsp+28h] [rbp-10h]

  v8 = 0LL;
  v9 = 0;
  EtwpTiGetHashedBitNumbers(&v8, a2, a2);
  v2 = HIDWORD(v8);
  *(_BYTE *)(qword_140EFEC48 + ((unsigned __int64)(unsigned int)v8 >> 3)) &= ~(1 << (v8 & 7));
  v3 = (_BYTE *)(qword_140EFEC48 + ((unsigned __int64)v2 >> 3));
  v4 = (char)*v3 & ~(1 << (v2 & 7));
  v5 = v9;
  *v3 = v4;
  v6 = (_BYTE *)(qword_140EFEC48 + ((unsigned __int64)v5 >> 3));
  result = (char)*v6 & ~(1 << (v5 & 7));
  *v6 = result;
  return result;
}
