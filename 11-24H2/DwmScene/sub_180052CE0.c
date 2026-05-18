/*
 * XREFs of sub_180052CE0 @ 0x180052CE0
 * Callers:
 *     sub_180062390 @ 0x180062390 (sub_180062390.c)
 * Callees:
 *     sub_1800123C8 @ 0x1800123C8 (sub_1800123C8.c)
 *     sub_18002C5D8 @ 0x18002C5D8 (sub_18002C5D8.c)
 *     sub_180052E8C @ 0x180052E8C (sub_180052E8C.c)
 *     sub_180053E2C @ 0x180053E2C (sub_180053E2C.c)
 */

_QWORD *__fastcall sub_180052CE0(_QWORD *a1, __int64 a2)
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
    sub_180053E2C();
    v5 = *(_QWORD **)(a2 + 8);
    v6 = *(_QWORD **)a2;
    v7 = (_QWORD *)*a1;
    while ( v6 != v5 )
    {
      sub_1800123C8(v4, v7, v6);
      v7 += 2;
      v6 = (_QWORD *)(v8 + 16);
    }
    sub_18002C5D8((__int64)v7, (__int64)v7);
    v10 = 0LL;
    a1[1] = v7;
    sub_180052E8C(&v10);
  }
  return a1;
}
