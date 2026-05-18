/*
 * XREFs of sub_18001B5A8 @ 0x18001B5A8
 * Callers:
 *     sub_1800396E0 @ 0x1800396E0 (sub_1800396E0.c)
 *     sub_18003E2AC @ 0x18003E2AC (sub_18003E2AC.c)
 *     sub_18003EBDC @ 0x18003EBDC (sub_18003EBDC.c)
 *     sub_180049390 @ 0x180049390 (sub_180049390.c)
 *     sub_18004BC6C @ 0x18004BC6C (sub_18004BC6C.c)
 *     sub_18004C1A0 @ 0x18004C1A0 (sub_18004C1A0.c)
 *     sub_18004C3C8 @ 0x18004C3C8 (sub_18004C3C8.c)
 *     sub_18004C7A4 @ 0x18004C7A4 (sub_18004C7A4.c)
 *     sub_18004C988 @ 0x18004C988 (sub_18004C988.c)
 *     sub_18004CF50 @ 0x18004CF50 (sub_18004CF50.c)
 *     sub_18005C134 @ 0x18005C134 (sub_18005C134.c)
 *     sub_18005C2CC @ 0x18005C2CC (sub_18005C2CC.c)
 *     sub_18006C76C @ 0x18006C76C (sub_18006C76C.c)
 *     sub_180078380 @ 0x180078380 (sub_180078380.c)
 *     sub_180079324 @ 0x180079324 (sub_180079324.c)
 *     sub_1800797BC @ 0x1800797BC (sub_1800797BC.c)
 *     sub_18007A010 @ 0x18007A010 (sub_18007A010.c)
 *     sub_18007A434 @ 0x18007A434 (sub_18007A434.c)
 *     sub_18007E5A4 @ 0x18007E5A4 (sub_18007E5A4.c)
 *     sub_180092740 @ 0x180092740 (sub_180092740.c)
 *     sub_18009A330 @ 0x18009A330 (sub_18009A330.c)
 *     sub_18009C108 @ 0x18009C108 (sub_18009C108.c)
 *     sub_18009C628 @ 0x18009C628 (sub_18009C628.c)
 *     sub_1800A3AF0 @ 0x1800A3AF0 (sub_1800A3AF0.c)
 *     sub_1800A3D6C @ 0x1800A3D6C (sub_1800A3D6C.c)
 *     sub_1800A403C @ 0x1800A403C (sub_1800A403C.c)
 *     sub_1800A5FF8 @ 0x1800A5FF8 (sub_1800A5FF8.c)
 *     sub_1800BEE5C @ 0x1800BEE5C (sub_1800BEE5C.c)
 *     sub_1800C8308 @ 0x1800C8308 (sub_1800C8308.c)
 *     sub_1800C849C @ 0x1800C849C (sub_1800C849C.c)
 *     sub_1800C8630 @ 0x1800C8630 (sub_1800C8630.c)
 * Callees:
 *     sub_18001CDAC @ 0x18001CDAC (sub_18001CDAC.c)
 */

__int64 __fastcall sub_18001B5A8(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 v6; // rax

  v4 = -1LL;
  do
    ++v4;
  while ( *(_BYTE *)(a3 + v4) );
  v6 = sub_18001CDAC(a2, a3);
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)v6;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(v6 + 16);
  *(_QWORD *)(v6 + 16) = 0LL;
  *(_QWORD *)(v6 + 24) = 15LL;
  *(_BYTE *)v6 = 0;
  return a1;
}
