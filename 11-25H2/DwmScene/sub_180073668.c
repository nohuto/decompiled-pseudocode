/*
 * XREFs of sub_180073668 @ 0x180073668
 * Callers:
 *     sub_18009A1D0 @ 0x18009A1D0 (sub_18009A1D0.c)
 *     sub_18009BFA8 @ 0x18009BFA8 (sub_18009BFA8.c)
 *     sub_18009C4C8 @ 0x18009C4C8 (sub_18009C4C8.c)
 *     sub_1800A3990 @ 0x1800A3990 (sub_1800A3990.c)
 *     sub_1800A3C0C @ 0x1800A3C0C (sub_1800A3C0C.c)
 *     sub_1800A3EDC @ 0x1800A3EDC (sub_1800A3EDC.c)
 *     sub_1800A5E98 @ 0x1800A5E98 (sub_1800A5E98.c)
 * Callees:
 *     sub_18004A4F4 @ 0x18004A4F4 (sub_18004A4F4.c)
 *     sub_18004AC24 @ 0x18004AC24 (sub_18004AC24.c)
 *     sub_18004B2B4 @ 0x18004B2B4 (sub_18004B2B4.c)
 *     sub_18004D1F4 @ 0x18004D1F4 (sub_18004D1F4.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180073668(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  int v8; // ebx
  void *v10[2]; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v11[32]; // [rsp+38h] [rbp-20h] BYREF

  v8 = 0;
  sub_18004B2B4((__int64 *)v10);
  if ( a4 > 0 )
  {
    do
    {
      if ( ((1LL << v8) & a2) != 0 )
        sub_18004AC24((__int64 *)v10, (__int64)v11, a3);
      ++v8;
      a3 += 32LL;
    }
    while ( v8 < a4 );
  }
  sub_18004D1F4(a1, (__int64 **)v10);
  sub_18004A4F4(v10, (__int64)v10);
  return a1;
}
