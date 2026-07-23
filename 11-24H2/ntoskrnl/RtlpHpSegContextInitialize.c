/*
 * XREFs of RtlpHpSegContextInitialize @ 0x14060358C
 * Callers:
 *     RtlpHpHeapCreate @ 0x14060234C (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlpHpInitializeLock @ 0x1403D970C (RtlpHpInitializeLock.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall RtlpHpSegContextInitialize(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int16 a6,
        __int16 a7,
        _DWORD *a8,
        char a9)
{
  __int64 v10; // rbx
  __int64 v13; // rax
  __int64 v14; // rbx
  unsigned int v15; // ecx
  __int128 *v16; // r8
  __int128 v17; // xmm0
  __int64 result; // rax

  v10 = a2;
  memset_0(a1, 0, 0xC0uLL);
  v13 = ~(v10 - 1);
  v14 = (unsigned int)v10 >> 8;
  *a1 = v13;
  _BitScanReverse((unsigned int *)&v13, v14);
  *((_BYTE *)a1 + 11) = 7;
  *((_BYTE *)a1 + 8) = v13;
  _BitScanForward(&v15, (unsigned int)v14 >> 12);
  *((_BYTE *)a1 + 9) = v15;
  *((_BYTE *)a1 + 10) = (v14 + 0x1FFF) / (unsigned __int64)(unsigned int)v14;
  *((_DWORD *)a1 + 4) = ((~*(_DWORD *)a1 + (((_DWORD)v14 - 1) & (unsigned int)(v14 + 0x1FFF)) - (unsigned int)v14 - 8190) >> 1)
                      - ((v14 - 1) & ((~*(_DWORD *)a1
                                     + (((_DWORD)v14 - 1) & (unsigned int)(v14 + 0x1FFF))
                                     - (unsigned int)v14
                                     - 8190) >> 1));
  *((_BYTE *)a1 + 12) = 3 - (((unsigned int)RtlpHpLfhPerfFlags >> 10) & 3);
  *((_BYTE *)a1 + 13) = a9;
  RtlpHpInitializeLock(a1 + 8, *a8 & 1);
  v17 = *v16;
  a1[10] = (__int64)(a1 + 9);
  a1[9] = (__int64)(a1 + 9);
  a1[12] = 0LL;
  a1[13] = 0LL;
  *((_WORD *)a1 + 10) = a7 - (_WORD)a1;
  a1[7] = a3;
  *((_WORD *)a1 + 11) = a6 - (_WORD)a1;
  result = a5;
  a1[4] = a5;
  a1[3] = a4;
  *(_OWORD *)(a1 + 5) = v17;
  return result;
}
