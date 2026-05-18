/*
 * XREFs of sub_18001B518 @ 0x18001B518
 * Callers:
 *     sub_180026344 @ 0x180026344 (sub_180026344.c)
 *     sub_180039580 @ 0x180039580 (sub_180039580.c)
 *     sub_18003E14C @ 0x18003E14C (sub_18003E14C.c)
 *     sub_18003EA7C @ 0x18003EA7C (sub_18003EA7C.c)
 *     sub_18004C828 @ 0x18004C828 (sub_18004C828.c)
 *     sub_1800604D0 @ 0x1800604D0 (sub_1800604D0.c)
 *     sub_180068754 @ 0x180068754 (sub_180068754.c)
 *     sub_180069D48 @ 0x180069D48 (sub_180069D48.c)
 *     sub_18006C60C @ 0x18006C60C (sub_18006C60C.c)
 *     sub_1800790A4 @ 0x1800790A4 (sub_1800790A4.c)
 *     sub_18007A120 @ 0x18007A120 (sub_18007A120.c)
 *     sub_18007BE88 @ 0x18007BE88 (sub_18007BE88.c)
 *     sub_18007BFC4 @ 0x18007BFC4 (sub_18007BFC4.c)
 *     sub_18007C464 @ 0x18007C464 (sub_18007C464.c)
 *     sub_18007C664 @ 0x18007C664 (sub_18007C664.c)
 *     sub_18008F4D8 @ 0x18008F4D8 (sub_18008F4D8.c)
 *     sub_1800925E0 @ 0x1800925E0 (sub_1800925E0.c)
 *     sub_18009A1D0 @ 0x18009A1D0 (sub_18009A1D0.c)
 *     sub_18009BFA8 @ 0x18009BFA8 (sub_18009BFA8.c)
 *     sub_18009C4C8 @ 0x18009C4C8 (sub_18009C4C8.c)
 *     sub_1800A3990 @ 0x1800A3990 (sub_1800A3990.c)
 *     sub_1800A3C0C @ 0x1800A3C0C (sub_1800A3C0C.c)
 *     sub_1800A3EDC @ 0x1800A3EDC (sub_1800A3EDC.c)
 *     sub_1800A5E98 @ 0x1800A5E98 (sub_1800A5E98.c)
 * Callees:
 *     sub_18001CD00 @ 0x18001CD00 (sub_18001CD00.c)
 */

__int64 __fastcall sub_18001B518(__int64 a1, __int64 a2, void *a3)
{
  __int64 v4; // r9
  __int64 v5; // rax

  v4 = -1LL;
  do
    ++v4;
  while ( *(_BYTE *)(a2 + v4) );
  v5 = sub_18001CD00(a3);
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
