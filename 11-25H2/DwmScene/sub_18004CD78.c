/*
 * XREFs of sub_18004CD78 @ 0x18004CD78
 * Callers:
 *     sub_180057AB0 @ 0x180057AB0 (sub_180057AB0.c)
 * Callees:
 *     sub_18001C2C0 @ 0x18001C2C0 (sub_18001C2C0.c)
 *     sub_18004AC24 @ 0x18004AC24 (sub_18004AC24.c)
 *     sub_18004B2B4 @ 0x18004B2B4 (sub_18004B2B4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18004CD78(__int64 a1, __int64 *a2)
{
  __int64 v4; // r8
  _BYTE v6[32]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 *v8; // [rsp+58h] [rbp+10h]

  v8 = a2;
  sub_18004B2B4(a2);
  v4 = **(_QWORD **)(a1 + 18560);
  v7 = v4;
  while ( !*(_BYTE *)(v4 + 25) )
  {
    sub_18004AC24(a2, (__int64)v6, v4 + 32);
    sub_18001C2C0(&v7);
    v4 = v7;
  }
  return a2;
}
