/*
 * XREFs of RtlpHpSegContextInitialize @ 0x1800F1F2C
 * Callers:
 *     RtlpHpHeapCreate @ 0x180026120 (RtlpHpHeapCreate.c)
 * Callees:
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

_OWORD *__fastcall RtlpHpSegContextInitialize(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int16 a6,
        __int16 a7,
        _OWORD *a8,
        char a9)
{
  __int64 v10; // rbx
  __int64 v13; // rax
  __int64 v14; // rbx
  unsigned int v15; // ecx
  int v16; // edx
  unsigned int v17; // ecx
  _OWORD *result; // rax

  v10 = a2;
  memset_thunk_772440563353939046(a1, 0, 0xC0uLL);
  *((_BYTE *)a1 + 11) = 7;
  v13 = v10 - 1;
  v14 = (unsigned int)v10 >> 8;
  *a1 = ~v13;
  _BitScanReverse((unsigned int *)&v13, v14);
  *((_BYTE *)a1 + 8) = v13;
  _BitScanForward(&v15, (unsigned int)v14 >> 12);
  *((_BYTE *)a1 + 9) = v15;
  *((_BYTE *)a1 + 10) = (v14 + 0x1FFF) / (unsigned __int64)(unsigned int)v14;
  v16 = ~*(_DWORD *)a1 + ((v14 - 1) & (v14 + 0x1FFF)) - v14;
  *((_DWORD *)a1 + 4) = ((unsigned int)(v16 - 8190) >> 1) - ((v14 - 1) & ((unsigned int)(v16 - 8190) >> 1));
  v17 = RtlpHpLfhPerfFlags;
  a1[8] = 0LL;
  *((_BYTE *)a1 + 12) = 3 - ((v17 >> 10) & 3);
  *((_BYTE *)a1 + 13) = a9;
  a1[10] = (__int64)(a1 + 9);
  a1[9] = (__int64)(a1 + 9);
  a1[12] = 0LL;
  a1[13] = 0LL;
  a1[7] = a3;
  *((_WORD *)a1 + 10) = a7 - (_WORD)a1;
  a1[3] = a4;
  *((_WORD *)a1 + 11) = a6 - (_WORD)a1;
  a1[4] = a5;
  result = a8;
  *(_OWORD *)(a1 + 5) = *a8;
  return result;
}
