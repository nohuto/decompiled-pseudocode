/*
 * XREFs of sub_1800541D0 @ 0x1800541D0
 * Callers:
 *     sub_180056E40 @ 0x180056E40 (sub_180056E40.c)
 * Callees:
 *     sub_1800131AC @ 0x1800131AC (sub_1800131AC.c)
 *     sub_18001E734 @ 0x18001E734 (sub_18001E734.c)
 */

char __fastcall sub_1800541D0(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rdi
  __int64 v3; // r11
  __int64 v4; // rbx
  char v5; // r9
  __int64 v6; // r11
  __int64 v7; // rax
  unsigned __int16 *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r11
  __int64 v11; // r11

  v2 = a1[1];
  v3 = *a1;
  if ( v2 - *a1 != a2[1] - *a2 )
    return 1;
  v4 = *a2 - v3;
  v5 = 0;
  while ( v3 != v2 )
  {
    sub_1800131AC(v4 + v3);
    v7 = sub_1800131AC(v6);
    if ( v9 != *(_QWORD *)(v4 + v10 + 16) || (unsigned int)sub_18001E734(v7, v8, v9) )
      return 1;
    v3 = v11 + 32;
  }
  return v5;
}
