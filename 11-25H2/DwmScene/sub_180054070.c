/*
 * XREFs of sub_180054070 @ 0x180054070
 * Callers:
 *     sub_180056CE0 @ 0x180056CE0 (sub_180056CE0.c)
 * Callees:
 *     sub_1800130AC @ 0x1800130AC (sub_1800130AC.c)
 *     sub_18001E5D4 @ 0x18001E5D4 (sub_18001E5D4.c)
 */

char __fastcall sub_180054070(__int64 *a1, _QWORD *a2)
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
    sub_1800130AC(v4 + v3);
    v7 = sub_1800130AC(v6);
    if ( v9 != *(_QWORD *)(v4 + v10 + 16) || (unsigned int)sub_18001E5D4(v7, v8, v9) )
      return 1;
    v3 = v11 + 32;
  }
  return v5;
}
