/*
 * XREFs of sub_18001B448 @ 0x18001B448
 * Callers:
 *     sub_180039580 @ 0x180039580 (sub_180039580.c)
 *     sub_18003E14C @ 0x18003E14C (sub_18003E14C.c)
 *     sub_18003EA7C @ 0x18003EA7C (sub_18003EA7C.c)
 *     sub_180049230 @ 0x180049230 (sub_180049230.c)
 *     sub_18004BB0C @ 0x18004BB0C (sub_18004BB0C.c)
 *     sub_18004C040 @ 0x18004C040 (sub_18004C040.c)
 *     sub_18004C268 @ 0x18004C268 (sub_18004C268.c)
 *     sub_18004C644 @ 0x18004C644 (sub_18004C644.c)
 *     sub_18004C828 @ 0x18004C828 (sub_18004C828.c)
 *     sub_18004CDF0 @ 0x18004CDF0 (sub_18004CDF0.c)
 *     sub_18005BFD4 @ 0x18005BFD4 (sub_18005BFD4.c)
 *     sub_18005C16C @ 0x18005C16C (sub_18005C16C.c)
 *     sub_18006C60C @ 0x18006C60C (sub_18006C60C.c)
 *     sub_180078220 @ 0x180078220 (sub_180078220.c)
 *     sub_1800791C4 @ 0x1800791C4 (sub_1800791C4.c)
 *     sub_18007965C @ 0x18007965C (sub_18007965C.c)
 *     sub_180079EB0 @ 0x180079EB0 (sub_180079EB0.c)
 *     sub_18007A2D4 @ 0x18007A2D4 (sub_18007A2D4.c)
 *     sub_18007E444 @ 0x18007E444 (sub_18007E444.c)
 *     sub_1800925E0 @ 0x1800925E0 (sub_1800925E0.c)
 *     sub_18009A1D0 @ 0x18009A1D0 (sub_18009A1D0.c)
 *     sub_18009BFA8 @ 0x18009BFA8 (sub_18009BFA8.c)
 *     sub_18009C4C8 @ 0x18009C4C8 (sub_18009C4C8.c)
 *     sub_1800A3990 @ 0x1800A3990 (sub_1800A3990.c)
 *     sub_1800A3C0C @ 0x1800A3C0C (sub_1800A3C0C.c)
 *     sub_1800A3EDC @ 0x1800A3EDC (sub_1800A3EDC.c)
 *     sub_1800A5E98 @ 0x1800A5E98 (sub_1800A5E98.c)
 *     sub_1800BECFC @ 0x1800BECFC (sub_1800BECFC.c)
 *     sub_1800C81A8 @ 0x1800C81A8 (sub_1800C81A8.c)
 *     sub_1800C833C @ 0x1800C833C (sub_1800C833C.c)
 *     sub_1800C84D0 @ 0x1800C84D0 (sub_1800C84D0.c)
 * Callees:
 *     sub_18001CC4C @ 0x18001CC4C (sub_18001CC4C.c)
 */

__int64 __fastcall sub_18001B448(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 v6; // rax

  v4 = -1LL;
  do
    ++v4;
  while ( *(_BYTE *)(a3 + v4) );
  v6 = sub_18001CC4C(a2, a3);
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
