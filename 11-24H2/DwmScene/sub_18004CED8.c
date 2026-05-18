/*
 * XREFs of sub_18004CED8 @ 0x18004CED8
 * Callers:
 *     sub_180057C10 @ 0x180057C10 (sub_180057C10.c)
 * Callees:
 *     sub_18001C420 @ 0x18001C420 (sub_18001C420.c)
 *     sub_18004AD84 @ 0x18004AD84 (sub_18004AD84.c)
 *     sub_18004B414 @ 0x18004B414 (sub_18004B414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18004CED8(__int64 a1, __int64 *a2)
{
  __int64 v4; // r8
  _BYTE v6[32]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 *v8; // [rsp+58h] [rbp+10h]

  v8 = a2;
  sub_18004B414(a2);
  v4 = **(_QWORD **)(a1 + 18560);
  v7 = v4;
  while ( !*(_BYTE *)(v4 + 25) )
  {
    sub_18004AD84(a2, (__int64)v6, v4 + 32);
    sub_18001C420(&v7);
    v4 = v7;
  }
  return a2;
}
