/*
 * XREFs of sub_18005DBD8 @ 0x18005DBD8
 * Callers:
 *     sub_18005DE48 @ 0x18005DE48 (sub_18005DE48.c)
 *     sub_18005E0A0 @ 0x18005E0A0 (sub_18005E0A0.c)
 *     sub_18005E1C4 @ 0x18005E1C4 (sub_18005E1C4.c)
 *     sub_1800CF62C @ 0x1800CF62C (sub_1800CF62C.c)
 *     sub_1800CF964 @ 0x1800CF964 (sub_1800CF964.c)
 *     sub_1800D1394 @ 0x1800D1394 (sub_1800D1394.c)
 *     sub_1800D1670 @ 0x1800D1670 (sub_1800D1670.c)
 * Callees:
 *     sub_18005C53C @ 0x18005C53C (sub_18005C53C.c)
 */

_QWORD *__fastcall sub_18005DBD8(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // r11
  __int64 v5; // rdi
  _QWORD *v6; // rdx
  _QWORD *v8; // rbx
  _QWORD *v9; // rdi

  v4 = a2;
  v5 = a1[3];
  v6 = (_QWORD *)a1[1];
  v8 = *(_QWORD **)(v5 + 16 * (a4 & a1[6]) + 8);
  if ( v8 == v6 )
  {
    *v4 = v6;
LABEL_3:
    v4[1] = 0LL;
  }
  else
  {
    v9 = *(_QWORD **)(v5 + 16 * (a4 & a1[6]));
    while ( sub_18005C53C((__int64)a1, a3, (__int64)(v8 + 2)) )
    {
      if ( v8 == v9 )
      {
        *v4 = v8;
        goto LABEL_3;
      }
      v8 = (_QWORD *)v8[1];
    }
    *v4 = *v8;
    v4[1] = v8;
  }
  return v4;
}
