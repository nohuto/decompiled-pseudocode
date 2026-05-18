/*
 * XREFs of sub_18001B678 @ 0x18001B678
 * Callers:
 *     sub_1800264A4 @ 0x1800264A4 (sub_1800264A4.c)
 *     sub_1800396E0 @ 0x1800396E0 (sub_1800396E0.c)
 *     sub_18003E2AC @ 0x18003E2AC (sub_18003E2AC.c)
 *     sub_18003EBDC @ 0x18003EBDC (sub_18003EBDC.c)
 *     sub_18004C988 @ 0x18004C988 (sub_18004C988.c)
 *     sub_180060630 @ 0x180060630 (sub_180060630.c)
 *     sub_1800688B4 @ 0x1800688B4 (sub_1800688B4.c)
 *     sub_180069EA8 @ 0x180069EA8 (sub_180069EA8.c)
 *     sub_18006C76C @ 0x18006C76C (sub_18006C76C.c)
 *     sub_180079204 @ 0x180079204 (sub_180079204.c)
 *     sub_18007A280 @ 0x18007A280 (sub_18007A280.c)
 *     sub_18007BFE8 @ 0x18007BFE8 (sub_18007BFE8.c)
 *     sub_18007C124 @ 0x18007C124 (sub_18007C124.c)
 *     sub_18007C5C4 @ 0x18007C5C4 (sub_18007C5C4.c)
 *     sub_18007C7C4 @ 0x18007C7C4 (sub_18007C7C4.c)
 *     sub_18008F638 @ 0x18008F638 (sub_18008F638.c)
 *     sub_180092740 @ 0x180092740 (sub_180092740.c)
 *     sub_18009A330 @ 0x18009A330 (sub_18009A330.c)
 *     sub_18009C108 @ 0x18009C108 (sub_18009C108.c)
 *     sub_18009C628 @ 0x18009C628 (sub_18009C628.c)
 *     sub_1800A3AF0 @ 0x1800A3AF0 (sub_1800A3AF0.c)
 *     sub_1800A3D6C @ 0x1800A3D6C (sub_1800A3D6C.c)
 *     sub_1800A403C @ 0x1800A403C (sub_1800A403C.c)
 *     sub_1800A5FF8 @ 0x1800A5FF8 (sub_1800A5FF8.c)
 * Callees:
 *     sub_18001CE60 @ 0x18001CE60 (sub_18001CE60.c)
 */

__int64 __fastcall sub_18001B678(__int64 a1, __int64 a2, void *a3)
{
  __int64 v4; // r9
  __int64 v5; // rax

  v4 = -1LL;
  do
    ++v4;
  while ( *(_BYTE *)(a2 + v4) );
  v5 = sub_18001CE60(a3);
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)v5;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(v5 + 16);
  *(_QWORD *)(v5 + 16) = 0LL;
  *(_QWORD *)(v5 + 24) = 15LL;
  *(_BYTE *)v5 = 0;
  return a1;
}
