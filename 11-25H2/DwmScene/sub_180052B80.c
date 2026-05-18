/*
 * XREFs of sub_180052B80 @ 0x180052B80
 * Callers:
 *     sub_180062230 @ 0x180062230 (sub_180062230.c)
 * Callees:
 *     sub_1800122C8 @ 0x1800122C8 (sub_1800122C8.c)
 *     sub_18002C478 @ 0x18002C478 (sub_18002C478.c)
 *     sub_180052D2C @ 0x180052D2C (sub_180052D2C.c)
 *     sub_180053CCC @ 0x180053CCC (sub_180053CCC.c)
 */

_QWORD *__fastcall sub_180052B80(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // r9
  _QWORD *v6; // r8
  _QWORD *v7; // rbx
  __int64 v8; // r8
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 4 )
  {
    sub_180053CCC();
    v5 = *(_QWORD **)(a2 + 8);
    v6 = *(_QWORD **)a2;
    v7 = (_QWORD *)*a1;
    while ( v6 != v5 )
    {
      sub_1800122C8(v4, v7, v6);
      v7 += 2;
      v6 = (_QWORD *)(v8 + 16);
    }
    sub_18002C478((__int64)v7, (__int64)v7);
    v10 = 0LL;
    a1[1] = v7;
    sub_180052D2C(&v10);
  }
  return a1;
}
