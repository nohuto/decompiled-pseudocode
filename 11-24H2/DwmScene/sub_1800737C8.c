/*
 * XREFs of sub_1800737C8 @ 0x1800737C8
 * Callers:
 *     sub_18009A330 @ 0x18009A330 (sub_18009A330.c)
 *     sub_18009C108 @ 0x18009C108 (sub_18009C108.c)
 *     sub_18009C628 @ 0x18009C628 (sub_18009C628.c)
 *     sub_1800A3AF0 @ 0x1800A3AF0 (sub_1800A3AF0.c)
 *     sub_1800A3D6C @ 0x1800A3D6C (sub_1800A3D6C.c)
 *     sub_1800A403C @ 0x1800A403C (sub_1800A403C.c)
 *     sub_1800A5FF8 @ 0x1800A5FF8 (sub_1800A5FF8.c)
 * Callees:
 *     sub_18004A654 @ 0x18004A654 (sub_18004A654.c)
 *     sub_18004AD84 @ 0x18004AD84 (sub_18004AD84.c)
 *     sub_18004B414 @ 0x18004B414 (sub_18004B414.c)
 *     sub_18004D354 @ 0x18004D354 (sub_18004D354.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800737C8(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  int v8; // ebx
  void *v10[2]; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v11[32]; // [rsp+38h] [rbp-20h] BYREF

  v8 = 0;
  sub_18004B414((__int64 *)v10);
  if ( a4 > 0 )
  {
    do
    {
      if ( ((1LL << v8) & a2) != 0 )
        sub_18004AD84((__int64 *)v10, (__int64)v11, a3);
      ++v8;
      a3 += 32LL;
    }
    while ( v8 < a4 );
  }
  sub_18004D354(a1, (__int64 **)v10);
  sub_18004A654(v10, (__int64)v10);
  return a1;
}
