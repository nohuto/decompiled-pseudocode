/*
 * XREFs of sub_180054B88 @ 0x180054B88
 * Callers:
 *     sub_180055840 @ 0x180055840 (sub_180055840.c)
 * Callees:
 *     sub_1800131AC @ 0x1800131AC (sub_1800131AC.c)
 *     sub_18001E734 @ 0x18001E734 (sub_18001E734.c)
 */

__int64 *__fastcall sub_180054B88(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r11
  __int64 i; // rbx
  __int64 v7; // rax
  unsigned __int16 *v8; // rdx
  __int64 v9; // r8

  v4 = a3;
  for ( i = a2; i != v4; i += 32LL )
  {
    if ( *(_QWORD *)(i + 16) == *(_QWORD *)(a4 + 16) )
    {
      sub_1800131AC(a4);
      v7 = sub_1800131AC(i);
      if ( !(unsigned int)sub_18001E734(v7, v8, v9) )
        break;
    }
  }
  *a1 = i;
  return a1;
}
