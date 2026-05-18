/*
 * XREFs of sub_180010690 @ 0x180010690
 * Callers:
 *     sub_180011190 @ 0x180011190 (sub_180011190.c)
 *     sub_180026B60 @ 0x180026B60 (sub_180026B60.c)
 *     sub_1800BF168 @ 0x1800BF168 (sub_1800BF168.c)
 *     sub_1800CBD30 @ 0x1800CBD30 (sub_1800CBD30.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010708 @ 0x180010708 (sub_180010708.c)
 *     sub_180011C64 @ 0x180011C64 (sub_180011C64.c)
 *     sub_180027B50 @ 0x180027B50 (sub_180027B50.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180010690(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  _BYTE v7[8]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  sub_180010708(a1 + 496);
  v4 = *a2;
  v5 = sub_180011C64(a1 + 8, v7);
  sub_180027B50(v4, v5);
  if ( v8 )
    sub_18001050C(v8);
  return a2;
}
