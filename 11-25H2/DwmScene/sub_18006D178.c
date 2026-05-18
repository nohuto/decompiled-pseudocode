/*
 * XREFs of sub_18006D178 @ 0x18006D178
 * Callers:
 *     sub_18006D270 @ 0x18006D270 (sub_18006D270.c)
 *     sub_180097A70 @ 0x180097A70 (sub_180097A70.c)
 * Callees:
 *     sub_180028B64 @ 0x180028B64 (sub_180028B64.c)
 *     sub_18006D368 @ 0x18006D368 (sub_18006D368.c)
 */

__int64 __fastcall sub_18006D178(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rsi
  _QWORD *v3; // rdi

  v2 = (_QWORD *)(a2 + 136);
  *(_QWORD *)a1 = *(_QWORD *)a2;
  v3 = (_QWORD *)(a1 + 136);
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
  *(_QWORD *)(a1 + 112) = *(_QWORD *)(a2 + 112);
  *(_BYTE *)(a1 + 120) = *(_BYTE *)(a2 + 120);
  *(_QWORD *)(a1 + 128) = *(_QWORD *)(a2 + 128);
  if ( a1 + 136 != a2 + 136 )
  {
    sub_18006D368(a1 + 136);
    sub_180028B64(v3, v2);
  }
  return a1;
}
