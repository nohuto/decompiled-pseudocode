/*
 * XREFs of sub_180040254 @ 0x180040254
 * Callers:
 *     sub_18003D2CC @ 0x18003D2CC (sub_18003D2CC.c)
 *     sub_18005E200 @ 0x18005E200 (sub_18005E200.c)
 *     sub_18005E324 @ 0x18005E324 (sub_18005E324.c)
 *     sub_1800CF78C @ 0x1800CF78C (sub_1800CF78C.c)
 *     sub_1800CFAC4 @ 0x1800CFAC4 (sub_1800CFAC4.c)
 *     sub_1800D14F4 @ 0x1800D14F4 (sub_1800D14F4.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180040254(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v4; // r11
  __int64 v5; // r10
  __int64 v6; // rax
  __int64 v7; // rdx

  v4 = *(_QWORD **)(a3 + 8);
  ++a1[2];
  *a4 = a3;
  a4[1] = v4;
  *v4 = a4;
  *(_QWORD *)(a3 + 8) = a4;
  v5 = a1[3];
  v6 = 2 * (a2 & a1[6]);
  v7 = *(_QWORD *)(v5 + 16 * (a2 & a1[6]));
  if ( v7 == a1[1] )
  {
    *(_QWORD *)(v5 + 8 * v6) = a4;
LABEL_6:
    *(_QWORD *)(v5 + 8 * v6 + 8) = a4;
    return a4;
  }
  if ( v7 == a3 )
  {
    *(_QWORD *)(v5 + 8 * v6) = a4;
  }
  else if ( *(_QWORD **)(v5 + 8 * v6 + 8) == v4 )
  {
    goto LABEL_6;
  }
  return a4;
}
