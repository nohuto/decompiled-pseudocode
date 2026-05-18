/*
 * XREFs of sub_18005DD38 @ 0x18005DD38
 * Callers:
 *     sub_18005DFA8 @ 0x18005DFA8 (sub_18005DFA8.c)
 *     sub_18005E200 @ 0x18005E200 (sub_18005E200.c)
 *     sub_18005E324 @ 0x18005E324 (sub_18005E324.c)
 *     sub_1800CF78C @ 0x1800CF78C (sub_1800CF78C.c)
 *     sub_1800CFAC4 @ 0x1800CFAC4 (sub_1800CFAC4.c)
 *     sub_1800D14F4 @ 0x1800D14F4 (sub_1800D14F4.c)
 *     sub_1800D17D0 @ 0x1800D17D0 (sub_1800D17D0.c)
 * Callees:
 *     sub_18005C69C @ 0x18005C69C (sub_18005C69C.c)
 */

_QWORD *__fastcall sub_18005DD38(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
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
    while ( sub_18005C69C((__int64)a1, a3, (__int64)(v8 + 2)) )
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
